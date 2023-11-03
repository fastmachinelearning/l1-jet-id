#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3444_fu_12511861_p2() {
    add_ln703_3444_fu_12511861_p2 = (!zext_ln703_540_fu_12511858_p1.read().is_01() || !sext_ln703_1973_fu_12511854_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_540_fu_12511858_p1.read()) + sc_bigint<15>(sext_ln703_1973_fu_12511854_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3445_fu_12499203_p2() {
    add_ln703_3445_fu_12499203_p2 = (!zext_ln708_1524_fu_12468561_p1.read().is_01() || !zext_ln708_1525_fu_12468595_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1524_fu_12468561_p1.read()) + sc_biguint<11>(zext_ln708_1525_fu_12468595_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3446_fu_12499209_p2() {
    add_ln703_3446_fu_12499209_p2 = (!add_ln703_3445_fu_12499203_p2.read().is_01() || !zext_ln708_1523_fu_12468533_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3445_fu_12499203_p2.read()) + sc_biguint<11>(zext_ln708_1523_fu_12468533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3447_fu_12499219_p2() {
    add_ln703_3447_fu_12499219_p2 = (!zext_ln708_1521_fu_12468495_p1.read().is_01() || !zext_ln1118_3647_fu_12465502_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1521_fu_12468495_p1.read()) + sc_biguint<10>(zext_ln1118_3647_fu_12465502_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3448_fu_12499229_p2() {
    add_ln703_3448_fu_12499229_p2 = (!zext_ln703_542_fu_12499225_p1.read().is_01() || !sext_ln708_200_fu_12468575_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_542_fu_12499225_p1.read()) + sc_bigint<12>(sext_ln708_200_fu_12468575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3449_fu_12499239_p2() {
    add_ln703_3449_fu_12499239_p2 = (!sext_ln703_1974_fu_12499235_p1.read().is_01() || !zext_ln703_541_fu_12499215_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1974_fu_12499235_p1.read()) + sc_biguint<13>(zext_ln703_541_fu_12499215_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_344_fu_12479949_p2() {
    add_ln703_344_fu_12479949_p2 = (!sext_ln703_264_fu_12479945_p1.read().is_01() || !add_ln703_340_fu_12479913_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_264_fu_12479945_p1.read()) + sc_biguint<12>(add_ln703_340_fu_12479913_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3450_fu_12511870_p2() {
    add_ln703_3450_fu_12511870_p2 = (!sext_ln703_1975_fu_12511867_p1.read().is_01() || !add_ln703_3444_fu_12511861_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1975_fu_12511867_p1.read()) + sc_biguint<15>(add_ln703_3444_fu_12511861_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3451_fu_12511876_p2() {
    add_ln703_3451_fu_12511876_p2 = (!add_ln703_3450_fu_12511870_p2.read().is_01() || !sext_ln203_506_fu_12503332_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3450_fu_12511870_p2.read()) + sc_bigint<15>(sext_ln203_506_fu_12503332_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3452_fu_12499245_p2() {
    add_ln703_3452_fu_12499245_p2 = (!sext_ln203_507_fu_12468619_p1.read().is_01() || !sext_ln203_508_fu_12468701_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_507_fu_12468619_p1.read()) + sc_bigint<12>(sext_ln203_508_fu_12468701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3453_fu_12511885_p2() {
    add_ln703_3453_fu_12511885_p2 = (!sext_ln703_1976_fu_12511882_p1.read().is_01() || !add_ln703_3451_fu_12511876_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1976_fu_12511882_p1.read()) + sc_biguint<15>(add_ln703_3451_fu_12511876_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3454_fu_12499251_p2() {
    add_ln703_3454_fu_12499251_p2 = (!zext_ln708_1526_fu_12468647_p1.read().is_01() || !zext_ln708_1527_fu_12468667_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1526_fu_12468647_p1.read()) + sc_biguint<11>(zext_ln708_1527_fu_12468667_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3455_fu_12499261_p2() {
    add_ln703_3455_fu_12499261_p2 = (!sext_ln203_510_fu_12468751_p1.read().is_01() || !sext_ln203_509_fu_12468705_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_510_fu_12468751_p1.read()) + sc_bigint<10>(sext_ln203_509_fu_12468705_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3456_fu_12499271_p2() {
    add_ln703_3456_fu_12499271_p2 = (!sext_ln703_1978_fu_12499267_p1.read().is_01() || !zext_ln708_1528_fu_12468719_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1978_fu_12499267_p1.read()) + sc_biguint<11>(zext_ln708_1528_fu_12468719_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3457_fu_12499281_p2() {
    add_ln703_3457_fu_12499281_p2 = (!sext_ln703_1979_fu_12499277_p1.read().is_01() || !zext_ln703_543_fu_12499257_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1979_fu_12499277_p1.read()) + sc_biguint<13>(zext_ln703_543_fu_12499257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3459_fu_12499287_p2() {
    add_ln703_3459_fu_12499287_p2 = (!sext_ln203_470_fu_12462445_p1.read().is_01() || !zext_ln203_175_fu_12468771_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_470_fu_12462445_p1.read()) + sc_biguint<12>(zext_ln203_175_fu_12468771_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_345_fu_12504259_p2() {
    add_ln703_345_fu_12504259_p2 = (!sext_ln703_267_fu_12504256_p1.read().is_01() || !add_ln703_337_fu_12504250_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_267_fu_12504256_p1.read()) + sc_biguint<15>(add_ln703_337_fu_12504250_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3460_fu_12499293_p2() {
    add_ln703_3460_fu_12499293_p2 = (!zext_ln1118_3735_fu_12468803_p1.read().is_01() || !ap_const_lv10_3B8.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3735_fu_12468803_p1.read()) + sc_bigint<10>(ap_const_lv10_3B8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3461_fu_12499303_p2() {
    add_ln703_3461_fu_12499303_p2 = (!sext_ln703_1981_fu_12499299_p1.read().is_01() || !add_ln703_3459_fu_12499287_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1981_fu_12499299_p1.read()) + sc_biguint<12>(add_ln703_3459_fu_12499287_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3462_fu_12499313_p2() {
    add_ln703_3462_fu_12499313_p2 = (!sext_ln703_489_fu_12499309_p1.read().is_01() || !sext_ln203_511_fu_12468857_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_489_fu_12499309_p1.read()) + sc_bigint<13>(sext_ln203_511_fu_12468857_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3463_fu_12499319_p2() {
    add_ln703_3463_fu_12499319_p2 = (!zext_ln708_1529_fu_12468843_p1.read().is_01() || !sext_ln708_201_fu_12468823_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1529_fu_12468843_p1.read()) + sc_bigint<11>(sext_ln708_201_fu_12468823_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3464_fu_12499329_p2() {
    add_ln703_3464_fu_12499329_p2 = (!sext_ln703_1982_fu_12499325_p1.read().is_01() || !add_ln703_3462_fu_12499313_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1982_fu_12499325_p1.read()) + sc_biguint<13>(add_ln703_3462_fu_12499313_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3465_fu_12499339_p2() {
    add_ln703_3465_fu_12499339_p2 = (!zext_ln708_1530_fu_12468871_p1.read().is_01() || !zext_ln708_1531_fu_12468937_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1530_fu_12468871_p1.read()) + sc_biguint<11>(zext_ln708_1531_fu_12468937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3466_fu_12499349_p2() {
    add_ln703_3466_fu_12499349_p2 = (!zext_ln703_544_fu_12499345_p1.read().is_01() || !sext_ln703_490_fu_12499335_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_544_fu_12499345_p1.read()) + sc_bigint<14>(sext_ln703_490_fu_12499335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3467_fu_12499355_p2() {
    add_ln703_3467_fu_12499355_p2 = (!sext_ln708_203_fu_12468923_p1.read().is_01() || !zext_ln1118_3736_fu_12468899_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_203_fu_12468923_p1.read()) + sc_biguint<11>(zext_ln1118_3736_fu_12468899_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3468_fu_12499365_p2() {
    add_ln703_3468_fu_12499365_p2 = (!sext_ln703_1983_fu_12499361_p1.read().is_01() || !sext_ln708_202_fu_12468885_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1983_fu_12499361_p1.read()) + sc_bigint<12>(sext_ln708_202_fu_12468885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3469_fu_12499375_p2() {
    add_ln703_3469_fu_12499375_p2 = (!sext_ln703_1984_fu_12499371_p1.read().is_01() || !add_ln703_3466_fu_12499349_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1984_fu_12499371_p1.read()) + sc_biguint<14>(add_ln703_3466_fu_12499349_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_346_fu_12479955_p2() {
    add_ln703_346_fu_12479955_p2 = (!sext_ln203_28_fu_12405645_p1.read().is_01() || !sext_ln203_46_fu_12408920_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_28_fu_12405645_p1.read()) + sc_bigint<12>(sext_ln203_46_fu_12408920_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3470_fu_12499381_p2() {
    add_ln703_3470_fu_12499381_p2 = (!sext_ln1118_1105_fu_12469029_p1.read().is_01() || !sext_ln708_206_fu_12469149_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1105_fu_12469029_p1.read()) + sc_bigint<12>(sext_ln708_206_fu_12469149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3471_fu_12511910_p2() {
    add_ln703_3471_fu_12511910_p2 = (!sext_ln703_1985_fu_12511907_p1.read().is_01() || !sext_ln703_491_fu_12511904_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1985_fu_12511907_p1.read()) + sc_bigint<15>(sext_ln703_491_fu_12511904_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3472_fu_12499387_p2() {
    add_ln703_3472_fu_12499387_p2 = (!zext_ln708_1532_fu_12468987_p1.read().is_01() || !zext_ln708_1533_fu_12469001_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1532_fu_12468987_p1.read()) + sc_biguint<11>(zext_ln708_1533_fu_12469001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3473_fu_12499397_p2() {
    add_ln703_3473_fu_12499397_p2 = (!zext_ln708_1534_fu_12469015_p1.read().is_01() || !zext_ln708_1535_fu_12469043_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1534_fu_12469015_p1.read()) + sc_biguint<11>(zext_ln708_1535_fu_12469043_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3474_fu_12499407_p2() {
    add_ln703_3474_fu_12499407_p2 = (!zext_ln703_546_fu_12499403_p1.read().is_01() || !zext_ln703_545_fu_12499393_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_546_fu_12499403_p1.read()) + sc_biguint<12>(zext_ln703_545_fu_12499393_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3475_fu_12511919_p2() {
    add_ln703_3475_fu_12511919_p2 = (!zext_ln703_547_fu_12511916_p1.read().is_01() || !add_ln703_3471_fu_12511910_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_547_fu_12511916_p1.read()) + sc_biguint<15>(add_ln703_3471_fu_12511910_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3476_fu_12499413_p2() {
    add_ln703_3476_fu_12499413_p2 = (!trunc_ln1118_144_fu_12469153_p4.read().is_01() || !zext_ln1118_3743_fu_12469173_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_144_fu_12469153_p4.read()) + sc_biguint<10>(zext_ln1118_3743_fu_12469173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3477_fu_12499423_p2() {
    add_ln703_3477_fu_12499423_p2 = (!zext_ln703_548_fu_12499419_p1.read().is_01() || !zext_ln708_1537_fu_12469105_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_548_fu_12499419_p1.read()) + sc_biguint<11>(zext_ln708_1537_fu_12469105_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3478_fu_12499433_p2() {
    add_ln703_3478_fu_12499433_p2 = (!zext_ln708_1536_fu_12469081_p1.read().is_01() || !sext_ln708_204_fu_12468973_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1536_fu_12469081_p1.read()) + sc_bigint<8>(sext_ln708_204_fu_12468973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3479_fu_12499443_p2() {
    add_ln703_3479_fu_12499443_p2 = (!sext_ln708_205_fu_12469067_p1.read().is_01() || !sext_ln1118_1106_fu_12469129_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln708_205_fu_12469067_p1.read()) + sc_bigint<7>(sext_ln1118_1106_fu_12469129_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3480_fu_12499453_p2() {
    add_ln703_3480_fu_12499453_p2 = (!sext_ln703_1987_fu_12499449_p1.read().is_01() || !sext_ln703_1986_fu_12499439_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_1987_fu_12499449_p1.read()) + sc_bigint<9>(sext_ln703_1986_fu_12499439_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3481_fu_12499463_p2() {
    add_ln703_3481_fu_12499463_p2 = (!sext_ln703_1988_fu_12499459_p1.read().is_01() || !zext_ln703_549_fu_12499429_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1988_fu_12499459_p1.read()) + sc_biguint<12>(zext_ln703_549_fu_12499429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3482_fu_12511928_p2() {
    add_ln703_3482_fu_12511928_p2 = (!sext_ln703_1989_fu_12511925_p1.read().is_01() || !add_ln703_3475_fu_12511919_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1989_fu_12511925_p1.read()) + sc_biguint<15>(add_ln703_3475_fu_12511919_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3483_fu_12511934_p2() {
    add_ln703_3483_fu_12511934_p2 = (!add_ln703_3482_fu_12511928_p2.read().is_01() || !sext_ln203_512_fu_12503335_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3482_fu_12511928_p2.read()) + sc_bigint<15>(sext_ln203_512_fu_12503335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3484_fu_12499469_p2() {
    add_ln703_3484_fu_12499469_p2 = (!sext_ln203_492_fu_12466408_p1.read().is_01() || !sext_ln203_516_fu_12469295_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_492_fu_12466408_p1.read()) + sc_bigint<12>(sext_ln203_516_fu_12469295_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3485_fu_12511943_p2() {
    add_ln703_3485_fu_12511943_p2 = (!sext_ln703_1990_fu_12511940_p1.read().is_01() || !add_ln703_3483_fu_12511934_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1990_fu_12511940_p1.read()) + sc_biguint<15>(add_ln703_3483_fu_12511934_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3486_fu_12499475_p2() {
    add_ln703_3486_fu_12499475_p2 = (!zext_ln708_1538_fu_12469233_p1.read().is_01() || !sext_ln203_513_fu_12469197_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1538_fu_12469233_p1.read()) + sc_bigint<11>(sext_ln203_513_fu_12469197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3487_fu_12499485_p2() {
    add_ln703_3487_fu_12499485_p2 = (!sext_ln203_517_fu_12469331_p1.read().is_01() || !sext_ln203_514_fu_12469257_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_517_fu_12469331_p1.read()) + sc_bigint<11>(sext_ln203_514_fu_12469257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3488_fu_12499495_p2() {
    add_ln703_3488_fu_12499495_p2 = (!sext_ln703_1993_fu_12499491_p1.read().is_01() || !sext_ln203_515_fu_12469261_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1993_fu_12499491_p1.read()) + sc_bigint<12>(sext_ln203_515_fu_12469261_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3489_fu_12499501_p2() {
    add_ln703_3489_fu_12499501_p2 = (!add_ln703_3488_fu_12499495_p2.read().is_01() || !sext_ln703_1992_fu_12499481_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3488_fu_12499495_p2.read()) + sc_bigint<12>(sext_ln703_1992_fu_12499481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_348_fu_12479961_p2() {
    add_ln703_348_fu_12479961_p2 = (!sext_ln203_47_fu_12408934_p1.read().is_01() || !ap_const_lv12_F40.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_47_fu_12408934_p1.read()) + sc_bigint<12>(ap_const_lv12_F40));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3491_fu_12499507_p2() {
    add_ln703_3491_fu_12499507_p2 = (!zext_ln708_1539_fu_12469359_p1.read().is_01() || !sext_ln1118_1109_fu_12469345_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1539_fu_12469359_p1.read()) + sc_bigint<11>(sext_ln1118_1109_fu_12469345_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3492_fu_12499517_p2() {
    add_ln703_3492_fu_12499517_p2 = (!sext_ln703_1995_fu_12499513_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1995_fu_12499513_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3493_fu_12499523_p2() {
    add_ln703_3493_fu_12499523_p2 = (!zext_ln1118_3754_fu_12469423_p1.read().is_01() || !trunc_ln1118_145_fu_12469475_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3754_fu_12469423_p1.read()) + sc_biguint<10>(trunc_ln1118_145_fu_12469475_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3494_fu_12499533_p2() {
    add_ln703_3494_fu_12499533_p2 = (!zext_ln703_550_fu_12499529_p1.read().is_01() || !add_ln703_3492_fu_12499517_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_550_fu_12499529_p1.read()) + sc_biguint<12>(add_ln703_3492_fu_12499517_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3495_fu_12499539_p2() {
    add_ln703_3495_fu_12499539_p2 = (!zext_ln708_1540_fu_12469495_p1.read().is_01() || !sext_ln1118_1110_fu_12469395_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1540_fu_12469495_p1.read()) + sc_bigint<11>(sext_ln1118_1110_fu_12469395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3496_fu_12499545_p2() {
    add_ln703_3496_fu_12499545_p2 = (!zext_ln708_787_fu_12469461_p1.read().is_01() || !sext_ln708_207_fu_12469447_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_787_fu_12469461_p1.read()) + sc_bigint<9>(sext_ln708_207_fu_12469447_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3497_fu_12499555_p2() {
    add_ln703_3497_fu_12499555_p2 = (!sext_ln703_1996_fu_12499551_p1.read().is_01() || !add_ln703_3495_fu_12499539_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1996_fu_12499551_p1.read()) + sc_biguint<11>(add_ln703_3495_fu_12499539_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3498_fu_12499565_p2() {
    add_ln703_3498_fu_12499565_p2 = (!sext_ln703_1997_fu_12499561_p1.read().is_01() || !add_ln703_3494_fu_12499533_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1997_fu_12499561_p1.read()) + sc_biguint<12>(add_ln703_3494_fu_12499533_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3499_fu_12499571_p2() {
    add_ln703_3499_fu_12499571_p2 = (!sext_ln1118_1111_fu_12469531_p1.read().is_01() || !zext_ln1118_3758_fu_12469551_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1111_fu_12469531_p1.read()) + sc_biguint<12>(zext_ln1118_3758_fu_12469551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_349_fu_12479967_p2() {
    add_ln703_349_fu_12479967_p2 = (!add_ln703_348_fu_12479961_p2.read().is_01() || !zext_ln1118_955_fu_12408984_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_348_fu_12479961_p2.read()) + sc_biguint<12>(zext_ln1118_955_fu_12408984_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_34_fu_12478015_p2() {
    add_ln703_34_fu_12478015_p2 = (!sext_ln703_29_fu_12478011_p1.read().is_01() || !sext_ln703_10_fu_12478001_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_29_fu_12478011_p1.read()) + sc_bigint<13>(sext_ln703_10_fu_12478001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3500_fu_12511968_p2() {
    add_ln703_3500_fu_12511968_p2 = (!sext_ln703_1999_fu_12511965_p1.read().is_01() || !sext_ln703_1998_fu_12511962_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1999_fu_12511965_p1.read()) + sc_bigint<13>(sext_ln703_1998_fu_12511962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3501_fu_12499577_p2() {
    add_ln703_3501_fu_12499577_p2 = (!sext_ln1118_1112_fu_12469565_p1.read().is_01() || !sext_ln1118_1113_fu_12469579_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1112_fu_12469565_p1.read()) + sc_bigint<10>(sext_ln1118_1113_fu_12469579_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3502_fu_12499587_p2() {
    add_ln703_3502_fu_12499587_p2 = (!sext_ln703_2000_fu_12499583_p1.read().is_01() || !sext_ln1118_1115_fu_12469607_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2000_fu_12499583_p1.read()) + sc_bigint<11>(sext_ln1118_1115_fu_12469607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3503_fu_12511977_p2() {
    add_ln703_3503_fu_12511977_p2 = (!sext_ln703_2001_fu_12511974_p1.read().is_01() || !add_ln703_3500_fu_12511968_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2001_fu_12511974_p1.read()) + sc_biguint<13>(add_ln703_3500_fu_12511968_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3504_fu_12511987_p2() {
    add_ln703_3504_fu_12511987_p2 = (!sext_ln1118_1120_fu_12503338_p1.read().is_01() || !sext_ln1118_1122_fu_12503341_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1120_fu_12503338_p1.read()) + sc_bigint<12>(sext_ln1118_1122_fu_12503341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3505_fu_12511997_p2() {
    add_ln703_3505_fu_12511997_p2 = (!sext_ln703_2003_fu_12511993_p1.read().is_01() || !sext_ln703_2002_fu_12511983_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2003_fu_12511993_p1.read()) + sc_bigint<14>(sext_ln703_2002_fu_12511983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3506_fu_12499593_p2() {
    add_ln703_3506_fu_12499593_p2 = (!zext_ln1118_3763_fu_12469669_p1.read().is_01() || !zext_ln708_1541_fu_12469775_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3763_fu_12469669_p1.read()) + sc_biguint<10>(zext_ln708_1541_fu_12469775_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3507_fu_12499599_p2() {
    add_ln703_3507_fu_12499599_p2 = (!add_ln703_3506_fu_12499593_p2.read().is_01() || !zext_ln1118_3762_fu_12469655_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3506_fu_12499593_p2.read()) + sc_biguint<10>(zext_ln1118_3762_fu_12469655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3508_fu_12512006_p2() {
    add_ln703_3508_fu_12512006_p2 = (!zext_ln703_551_fu_12512003_p1.read().is_01() || !add_ln703_3505_fu_12511997_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_551_fu_12512003_p1.read()) + sc_biguint<14>(add_ln703_3505_fu_12511997_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3509_fu_12499605_p2() {
    add_ln703_3509_fu_12499605_p2 = (!zext_ln1118_3767_fu_12469803_p1.read().is_01() || !sext_ln1118_1124_fu_12469865_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_3767_fu_12469803_p1.read()) + sc_bigint<12>(sext_ln1118_1124_fu_12469865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_350_fu_12479973_p2() {
    add_ln703_350_fu_12479973_p2 = (!sext_ln1118_112_fu_12408970_p1.read().is_01() || !sext_ln1118_113_fu_12409008_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_112_fu_12408970_p1.read()) + sc_bigint<11>(sext_ln1118_113_fu_12409008_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3510_fu_12499611_p2() {
    add_ln703_3510_fu_12499611_p2 = (!add_ln703_3509_fu_12499605_p2.read().is_01() || !zext_ln708_790_fu_12469789_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3509_fu_12499605_p2.read()) + sc_biguint<12>(zext_ln708_790_fu_12469789_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3511_fu_12499621_p2() {
    add_ln703_3511_fu_12499621_p2 = (!sext_ln1118_1118_fu_12469711_p1.read().is_01() || !sext_ln1118_1119_fu_12469743_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1118_fu_12469711_p1.read()) + sc_bigint<9>(sext_ln1118_1119_fu_12469743_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3512_fu_12499631_p2() {
    add_ln703_3512_fu_12499631_p2 = (!sext_ln703_2006_fu_12499627_p1.read().is_01() || !sext_ln1118_1116_fu_12469631_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2006_fu_12499627_p1.read()) + sc_bigint<10>(sext_ln1118_1116_fu_12469631_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3513_fu_12499641_p2() {
    add_ln703_3513_fu_12499641_p2 = (!sext_ln703_2007_fu_12499637_p1.read().is_01() || !sext_ln703_2005_fu_12499617_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2007_fu_12499637_p1.read()) + sc_bigint<13>(sext_ln703_2005_fu_12499617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3514_fu_12512019_p2() {
    add_ln703_3514_fu_12512019_p2 = (!sext_ln703_2008_fu_12512016_p1.read().is_01() || !sext_ln703_2004_fu_12512012_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2008_fu_12512016_p1.read()) + sc_bigint<15>(sext_ln703_2004_fu_12512012_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3515_fu_12512025_p2() {
    add_ln703_3515_fu_12512025_p2 = (!add_ln703_3514_fu_12512019_p2.read().is_01() || !zext_ln203_176_fu_12503344_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3514_fu_12512019_p2.read()) + sc_biguint<15>(zext_ln203_176_fu_12503344_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3516_fu_12499647_p2() {
    add_ln703_3516_fu_12499647_p2 = (!sext_ln203_519_fu_12469977_p1.read().is_01() || !zext_ln203_177_fu_12469935_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_519_fu_12469977_p1.read()) + sc_biguint<12>(zext_ln203_177_fu_12469935_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3517_fu_12512034_p2() {
    add_ln703_3517_fu_12512034_p2 = (!sext_ln703_2009_fu_12512031_p1.read().is_01() || !add_ln703_3515_fu_12512025_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2009_fu_12512031_p1.read()) + sc_biguint<15>(add_ln703_3515_fu_12512025_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3518_fu_12499653_p2() {
    add_ln703_3518_fu_12499653_p2 = (!zext_ln708_1542_fu_12469949_p1.read().is_01() || !zext_ln708_1543_fu_12469963_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1542_fu_12469949_p1.read()) + sc_biguint<11>(zext_ln708_1543_fu_12469963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3519_fu_12499663_p2() {
    add_ln703_3519_fu_12499663_p2 = (!sext_ln203_520_fu_12470001_p1.read().is_01() || !zext_ln1118_3475_fu_12459684_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_520_fu_12470001_p1.read()) + sc_biguint<10>(zext_ln1118_3475_fu_12459684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_351_fu_12479979_p2() {
    add_ln703_351_fu_12479979_p2 = (!add_ln703_350_fu_12479973_p2.read().is_01() || !zext_ln708_1012_fu_12409040_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_350_fu_12479973_p2.read()) + sc_biguint<11>(zext_ln708_1012_fu_12409040_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3520_fu_12499673_p2() {
    add_ln703_3520_fu_12499673_p2 = (!sext_ln703_2010_fu_12499669_p1.read().is_01() || !sext_ln203_518_fu_12469899_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2010_fu_12499669_p1.read()) + sc_bigint<11>(sext_ln203_518_fu_12469899_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3521_fu_12499683_p2() {
    add_ln703_3521_fu_12499683_p2 = (!sext_ln703_2011_fu_12499679_p1.read().is_01() || !zext_ln703_552_fu_12499659_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2011_fu_12499679_p1.read()) + sc_biguint<13>(zext_ln703_552_fu_12499659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3523_fu_12499689_p2() {
    add_ln703_3523_fu_12499689_p2 = (!sext_ln1118_1109_fu_12469345_p1.read().is_01() || !ap_const_lv11_740.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1109_fu_12469345_p1.read()) + sc_bigint<11>(ap_const_lv11_740));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3524_fu_12499695_p2() {
    add_ln703_3524_fu_12499695_p2 = (!add_ln703_3523_fu_12499689_p2.read().is_01() || !zext_ln708_1501_fu_12466520_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3523_fu_12499689_p2.read()) + sc_biguint<11>(zext_ln708_1501_fu_12466520_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3525_fu_12499705_p2() {
    add_ln703_3525_fu_12499705_p2 = (!sext_ln1116_110_fu_12470015_p1.read().is_01() || !sext_ln1118_1033_fu_12464387_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_110_fu_12470015_p1.read()) + sc_bigint<10>(sext_ln1118_1033_fu_12464387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3526_fu_12499715_p2() {
    add_ln703_3526_fu_12499715_p2 = (!sext_ln703_2015_fu_12499711_p1.read().is_01() || !sext_ln703_2014_fu_12499701_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2015_fu_12499711_p1.read()) + sc_bigint<12>(sext_ln703_2014_fu_12499701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3527_fu_12499721_p2() {
    add_ln703_3527_fu_12499721_p2 = (!add_ln703_3526_fu_12499715_p2.read().is_01() || !zext_ln1118_3772_fu_12470048_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3526_fu_12499715_p2.read()) + sc_biguint<12>(zext_ln1118_3772_fu_12470048_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3528_fu_12499727_p2() {
    add_ln703_3528_fu_12499727_p2 = (!zext_ln1118_3773_fu_12470062_p1.read().is_01() || !zext_ln1118_3774_fu_12470076_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3773_fu_12470062_p1.read()) + sc_biguint<10>(zext_ln1118_3774_fu_12470076_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3529_fu_12499737_p2() {
    add_ln703_3529_fu_12499737_p2 = (!zext_ln703_553_fu_12499733_p1.read().is_01() || !add_ln703_3527_fu_12499721_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_553_fu_12499733_p1.read()) + sc_biguint<12>(add_ln703_3527_fu_12499721_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_352_fu_12479989_p2() {
    add_ln703_352_fu_12479989_p2 = (!sext_ln703_270_fu_12479985_p1.read().is_01() || !add_ln703_349_fu_12479967_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_270_fu_12479985_p1.read()) + sc_biguint<12>(add_ln703_349_fu_12479967_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3530_fu_12499743_p2() {
    add_ln703_3530_fu_12499743_p2 = (!sext_ln1118_1126_fu_12470034_p1.read().is_01() || !sext_ln1118_1127_fu_12470114_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1126_fu_12470034_p1.read()) + sc_bigint<11>(sext_ln1118_1127_fu_12470114_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3531_fu_12499753_p2() {
    add_ln703_3531_fu_12499753_p2 = (!zext_ln708_1478_fu_12463987_p1.read().is_01() || !sext_ln1116_111_fu_12470100_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1478_fu_12463987_p1.read()) + sc_bigint<8>(sext_ln1116_111_fu_12470100_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3532_fu_12499763_p2() {
    add_ln703_3532_fu_12499763_p2 = (!sext_ln703_2018_fu_12499759_p1.read().is_01() || !sext_ln703_2017_fu_12499749_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2018_fu_12499759_p1.read()) + sc_bigint<12>(sext_ln703_2017_fu_12499749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3533_fu_12512059_p2() {
    add_ln703_3533_fu_12512059_p2 = (!sext_ln703_2019_fu_12512056_p1.read().is_01() || !sext_ln703_2016_fu_12512053_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2019_fu_12512056_p1.read()) + sc_bigint<13>(sext_ln703_2016_fu_12512053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3534_fu_12499769_p2() {
    add_ln703_3534_fu_12499769_p2 = (!sext_ln708_208_fu_12470166_p1.read().is_01() || !sext_ln1116_113_fu_12470314_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_208_fu_12470166_p1.read()) + sc_bigint<12>(sext_ln1116_113_fu_12470314_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3535_fu_12512072_p2() {
    add_ln703_3535_fu_12512072_p2 = (!sext_ln703_2021_fu_12512069_p1.read().is_01() || !sext_ln703_2020_fu_12512065_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2021_fu_12512069_p1.read()) + sc_bigint<14>(sext_ln703_2020_fu_12512065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3536_fu_12499775_p2() {
    add_ln703_3536_fu_12499775_p2 = (!sext_ln1116_116_fu_12470405_p1.read().is_01() || !zext_ln1118_3779_fu_12470216_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_116_fu_12470405_p1.read()) + sc_biguint<12>(zext_ln1118_3779_fu_12470216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3537_fu_12499781_p2() {
    add_ln703_3537_fu_12499781_p2 = (!zext_ln1116_322_fu_12470290_p1.read().is_01() || !zext_ln1116_323_fu_12470382_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_322_fu_12470290_p1.read()) + sc_biguint<9>(zext_ln1116_323_fu_12470382_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3538_fu_12499791_p2() {
    add_ln703_3538_fu_12499791_p2 = (!zext_ln703_554_fu_12499787_p1.read().is_01() || !add_ln703_3536_fu_12499775_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_554_fu_12499787_p1.read()) + sc_biguint<12>(add_ln703_3536_fu_12499775_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3539_fu_12512081_p2() {
    add_ln703_3539_fu_12512081_p2 = (!sext_ln703_2022_fu_12512078_p1.read().is_01() || !add_ln703_3535_fu_12512072_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2022_fu_12512078_p1.read()) + sc_biguint<14>(add_ln703_3535_fu_12512072_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_353_fu_12479999_p2() {
    add_ln703_353_fu_12479999_p2 = (!sext_ln1118_115_fu_12409088_p1.read().is_01() || !sext_ln708_20_fu_12409102_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_115_fu_12409088_p1.read()) + sc_bigint<12>(sext_ln708_20_fu_12409102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3540_fu_12499797_p2() {
    add_ln703_3540_fu_12499797_p2 = (!sext_ln708_209_fu_12470202_p1.read().is_01() || !sext_ln1118_1130_fu_12470250_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_209_fu_12470202_p1.read()) + sc_bigint<10>(sext_ln1118_1130_fu_12470250_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3541_fu_12499807_p2() {
    add_ln703_3541_fu_12499807_p2 = (!sext_ln703_2024_fu_12499803_p1.read().is_01() || !sext_ln1116_112_fu_12470148_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2024_fu_12499803_p1.read()) + sc_bigint<11>(sext_ln1116_112_fu_12470148_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3542_fu_12499817_p2() {
    add_ln703_3542_fu_12499817_p2 = (!sext_ln1116_114_fu_12470328_p1.read().is_01() || !sext_ln1116_115_fu_12470342_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_114_fu_12470328_p1.read()) + sc_bigint<10>(sext_ln1116_115_fu_12470342_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3543_fu_12499827_p2() {
    add_ln703_3543_fu_12499827_p2 = (!zext_ln1116_321_fu_12470170_p1.read().is_01() || !zext_ln1116_316_fu_12465462_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1116_321_fu_12470170_p1.read()) + sc_biguint<6>(zext_ln1116_316_fu_12465462_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3544_fu_12499837_p2() {
    add_ln703_3544_fu_12499837_p2 = (!zext_ln703_555_fu_12499833_p1.read().is_01() || !sext_ln703_2026_fu_12499823_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_555_fu_12499833_p1.read()) + sc_bigint<11>(sext_ln703_2026_fu_12499823_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3545_fu_12499847_p2() {
    add_ln703_3545_fu_12499847_p2 = (!sext_ln703_2027_fu_12499843_p1.read().is_01() || !sext_ln703_2025_fu_12499813_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2027_fu_12499843_p1.read()) + sc_bigint<12>(sext_ln703_2025_fu_12499813_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3546_fu_12512094_p2() {
    add_ln703_3546_fu_12512094_p2 = (!sext_ln703_2028_fu_12512091_p1.read().is_01() || !sext_ln703_2023_fu_12512087_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2028_fu_12512091_p1.read()) + sc_bigint<15>(sext_ln703_2023_fu_12512087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3547_fu_12499853_p2() {
    add_ln703_3547_fu_12499853_p2 = (!sext_ln203_523_fu_12470475_p1.read().is_01() || !sext_ln203_524_fu_12470489_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_523_fu_12470475_p1.read()) + sc_bigint<11>(sext_ln203_524_fu_12470489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3548_fu_12512103_p2() {
    add_ln703_3548_fu_12512103_p2 = (!sext_ln703_2029_fu_12512100_p1.read().is_01() || !add_ln703_3546_fu_12512094_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2029_fu_12512100_p1.read()) + sc_biguint<15>(add_ln703_3546_fu_12512094_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3549_fu_12499859_p2() {
    add_ln703_3549_fu_12499859_p2 = (!sext_ln203_521_fu_12470441_p1.read().is_01() || !sext_ln203_522_fu_12470461_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_521_fu_12470441_p1.read()) + sc_bigint<10>(sext_ln203_522_fu_12470461_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_354_fu_12480009_p2() {
    add_ln703_354_fu_12480009_p2 = (!sext_ln703_272_fu_12480005_p1.read().is_01() || !sext_ln703_271_fu_12479995_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_272_fu_12480005_p1.read()) + sc_bigint<13>(sext_ln703_271_fu_12479995_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3550_fu_12499869_p2() {
    add_ln703_3550_fu_12499869_p2 = (!sext_ln203_525_fu_12470503_p1.read().is_01() || !zext_ln203_178_fu_12470522_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_525_fu_12470503_p1.read()) + sc_biguint<10>(zext_ln203_178_fu_12470522_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3551_fu_12499879_p2() {
    add_ln703_3551_fu_12499879_p2 = (!sext_ln703_2031_fu_12499875_p1.read().is_01() || !sext_ln703_2030_fu_12499865_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2031_fu_12499875_p1.read()) + sc_bigint<11>(sext_ln703_2030_fu_12499865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3553_fu_12499885_p2() {
    add_ln703_3553_fu_12499885_p2 = (!sext_ln1118_1133_fu_12470526_p1.read().is_01() || !ap_const_lv10_380.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1133_fu_12470526_p1.read()) + sc_bigint<10>(ap_const_lv10_380));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3554_fu_12499895_p2() {
    add_ln703_3554_fu_12499895_p2 = (!sext_ln1118_1134_fu_12470540_p1.read().is_01() || !zext_ln203_179_fu_12470554_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1134_fu_12470540_p1.read()) + sc_biguint<12>(zext_ln203_179_fu_12470554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3555_fu_12499901_p2() {
    add_ln703_3555_fu_12499901_p2 = (!add_ln703_3554_fu_12499895_p2.read().is_01() || !sext_ln703_2034_fu_12499891_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3554_fu_12499895_p2.read()) + sc_bigint<12>(sext_ln703_2034_fu_12499891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3556_fu_12499911_p2() {
    add_ln703_3556_fu_12499911_p2 = (!zext_ln708_725_fu_12460861_p1.read().is_01() || !zext_ln1118_3785_fu_12470558_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_725_fu_12460861_p1.read()) + sc_biguint<9>(zext_ln1118_3785_fu_12470558_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3557_fu_12499921_p2() {
    add_ln703_3557_fu_12499921_p2 = (!zext_ln703_556_fu_12499917_p1.read().is_01() || !zext_ln708_1544_fu_12470572_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_556_fu_12499917_p1.read()) + sc_biguint<11>(zext_ln708_1544_fu_12470572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3558_fu_12499931_p2() {
    add_ln703_3558_fu_12499931_p2 = (!zext_ln703_557_fu_12499927_p1.read().is_01() || !sext_ln703_2035_fu_12499907_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_557_fu_12499927_p1.read()) + sc_bigint<13>(sext_ln703_2035_fu_12499907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3559_fu_12499937_p2() {
    add_ln703_3559_fu_12499937_p2 = (!add_ln703_3558_fu_12499931_p2.read().is_01() || !sext_ln1118_1136_fu_12470672_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3558_fu_12499931_p2.read()) + sc_bigint<13>(sext_ln1118_1136_fu_12470672_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_355_fu_12480015_p2() {
    add_ln703_355_fu_12480015_p2 = (!zext_ln1118_2332_fu_12409074_p1.read().is_01() || !zext_ln1118_2334_fu_12409122_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_2332_fu_12409074_p1.read()) + sc_biguint<8>(zext_ln1118_2334_fu_12409122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3560_fu_12499947_p2() {
    add_ln703_3560_fu_12499947_p2 = (!zext_ln1118_3787_fu_12470624_p1.read().is_01() || !zext_ln1118_3788_fu_12470638_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3787_fu_12470624_p1.read()) + sc_biguint<10>(zext_ln1118_3788_fu_12470638_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3561_fu_12499957_p2() {
    add_ln703_3561_fu_12499957_p2 = (!zext_ln703_558_fu_12499953_p1.read().is_01() || !sext_ln703_2036_fu_12499943_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_558_fu_12499953_p1.read()) + sc_bigint<14>(sext_ln703_2036_fu_12499943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3562_fu_12499963_p2() {
    add_ln703_3562_fu_12499963_p2 = (!zext_ln708_1545_fu_12470658_p1.read().is_01() || !trunc_ln1118_146_fu_12470662_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1545_fu_12470658_p1.read()) + sc_biguint<10>(trunc_ln1118_146_fu_12470662_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3563_fu_12499973_p2() {
    add_ln703_3563_fu_12499973_p2 = (!sext_ln1118_1135_fu_12470586_p1.read().is_01() || !zext_ln708_724_fu_12460248_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1135_fu_12470586_p1.read()) + sc_biguint<10>(zext_ln708_724_fu_12460248_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3564_fu_12499983_p2() {
    add_ln703_3564_fu_12499983_p2 = (!sext_ln703_2037_fu_12499979_p1.read().is_01() || !sext_ln708_210_fu_12470600_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2037_fu_12499979_p1.read()) + sc_bigint<11>(sext_ln708_210_fu_12470600_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3565_fu_12499993_p2() {
    add_ln703_3565_fu_12499993_p2 = (!sext_ln703_2038_fu_12499989_p1.read().is_01() || !zext_ln703_559_fu_12499969_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2038_fu_12499989_p1.read()) + sc_biguint<12>(zext_ln703_559_fu_12499969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3566_fu_12512125_p2() {
    add_ln703_3566_fu_12512125_p2 = (!sext_ln703_2039_fu_12512122_p1.read().is_01() || !add_ln703_3561_reg_12518932.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2039_fu_12512122_p1.read()) + sc_biguint<14>(add_ln703_3561_reg_12518932.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3567_fu_12499999_p2() {
    add_ln703_3567_fu_12499999_p2 = (!sext_ln203_463_fu_12462147_p1.read().is_01() || !sext_ln1118_1140_fu_12470806_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_463_fu_12462147_p1.read()) + sc_bigint<12>(sext_ln1118_1140_fu_12470806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3568_fu_12512133_p2() {
    add_ln703_3568_fu_12512133_p2 = (!sext_ln703_2040_fu_12512130_p1.read().is_01() || !add_ln703_3566_fu_12512125_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2040_fu_12512130_p1.read()) + sc_biguint<14>(add_ln703_3566_fu_12512125_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3569_fu_12500005_p2() {
    add_ln703_3569_fu_12500005_p2 = (!zext_ln1118_3793_fu_12470764_p1.read().is_01() || !zext_ln1118_3794_fu_12470778_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3793_fu_12470764_p1.read()) + sc_biguint<10>(zext_ln1118_3794_fu_12470778_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_356_fu_12480025_p2() {
    add_ln703_356_fu_12480025_p2 = (!sext_ln1118_114_fu_12409054_p1.read().is_01() || !sext_ln1118_116_fu_12409136_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_114_fu_12409054_p1.read()) + sc_bigint<10>(sext_ln1118_116_fu_12409136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3570_fu_12500015_p2() {
    add_ln703_3570_fu_12500015_p2 = (!zext_ln703_560_fu_12500011_p1.read().is_01() || !sext_ln708_212_fu_12470820_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_560_fu_12500011_p1.read()) + sc_bigint<12>(sext_ln708_212_fu_12470820_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3571_fu_12512146_p2() {
    add_ln703_3571_fu_12512146_p2 = (!sext_ln703_2042_fu_12512143_p1.read().is_01() || !sext_ln703_2041_fu_12512139_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2042_fu_12512143_p1.read()) + sc_bigint<15>(sext_ln703_2041_fu_12512139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3572_fu_12500021_p2() {
    add_ln703_3572_fu_12500021_p2 = (!zext_ln708_1546_fu_12470848_p1.read().is_01() || !sext_ln1118_1139_fu_12470792_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1546_fu_12470848_p1.read()) + sc_bigint<11>(sext_ln1118_1139_fu_12470792_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3573_fu_12500031_p2() {
    add_ln703_3573_fu_12500031_p2 = (!sext_ln703_2043_fu_12500027_p1.read().is_01() || !zext_ln1118_3795_fu_12470834_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2043_fu_12500027_p1.read()) + sc_biguint<12>(zext_ln1118_3795_fu_12470834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3574_fu_12500037_p2() {
    add_ln703_3574_fu_12500037_p2 = (!sext_ln1118_1137_fu_12470708_p1.read().is_01() || !zext_ln1118_3791_fu_12470732_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1137_fu_12470708_p1.read()) + sc_biguint<9>(zext_ln1118_3791_fu_12470732_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3575_fu_12500047_p2() {
    add_ln703_3575_fu_12500047_p2 = (!sext_ln703_2044_fu_12500043_p1.read().is_01() || !sext_ln708_211_fu_12470728_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2044_fu_12500043_p1.read()) + sc_bigint<10>(sext_ln708_211_fu_12470728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3576_fu_12500057_p2() {
    add_ln703_3576_fu_12500057_p2 = (!sext_ln703_2045_fu_12500053_p1.read().is_01() || !add_ln703_3573_fu_12500031_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2045_fu_12500053_p1.read()) + sc_biguint<12>(add_ln703_3573_fu_12500031_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3577_fu_12512155_p2() {
    add_ln703_3577_fu_12512155_p2 = (!sext_ln703_2046_fu_12512152_p1.read().is_01() || !add_ln703_3571_fu_12512146_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2046_fu_12512152_p1.read()) + sc_biguint<15>(add_ln703_3571_fu_12512146_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3578_fu_12500063_p2() {
    add_ln703_3578_fu_12500063_p2 = (!sext_ln203_526_fu_12470862_p1.read().is_01() || !sext_ln203_528_fu_12470946_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_526_fu_12470862_p1.read()) + sc_bigint<12>(sext_ln203_528_fu_12470946_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3579_fu_12512164_p2() {
    add_ln703_3579_fu_12512164_p2 = (!sext_ln703_2047_fu_12512161_p1.read().is_01() || !add_ln703_3577_fu_12512155_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2047_fu_12512161_p1.read()) + sc_biguint<15>(add_ln703_3577_fu_12512155_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_357_fu_12480035_p2() {
    add_ln703_357_fu_12480035_p2 = (!sext_ln703_276_fu_12480031_p1.read().is_01() || !zext_ln703_67_fu_12480021_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_276_fu_12480031_p1.read()) + sc_biguint<11>(zext_ln703_67_fu_12480021_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3580_fu_12500069_p2() {
    add_ln703_3580_fu_12500069_p2 = (!zext_ln708_1547_fu_12470932_p1.read().is_01() || !sext_ln203_527_fu_12470918_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1547_fu_12470932_p1.read()) + sc_bigint<11>(sext_ln203_527_fu_12470918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3581_fu_12500079_p2() {
    add_ln703_3581_fu_12500079_p2 = (!sext_ln703_2048_fu_12500075_p1.read().is_01() || !zext_ln203_180_fu_12470876_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2048_fu_12500075_p1.read()) + sc_biguint<12>(zext_ln203_180_fu_12470876_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3583_fu_12500085_p2() {
    add_ln703_3583_fu_12500085_p2 = (!sext_ln1118_1142_fu_12470970_p1.read().is_01() || !ap_const_lv10_340.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1142_fu_12470970_p1.read()) + sc_bigint<10>(ap_const_lv10_340));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3584_fu_12500091_p2() {
    add_ln703_3584_fu_12500091_p2 = (!add_ln703_3583_fu_12500085_p2.read().is_01() || !zext_ln1118_3799_fu_12470994_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3583_fu_12500085_p2.read()) + sc_biguint<10>(zext_ln1118_3799_fu_12470994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3585_fu_12500101_p2() {
    add_ln703_3585_fu_12500101_p2 = (!sext_ln1118_1144_fu_12471032_p1.read().is_01() || !zext_ln1118_3802_fu_12471056_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1144_fu_12471032_p1.read()) + sc_biguint<12>(zext_ln1118_3802_fu_12471056_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3586_fu_12500111_p2() {
    add_ln703_3586_fu_12500111_p2 = (!sext_ln703_2051_fu_12500107_p1.read().is_01() || !sext_ln703_505_fu_12500097_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2051_fu_12500107_p1.read()) + sc_bigint<13>(sext_ln703_505_fu_12500097_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3587_fu_12500117_p2() {
    add_ln703_3587_fu_12500117_p2 = (!zext_ln1118_3804_fu_12471100_p1.read().is_01() || !zext_ln1118_3806_fu_12471124_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3804_fu_12471100_p1.read()) + sc_biguint<10>(zext_ln1118_3806_fu_12471124_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3588_fu_12500127_p2() {
    add_ln703_3588_fu_12500127_p2 = (!zext_ln703_561_fu_12500123_p1.read().is_01() || !zext_ln708_1548_fu_12471080_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_561_fu_12500123_p1.read()) + sc_biguint<11>(zext_ln708_1548_fu_12471080_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3589_fu_12500137_p2() {
    add_ln703_3589_fu_12500137_p2 = (!zext_ln703_562_fu_12500133_p1.read().is_01() || !add_ln703_3586_fu_12500111_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_562_fu_12500133_p1.read()) + sc_biguint<13>(add_ln703_3586_fu_12500111_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_358_fu_12504284_p2() {
    add_ln703_358_fu_12504284_p2 = (!sext_ln703_277_fu_12504281_p1.read().is_01() || !sext_ln703_275_fu_12504278_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_277_fu_12504281_p1.read()) + sc_bigint<14>(sext_ln703_275_fu_12504278_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3590_fu_12500147_p2() {
    add_ln703_3590_fu_12500147_p2 = (!zext_ln1118_3808_fu_12471148_p1.read().is_01() || !sext_ln1118_1146_fu_12471196_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_3808_fu_12471148_p1.read()) + sc_bigint<12>(sext_ln1118_1146_fu_12471196_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3591_fu_12500157_p2() {
    add_ln703_3591_fu_12500157_p2 = (!sext_ln703_2052_fu_12500153_p1.read().is_01() || !sext_ln703_506_fu_12500143_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2052_fu_12500153_p1.read()) + sc_bigint<14>(sext_ln703_506_fu_12500143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3592_fu_12500163_p2() {
    add_ln703_3592_fu_12500163_p2 = (!zext_ln708_1549_fu_12471182_p1.read().is_01() || !zext_ln708_1550_fu_12471228_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1549_fu_12471182_p1.read()) + sc_biguint<11>(zext_ln708_1550_fu_12471228_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3593_fu_12500173_p2() {
    add_ln703_3593_fu_12500173_p2 = (!zext_ln1118_3811_fu_12471252_p1.read().is_01() || !sext_ln1118_1145_fu_12471168_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3811_fu_12471252_p1.read()) + sc_bigint<10>(sext_ln1118_1145_fu_12471168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3594_fu_12500183_p2() {
    add_ln703_3594_fu_12500183_p2 = (!sext_ln703_2053_fu_12500179_p1.read().is_01() || !zext_ln703_563_fu_12500169_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2053_fu_12500179_p1.read()) + sc_biguint<12>(zext_ln703_563_fu_12500169_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3595_fu_12512186_p2() {
    add_ln703_3595_fu_12512186_p2 = (!sext_ln703_2054_fu_12512183_p1.read().is_01() || !add_ln703_3591_reg_12518967.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2054_fu_12512183_p1.read()) + sc_biguint<14>(add_ln703_3591_reg_12518967.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3596_fu_12512191_p2() {
    add_ln703_3596_fu_12512191_p2 = (!add_ln703_3595_fu_12512186_p2.read().is_01() || !zext_ln1118_3813_fu_12503347_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3595_fu_12512186_p2.read()) + sc_biguint<14>(zext_ln1118_3813_fu_12503347_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3597_fu_12500189_p2() {
    add_ln703_3597_fu_12500189_p2 = (!zext_ln1118_3814_fu_12471318_p1.read().is_01() || !sext_ln1118_1149_fu_12471346_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_3814_fu_12471318_p1.read()) + sc_bigint<12>(sext_ln1118_1149_fu_12471346_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3598_fu_12500199_p2() {
    add_ln703_3598_fu_12500199_p2 = (!sext_ln703_2056_fu_12500195_p1.read().is_01() || !zext_ln708_808_fu_12471304_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2056_fu_12500195_p1.read()) + sc_biguint<13>(zext_ln708_808_fu_12471304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3599_fu_12512204_p2() {
    add_ln703_3599_fu_12512204_p2 = (!sext_ln703_2057_fu_12512201_p1.read().is_01() || !sext_ln703_2055_fu_12512197_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2057_fu_12512201_p1.read()) + sc_bigint<15>(sext_ln703_2055_fu_12512197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_359_fu_12480041_p2() {
    add_ln703_359_fu_12480041_p2 = (!sext_ln1118_120_fu_12409364_p1.read().is_01() || !zext_ln1118_963_fu_12409184_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_120_fu_12409364_p1.read()) + sc_biguint<12>(zext_ln1118_963_fu_12409184_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_35_fu_12478021_p2() {
    add_ln703_35_fu_12478021_p2 = (!zext_ln1118_2243_fu_12402041_p1.read().is_01() || !sext_ln1118_5_fu_12402001_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2243_fu_12402041_p1.read()) + sc_bigint<10>(sext_ln1118_5_fu_12402001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3600_fu_12500205_p2() {
    add_ln703_3600_fu_12500205_p2 = (!sext_ln1118_1151_fu_12471380_p1.read().is_01() || !sext_ln1118_1153_fu_12471420_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1151_fu_12471380_p1.read()) + sc_bigint<10>(sext_ln1118_1153_fu_12471420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3601_fu_12500211_p2() {
    add_ln703_3601_fu_12500211_p2 = (!sext_ln1118_1150_fu_12471360_p1.read().is_01() || !sext_ln1118_1147_fu_12471272_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_1150_fu_12471360_p1.read()) + sc_bigint<7>(sext_ln1118_1147_fu_12471272_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3602_fu_12500221_p2() {
    add_ln703_3602_fu_12500221_p2 = (!sext_ln703_2058_fu_12500217_p1.read().is_01() || !sext_ln1118_1148_fu_12471342_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln703_2058_fu_12500217_p1.read()) + sc_bigint<8>(sext_ln1118_1148_fu_12471342_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3603_fu_12500231_p2() {
    add_ln703_3603_fu_12500231_p2 = (!sext_ln703_2059_fu_12500227_p1.read().is_01() || !add_ln703_3600_fu_12500205_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2059_fu_12500227_p1.read()) + sc_biguint<10>(add_ln703_3600_fu_12500205_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3604_fu_12512213_p2() {
    add_ln703_3604_fu_12512213_p2 = (!sext_ln703_2060_fu_12512210_p1.read().is_01() || !add_ln703_3599_fu_12512204_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2060_fu_12512210_p1.read()) + sc_biguint<15>(add_ln703_3599_fu_12512204_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3605_fu_12512219_p2() {
    add_ln703_3605_fu_12512219_p2 = (!add_ln703_3604_fu_12512213_p2.read().is_01() || !sext_ln203_529_fu_12503350_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3604_fu_12512213_p2.read()) + sc_bigint<15>(sext_ln203_529_fu_12503350_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3606_fu_12500237_p2() {
    add_ln703_3606_fu_12500237_p2 = (!zext_ln203_440_fu_12471472_p1.read().is_01() || !zext_ln203_441_fu_12471496_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_440_fu_12471472_p1.read()) + sc_biguint<9>(zext_ln203_441_fu_12471496_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3607_fu_12500247_p2() {
    add_ln703_3607_fu_12500247_p2 = (!zext_ln703_564_fu_12500243_p1.read().is_01() || !sext_ln203_533_fu_12471586_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_564_fu_12500243_p1.read()) + sc_bigint<12>(sext_ln203_533_fu_12471586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3608_fu_12512228_p2() {
    add_ln703_3608_fu_12512228_p2 = (!sext_ln703_2061_fu_12512225_p1.read().is_01() || !add_ln703_3605_fu_12512219_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2061_fu_12512225_p1.read()) + sc_biguint<15>(add_ln703_3605_fu_12512219_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3609_fu_12500253_p2() {
    add_ln703_3609_fu_12500253_p2 = (!sext_ln203_530_fu_12471468_p1.read().is_01() || !sext_ln203_532_fu_12471572_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_530_fu_12471468_p1.read()) + sc_bigint<11>(sext_ln203_532_fu_12471572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_360_fu_12504293_p2() {
    add_ln703_360_fu_12504293_p2 = (!sext_ln703_278_fu_12504290_p1.read().is_01() || !add_ln703_358_fu_12504284_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_278_fu_12504290_p1.read()) + sc_biguint<14>(add_ln703_358_fu_12504284_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3610_fu_12500263_p2() {
    add_ln703_3610_fu_12500263_p2 = (!sext_ln703_2062_fu_12500259_p1.read().is_01() || !zext_ln203_181_fu_12471544_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2062_fu_12500259_p1.read()) + sc_biguint<12>(zext_ln203_181_fu_12471544_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3611_fu_12500269_p2() {
    add_ln703_3611_fu_12500269_p2 = (!zext_ln708_1451_fu_12459948_p1.read().is_01() || !sext_ln203_535_fu_12471624_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1451_fu_12459948_p1.read()) + sc_bigint<8>(sext_ln203_535_fu_12471624_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3612_fu_12500279_p2() {
    add_ln703_3612_fu_12500279_p2 = (!sext_ln703_2063_fu_12500275_p1.read().is_01() || !sext_ln203_531_fu_12471520_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_2063_fu_12500275_p1.read()) + sc_bigint<9>(sext_ln203_531_fu_12471520_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3613_fu_12500289_p2() {
    add_ln703_3613_fu_12500289_p2 = (!sext_ln703_2064_fu_12500285_p1.read().is_01() || !add_ln703_3610_fu_12500263_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2064_fu_12500285_p1.read()) + sc_biguint<12>(add_ln703_3610_fu_12500263_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3615_fu_12500295_p2() {
    add_ln703_3615_fu_12500295_p2 = (!zext_ln203_442_fu_12471648_p1.read().is_01() || !ap_const_lv9_158.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_442_fu_12471648_p1.read()) + sc_bigint<9>(ap_const_lv9_158));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3616_fu_12500305_p2() {
    add_ln703_3616_fu_12500305_p2 = (!zext_ln203_443_fu_12471668_p1.read().is_01() || !sext_ln703_509_fu_12500301_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_443_fu_12471668_p1.read()) + sc_bigint<10>(sext_ln703_509_fu_12500301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3617_fu_12500311_p2() {
    add_ln703_3617_fu_12500311_p2 = (!add_ln703_3616_fu_12500305_p2.read().is_01() || !zext_ln203_444_fu_12471692_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3616_fu_12500305_p2.read()) + sc_biguint<10>(zext_ln203_444_fu_12471692_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3618_fu_12500321_p2() {
    add_ln703_3618_fu_12500321_p2 = (!sext_ln203_536_fu_12471696_p1.read().is_01() || !sext_ln703_510_fu_12500317_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_536_fu_12471696_p1.read()) + sc_bigint<12>(sext_ln703_510_fu_12500317_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3619_fu_12500327_p2() {
    add_ln703_3619_fu_12500327_p2 = (!add_ln703_3618_fu_12500321_p2.read().is_01() || !zext_ln1118_3824_fu_12471734_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3618_fu_12500321_p2.read()) + sc_biguint<12>(zext_ln1118_3824_fu_12471734_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_361_fu_12480047_p2() {
    add_ln703_361_fu_12480047_p2 = (!sext_ln1118_117_fu_12409150_p1.read().is_01() || !sext_ln1118_101_fu_12408044_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_117_fu_12409150_p1.read()) + sc_bigint<11>(sext_ln1118_101_fu_12408044_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3620_fu_12500337_p2() {
    add_ln703_3620_fu_12500337_p2 = (!sext_ln203_537_fu_12471716_p1.read().is_01() || !zext_ln708_812_fu_12471720_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_537_fu_12471716_p1.read()) + sc_biguint<10>(zext_ln708_812_fu_12471720_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3621_fu_12500347_p2() {
    add_ln703_3621_fu_12500347_p2 = (!sext_ln703_2068_fu_12500343_p1.read().is_01() || !sext_ln703_2067_fu_12500333_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2068_fu_12500343_p1.read()) + sc_bigint<13>(sext_ln703_2067_fu_12500333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3622_fu_12512247_p2() {
    add_ln703_3622_fu_12512247_p2 = (!add_ln703_3621_reg_12518997.read().is_01() || !sext_ln1118_1157_fu_12503353_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3621_reg_12518997.read()) + sc_bigint<13>(sext_ln1118_1157_fu_12503353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3623_fu_12500353_p2() {
    add_ln703_3623_fu_12500353_p2 = (!trunc_ln1118_147_fu_12471762_p4.read().is_01() || !zext_ln708_1551_fu_12471792_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_147_fu_12471762_p4.read()) + sc_biguint<9>(zext_ln708_1551_fu_12471792_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3624_fu_12512255_p2() {
    add_ln703_3624_fu_12512255_p2 = (!zext_ln703_565_fu_12512252_p1.read().is_01() || !add_ln703_3622_fu_12512247_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_565_fu_12512252_p1.read()) + sc_biguint<13>(add_ln703_3622_fu_12512247_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3625_fu_12500359_p2() {
    add_ln703_3625_fu_12500359_p2 = (!sext_ln1118_1158_fu_12471820_p1.read().is_01() || !sext_ln1118_1159_fu_12471834_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1158_fu_12471820_p1.read()) + sc_bigint<11>(sext_ln1118_1159_fu_12471834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3626_fu_12500369_p2() {
    add_ln703_3626_fu_12500369_p2 = (!zext_ln708_1552_fu_12471806_p1.read().is_01() || !sext_ln1118_1156_fu_12471758_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1552_fu_12471806_p1.read()) + sc_bigint<8>(sext_ln1118_1156_fu_12471758_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3627_fu_12500379_p2() {
    add_ln703_3627_fu_12500379_p2 = (!sext_ln703_2071_fu_12500375_p1.read().is_01() || !sext_ln703_2070_fu_12500365_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2071_fu_12500375_p1.read()) + sc_bigint<12>(sext_ln703_2070_fu_12500365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3628_fu_12512268_p2() {
    add_ln703_3628_fu_12512268_p2 = (!sext_ln703_2072_fu_12512265_p1.read().is_01() || !sext_ln703_2069_fu_12512261_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2072_fu_12512265_p1.read()) + sc_bigint<14>(sext_ln703_2069_fu_12512261_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3629_fu_12512274_p2() {
    add_ln703_3629_fu_12512274_p2 = (!add_ln703_3628_fu_12512268_p2.read().is_01() || !sext_ln1118_1160_fu_12503356_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3628_fu_12512268_p2.read()) + sc_bigint<14>(sext_ln1118_1160_fu_12503356_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_362_fu_12480057_p2() {
    add_ln703_362_fu_12480057_p2 = (!sext_ln708_21_fu_12409216_p1.read().is_01() || !zext_ln1118_970_fu_12409350_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_21_fu_12409216_p1.read()) + sc_biguint<11>(zext_ln1118_970_fu_12409350_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3630_fu_12500385_p2() {
    add_ln703_3630_fu_12500385_p2 = (!sext_ln1118_978_fu_12460478_p1.read().is_01() || !sext_ln203_463_fu_12462147_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_978_fu_12460478_p1.read()) + sc_bigint<12>(sext_ln203_463_fu_12462147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3631_fu_12512287_p2() {
    add_ln703_3631_fu_12512287_p2 = (!sext_ln703_2074_fu_12512284_p1.read().is_01() || !sext_ln1118_1164_fu_12503362_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2074_fu_12512284_p1.read()) + sc_bigint<13>(sext_ln1118_1164_fu_12503362_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3632_fu_12512297_p2() {
    add_ln703_3632_fu_12512297_p2 = (!sext_ln703_2075_fu_12512293_p1.read().is_01() || !sext_ln703_2073_fu_12512280_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2075_fu_12512293_p1.read()) + sc_bigint<15>(sext_ln703_2073_fu_12512280_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3633_fu_12500391_p2() {
    add_ln703_3633_fu_12500391_p2 = (!zext_ln708_1554_fu_12471900_p1.read().is_01() || !zext_ln708_1555_fu_12471914_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1554_fu_12471900_p1.read()) + sc_biguint<11>(zext_ln708_1555_fu_12471914_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3634_fu_12500397_p2() {
    add_ln703_3634_fu_12500397_p2 = (!add_ln703_3633_fu_12500391_p2.read().is_01() || !zext_ln708_1553_fu_12471858_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3633_fu_12500391_p2.read()) + sc_biguint<11>(zext_ln708_1553_fu_12471858_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3635_fu_12500407_p2() {
    add_ln703_3635_fu_12500407_p2 = (!sext_ln1118_1162_fu_12471886_p1.read().is_01() || !sext_ln1118_1161_fu_12471872_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1162_fu_12471886_p1.read()) + sc_bigint<11>(sext_ln1118_1161_fu_12471872_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3636_fu_12500417_p2() {
    add_ln703_3636_fu_12500417_p2 = (!sext_ln703_2076_fu_12500413_p1.read().is_01() || !zext_ln1118_3826_fu_12471918_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2076_fu_12500413_p1.read()) + sc_biguint<12>(zext_ln1118_3826_fu_12471918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3637_fu_12500427_p2() {
    add_ln703_3637_fu_12500427_p2 = (!sext_ln703_2077_fu_12500423_p1.read().is_01() || !zext_ln703_566_fu_12500403_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2077_fu_12500423_p1.read()) + sc_biguint<13>(zext_ln703_566_fu_12500403_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3638_fu_12512306_p2() {
    add_ln703_3638_fu_12512306_p2 = (!sext_ln703_2078_fu_12512303_p1.read().is_01() || !add_ln703_3632_fu_12512297_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2078_fu_12512303_p1.read()) + sc_biguint<15>(add_ln703_3632_fu_12512297_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3639_fu_12512312_p2() {
    add_ln703_3639_fu_12512312_p2 = (!add_ln703_3638_fu_12512306_p2.read().is_01() || !sext_ln203_540_fu_12503365_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3638_fu_12512306_p2.read()) + sc_bigint<15>(sext_ln203_540_fu_12503365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_363_fu_12480067_p2() {
    add_ln703_363_fu_12480067_p2 = (!sext_ln703_280_fu_12480063_p1.read().is_01() || !sext_ln703_279_fu_12480053_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_280_fu_12480063_p1.read()) + sc_bigint<12>(sext_ln703_279_fu_12480053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3640_fu_12500433_p2() {
    add_ln703_3640_fu_12500433_p2 = (!sext_ln203_542_fu_12472022_p1.read().is_01() || !zext_ln203_182_fu_12472070_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_542_fu_12472022_p1.read()) + sc_biguint<12>(zext_ln203_182_fu_12472070_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3641_fu_12512321_p2() {
    add_ln703_3641_fu_12512321_p2 = (!sext_ln703_2079_fu_12512318_p1.read().is_01() || !add_ln703_3639_fu_12512312_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2079_fu_12512318_p1.read()) + sc_biguint<15>(add_ln703_3639_fu_12512312_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3642_fu_12500439_p2() {
    add_ln703_3642_fu_12500439_p2 = (!sext_ln203_543_fu_12472036_p1.read().is_01() || !sext_ln203_538_fu_12471942_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_543_fu_12472036_p1.read()) + sc_bigint<10>(sext_ln203_538_fu_12471942_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3643_fu_12500449_p2() {
    add_ln703_3643_fu_12500449_p2 = (!sext_ln203_544_fu_12472056_p1.read().is_01() || !sext_ln203_541_fu_12472002_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_544_fu_12472056_p1.read()) + sc_bigint<9>(sext_ln203_541_fu_12472002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3644_fu_12500459_p2() {
    add_ln703_3644_fu_12500459_p2 = (!sext_ln703_2081_fu_12500455_p1.read().is_01() || !sext_ln203_539_fu_12471962_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2081_fu_12500455_p1.read()) + sc_bigint<10>(sext_ln203_539_fu_12471962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3645_fu_12500469_p2() {
    add_ln703_3645_fu_12500469_p2 = (!sext_ln703_2082_fu_12500465_p1.read().is_01() || !sext_ln703_2080_fu_12500445_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2082_fu_12500465_p1.read()) + sc_bigint<11>(sext_ln703_2080_fu_12500445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3647_fu_12500475_p2() {
    add_ln703_3647_fu_12500475_p2 = (!zext_ln708_1556_fu_12472094_p1.read().is_01() || !ap_const_lv11_450.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1556_fu_12472094_p1.read()) + sc_bigint<11>(ap_const_lv11_450));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3648_fu_12500485_p2() {
    add_ln703_3648_fu_12500485_p2 = (!zext_ln203_183_fu_12472146_p1.read().is_01() || !sext_ln203_545_fu_12472114_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_183_fu_12472146_p1.read()) + sc_bigint<12>(sext_ln203_545_fu_12472114_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3649_fu_12500491_p2() {
    add_ln703_3649_fu_12500491_p2 = (!add_ln703_3648_fu_12500485_p2.read().is_01() || !sext_ln703_515_fu_12500481_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3648_fu_12500485_p2.read()) + sc_bigint<12>(sext_ln703_515_fu_12500481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_364_fu_12504302_p2() {
    add_ln703_364_fu_12504302_p2 = (!sext_ln703_283_fu_12504299_p1.read().is_01() || !add_ln703_360_fu_12504293_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_283_fu_12504299_p1.read()) + sc_biguint<14>(add_ln703_360_fu_12504293_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3650_fu_12500497_p2() {
    add_ln703_3650_fu_12500497_p2 = (!add_ln703_3649_fu_12500491_p2.read().is_01() || !zext_ln1118_3829_fu_12472160_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3649_fu_12500491_p2.read()) + sc_biguint<12>(zext_ln1118_3829_fu_12472160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3651_fu_12500503_p2() {
    add_ln703_3651_fu_12500503_p2 = (!zext_ln1118_3831_fu_12472204_p1.read().is_01() || !sext_ln708_213_fu_12472180_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3831_fu_12472204_p1.read()) + sc_bigint<10>(sext_ln708_213_fu_12472180_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3652_fu_12500513_p2() {
    add_ln703_3652_fu_12500513_p2 = (!sext_ln703_2085_fu_12500509_p1.read().is_01() || !add_ln703_3650_fu_12500497_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2085_fu_12500509_p1.read()) + sc_biguint<12>(add_ln703_3650_fu_12500497_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3653_fu_12500523_p2() {
    add_ln703_3653_fu_12500523_p2 = (!sext_ln703_2086_fu_12500519_p1.read().is_01() || !zext_ln1118_3833_fu_12472232_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2086_fu_12500519_p1.read()) + sc_biguint<13>(zext_ln1118_3833_fu_12472232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3654_fu_12500529_p2() {
    add_ln703_3654_fu_12500529_p2 = (!zext_ln1118_3834_fu_12472274_p1.read().is_01() || !zext_ln1118_3835_fu_12472288_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3834_fu_12472274_p1.read()) + sc_biguint<10>(zext_ln1118_3835_fu_12472288_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3655_fu_12500539_p2() {
    add_ln703_3655_fu_12500539_p2 = (!zext_ln703_567_fu_12500535_p1.read().is_01() || !zext_ln708_1557_fu_12472246_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_567_fu_12500535_p1.read()) + sc_biguint<11>(zext_ln708_1557_fu_12472246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3656_fu_12500549_p2() {
    add_ln703_3656_fu_12500549_p2 = (!zext_ln703_568_fu_12500545_p1.read().is_01() || !add_ln703_3653_fu_12500523_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_568_fu_12500545_p1.read()) + sc_biguint<13>(add_ln703_3653_fu_12500523_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3657_fu_12500555_p2() {
    add_ln703_3657_fu_12500555_p2 = (!zext_ln1118_3838_fu_12472354_p1.read().is_01() || !zext_ln1116_324_fu_12472374_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3838_fu_12472354_p1.read()) + sc_biguint<10>(zext_ln1116_324_fu_12472374_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3658_fu_12500565_p2() {
    add_ln703_3658_fu_12500565_p2 = (!zext_ln1118_3836_fu_12472302_p1.read().is_01() || !sext_ln708_214_fu_12472228_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1118_3836_fu_12472302_p1.read()) + sc_bigint<6>(sext_ln708_214_fu_12472228_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3659_fu_12500575_p2() {
    add_ln703_3659_fu_12500575_p2 = (!sext_ln703_2088_fu_12500571_p1.read().is_01() || !sext_ln1118_1166_fu_12472334_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_2088_fu_12500571_p1.read()) + sc_bigint<9>(sext_ln1118_1166_fu_12472334_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_365_fu_12480073_p2() {
    add_ln703_365_fu_12480073_p2 = (!sext_ln1118_118_fu_12409170_p1.read().is_01() || !sext_ln708_22_fu_12409268_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_118_fu_12409170_p1.read()) + sc_bigint<10>(sext_ln708_22_fu_12409268_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3660_fu_12500585_p2() {
    add_ln703_3660_fu_12500585_p2 = (!sext_ln703_2089_fu_12500581_p1.read().is_01() || !zext_ln703_569_fu_12500561_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2089_fu_12500581_p1.read()) + sc_biguint<11>(zext_ln703_569_fu_12500561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3661_fu_12512346_p2() {
    add_ln703_3661_fu_12512346_p2 = (!sext_ln703_2090_fu_12512343_p1.read().is_01() || !sext_ln703_2087_fu_12512340_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2090_fu_12512343_p1.read()) + sc_bigint<14>(sext_ln703_2087_fu_12512340_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3662_fu_12512352_p2() {
    add_ln703_3662_fu_12512352_p2 = (!add_ln703_3661_fu_12512346_p2.read().is_01() || !sext_ln708_215_fu_12503368_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3661_fu_12512346_p2.read()) + sc_bigint<14>(sext_ln708_215_fu_12503368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3663_fu_12500591_p2() {
    add_ln703_3663_fu_12500591_p2 = (!zext_ln708_1559_fu_12472498_p1.read().is_01() || !trunc_ln1118_148_fu_12472552_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1559_fu_12472498_p1.read()) + sc_biguint<10>(trunc_ln1118_148_fu_12472552_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3664_fu_12500601_p2() {
    add_ln703_3664_fu_12500601_p2 = (!zext_ln703_570_fu_12500597_p1.read().is_01() || !zext_ln708_1558_fu_12472418_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_570_fu_12500597_p1.read()) + sc_biguint<11>(zext_ln708_1558_fu_12472418_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3665_fu_12512361_p2() {
    add_ln703_3665_fu_12512361_p2 = (!zext_ln703_571_fu_12512358_p1.read().is_01() || !add_ln703_3662_fu_12512352_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_571_fu_12512358_p1.read()) + sc_biguint<14>(add_ln703_3662_fu_12512352_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3666_fu_12500607_p2() {
    add_ln703_3666_fu_12500607_p2 = (!sext_ln1118_1169_fu_12472454_p1.read().is_01() || !sext_ln1118_1174_fu_12472592_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1169_fu_12472454_p1.read()) + sc_bigint<11>(sext_ln1118_1174_fu_12472592_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3667_fu_12500617_p2() {
    add_ln703_3667_fu_12500617_p2 = (!sext_ln1118_1167_fu_12472398_p1.read().is_01() || !sext_ln1118_1170_fu_12472484_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1167_fu_12472398_p1.read()) + sc_bigint<9>(sext_ln1118_1170_fu_12472484_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3668_fu_12500627_p2() {
    add_ln703_3668_fu_12500627_p2 = (!sext_ln703_2093_fu_12500623_p1.read().is_01() || !sext_ln1118_1172_fu_12472532_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2093_fu_12500623_p1.read()) + sc_bigint<10>(sext_ln1118_1172_fu_12472532_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3669_fu_12500637_p2() {
    add_ln703_3669_fu_12500637_p2 = (!sext_ln703_2094_fu_12500633_p1.read().is_01() || !sext_ln703_2092_fu_12500613_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2094_fu_12500633_p1.read()) + sc_bigint<12>(sext_ln703_2092_fu_12500613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_366_fu_12480083_p2() {
    add_ln703_366_fu_12480083_p2 = (!sext_ln1118_122_fu_12409394_p1.read().is_01() || !zext_ln1118_966_fu_12409230_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_122_fu_12409394_p1.read()) + sc_biguint<9>(zext_ln1118_966_fu_12409230_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3670_fu_12512374_p2() {
    add_ln703_3670_fu_12512374_p2 = (!sext_ln703_2095_fu_12512371_p1.read().is_01() || !sext_ln703_2091_fu_12512367_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2095_fu_12512371_p1.read()) + sc_bigint<15>(sext_ln703_2091_fu_12512367_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3671_fu_12512380_p2() {
    add_ln703_3671_fu_12512380_p2 = (!add_ln703_3670_fu_12512374_p2.read().is_01() || !zext_ln203_184_fu_12503371_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3670_fu_12512374_p2.read()) + sc_biguint<15>(zext_ln203_184_fu_12503371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3672_fu_12500643_p2() {
    add_ln703_3672_fu_12500643_p2 = (!sext_ln203_527_fu_12470918_p1.read().is_01() || !sext_ln203_549_fu_12472686_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_527_fu_12470918_p1.read()) + sc_bigint<11>(sext_ln203_549_fu_12472686_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3673_fu_12512389_p2() {
    add_ln703_3673_fu_12512389_p2 = (!sext_ln703_2096_fu_12512386_p1.read().is_01() || !add_ln703_3671_fu_12512380_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2096_fu_12512386_p1.read()) + sc_biguint<15>(add_ln703_3671_fu_12512380_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3674_fu_12500649_p2() {
    add_ln703_3674_fu_12500649_p2 = (!sext_ln203_546_fu_12472606_p1.read().is_01() || !sext_ln203_547_fu_12472620_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_546_fu_12472606_p1.read()) + sc_bigint<10>(sext_ln203_547_fu_12472620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3675_fu_12500659_p2() {
    add_ln703_3675_fu_12500659_p2 = (!sext_ln203_548_fu_12472644_p1.read().is_01() || !sext_ln203_534_fu_12471620_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_548_fu_12472644_p1.read()) + sc_bigint<9>(sext_ln203_534_fu_12471620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3676_fu_12500669_p2() {
    add_ln703_3676_fu_12500669_p2 = (!sext_ln703_2098_fu_12500665_p1.read().is_01() || !sext_ln703_2097_fu_12500655_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2098_fu_12500665_p1.read()) + sc_bigint<11>(sext_ln703_2097_fu_12500655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3678_fu_12500675_p2() {
    add_ln703_3678_fu_12500675_p2 = (!trunc_ln203_40_fu_12472708_p4.read().is_01() || !ap_const_lv9_1D8.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_40_fu_12472708_p4.read()) + sc_bigint<9>(ap_const_lv9_1D8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3679_fu_12500685_p2() {
    add_ln703_3679_fu_12500685_p2 = (!zext_ln708_1560_fu_12472734_p1.read().is_01() || !sext_ln703_520_fu_12500681_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1560_fu_12472734_p1.read()) + sc_bigint<11>(sext_ln703_520_fu_12500681_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_367_fu_12480093_p2() {
    add_ln703_367_fu_12480093_p2 = (!sext_ln703_286_fu_12480089_p1.read().is_01() || !sext_ln703_285_fu_12480079_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_286_fu_12480089_p1.read()) + sc_bigint<11>(sext_ln703_285_fu_12480079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3680_fu_12500695_p2() {
    add_ln703_3680_fu_12500695_p2 = (!sext_ln703_521_fu_12500691_p1.read().is_01() || !zext_ln203_186_fu_12472748_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_521_fu_12500691_p1.read()) + sc_biguint<12>(zext_ln203_186_fu_12472748_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3681_fu_12500705_p2() {
    add_ln703_3681_fu_12500705_p2 = (!zext_ln708_1561_fu_12472762_p1.read().is_01() || !trunc_ln708_3209_fu_12472766_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1561_fu_12472762_p1.read()) + sc_biguint<10>(trunc_ln708_3209_fu_12472766_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3682_fu_12500715_p2() {
    add_ln703_3682_fu_12500715_p2 = (!zext_ln703_572_fu_12500711_p1.read().is_01() || !sext_ln703_522_fu_12500701_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_572_fu_12500711_p1.read()) + sc_bigint<13>(sext_ln703_522_fu_12500701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3683_fu_12500721_p2() {
    add_ln703_3683_fu_12500721_p2 = (!zext_ln708_1562_fu_12472800_p1.read().is_01() || !sext_ln1118_1036_fu_12464461_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1562_fu_12472800_p1.read()) + sc_bigint<11>(sext_ln1118_1036_fu_12464461_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3684_fu_12500731_p2() {
    add_ln703_3684_fu_12500731_p2 = (!sext_ln703_2101_fu_12500727_p1.read().is_01() || !zext_ln1118_3846_fu_12472786_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2101_fu_12500727_p1.read()) + sc_biguint<12>(zext_ln1118_3846_fu_12472786_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3685_fu_12500741_p2() {
    add_ln703_3685_fu_12500741_p2 = (!sext_ln703_2102_fu_12500737_p1.read().is_01() || !add_ln703_3682_fu_12500715_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2102_fu_12500737_p1.read()) + sc_biguint<13>(add_ln703_3682_fu_12500715_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3686_fu_12500747_p2() {
    add_ln703_3686_fu_12500747_p2 = (!zext_ln1118_3848_fu_12472852_p1.read().is_01() || !trunc_ln1118_149_fu_12472884_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3848_fu_12472852_p1.read()) + sc_biguint<10>(trunc_ln1118_149_fu_12472884_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3687_fu_12512414_p2() {
    add_ln703_3687_fu_12512414_p2 = (!zext_ln703_573_fu_12512411_p1.read().is_01() || !sext_ln703_523_fu_12512408_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_573_fu_12512411_p1.read()) + sc_bigint<14>(sext_ln703_523_fu_12512408_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3688_fu_12500753_p2() {
    add_ln703_3688_fu_12500753_p2 = (!sext_ln708_216_fu_12472880_p1.read().is_01() || !sext_ln1118_1177_fu_12472838_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_216_fu_12472880_p1.read()) + sc_bigint<11>(sext_ln1118_1177_fu_12472838_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3689_fu_12500763_p2() {
    add_ln703_3689_fu_12500763_p2 = (!sext_ln703_2103_fu_12500759_p1.read().is_01() || !sext_ln1118_1176_fu_12472814_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2103_fu_12500759_p1.read()) + sc_bigint<12>(sext_ln1118_1176_fu_12472814_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_368_fu_12480099_p2() {
    add_ln703_368_fu_12480099_p2 = (!zext_ln708_1013_fu_12409282_p1.read().is_01() || !zext_ln708_1014_fu_12409316_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1013_fu_12409282_p1.read()) + sc_biguint<8>(zext_ln708_1014_fu_12409316_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3690_fu_12512423_p2() {
    add_ln703_3690_fu_12512423_p2 = (!sext_ln703_2104_fu_12512420_p1.read().is_01() || !add_ln703_3687_fu_12512414_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2104_fu_12512420_p1.read()) + sc_biguint<14>(add_ln703_3687_fu_12512414_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3691_fu_12512429_p2() {
    add_ln703_3691_fu_12512429_p2 = (!add_ln703_3690_fu_12512423_p2.read().is_01() || !sext_ln1118_1180_fu_12503374_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3690_fu_12512423_p2.read()) + sc_bigint<14>(sext_ln1118_1180_fu_12503374_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3692_fu_12500769_p2() {
    add_ln703_3692_fu_12500769_p2 = (!zext_ln1118_3852_fu_12472950_p1.read().is_01() || !zext_ln1118_3853_fu_12472964_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_3852_fu_12472950_p1.read()) + sc_biguint<9>(zext_ln1118_3853_fu_12472964_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3693_fu_12500779_p2() {
    add_ln703_3693_fu_12500779_p2 = (!zext_ln703_574_fu_12500775_p1.read().is_01() || !zext_ln203_445_fu_12472936_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_574_fu_12500775_p1.read()) + sc_biguint<10>(zext_ln203_445_fu_12472936_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3694_fu_12512438_p2() {
    add_ln703_3694_fu_12512438_p2 = (!zext_ln703_575_fu_12512435_p1.read().is_01() || !add_ln703_3691_fu_12512429_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_575_fu_12512435_p1.read()) + sc_biguint<14>(add_ln703_3691_fu_12512429_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3695_fu_12500785_p2() {
    add_ln703_3695_fu_12500785_p2 = (!sext_ln1118_1179_fu_12472922_p1.read().is_01() || !sext_ln1118_1169_fu_12472454_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1179_fu_12472922_p1.read()) + sc_bigint<11>(sext_ln1118_1169_fu_12472454_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3696_fu_12500795_p2() {
    add_ln703_3696_fu_12500795_p2 = (!sext_ln703_2106_fu_12500791_p1.read().is_01() || !zext_ln1118_3855_fu_12473024_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2106_fu_12500791_p1.read()) + sc_biguint<12>(zext_ln1118_3855_fu_12473024_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3697_fu_12500805_p2() {
    add_ln703_3697_fu_12500805_p2 = (!sext_ln708_217_fu_12473010_p1.read().is_01() || !sext_ln1118_1152_fu_12471416_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_217_fu_12473010_p1.read()) + sc_bigint<9>(sext_ln1118_1152_fu_12471416_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3698_fu_12500815_p2() {
    add_ln703_3698_fu_12500815_p2 = (!sext_ln703_2108_fu_12500811_p1.read().is_01() || !sext_ln1118_1181_fu_12472978_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2108_fu_12500811_p1.read()) + sc_bigint<11>(sext_ln1118_1181_fu_12472978_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3699_fu_12500825_p2() {
    add_ln703_3699_fu_12500825_p2 = (!sext_ln703_2109_fu_12500821_p1.read().is_01() || !sext_ln703_2107_fu_12500801_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2109_fu_12500821_p1.read()) + sc_bigint<13>(sext_ln703_2107_fu_12500801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_369_fu_12480109_p2() {
    add_ln703_369_fu_12480109_p2 = (!zext_ln708_1015_fu_12409330_p1.read().is_01() || !sext_ln708_23_fu_12409302_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln708_1015_fu_12409330_p1.read()) + sc_bigint<7>(sext_ln708_23_fu_12409302_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_36_fu_12478031_p2() {
    add_ln703_36_fu_12478031_p2 = (!sext_ln703_33_fu_12478027_p1.read().is_01() || !zext_ln708_954_fu_12401969_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_33_fu_12478027_p1.read()) + sc_biguint<11>(zext_ln708_954_fu_12401969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3700_fu_12512451_p2() {
    add_ln703_3700_fu_12512451_p2 = (!sext_ln703_2110_fu_12512448_p1.read().is_01() || !sext_ln703_2105_fu_12512444_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2110_fu_12512448_p1.read()) + sc_bigint<15>(sext_ln703_2105_fu_12512444_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3701_fu_12512457_p2() {
    add_ln703_3701_fu_12512457_p2 = (!add_ln703_3700_fu_12512451_p2.read().is_01() || !zext_ln203_187_fu_12503377_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3700_fu_12512451_p2.read()) + sc_biguint<15>(zext_ln203_187_fu_12503377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3702_fu_12500831_p2() {
    add_ln703_3702_fu_12500831_p2 = (!zext_ln708_1564_fu_12473106_p1.read().is_01() || !zext_ln708_1565_fu_12473120_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1564_fu_12473106_p1.read()) + sc_biguint<11>(zext_ln708_1565_fu_12473120_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3703_fu_12500837_p2() {
    add_ln703_3703_fu_12500837_p2 = (!add_ln703_3702_fu_12500831_p2.read().is_01() || !zext_ln708_1563_fu_12473092_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3702_fu_12500831_p2.read()) + sc_biguint<11>(zext_ln708_1563_fu_12473092_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3704_fu_12512466_p2() {
    add_ln703_3704_fu_12512466_p2 = (!zext_ln703_576_fu_12512463_p1.read().is_01() || !add_ln703_3701_fu_12512457_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_576_fu_12512463_p1.read()) + sc_biguint<15>(add_ln703_3701_fu_12512457_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3705_fu_12500843_p2() {
    add_ln703_3705_fu_12500843_p2 = (!zext_ln203_446_fu_12473140_p1.read().is_01() || !zext_ln203_447_fu_12473172_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_446_fu_12473140_p1.read()) + sc_biguint<10>(zext_ln203_447_fu_12473172_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3706_fu_12500853_p2() {
    add_ln703_3706_fu_12500853_p2 = (!sext_ln203_551_fu_12473068_p1.read().is_01() || !sext_ln203_552_fu_12473192_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_551_fu_12473068_p1.read()) + sc_bigint<9>(sext_ln203_552_fu_12473192_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3707_fu_12500863_p2() {
    add_ln703_3707_fu_12500863_p2 = (!sext_ln703_2111_fu_12500859_p1.read().is_01() || !sext_ln203_550_fu_12473038_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2111_fu_12500859_p1.read()) + sc_bigint<11>(sext_ln203_550_fu_12473038_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3708_fu_12500873_p2() {
    add_ln703_3708_fu_12500873_p2 = (!sext_ln703_2112_fu_12500869_p1.read().is_01() || !zext_ln703_577_fu_12500849_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2112_fu_12500869_p1.read()) + sc_biguint<12>(zext_ln703_577_fu_12500849_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_370_fu_12480119_p2() {
    add_ln703_370_fu_12480119_p2 = (!sext_ln703_287_fu_12480115_p1.read().is_01() || !zext_ln703_68_fu_12480105_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_287_fu_12480115_p1.read()) + sc_biguint<9>(zext_ln703_68_fu_12480105_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3710_fu_12500879_p2() {
    add_ln703_3710_fu_12500879_p2 = (!trunc_ln203_41_fu_12473210_p4.read().is_01() || !ap_const_lv8_98.is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln203_41_fu_12473210_p4.read()) + sc_bigint<8>(ap_const_lv8_98));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3711_fu_12500889_p2() {
    add_ln703_3711_fu_12500889_p2 = (!sext_ln203_553_fu_12473220_p1.read().is_01() || !sext_ln703_526_fu_12500885_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_553_fu_12473220_p1.read()) + sc_bigint<12>(sext_ln703_526_fu_12500885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3712_fu_12500899_p2() {
    add_ln703_3712_fu_12500899_p2 = (!sext_ln1118_1182_fu_12473234_p1.read().is_01() || !sext_ln1118_1184_fu_12473270_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1182_fu_12473234_p1.read()) + sc_bigint<11>(sext_ln1118_1184_fu_12473270_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3713_fu_12500909_p2() {
    add_ln703_3713_fu_12500909_p2 = (!sext_ln703_2115_fu_12500905_p1.read().is_01() || !sext_ln703_527_fu_12500895_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2115_fu_12500905_p1.read()) + sc_bigint<13>(sext_ln703_527_fu_12500895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3714_fu_12500915_p2() {
    add_ln703_3714_fu_12500915_p2 = (!add_ln703_3713_fu_12500909_p2.read().is_01() || !zext_ln1118_3861_fu_12473314_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3713_fu_12500909_p2.read()) + sc_biguint<13>(zext_ln1118_3861_fu_12473314_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3715_fu_12500921_p2() {
    add_ln703_3715_fu_12500921_p2 = (!zext_ln1118_3862_fu_12473328_p1.read().is_01() || !zext_ln1116_317_fu_12467785_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3862_fu_12473328_p1.read()) + sc_biguint<10>(zext_ln1116_317_fu_12467785_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3716_fu_12500931_p2() {
    add_ln703_3716_fu_12500931_p2 = (!zext_ln703_578_fu_12500927_p1.read().is_01() || !add_ln703_3714_fu_12500915_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_578_fu_12500927_p1.read()) + sc_biguint<13>(add_ln703_3714_fu_12500915_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3717_fu_12500937_p2() {
    add_ln703_3717_fu_12500937_p2 = (!zext_ln708_1567_fu_12473362_p1.read().is_01() || !sext_ln1118_1188_fu_12473348_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1567_fu_12473362_p1.read()) + sc_bigint<11>(sext_ln1118_1188_fu_12473348_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3718_fu_12500947_p2() {
    add_ln703_3718_fu_12500947_p2 = (!sext_ln708_218_fu_12473290_p1.read().is_01() || !sext_ln1116_101_fu_12465331_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_218_fu_12473290_p1.read()) + sc_bigint<10>(sext_ln1116_101_fu_12465331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3719_fu_12500957_p2() {
    add_ln703_3719_fu_12500957_p2 = (!sext_ln703_2118_fu_12500953_p1.read().is_01() || !sext_ln703_2117_fu_12500943_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2118_fu_12500953_p1.read()) + sc_bigint<12>(sext_ln703_2117_fu_12500943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_371_fu_12480129_p2() {
    add_ln703_371_fu_12480129_p2 = (!sext_ln703_288_fu_12480125_p1.read().is_01() || !add_ln703_367_fu_12480093_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_288_fu_12480125_p1.read()) + sc_biguint<11>(add_ln703_367_fu_12480093_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3720_fu_12512491_p2() {
    add_ln703_3720_fu_12512491_p2 = (!sext_ln703_2119_fu_12512488_p1.read().is_01() || !sext_ln703_2116_fu_12512485_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2119_fu_12512488_p1.read()) + sc_bigint<14>(sext_ln703_2116_fu_12512485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3721_fu_12512497_p2() {
    add_ln703_3721_fu_12512497_p2 = (!add_ln703_3720_fu_12512491_p2.read().is_01() || !sext_ln1118_1190_fu_12503383_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3720_fu_12512491_p2.read()) + sc_bigint<14>(sext_ln1118_1190_fu_12503383_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3722_fu_12500963_p2() {
    add_ln703_3722_fu_12500963_p2 = (!sext_ln1118_1194_fu_12473456_p1.read().is_01() || !sext_ln1118_1195_fu_12473470_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1194_fu_12473456_p1.read()) + sc_bigint<12>(sext_ln1118_1195_fu_12473470_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3723_fu_12500973_p2() {
    add_ln703_3723_fu_12500973_p2 = (!sext_ln703_2121_fu_12500969_p1.read().is_01() || !sext_ln1118_1193_fu_12473442_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2121_fu_12500969_p1.read()) + sc_bigint<13>(sext_ln1118_1193_fu_12473442_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3724_fu_12512510_p2() {
    add_ln703_3724_fu_12512510_p2 = (!sext_ln703_2122_fu_12512507_p1.read().is_01() || !sext_ln703_2120_fu_12512503_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2122_fu_12512507_p1.read()) + sc_bigint<15>(sext_ln703_2120_fu_12512503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3725_fu_12500979_p2() {
    add_ln703_3725_fu_12500979_p2 = (!sext_ln1118_1197_fu_12473504_p1.read().is_01() || !sext_ln1118_978_fu_12460478_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1197_fu_12473504_p1.read()) + sc_bigint<12>(sext_ln1118_978_fu_12460478_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3726_fu_12500989_p2() {
    add_ln703_3726_fu_12500989_p2 = (!sext_ln1118_1191_fu_12473414_p1.read().is_01() || !sext_ln1118_1196_fu_12473490_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1191_fu_12473414_p1.read()) + sc_bigint<9>(sext_ln1118_1196_fu_12473490_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3727_fu_12500999_p2() {
    add_ln703_3727_fu_12500999_p2 = (!sext_ln703_2124_fu_12500995_p1.read().is_01() || !zext_ln1118_3866_fu_12473518_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2124_fu_12500995_p1.read()) + sc_biguint<10>(zext_ln1118_3866_fu_12473518_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3728_fu_12501009_p2() {
    add_ln703_3728_fu_12501009_p2 = (!sext_ln703_2125_fu_12501005_p1.read().is_01() || !sext_ln703_2123_fu_12500985_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2125_fu_12501005_p1.read()) + sc_bigint<13>(sext_ln703_2123_fu_12500985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3729_fu_12512519_p2() {
    add_ln703_3729_fu_12512519_p2 = (!sext_ln703_2126_fu_12512516_p1.read().is_01() || !add_ln703_3724_fu_12512510_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2126_fu_12512516_p1.read()) + sc_biguint<15>(add_ln703_3724_fu_12512510_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_372_fu_12504315_p2() {
    add_ln703_372_fu_12504315_p2 = (!sext_ln703_289_fu_12504312_p1.read().is_01() || !sext_ln703_284_fu_12504308_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_289_fu_12504312_p1.read()) + sc_bigint<15>(sext_ln703_284_fu_12504308_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3730_fu_12501015_p2() {
    add_ln703_3730_fu_12501015_p2 = (!sext_ln203_555_fu_12473572_p1.read().is_01() || !sext_ln203_556_fu_12473638_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_555_fu_12473572_p1.read()) + sc_bigint<12>(sext_ln203_556_fu_12473638_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3731_fu_12512528_p2() {
    add_ln703_3731_fu_12512528_p2 = (!sext_ln703_2127_fu_12512525_p1.read().is_01() || !add_ln703_3729_fu_12512519_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2127_fu_12512525_p1.read()) + sc_biguint<15>(add_ln703_3729_fu_12512519_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3732_fu_12501021_p2() {
    add_ln703_3732_fu_12501021_p2 = (!trunc_ln203_69_fu_12473576_p4.read().is_01() || !zext_ln203_448_fu_12473596_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_69_fu_12473576_p4.read()) + sc_biguint<10>(zext_ln203_448_fu_12473596_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3733_fu_12501031_p2() {
    add_ln703_3733_fu_12501031_p2 = (!zext_ln703_579_fu_12501027_p1.read().is_01() || !sext_ln203_557_fu_12473694_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_579_fu_12501027_p1.read()) + sc_bigint<12>(sext_ln203_557_fu_12473694_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3734_fu_12512537_p2() {
    add_ln703_3734_fu_12512537_p2 = (!sext_ln703_2128_fu_12512534_p1.read().is_01() || !add_ln703_3731_fu_12512528_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2128_fu_12512534_p1.read()) + sc_biguint<15>(add_ln703_3731_fu_12512528_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3735_fu_12501037_p2() {
    add_ln703_3735_fu_12501037_p2 = (!zext_ln708_1569_fu_12473624_p1.read().is_01() || !zext_ln708_1491_fu_12465749_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1569_fu_12473624_p1.read()) + sc_biguint<11>(zext_ln708_1491_fu_12465749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3736_fu_12501043_p2() {
    add_ln703_3736_fu_12501043_p2 = (!add_ln703_3735_fu_12501037_p2.read().is_01() || !zext_ln708_1568_fu_12473610_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3735_fu_12501037_p2.read()) + sc_biguint<11>(zext_ln708_1568_fu_12473610_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3737_fu_12501053_p2() {
    add_ln703_3737_fu_12501053_p2 = (!zext_ln708_1570_fu_12473708_p1.read().is_01() || !sext_ln203_554_fu_12473552_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1570_fu_12473708_p1.read()) + sc_bigint<11>(sext_ln203_554_fu_12473552_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3738_fu_12501063_p2() {
    add_ln703_3738_fu_12501063_p2 = (!sext_ln703_2130_fu_12501059_p1.read().is_01() || !zext_ln203_188_fu_12473670_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2130_fu_12501059_p1.read()) + sc_biguint<12>(zext_ln203_188_fu_12473670_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3739_fu_12501073_p2() {
    add_ln703_3739_fu_12501073_p2 = (!sext_ln703_2131_fu_12501069_p1.read().is_01() || !zext_ln703_580_fu_12501049_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2131_fu_12501069_p1.read()) + sc_biguint<13>(zext_ln703_580_fu_12501049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_373_fu_12480135_p2() {
    add_ln703_373_fu_12480135_p2 = (!sext_ln203_49_fu_12409466_p1.read().is_01() || !zext_ln203_20_fu_12409438_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_49_fu_12409466_p1.read()) + sc_biguint<11>(zext_ln203_20_fu_12409438_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3741_fu_12501079_p2() {
    add_ln703_3741_fu_12501079_p2 = (!zext_ln708_1571_fu_12473736_p1.read().is_01() || !ap_const_lv11_5F8.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1571_fu_12473736_p1.read()) + sc_bigint<11>(ap_const_lv11_5F8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3742_fu_12501089_p2() {
    add_ln703_3742_fu_12501089_p2 = (!sext_ln703_2133_fu_12501085_p1.read().is_01() || !sext_ln203_558_fu_12473722_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2133_fu_12501085_p1.read()) + sc_bigint<12>(sext_ln203_558_fu_12473722_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3743_fu_12501099_p2() {
    add_ln703_3743_fu_12501099_p2 = (!sext_ln1118_1182_fu_12473234_p1.read().is_01() || !sext_ln203_559_fu_12473756_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1182_fu_12473234_p1.read()) + sc_bigint<11>(sext_ln203_559_fu_12473756_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3744_fu_12501109_p2() {
    add_ln703_3744_fu_12501109_p2 = (!sext_ln703_2134_fu_12501105_p1.read().is_01() || !sext_ln703_531_fu_12501095_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2134_fu_12501105_p1.read()) + sc_bigint<13>(sext_ln703_531_fu_12501095_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3745_fu_12501115_p2() {
    add_ln703_3745_fu_12501115_p2 = (!add_ln703_3744_fu_12501109_p2.read().is_01() || !zext_ln1118_3871_fu_12473780_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3744_fu_12501109_p2.read()) + sc_biguint<13>(zext_ln1118_3871_fu_12473780_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3746_fu_12501121_p2() {
    add_ln703_3746_fu_12501121_p2 = (!zext_ln708_1566_fu_12473310_p1.read().is_01() || !zext_ln708_1572_fu_12473804_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1566_fu_12473310_p1.read()) + sc_biguint<11>(zext_ln708_1572_fu_12473804_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3747_fu_12512559_p2() {
    add_ln703_3747_fu_12512559_p2 = (!zext_ln703_581_fu_12512556_p1.read().is_01() || !add_ln703_3745_reg_12519132.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_581_fu_12512556_p1.read()) + sc_biguint<13>(add_ln703_3745_reg_12519132.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3748_fu_12501127_p2() {
    add_ln703_3748_fu_12501127_p2 = (!zext_ln1118_3874_fu_12473828_p1.read().is_01() || !sext_ln1118_1203_fu_12473848_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3874_fu_12473828_p1.read()) + sc_bigint<10>(sext_ln1118_1203_fu_12473848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3749_fu_12501137_p2() {
    add_ln703_3749_fu_12501137_p2 = (!sext_ln1118_1204_fu_12473872_p1.read().is_01() || !sext_ln708_213_fu_12472180_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1204_fu_12473872_p1.read()) + sc_bigint<10>(sext_ln708_213_fu_12472180_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_374_fu_12504324_p2() {
    add_ln703_374_fu_12504324_p2 = (!sext_ln703_290_fu_12504321_p1.read().is_01() || !add_ln703_372_fu_12504315_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_290_fu_12504321_p1.read()) + sc_biguint<15>(add_ln703_372_fu_12504315_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3750_fu_12501147_p2() {
    add_ln703_3750_fu_12501147_p2 = (!sext_ln703_2136_fu_12501143_p1.read().is_01() || !sext_ln703_2135_fu_12501133_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2136_fu_12501143_p1.read()) + sc_bigint<11>(sext_ln703_2135_fu_12501133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3751_fu_12512567_p2() {
    add_ln703_3751_fu_12512567_p2 = (!sext_ln703_2137_fu_12512564_p1.read().is_01() || !add_ln703_3747_fu_12512559_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2137_fu_12512564_p1.read()) + sc_biguint<13>(add_ln703_3747_fu_12512559_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3752_fu_12512577_p2() {
    add_ln703_3752_fu_12512577_p2 = (!sext_ln1118_1189_fu_12503380_p1.read().is_01() || !sext_ln1118_1163_fu_12503359_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1189_fu_12503380_p1.read()) + sc_bigint<12>(sext_ln1118_1163_fu_12503359_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3753_fu_12512587_p2() {
    add_ln703_3753_fu_12512587_p2 = (!sext_ln703_2139_fu_12512583_p1.read().is_01() || !sext_ln703_2138_fu_12512573_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2139_fu_12512583_p1.read()) + sc_bigint<14>(sext_ln703_2138_fu_12512573_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3754_fu_12501153_p2() {
    add_ln703_3754_fu_12501153_p2 = (!zext_ln1118_3877_fu_12473896_p1.read().is_01() || !trunc_ln1118_150_fu_12473900_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3877_fu_12473896_p1.read()) + sc_biguint<10>(trunc_ln1118_150_fu_12473900_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3755_fu_12501163_p2() {
    add_ln703_3755_fu_12501163_p2 = (!zext_ln703_582_fu_12501159_p1.read().is_01() || !sext_ln708_219_fu_12474034_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_582_fu_12501159_p1.read()) + sc_bigint<12>(sext_ln708_219_fu_12474034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3756_fu_12512596_p2() {
    add_ln703_3756_fu_12512596_p2 = (!sext_ln703_2140_fu_12512593_p1.read().is_01() || !add_ln703_3753_fu_12512587_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2140_fu_12512593_p1.read()) + sc_biguint<14>(add_ln703_3753_fu_12512587_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3757_fu_12501169_p2() {
    add_ln703_3757_fu_12501169_p2 = (!zext_ln708_1574_fu_12474054_p1.read().is_01() || !zext_ln708_1575_fu_12474068_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1574_fu_12474054_p1.read()) + sc_biguint<11>(zext_ln708_1575_fu_12474068_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3758_fu_12501175_p2() {
    add_ln703_3758_fu_12501175_p2 = (!add_ln703_3757_fu_12501169_p2.read().is_01() || !zext_ln708_1573_fu_12473962_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3757_fu_12501169_p2.read()) + sc_biguint<11>(zext_ln708_1573_fu_12473962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3759_fu_12501185_p2() {
    add_ln703_3759_fu_12501185_p2 = (!sext_ln1118_1209_fu_12474000_p1.read().is_01() || !sext_ln1118_1206_fu_12473948_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1209_fu_12474000_p1.read()) + sc_bigint<11>(sext_ln1118_1206_fu_12473948_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_375_fu_12480141_p2() {
    add_ln703_375_fu_12480141_p2 = (!sext_ln203_48_fu_12409418_p1.read().is_01() || !zext_ln203_21_fu_12409452_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_48_fu_12409418_p1.read()) + sc_biguint<9>(zext_ln203_21_fu_12409452_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3760_fu_12501195_p2() {
    add_ln703_3760_fu_12501195_p2 = (!sext_ln703_2142_fu_12501191_p1.read().is_01() || !sext_ln1118_1208_fu_12473986_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2142_fu_12501191_p1.read()) + sc_bigint<12>(sext_ln1118_1208_fu_12473986_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3761_fu_12501205_p2() {
    add_ln703_3761_fu_12501205_p2 = (!sext_ln703_2143_fu_12501201_p1.read().is_01() || !zext_ln703_583_fu_12501181_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2143_fu_12501201_p1.read()) + sc_biguint<13>(zext_ln703_583_fu_12501181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3762_fu_12512609_p2() {
    add_ln703_3762_fu_12512609_p2 = (!sext_ln703_2144_fu_12512606_p1.read().is_01() || !sext_ln703_2141_fu_12512602_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2144_fu_12512606_p1.read()) + sc_bigint<15>(sext_ln703_2141_fu_12512602_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3763_fu_12512615_p2() {
    add_ln703_3763_fu_12512615_p2 = (!add_ln703_3762_fu_12512609_p2.read().is_01() || !sext_ln203_560_fu_12503386_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3762_fu_12512609_p2.read()) + sc_bigint<15>(sext_ln203_560_fu_12503386_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3764_fu_12501211_p2() {
    add_ln703_3764_fu_12501211_p2 = (!zext_ln708_1576_fu_12474096_p1.read().is_01() || !zext_ln708_1578_fu_12474172_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1576_fu_12474096_p1.read()) + sc_biguint<11>(zext_ln708_1578_fu_12474172_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3765_fu_12501221_p2() {
    add_ln703_3765_fu_12501221_p2 = (!zext_ln703_584_fu_12501217_p1.read().is_01() || !sext_ln203_563_fu_12474204_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_584_fu_12501217_p1.read()) + sc_bigint<13>(sext_ln203_563_fu_12474204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3766_fu_12512624_p2() {
    add_ln703_3766_fu_12512624_p2 = (!sext_ln703_2145_fu_12512621_p1.read().is_01() || !add_ln703_3763_fu_12512615_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2145_fu_12512621_p1.read()) + sc_biguint<15>(add_ln703_3763_fu_12512615_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3767_fu_12501227_p2() {
    add_ln703_3767_fu_12501227_p2 = (!sext_ln203_493_fu_12466428_p1.read().is_01() || !sext_ln203_564_fu_12474218_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_493_fu_12466428_p1.read()) + sc_bigint<11>(sext_ln203_564_fu_12474218_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3768_fu_12501237_p2() {
    add_ln703_3768_fu_12501237_p2 = (!zext_ln708_1577_fu_12474110_p1.read().is_01() || !sext_ln203_561_fu_12474144_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1577_fu_12474110_p1.read()) + sc_bigint<8>(sext_ln203_561_fu_12474144_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3769_fu_12501247_p2() {
    add_ln703_3769_fu_12501247_p2 = (!sext_ln703_2147_fu_12501243_p1.read().is_01() || !zext_ln203_189_fu_12474082_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2147_fu_12501243_p1.read()) + sc_biguint<11>(zext_ln203_189_fu_12474082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_376_fu_12480151_p2() {
    add_ln703_376_fu_12480151_p2 = (!sext_ln703_294_fu_12480147_p1.read().is_01() || !sext_ln203_50_fu_12409500_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_294_fu_12480147_p1.read()) + sc_bigint<10>(sext_ln203_50_fu_12409500_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3770_fu_12501257_p2() {
    add_ln703_3770_fu_12501257_p2 = (!sext_ln703_2148_fu_12501253_p1.read().is_01() || !sext_ln703_2146_fu_12501233_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2148_fu_12501253_p1.read()) + sc_bigint<12>(sext_ln703_2146_fu_12501233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3772_fu_12501263_p2() {
    add_ln703_3772_fu_12501263_p2 = (!zext_ln1116_325_fu_12474272_p1.read().is_01() || !trunc_ln1118_151_fu_12474282_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_325_fu_12474272_p1.read()) + sc_biguint<10>(trunc_ln1118_151_fu_12474282_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3773_fu_12501273_p2() {
    add_ln703_3773_fu_12501273_p2 = (!zext_ln703_585_fu_12501269_p1.read().is_01() || !ap_const_lv11_560.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_585_fu_12501269_p1.read()) + sc_bigint<11>(ap_const_lv11_560));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3774_fu_12501283_p2() {
    add_ln703_3774_fu_12501283_p2 = (!zext_ln1116_326_fu_12474306_p1.read().is_01() || !sext_ln1116_117_fu_12474252_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_326_fu_12474306_p1.read()) + sc_bigint<10>(sext_ln1116_117_fu_12474252_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3775_fu_12501293_p2() {
    add_ln703_3775_fu_12501293_p2 = (!sext_ln703_2152_fu_12501289_p1.read().is_01() || !zext_ln708_1579_fu_12474302_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2152_fu_12501289_p1.read()) + sc_biguint<11>(zext_ln708_1579_fu_12474302_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3776_fu_12501303_p2() {
    add_ln703_3776_fu_12501303_p2 = (!sext_ln703_2153_fu_12501299_p1.read().is_01() || !sext_ln703_2151_fu_12501279_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2153_fu_12501299_p1.read()) + sc_bigint<12>(sext_ln703_2151_fu_12501279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3777_fu_12501309_p2() {
    add_ln703_3777_fu_12501309_p2 = (!add_ln703_3776_fu_12501303_p2.read().is_01() || !zext_ln708_834_fu_12474310_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3776_fu_12501303_p2.read()) + sc_biguint<12>(zext_ln708_834_fu_12474310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3778_fu_12501315_p2() {
    add_ln703_3778_fu_12501315_p2 = (!zext_ln1118_3806_fu_12471124_p1.read().is_01() || !zext_ln1116_327_fu_12474330_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3806_fu_12471124_p1.read()) + sc_biguint<10>(zext_ln1116_327_fu_12474330_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3779_fu_12512649_p2() {
    add_ln703_3779_fu_12512649_p2 = (!zext_ln703_586_fu_12512646_p1.read().is_01() || !sext_ln703_2154_fu_12512643_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_586_fu_12512646_p1.read()) + sc_bigint<13>(sext_ln703_2154_fu_12512643_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3780_fu_12512655_p2() {
    add_ln703_3780_fu_12512655_p2 = (!add_ln703_3779_fu_12512649_p2.read().is_01() || !zext_ln1118_3884_fu_12503389_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3779_fu_12512649_p2.read()) + sc_biguint<13>(zext_ln1118_3884_fu_12503389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3781_fu_12501321_p2() {
    add_ln703_3781_fu_12501321_p2 = (!zext_ln708_1580_fu_12474402_p1.read().is_01() || !sext_ln1118_1214_fu_12474360_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1580_fu_12474402_p1.read()) + sc_bigint<11>(sext_ln1118_1214_fu_12474360_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3782_fu_12512664_p2() {
    add_ln703_3782_fu_12512664_p2 = (!sext_ln703_2155_fu_12512661_p1.read().is_01() || !add_ln703_3780_fu_12512655_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2155_fu_12512661_p1.read()) + sc_biguint<13>(add_ln703_3780_fu_12512655_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3783_fu_12501327_p2() {
    add_ln703_3783_fu_12501327_p2 = (!sext_ln708_220_fu_12474388_p1.read().is_01() || !zext_ln708_836_fu_12474374_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_220_fu_12474388_p1.read()) + sc_biguint<11>(zext_ln708_836_fu_12474374_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3784_fu_12501333_p2() {
    add_ln703_3784_fu_12501333_p2 = (!sext_ln1116_118_fu_12474416_p1.read().is_01() || !zext_ln1118_3446_fu_12458961_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_118_fu_12474416_p1.read()) + sc_biguint<10>(zext_ln1118_3446_fu_12458961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3785_fu_12501343_p2() {
    add_ln703_3785_fu_12501343_p2 = (!sext_ln703_2157_fu_12501339_p1.read().is_01() || !add_ln703_3783_fu_12501327_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2157_fu_12501339_p1.read()) + sc_biguint<11>(add_ln703_3783_fu_12501327_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3786_fu_12512677_p2() {
    add_ln703_3786_fu_12512677_p2 = (!sext_ln703_2158_fu_12512674_p1.read().is_01() || !sext_ln703_2156_fu_12512670_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2158_fu_12512674_p1.read()) + sc_bigint<14>(sext_ln703_2156_fu_12512670_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3787_fu_12512683_p2() {
    add_ln703_3787_fu_12512683_p2 = (!sext_ln1118_1057_fu_12503311_p1.read().is_01() || !sext_ln1116_121_fu_12503392_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1057_fu_12503311_p1.read()) + sc_bigint<12>(sext_ln1116_121_fu_12503392_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3788_fu_12512693_p2() {
    add_ln703_3788_fu_12512693_p2 = (!sext_ln703_2159_fu_12512689_p1.read().is_01() || !add_ln703_3786_fu_12512677_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2159_fu_12512689_p1.read()) + sc_biguint<14>(add_ln703_3786_fu_12512677_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3789_fu_12501349_p2() {
    add_ln703_3789_fu_12501349_p2 = (!sext_ln1118_1218_fu_12474522_p1.read().is_01() || !zext_ln708_837_fu_12474420_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1218_fu_12474522_p1.read()) + sc_biguint<12>(zext_ln708_837_fu_12474420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_378_fu_12480157_p2() {
    add_ln703_378_fu_12480157_p2 = (!zext_ln203_340_fu_12409514_p1.read().is_01() || !ap_const_lv9_140.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_340_fu_12409514_p1.read()) + sc_bigint<9>(ap_const_lv9_140));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3790_fu_12501355_p2() {
    add_ln703_3790_fu_12501355_p2 = (!zext_ln1116_328_fu_12474458_p1.read().is_01() || !zext_ln1116_329_fu_12474541_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_328_fu_12474458_p1.read()) + sc_biguint<10>(zext_ln1116_329_fu_12474541_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3791_fu_12501365_p2() {
    add_ln703_3791_fu_12501365_p2 = (!zext_ln703_587_fu_12501361_p1.read().is_01() || !add_ln703_3789_fu_12501349_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_587_fu_12501361_p1.read()) + sc_biguint<12>(add_ln703_3789_fu_12501349_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3792_fu_12512706_p2() {
    add_ln703_3792_fu_12512706_p2 = (!sext_ln703_2161_fu_12512703_p1.read().is_01() || !sext_ln703_2160_fu_12512699_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2161_fu_12512703_p1.read()) + sc_bigint<15>(sext_ln703_2160_fu_12512699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3793_fu_12501371_p2() {
    add_ln703_3793_fu_12501371_p2 = (!zext_ln1116_331_fu_12474565_p1.read().is_01() || !trunc_ln1118_152_fu_12474580_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_331_fu_12474565_p1.read()) + sc_biguint<9>(trunc_ln1118_152_fu_12474580_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3794_fu_12501381_p2() {
    add_ln703_3794_fu_12501381_p2 = (!zext_ln708_1492_fu_12465781_p1.read().is_01() || !sext_ln1118_1216_fu_12474444_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1492_fu_12465781_p1.read()) + sc_bigint<11>(sext_ln1118_1216_fu_12474444_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3795_fu_12501391_p2() {
    add_ln703_3795_fu_12501391_p2 = (!sext_ln703_2162_fu_12501387_p1.read().is_01() || !zext_ln703_588_fu_12501377_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2162_fu_12501387_p1.read()) + sc_biguint<12>(zext_ln703_588_fu_12501377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3796_fu_12501397_p2() {
    add_ln703_3796_fu_12501397_p2 = (!sext_ln1118_1167_fu_12472398_p1.read().is_01() || !sext_ln1116_120_fu_12474492_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1167_fu_12472398_p1.read()) + sc_bigint<9>(sext_ln1116_120_fu_12474492_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3797_fu_12501407_p2() {
    add_ln703_3797_fu_12501407_p2 = (!zext_ln203_161_fu_12463669_p1.read().is_01() || !zext_ln1118_3477_fu_12459697_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_161_fu_12463669_p1.read()) + sc_biguint<9>(zext_ln1118_3477_fu_12459697_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3798_fu_12501417_p2() {
    add_ln703_3798_fu_12501417_p2 = (!zext_ln703_589_fu_12501413_p1.read().is_01() || !sext_ln703_2163_fu_12501403_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_589_fu_12501413_p1.read()) + sc_bigint<11>(sext_ln703_2163_fu_12501403_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3799_fu_12501427_p2() {
    add_ln703_3799_fu_12501427_p2 = (!sext_ln703_2164_fu_12501423_p1.read().is_01() || !add_ln703_3795_fu_12501391_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2164_fu_12501423_p1.read()) + sc_biguint<12>(add_ln703_3795_fu_12501391_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_379_fu_12480167_p2() {
    add_ln703_379_fu_12480167_p2 = (!sext_ln203_51_fu_12409528_p1.read().is_01() || !zext_ln703_1_fu_12480163_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_51_fu_12409528_p1.read()) + sc_biguint<12>(zext_ln703_1_fu_12480163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_37_fu_12478041_p2() {
    add_ln703_37_fu_12478041_p2 = (!sext_ln703_34_fu_12478037_p1.read().is_01() || !add_ln703_34_fu_12478015_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_34_fu_12478037_p1.read()) + sc_biguint<13>(add_ln703_34_fu_12478015_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3800_fu_12512715_p2() {
    add_ln703_3800_fu_12512715_p2 = (!sext_ln703_2165_fu_12512712_p1.read().is_01() || !add_ln703_3792_fu_12512706_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2165_fu_12512712_p1.read()) + sc_biguint<15>(add_ln703_3792_fu_12512706_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3801_fu_12501433_p2() {
    add_ln703_3801_fu_12501433_p2 = (!sext_ln203_565_fu_12474600_p1.read().is_01() || !sext_ln203_566_fu_12474604_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_565_fu_12474600_p1.read()) + sc_bigint<12>(sext_ln203_566_fu_12474604_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3803_fu_12501439_p2() {
    add_ln703_3803_fu_12501439_p2 = (!sext_ln203_567_fu_12474618_p1.read().is_01() || !ap_const_lv12_D60.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_567_fu_12474618_p1.read()) + sc_bigint<12>(ap_const_lv12_D60));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3804_fu_12501449_p2() {
    add_ln703_3804_fu_12501449_p2 = (!sext_ln703_539_fu_12501445_p1.read().is_01() || !sext_ln203_480_fu_12463839_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_539_fu_12501445_p1.read()) + sc_bigint<13>(sext_ln203_480_fu_12463839_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3805_fu_12501455_p2() {
    add_ln703_3805_fu_12501455_p2 = (!sext_ln1118_1219_fu_12474646_p1.read().is_01() || !zext_ln1118_3891_fu_12474670_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1219_fu_12474646_p1.read()) + sc_biguint<12>(zext_ln1118_3891_fu_12474670_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3806_fu_12501465_p2() {
    add_ln703_3806_fu_12501465_p2 = (!sext_ln703_2168_fu_12501461_p1.read().is_01() || !add_ln703_3804_fu_12501449_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2168_fu_12501461_p1.read()) + sc_biguint<13>(add_ln703_3804_fu_12501449_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3807_fu_12501475_p2() {
    add_ln703_3807_fu_12501475_p2 = (!sext_ln703_540_fu_12501471_p1.read().is_01() || !sext_ln203_569_fu_12474698_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_540_fu_12501471_p1.read()) + sc_bigint<14>(sext_ln203_569_fu_12474698_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3808_fu_12501481_p2() {
    add_ln703_3808_fu_12501481_p2 = (!zext_ln1118_3892_fu_12474712_p1.read().is_01() || !trunc_ln1118_153_fu_12474726_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3892_fu_12474712_p1.read()) + sc_biguint<10>(trunc_ln1118_153_fu_12474726_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3809_fu_12501491_p2() {
    add_ln703_3809_fu_12501491_p2 = (!zext_ln703_590_fu_12501487_p1.read().is_01() || !zext_ln708_1581_fu_12474684_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_590_fu_12501487_p1.read()) + sc_biguint<11>(zext_ln708_1581_fu_12474684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_380_fu_12480177_p2() {
    add_ln703_380_fu_12480177_p2 = (!sext_ln1118_124_fu_12409542_p1.read().is_01() || !sext_ln1116_12_fu_12409562_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_124_fu_12409542_p1.read()) + sc_bigint<12>(sext_ln1116_12_fu_12409562_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3810_fu_12512737_p2() {
    add_ln703_3810_fu_12512737_p2 = (!zext_ln703_591_fu_12512734_p1.read().is_01() || !add_ln703_3807_reg_12519202.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_591_fu_12512734_p1.read()) + sc_biguint<14>(add_ln703_3807_reg_12519202.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3811_fu_12501497_p2() {
    add_ln703_3811_fu_12501497_p2 = (!trunc_ln1118_154_fu_12474758_p4.read().is_01() || !zext_ln708_1582_fu_12474768_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_154_fu_12474758_p4.read()) + sc_biguint<10>(zext_ln708_1582_fu_12474768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3812_fu_12501507_p2() {
    add_ln703_3812_fu_12501507_p2 = (!zext_ln703_592_fu_12501503_p1.read().is_01() || !zext_ln708_1459_fu_12461102_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_592_fu_12501503_p1.read()) + sc_biguint<11>(zext_ln708_1459_fu_12461102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3813_fu_12501517_p2() {
    add_ln703_3813_fu_12501517_p2 = (!zext_ln1118_3436_fu_12458713_p1.read().is_01() || !zext_ln708_768_fu_12465992_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_3436_fu_12458713_p1.read()) + sc_biguint<9>(zext_ln708_768_fu_12465992_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3814_fu_12501527_p2() {
    add_ln703_3814_fu_12501527_p2 = (!zext_ln703_594_fu_12501523_p1.read().is_01() || !sext_ln1118_996_fu_12461757_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_594_fu_12501523_p1.read()) + sc_bigint<11>(sext_ln1118_996_fu_12461757_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3815_fu_12501537_p2() {
    add_ln703_3815_fu_12501537_p2 = (!sext_ln703_2169_fu_12501533_p1.read().is_01() || !zext_ln703_593_fu_12501513_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2169_fu_12501533_p1.read()) + sc_biguint<12>(zext_ln703_593_fu_12501513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3816_fu_12512745_p2() {
    add_ln703_3816_fu_12512745_p2 = (!sext_ln703_2170_fu_12512742_p1.read().is_01() || !add_ln703_3810_fu_12512737_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2170_fu_12512742_p1.read()) + sc_biguint<14>(add_ln703_3810_fu_12512737_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3817_fu_12512755_p2() {
    add_ln703_3817_fu_12512755_p2 = (!sext_ln1118_1057_fu_12503311_p1.read().is_01() || !sext_ln1118_1222_fu_12503395_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1057_fu_12503311_p1.read()) + sc_bigint<12>(sext_ln1118_1222_fu_12503395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3818_fu_12512765_p2() {
    add_ln703_3818_fu_12512765_p2 = (!sext_ln703_2171_fu_12512761_p1.read().is_01() || !sext_ln703_541_fu_12512751_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2171_fu_12512761_p1.read()) + sc_bigint<15>(sext_ln703_541_fu_12512751_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3819_fu_12501543_p2() {
    add_ln703_3819_fu_12501543_p2 = (!zext_ln708_1583_fu_12474792_p1.read().is_01() || !zext_ln708_1522_fu_12468515_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1583_fu_12474792_p1.read()) + sc_biguint<11>(zext_ln708_1522_fu_12468515_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_381_fu_12480187_p2() {
    add_ln703_381_fu_12480187_p2 = (!sext_ln703_298_fu_12480183_p1.read().is_01() || !sext_ln703_57_fu_12480173_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_298_fu_12480183_p1.read()) + sc_bigint<13>(sext_ln703_57_fu_12480173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3820_fu_12501553_p2() {
    add_ln703_3820_fu_12501553_p2 = (!zext_ln703_595_fu_12501549_p1.read().is_01() || !sext_ln1118_1223_fu_12474892_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_595_fu_12501549_p1.read()) + sc_bigint<13>(sext_ln1118_1223_fu_12474892_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3821_fu_12512774_p2() {
    add_ln703_3821_fu_12512774_p2 = (!sext_ln703_2172_fu_12512771_p1.read().is_01() || !add_ln703_3818_fu_12512765_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2172_fu_12512771_p1.read()) + sc_biguint<15>(add_ln703_3818_fu_12512765_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3822_fu_12501559_p2() {
    add_ln703_3822_fu_12501559_p2 = (!zext_ln708_1585_fu_12474834_p1.read().is_01() || !zext_ln708_1586_fu_12474906_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1585_fu_12474834_p1.read()) + sc_biguint<11>(zext_ln708_1586_fu_12474906_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3823_fu_12501565_p2() {
    add_ln703_3823_fu_12501565_p2 = (!add_ln703_3822_fu_12501559_p2.read().is_01() || !zext_ln708_1584_fu_12474820_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3822_fu_12501559_p2.read()) + sc_biguint<11>(zext_ln708_1584_fu_12474820_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3824_fu_12501575_p2() {
    add_ln703_3824_fu_12501575_p2 = (!zext_ln708_855_fu_12474772_p1.read().is_01() || !sext_ln1118_1221_fu_12474868_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_855_fu_12474772_p1.read()) + sc_bigint<11>(sext_ln1118_1221_fu_12474868_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3825_fu_12501581_p2() {
    add_ln703_3825_fu_12501581_p2 = (!add_ln703_3824_fu_12501575_p2.read().is_01() || !zext_ln1118_3453_fu_12459214_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3824_fu_12501575_p2.read()) + sc_biguint<11>(zext_ln1118_3453_fu_12459214_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3826_fu_12501591_p2() {
    add_ln703_3826_fu_12501591_p2 = (!sext_ln703_2173_fu_12501587_p1.read().is_01() || !zext_ln703_596_fu_12501571_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2173_fu_12501587_p1.read()) + sc_biguint<13>(zext_ln703_596_fu_12501571_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3827_fu_12512783_p2() {
    add_ln703_3827_fu_12512783_p2 = (!sext_ln703_2174_fu_12512780_p1.read().is_01() || !add_ln703_3821_fu_12512774_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2174_fu_12512780_p1.read()) + sc_biguint<15>(add_ln703_3821_fu_12512774_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3828_fu_12501597_p2() {
    add_ln703_3828_fu_12501597_p2 = (!zext_ln708_1587_fu_12474960_p1.read().is_01() || !zext_ln708_1588_fu_12475002_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1587_fu_12474960_p1.read()) + sc_biguint<11>(zext_ln708_1588_fu_12475002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3829_fu_12512792_p2() {
    add_ln703_3829_fu_12512792_p2 = (!zext_ln703_597_fu_12512789_p1.read().is_01() || !add_ln703_3827_fu_12512783_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_597_fu_12512789_p1.read()) + sc_biguint<15>(add_ln703_3827_fu_12512783_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_382_fu_12480193_p2() {
    add_ln703_382_fu_12480193_p2 = (!sext_ln1116_13_fu_12409581_p1.read().is_01() || !sext_ln1118_125_fu_12409601_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_13_fu_12409581_p1.read()) + sc_bigint<12>(sext_ln1118_125_fu_12409601_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3830_fu_12501603_p2() {
    add_ln703_3830_fu_12501603_p2 = (!sext_ln203_571_fu_12474940_p1.read().is_01() || !sext_ln203_572_fu_12474974_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_571_fu_12474940_p1.read()) + sc_bigint<11>(sext_ln203_572_fu_12474974_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3831_fu_12501613_p2() {
    add_ln703_3831_fu_12501613_p2 = (!sext_ln203_570_fu_12474926_p1.read().is_01() || !zext_ln203_191_fu_12474988_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_570_fu_12474926_p1.read()) + sc_biguint<10>(zext_ln203_191_fu_12474988_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3832_fu_12501623_p2() {
    add_ln703_3832_fu_12501623_p2 = (!sext_ln703_2176_fu_12501619_p1.read().is_01() || !sext_ln703_2175_fu_12501609_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2176_fu_12501619_p1.read()) + sc_bigint<12>(sext_ln703_2175_fu_12501609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3834_fu_12501629_p2() {
    add_ln703_3834_fu_12501629_p2 = (!trunc_ln1118_155_fu_12475006_p4.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln1118_155_fu_12475006_p4.read()) + sc_bigint<8>(ap_const_lv8_A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3835_fu_12501639_p2() {
    add_ln703_3835_fu_12501639_p2 = (!sext_ln703_2179_fu_12501635_p1.read().is_01() || !sext_ln203_470_fu_12462445_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2179_fu_12501635_p1.read()) + sc_bigint<12>(sext_ln203_470_fu_12462445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3836_fu_12501649_p2() {
    add_ln703_3836_fu_12501649_p2 = (!sext_ln703_543_fu_12501645_p1.read().is_01() || !sext_ln203_574_fu_12475138_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_543_fu_12501645_p1.read()) + sc_bigint<13>(sext_ln203_574_fu_12475138_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3837_fu_12501655_p2() {
    add_ln703_3837_fu_12501655_p2 = (!zext_ln708_1589_fu_12475040_p1.read().is_01() || !zext_ln708_1590_fu_12475078_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1589_fu_12475040_p1.read()) + sc_biguint<9>(zext_ln708_1590_fu_12475078_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3838_fu_12512814_p2() {
    add_ln703_3838_fu_12512814_p2 = (!zext_ln703_598_fu_12512811_p1.read().is_01() || !add_ln703_3836_reg_12519237.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_598_fu_12512811_p1.read()) + sc_biguint<13>(add_ln703_3836_reg_12519237.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3839_fu_12501661_p2() {
    add_ln703_3839_fu_12501661_p2 = (!zext_ln708_1591_fu_12475106_p1.read().is_01() || !sext_ln1118_1224_fu_12475026_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1591_fu_12475106_p1.read()) + sc_bigint<11>(sext_ln1118_1224_fu_12475026_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_383_fu_12504349_p2() {
    add_ln703_383_fu_12504349_p2 = (!sext_ln703_299_fu_12504346_p1.read().is_01() || !sext_ln703_58_fu_12504343_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_299_fu_12504346_p1.read()) + sc_bigint<14>(sext_ln703_58_fu_12504343_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3840_fu_12501667_p2() {
    add_ln703_3840_fu_12501667_p2 = (!zext_ln1118_3898_fu_12475092_p1.read().is_01() || !zext_ln708_1592_fu_12475152_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln1118_3898_fu_12475092_p1.read()) + sc_biguint<7>(zext_ln708_1592_fu_12475152_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3841_fu_12501673_p2() {
    add_ln703_3841_fu_12501673_p2 = (!add_ln703_3840_fu_12501667_p2.read().is_01() || !zext_ln1118_3896_fu_12475054_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln703_3840_fu_12501667_p2.read()) + sc_biguint<7>(zext_ln1118_3896_fu_12475054_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3842_fu_12501683_p2() {
    add_ln703_3842_fu_12501683_p2 = (!zext_ln703_599_fu_12501679_p1.read().is_01() || !add_ln703_3839_fu_12501661_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_599_fu_12501679_p1.read()) + sc_biguint<11>(add_ln703_3839_fu_12501661_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3843_fu_12512822_p2() {
    add_ln703_3843_fu_12512822_p2 = (!sext_ln703_2180_fu_12512819_p1.read().is_01() || !add_ln703_3838_fu_12512814_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2180_fu_12512819_p1.read()) + sc_biguint<13>(add_ln703_3838_fu_12512814_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3844_fu_12512832_p2() {
    add_ln703_3844_fu_12512832_p2 = (!sext_ln703_544_fu_12512828_p1.read().is_01() || !zext_ln203_192_fu_12503398_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_544_fu_12512828_p1.read()) + sc_biguint<14>(zext_ln203_192_fu_12503398_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3845_fu_12501689_p2() {
    add_ln703_3845_fu_12501689_p2 = (!zext_ln708_1504_fu_12466640_p1.read().is_01() || !zext_ln1118_3900_fu_12475190_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1504_fu_12466640_p1.read()) + sc_biguint<10>(zext_ln1118_3900_fu_12475190_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3846_fu_12512841_p2() {
    add_ln703_3846_fu_12512841_p2 = (!zext_ln703_600_fu_12512838_p1.read().is_01() || !add_ln703_3844_fu_12512832_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_600_fu_12512838_p1.read()) + sc_biguint<14>(add_ln703_3844_fu_12512832_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3847_fu_12501695_p2() {
    add_ln703_3847_fu_12501695_p2 = (!zext_ln1118_3901_fu_12475204_p1.read().is_01() || !zext_ln1118_3902_fu_12475218_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_3901_fu_12475204_p1.read()) + sc_biguint<9>(zext_ln1118_3902_fu_12475218_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3848_fu_12501705_p2() {
    add_ln703_3848_fu_12501705_p2 = (!zext_ln708_1593_fu_12475238_p1.read().is_01() || !sext_ln1118_1225_fu_12475176_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1593_fu_12475238_p1.read()) + sc_bigint<11>(sext_ln1118_1225_fu_12475176_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3849_fu_12501715_p2() {
    add_ln703_3849_fu_12501715_p2 = (!sext_ln703_2181_fu_12501711_p1.read().is_01() || !zext_ln703_601_fu_12501701_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2181_fu_12501711_p1.read()) + sc_biguint<12>(zext_ln703_601_fu_12501701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_384_fu_12480199_p2() {
    add_ln703_384_fu_12480199_p2 = (!sext_ln1118_126_fu_12409643_p1.read().is_01() || !zext_ln1118_987_fu_12409615_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_126_fu_12409643_p1.read()) + sc_biguint<12>(zext_ln1118_987_fu_12409615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3850_fu_12512850_p2() {
    add_ln703_3850_fu_12512850_p2 = (!sext_ln703_2182_fu_12512847_p1.read().is_01() || !add_ln703_3846_fu_12512841_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2182_fu_12512847_p1.read()) + sc_biguint<14>(add_ln703_3846_fu_12512841_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3851_fu_12501721_p2() {
    add_ln703_3851_fu_12501721_p2 = (!sext_ln203_463_fu_12462147_p1.read().is_01() || !sext_ln1118_1231_fu_12475390_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_463_fu_12462147_p1.read()) + sc_bigint<12>(sext_ln1118_1231_fu_12475390_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3852_fu_12512863_p2() {
    add_ln703_3852_fu_12512863_p2 = (!sext_ln703_2183_fu_12512860_p1.read().is_01() || !sext_ln703_545_fu_12512856_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2183_fu_12512860_p1.read()) + sc_bigint<15>(sext_ln703_545_fu_12512856_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3853_fu_12501727_p2() {
    add_ln703_3853_fu_12501727_p2 = (!zext_ln1118_3904_fu_12475286_p1.read().is_01() || !trunc_ln1118_156_fu_12475304_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3904_fu_12475286_p1.read()) + sc_biguint<10>(trunc_ln1118_156_fu_12475304_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3854_fu_12501737_p2() {
    add_ln703_3854_fu_12501737_p2 = (!zext_ln703_602_fu_12501733_p1.read().is_01() || !sext_ln1118_1232_fu_12475404_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_602_fu_12501733_p1.read()) + sc_bigint<12>(sext_ln1118_1232_fu_12475404_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3855_fu_12512872_p2() {
    add_ln703_3855_fu_12512872_p2 = (!sext_ln703_2184_fu_12512869_p1.read().is_01() || !add_ln703_3852_fu_12512863_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2184_fu_12512869_p1.read()) + sc_biguint<15>(add_ln703_3852_fu_12512863_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3856_fu_12501743_p2() {
    add_ln703_3856_fu_12501743_p2 = (!zext_ln1118_3906_fu_12475348_p1.read().is_01() || !zext_ln1118_3909_fu_12475428_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3906_fu_12475348_p1.read()) + sc_biguint<10>(zext_ln1118_3909_fu_12475428_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3857_fu_12501753_p2() {
    add_ln703_3857_fu_12501753_p2 = (!zext_ln703_603_fu_12501749_p1.read().is_01() || !zext_ln708_1594_fu_12475324_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_603_fu_12501749_p1.read()) + sc_biguint<11>(zext_ln708_1594_fu_12475324_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3858_fu_12501763_p2() {
    add_ln703_3858_fu_12501763_p2 = (!sext_ln1118_1227_fu_12475262_p1.read().is_01() || !sext_ln708_221_fu_12475300_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1227_fu_12475262_p1.read()) + sc_bigint<9>(sext_ln708_221_fu_12475300_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3859_fu_12501773_p2() {
    add_ln703_3859_fu_12501773_p2 = (!sext_ln703_2185_fu_12501769_p1.read().is_01() || !sext_ln1118_1229_fu_12475362_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2185_fu_12501769_p1.read()) + sc_bigint<10>(sext_ln1118_1229_fu_12475362_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_385_fu_12480209_p2() {
    add_ln703_385_fu_12480209_p2 = (!zext_ln1118_2335_fu_12409663_p1.read().is_01() || !zext_ln1116_214_fu_12409687_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2335_fu_12409663_p1.read()) + sc_biguint<10>(zext_ln1116_214_fu_12409687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3860_fu_12501783_p2() {
    add_ln703_3860_fu_12501783_p2 = (!sext_ln703_2186_fu_12501779_p1.read().is_01() || !zext_ln703_604_fu_12501759_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2186_fu_12501779_p1.read()) + sc_biguint<12>(zext_ln703_604_fu_12501759_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3861_fu_12512881_p2() {
    add_ln703_3861_fu_12512881_p2 = (!sext_ln703_2187_fu_12512878_p1.read().is_01() || !add_ln703_3855_fu_12512872_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2187_fu_12512878_p1.read()) + sc_biguint<15>(add_ln703_3855_fu_12512872_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3862_fu_12512887_p2() {
    add_ln703_3862_fu_12512887_p2 = (!add_ln703_3861_fu_12512881_p2.read().is_01() || !sext_ln203_576_fu_12503401_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3861_fu_12512881_p2.read()) + sc_bigint<15>(sext_ln203_576_fu_12503401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3863_fu_12501789_p2() {
    add_ln703_3863_fu_12501789_p2 = (!zext_ln708_1595_fu_12475500_p1.read().is_01() || !sext_ln203_575_fu_12475442_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1595_fu_12475500_p1.read()) + sc_bigint<11>(sext_ln203_575_fu_12475442_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3864_fu_12501799_p2() {
    add_ln703_3864_fu_12501799_p2 = (!sext_ln703_2188_fu_12501795_p1.read().is_01() || !zext_ln203_193_fu_12475470_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2188_fu_12501795_p1.read()) + sc_biguint<12>(zext_ln203_193_fu_12475470_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3866_fu_12501805_p2() {
    add_ln703_3866_fu_12501805_p2 = (!sext_ln203_577_fu_12475514_p1.read().is_01() || !ap_const_lv12_FD8.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_577_fu_12475514_p1.read()) + sc_bigint<12>(ap_const_lv12_FD8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3867_fu_12501815_p2() {
    add_ln703_3867_fu_12501815_p2 = (!sext_ln703_547_fu_12501811_p1.read().is_01() || !sext_ln203_578_fu_12475528_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_547_fu_12501811_p1.read()) + sc_bigint<13>(sext_ln203_578_fu_12475528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3868_fu_12501821_p2() {
    add_ln703_3868_fu_12501821_p2 = (!zext_ln1118_3911_fu_12475566_p1.read().is_01() || !sext_ln708_222_fu_12475552_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_3911_fu_12475566_p1.read()) + sc_bigint<12>(sext_ln708_222_fu_12475552_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3869_fu_12501831_p2() {
    add_ln703_3869_fu_12501831_p2 = (!sext_ln703_2191_fu_12501827_p1.read().is_01() || !add_ln703_3867_fu_12501815_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2191_fu_12501827_p1.read()) + sc_biguint<13>(add_ln703_3867_fu_12501815_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_386_fu_12480219_p2() {
    add_ln703_386_fu_12480219_p2 = (!zext_ln703_69_fu_12480215_p1.read().is_01() || !sext_ln703_300_fu_12480205_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_69_fu_12480215_p1.read()) + sc_bigint<13>(sext_ln703_300_fu_12480205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3870_fu_12501841_p2() {
    add_ln703_3870_fu_12501841_p2 = (!sext_ln1118_1235_fu_12475594_p1.read().is_01() || !zext_ln1118_3913_fu_12475608_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1235_fu_12475594_p1.read()) + sc_biguint<12>(zext_ln1118_3913_fu_12475608_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3871_fu_12501851_p2() {
    add_ln703_3871_fu_12501851_p2 = (!sext_ln703_2192_fu_12501847_p1.read().is_01() || !sext_ln703_548_fu_12501837_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2192_fu_12501847_p1.read()) + sc_bigint<14>(sext_ln703_548_fu_12501837_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3872_fu_12501857_p2() {
    add_ln703_3872_fu_12501857_p2 = (!sext_ln1118_1239_fu_12475672_p1.read().is_01() || !sext_ln1118_1234_fu_12475570_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1239_fu_12475672_p1.read()) + sc_bigint<9>(sext_ln1118_1234_fu_12475570_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3873_fu_12501867_p2() {
    add_ln703_3873_fu_12501867_p2 = (!sext_ln703_2193_fu_12501863_p1.read().is_01() || !sext_ln1118_1237_fu_12475632_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2193_fu_12501863_p1.read()) + sc_bigint<10>(sext_ln1118_1237_fu_12475632_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3874_fu_12501877_p2() {
    add_ln703_3874_fu_12501877_p2 = (!sext_ln703_2194_fu_12501873_p1.read().is_01() || !add_ln703_3871_fu_12501851_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2194_fu_12501873_p1.read()) + sc_biguint<14>(add_ln703_3871_fu_12501851_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3875_fu_12501883_p2() {
    add_ln703_3875_fu_12501883_p2 = (!zext_ln1118_3917_fu_12475686_p1.read().is_01() || !sext_ln1118_1028_fu_12464089_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_3917_fu_12475686_p1.read()) + sc_bigint<12>(sext_ln1118_1028_fu_12464089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3876_fu_12512909_p2() {
    add_ln703_3876_fu_12512909_p2 = (!sext_ln703_2195_fu_12512906_p1.read().is_01() || !add_ln703_3874_reg_12519282.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2195_fu_12512906_p1.read()) + sc_biguint<14>(add_ln703_3874_reg_12519282.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3877_fu_12501889_p2() {
    add_ln703_3877_fu_12501889_p2 = (!zext_ln1118_3918_fu_12475700_p1.read().is_01() || !zext_ln1118_3920_fu_12475724_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3918_fu_12475700_p1.read()) + sc_biguint<10>(zext_ln1118_3920_fu_12475724_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3878_fu_12501899_p2() {
    add_ln703_3878_fu_12501899_p2 = (!zext_ln703_605_fu_12501895_p1.read().is_01() || !sext_ln1118_978_fu_12460478_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_605_fu_12501895_p1.read()) + sc_bigint<12>(sext_ln1118_978_fu_12460478_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3879_fu_12512917_p2() {
    add_ln703_3879_fu_12512917_p2 = (!sext_ln703_2196_fu_12512914_p1.read().is_01() || !add_ln703_3876_fu_12512909_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2196_fu_12512914_p1.read()) + sc_biguint<14>(add_ln703_3876_fu_12512909_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_387_fu_12504358_p2() {
    add_ln703_387_fu_12504358_p2 = (!sext_ln703_301_fu_12504355_p1.read().is_01() || !add_ln703_383_fu_12504349_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_301_fu_12504355_p1.read()) + sc_biguint<14>(add_ln703_383_fu_12504349_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3880_fu_12501905_p2() {
    add_ln703_3880_fu_12501905_p2 = (!zext_ln708_1596_fu_12475752_p1.read().is_01() || !sext_ln1118_1241_fu_12475786_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1596_fu_12475752_p1.read()) + sc_bigint<11>(sext_ln1118_1241_fu_12475786_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3881_fu_12501915_p2() {
    add_ln703_3881_fu_12501915_p2 = (!sext_ln703_2198_fu_12501911_p1.read().is_01() || !zext_ln708_858_fu_12475738_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2198_fu_12501911_p1.read()) + sc_biguint<12>(zext_ln708_858_fu_12475738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3882_fu_12501921_p2() {
    add_ln703_3882_fu_12501921_p2 = (!sext_ln1118_1242_fu_12475818_p1.read().is_01() || !sext_ln1118_1244_fu_12475846_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1242_fu_12475818_p1.read()) + sc_bigint<10>(sext_ln1118_1244_fu_12475846_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3883_fu_12501931_p2() {
    add_ln703_3883_fu_12501931_p2 = (!zext_ln708_1496_fu_12466200_p1.read().is_01() || !sext_ln1118_1243_fu_12475842_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1496_fu_12466200_p1.read()) + sc_bigint<8>(sext_ln1118_1243_fu_12475842_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3884_fu_12501941_p2() {
    add_ln703_3884_fu_12501941_p2 = (!sext_ln703_2200_fu_12501937_p1.read().is_01() || !sext_ln703_2199_fu_12501927_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2200_fu_12501937_p1.read()) + sc_bigint<11>(sext_ln703_2199_fu_12501927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3885_fu_12501951_p2() {
    add_ln703_3885_fu_12501951_p2 = (!sext_ln703_2201_fu_12501947_p1.read().is_01() || !add_ln703_3881_fu_12501915_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2201_fu_12501947_p1.read()) + sc_biguint<12>(add_ln703_3881_fu_12501915_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3886_fu_12512930_p2() {
    add_ln703_3886_fu_12512930_p2 = (!sext_ln703_2202_fu_12512927_p1.read().is_01() || !sext_ln703_2197_fu_12512923_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2202_fu_12512927_p1.read()) + sc_bigint<15>(sext_ln703_2197_fu_12512923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3887_fu_12501957_p2() {
    add_ln703_3887_fu_12501957_p2 = (!sext_ln203_579_fu_12475860_p1.read().is_01() || !sext_ln1118_988_fu_12461435_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_579_fu_12475860_p1.read()) + sc_bigint<12>(sext_ln1118_988_fu_12461435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3888_fu_12512939_p2() {
    add_ln703_3888_fu_12512939_p2 = (!sext_ln703_2203_fu_12512936_p1.read().is_01() || !add_ln703_3886_fu_12512930_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2203_fu_12512936_p1.read()) + sc_biguint<15>(add_ln703_3886_fu_12512930_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3889_fu_12501963_p2() {
    add_ln703_3889_fu_12501963_p2 = (!zext_ln203_449_fu_12475874_p1.read().is_01() || !trunc_ln203_70_fu_12475924_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_449_fu_12475874_p1.read()) + sc_biguint<10>(trunc_ln203_70_fu_12475924_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_388_fu_12480225_p2() {
    add_ln703_388_fu_12480225_p2 = (!zext_ln1118_1032_fu_12409717_p1.read().is_01() || !sext_ln1116_14_fu_12409755_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1032_fu_12409717_p1.read()) + sc_bigint<12>(sext_ln1116_14_fu_12409755_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3890_fu_12512948_p2() {
    add_ln703_3890_fu_12512948_p2 = (!zext_ln703_606_fu_12512945_p1.read().is_01() || !sext_ln203_582_fu_12503404_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_606_fu_12512945_p1.read()) + sc_bigint<12>(sext_ln203_582_fu_12503404_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3891_fu_12512958_p2() {
    add_ln703_3891_fu_12512958_p2 = (!sext_ln703_2204_fu_12512954_p1.read().is_01() || !add_ln703_3888_fu_12512939_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2204_fu_12512954_p1.read()) + sc_biguint<15>(add_ln703_3888_fu_12512939_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3892_fu_12501969_p2() {
    add_ln703_3892_fu_12501969_p2 = (!zext_ln203_450_fu_12475988_p1.read().is_01() || !sext_ln203_583_fu_12475964_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_450_fu_12475988_p1.read()) + sc_bigint<9>(sext_ln203_583_fu_12475964_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3893_fu_12501979_p2() {
    add_ln703_3893_fu_12501979_p2 = (!sext_ln703_2205_fu_12501975_p1.read().is_01() || !zext_ln203_193_fu_12475470_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2205_fu_12501975_p1.read()) + sc_biguint<12>(zext_ln203_193_fu_12475470_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3894_fu_12501985_p2() {
    add_ln703_3894_fu_12501985_p2 = (!sext_ln203_581_fu_12475920_p1.read().is_01() || !sext_ln203_584_fu_12476008_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln203_581_fu_12475920_p1.read()) + sc_bigint<6>(sext_ln203_584_fu_12476008_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3895_fu_12501995_p2() {
    add_ln703_3895_fu_12501995_p2 = (!sext_ln703_2206_fu_12501991_p1.read().is_01() || !zext_ln203_194_fu_12475888_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_2206_fu_12501991_p1.read()) + sc_biguint<9>(zext_ln203_194_fu_12475888_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3896_fu_12502005_p2() {
    add_ln703_3896_fu_12502005_p2 = (!sext_ln703_2207_fu_12502001_p1.read().is_01() || !add_ln703_3893_fu_12501979_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2207_fu_12502001_p1.read()) + sc_biguint<12>(add_ln703_3893_fu_12501979_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3898_fu_12502011_p2() {
    add_ln703_3898_fu_12502011_p2 = (!zext_ln1118_3926_fu_12476032_p1.read().is_01() || !zext_ln1118_3927_fu_12476046_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3926_fu_12476032_p1.read()) + sc_biguint<10>(zext_ln1118_3927_fu_12476046_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3899_fu_12502021_p2() {
    add_ln703_3899_fu_12502021_p2 = (!zext_ln703_607_fu_12502017_p1.read().is_01() || !zext_ln708_1597_fu_12476012_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_607_fu_12502017_p1.read()) + sc_biguint<11>(zext_ln708_1597_fu_12476012_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_389_fu_12504371_p2() {
    add_ln703_389_fu_12504371_p2 = (!sext_ln703_302_fu_12504368_p1.read().is_01() || !sext_ln703_59_fu_12504364_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_302_fu_12504368_p1.read()) + sc_bigint<15>(sext_ln703_59_fu_12504364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_38_fu_12478047_p2() {
    add_ln703_38_fu_12478047_p2 = (!sext_ln1118_8_fu_12402210_p1.read().is_01() || !zext_ln708_28_fu_12402136_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_8_fu_12402210_p1.read()) + sc_biguint<12>(zext_ln708_28_fu_12402136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3900_fu_12502031_p2() {
    add_ln703_3900_fu_12502031_p2 = (!sext_ln1116_117_fu_12474252_p1.read().is_01() || !ap_const_lv10_2E0.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_117_fu_12474252_p1.read()) + sc_bigint<10>(ap_const_lv10_2E0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3901_fu_12502037_p2() {
    add_ln703_3901_fu_12502037_p2 = (!add_ln703_3900_fu_12502031_p2.read().is_01() || !zext_ln708_1598_fu_12476060_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3900_fu_12502031_p2.read()) + sc_biguint<10>(zext_ln708_1598_fu_12476060_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3902_fu_12502047_p2() {
    add_ln703_3902_fu_12502047_p2 = (!sext_ln703_2210_fu_12502043_p1.read().is_01() || !zext_ln703_608_fu_12502027_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2210_fu_12502043_p1.read()) + sc_biguint<12>(zext_ln703_608_fu_12502027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3903_fu_12502053_p2() {
    add_ln703_3903_fu_12502053_p2 = (!add_ln703_3902_fu_12502047_p2.read().is_01() || !zext_ln1116_332_fu_12476092_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3902_fu_12502047_p2.read()) + sc_biguint<12>(zext_ln1116_332_fu_12476092_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3904_fu_12502059_p2() {
    add_ln703_3904_fu_12502059_p2 = (!sext_ln708_223_fu_12476111_p1.read().is_01() || !zext_ln1118_3929_fu_12476135_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_223_fu_12476111_p1.read()) + sc_biguint<12>(zext_ln1118_3929_fu_12476135_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3905_fu_12512983_p2() {
    add_ln703_3905_fu_12512983_p2 = (!sext_ln703_2212_fu_12512980_p1.read().is_01() || !sext_ln703_2211_fu_12512977_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2212_fu_12512980_p1.read()) + sc_bigint<13>(sext_ln703_2211_fu_12512977_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3906_fu_12512989_p2() {
    add_ln703_3906_fu_12512989_p2 = (!add_ln703_3905_fu_12512983_p2.read().is_01() || !zext_ln708_864_fu_12503407_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3905_fu_12512983_p2.read()) + sc_biguint<13>(zext_ln708_864_fu_12503407_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3907_fu_12502065_p2() {
    add_ln703_3907_fu_12502065_p2 = (!zext_ln1118_3933_fu_12476197_p1.read().is_01() || !zext_ln1116_334_fu_12476235_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3933_fu_12476197_p1.read()) + sc_biguint<10>(zext_ln1116_334_fu_12476235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3908_fu_12512998_p2() {
    add_ln703_3908_fu_12512998_p2 = (!zext_ln703_609_fu_12512995_p1.read().is_01() || !add_ln703_3906_fu_12512989_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_609_fu_12512995_p1.read()) + sc_biguint<13>(add_ln703_3906_fu_12512989_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3909_fu_12502071_p2() {
    add_ln703_3909_fu_12502071_p2 = (!zext_ln1118_3935_fu_12476239_p1.read().is_01() || !zext_ln1118_3931_fu_12476173_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3935_fu_12476239_p1.read()) + sc_biguint<10>(zext_ln1118_3931_fu_12476173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_390_fu_12480231_p2() {
    add_ln703_390_fu_12480231_p2 = (!sext_ln708_24_fu_12409808_p1.read().is_01() || !sext_ln1118_131_fu_12409910_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_24_fu_12409808_p1.read()) + sc_bigint<12>(sext_ln1118_131_fu_12409910_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3910_fu_12502081_p2() {
    add_ln703_3910_fu_12502081_p2 = (!sext_ln1118_1247_fu_12476159_p1.read().is_01() || !sext_ln1116_122_fu_12476231_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_1247_fu_12476159_p1.read()) + sc_bigint<8>(sext_ln1116_122_fu_12476231_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3911_fu_12502091_p2() {
    add_ln703_3911_fu_12502091_p2 = (!sext_ln703_2214_fu_12502087_p1.read().is_01() || !zext_ln703_610_fu_12502077_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2214_fu_12502087_p1.read()) + sc_biguint<11>(zext_ln703_610_fu_12502077_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3912_fu_12513011_p2() {
    add_ln703_3912_fu_12513011_p2 = (!sext_ln703_2215_fu_12513008_p1.read().is_01() || !sext_ln703_2213_fu_12513004_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2215_fu_12513008_p1.read()) + sc_bigint<14>(sext_ln703_2213_fu_12513004_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3913_fu_12502097_p2() {
    add_ln703_3913_fu_12502097_p2 = (!sext_ln1118_1249_fu_12476253_p1.read().is_01() || !sext_ln1118_1250_fu_12476309_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1249_fu_12476253_p1.read()) + sc_bigint<12>(sext_ln1118_1250_fu_12476309_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3914_fu_12513020_p2() {
    add_ln703_3914_fu_12513020_p2 = (!sext_ln703_2216_fu_12513017_p1.read().is_01() || !add_ln703_3912_fu_12513011_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2216_fu_12513017_p1.read()) + sc_biguint<14>(add_ln703_3912_fu_12513011_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3915_fu_12502103_p2() {
    add_ln703_3915_fu_12502103_p2 = (!sext_ln1118_1251_fu_12476323_p1.read().is_01() || !sext_ln1118_1253_fu_12476353_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1251_fu_12476323_p1.read()) + sc_bigint<12>(sext_ln1118_1253_fu_12476353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3916_fu_12502113_p2() {
    add_ln703_3916_fu_12502113_p2 = (!zext_ln1116_335_fu_12476267_p1.read().is_01() || !zext_ln708_1599_fu_12476281_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_335_fu_12476267_p1.read()) + sc_biguint<10>(zext_ln708_1599_fu_12476281_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3917_fu_12502123_p2() {
    add_ln703_3917_fu_12502123_p2 = (!zext_ln703_611_fu_12502119_p1.read().is_01() || !sext_ln703_2218_fu_12502109_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_611_fu_12502119_p1.read()) + sc_bigint<13>(sext_ln703_2218_fu_12502109_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3918_fu_12513033_p2() {
    add_ln703_3918_fu_12513033_p2 = (!sext_ln703_2219_fu_12513030_p1.read().is_01() || !sext_ln703_2217_fu_12513026_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2219_fu_12513030_p1.read()) + sc_bigint<15>(sext_ln703_2217_fu_12513026_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3919_fu_12502129_p2() {
    add_ln703_3919_fu_12502129_p2 = (!zext_ln1118_3940_fu_12476413_p1.read().is_01() || !zext_ln1118_3942_fu_12476465_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3940_fu_12476413_p1.read()) + sc_biguint<10>(zext_ln1118_3942_fu_12476465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_391_fu_12480241_p2() {
    add_ln703_391_fu_12480241_p2 = (!trunc_ln1116_8_fu_12409735_p4.read().is_01() || !zext_ln1116_216_fu_12409787_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1116_8_fu_12409735_p4.read()) + sc_biguint<9>(zext_ln1116_216_fu_12409787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3920_fu_12502139_p2() {
    add_ln703_3920_fu_12502139_p2 = (!zext_ln703_612_fu_12502135_p1.read().is_01() || !zext_ln708_1600_fu_12476385_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_612_fu_12502135_p1.read()) + sc_biguint<11>(zext_ln708_1600_fu_12476385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3921_fu_12502149_p2() {
    add_ln703_3921_fu_12502149_p2 = (!sext_ln1118_1167_fu_12472398_p1.read().is_01() || !sext_ln1118_1119_fu_12469743_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1167_fu_12472398_p1.read()) + sc_bigint<9>(sext_ln1118_1119_fu_12469743_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3922_fu_12502159_p2() {
    add_ln703_3922_fu_12502159_p2 = (!zext_ln1118_3936_fu_12476295_p1.read().is_01() || !sext_ln1118_1254_fu_12476433_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_3936_fu_12476295_p1.read()) + sc_bigint<9>(sext_ln1118_1254_fu_12476433_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3923_fu_12502169_p2() {
    add_ln703_3923_fu_12502169_p2 = (!sext_ln703_2221_fu_12502165_p1.read().is_01() || !sext_ln703_2220_fu_12502155_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2221_fu_12502165_p1.read()) + sc_bigint<10>(sext_ln703_2220_fu_12502155_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3924_fu_12502179_p2() {
    add_ln703_3924_fu_12502179_p2 = (!sext_ln703_2222_fu_12502175_p1.read().is_01() || !zext_ln703_613_fu_12502145_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2222_fu_12502175_p1.read()) + sc_biguint<12>(zext_ln703_613_fu_12502145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3925_fu_12513042_p2() {
    add_ln703_3925_fu_12513042_p2 = (!sext_ln703_2223_fu_12513039_p1.read().is_01() || !add_ln703_3918_fu_12513033_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2223_fu_12513039_p1.read()) + sc_biguint<15>(add_ln703_3918_fu_12513033_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3926_fu_12513048_p2() {
    add_ln703_3926_fu_12513048_p2 = (!add_ln703_3925_fu_12513042_p2.read().is_01() || !zext_ln203_195_fu_12503410_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3925_fu_12513042_p2.read()) + sc_biguint<15>(zext_ln203_195_fu_12503410_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3927_fu_12502185_p2() {
    add_ln703_3927_fu_12502185_p2 = (!sext_ln203_585_fu_12476509_p1.read().is_01() || !sext_ln203_586_fu_12476523_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_585_fu_12476509_p1.read()) + sc_bigint<11>(sext_ln203_586_fu_12476523_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3928_fu_12502191_p2() {
    add_ln703_3928_fu_12502191_p2 = (!add_ln703_3927_fu_12502185_p2.read().is_01() || !zext_ln708_1601_fu_12476543_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3927_fu_12502185_p2.read()) + sc_biguint<11>(zext_ln708_1601_fu_12476543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_392_fu_12480251_p2() {
    add_ln703_392_fu_12480251_p2 = (!zext_ln703_70_fu_12480247_p1.read().is_01() || !sext_ln703_303_fu_12480237_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_70_fu_12480247_p1.read()) + sc_bigint<13>(sext_ln703_303_fu_12480237_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3930_fu_12502197_p2() {
    add_ln703_3930_fu_12502197_p2 = (!trunc_ln203_42_fu_12476547_p4.read().is_01() || !ap_const_lv10_C0.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_42_fu_12476547_p4.read()) + sc_biguint<10>(ap_const_lv10_C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3931_fu_12502207_p2() {
    add_ln703_3931_fu_12502207_p2 = (!sext_ln203_553_fu_12473220_p1.read().is_01() || !zext_ln703_11_fu_12502203_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_553_fu_12473220_p1.read()) + sc_biguint<12>(zext_ln703_11_fu_12502203_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3932_fu_12502217_p2() {
    add_ln703_3932_fu_12502217_p2 = (!sext_ln703_555_fu_12502213_p1.read().is_01() || !sext_ln203_588_fu_12476573_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_555_fu_12502213_p1.read()) + sc_bigint<13>(sext_ln203_588_fu_12476573_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3933_fu_12502223_p2() {
    add_ln703_3933_fu_12502223_p2 = (!sext_ln708_224_fu_12476593_p1.read().is_01() || !zext_ln708_865_fu_12476607_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_224_fu_12476593_p1.read()) + sc_biguint<11>(zext_ln708_865_fu_12476607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3934_fu_12502233_p2() {
    add_ln703_3934_fu_12502233_p2 = (!sext_ln703_2226_fu_12502229_p1.read().is_01() || !add_ln703_3932_fu_12502217_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2226_fu_12502229_p1.read()) + sc_biguint<13>(add_ln703_3932_fu_12502217_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3935_fu_12502239_p2() {
    add_ln703_3935_fu_12502239_p2 = (!zext_ln708_1602_fu_12476621_p1.read().is_01() || !zext_ln708_1544_fu_12470572_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1602_fu_12476621_p1.read()) + sc_biguint<11>(zext_ln708_1544_fu_12470572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3936_fu_12513073_p2() {
    add_ln703_3936_fu_12513073_p2 = (!zext_ln703_614_fu_12513070_p1.read().is_01() || !sext_ln703_556_fu_12513067_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_614_fu_12513070_p1.read()) + sc_bigint<14>(sext_ln703_556_fu_12513067_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3937_fu_12502245_p2() {
    add_ln703_3937_fu_12502245_p2 = (!sext_ln1118_1256_fu_12476645_p1.read().is_01() || !sext_ln1118_1257_fu_12476669_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_1256_fu_12476645_p1.read()) + sc_bigint<7>(sext_ln1118_1257_fu_12476669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3938_fu_12502255_p2() {
    add_ln703_3938_fu_12502255_p2 = (!sext_ln703_2227_fu_12502251_p1.read().is_01() || !zext_ln1118_3946_fu_12476649_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2227_fu_12502251_p1.read()) + sc_biguint<10>(zext_ln1118_3946_fu_12476649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3939_fu_12513082_p2() {
    add_ln703_3939_fu_12513082_p2 = (!sext_ln703_2228_fu_12513079_p1.read().is_01() || !add_ln703_3936_fu_12513073_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2228_fu_12513079_p1.read()) + sc_biguint<14>(add_ln703_3936_fu_12513073_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_393_fu_12504380_p2() {
    add_ln703_393_fu_12504380_p2 = (!sext_ln703_305_fu_12504377_p1.read().is_01() || !add_ln703_389_fu_12504371_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_305_fu_12504377_p1.read()) + sc_biguint<15>(add_ln703_389_fu_12504371_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3940_fu_12513088_p2() {
    add_ln703_3940_fu_12513088_p2 = (!add_ln703_3939_fu_12513082_p2.read().is_01() || !zext_ln708_866_fu_12503413_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3939_fu_12513082_p2.read()) + sc_biguint<14>(zext_ln708_866_fu_12503413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3941_fu_12502261_p2() {
    add_ln703_3941_fu_12502261_p2 = (!sext_ln1118_1028_fu_12464089_p1.read().is_01() || !sext_ln1118_1262_fu_12476765_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1028_fu_12464089_p1.read()) + sc_bigint<12>(sext_ln1118_1262_fu_12476765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3942_fu_12502271_p2() {
    add_ln703_3942_fu_12502271_p2 = (!sext_ln703_2230_fu_12502267_p1.read().is_01() || !sext_ln1118_1259_fu_12476711_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2230_fu_12502267_p1.read()) + sc_bigint<13>(sext_ln1118_1259_fu_12476711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3943_fu_12513101_p2() {
    add_ln703_3943_fu_12513101_p2 = (!sext_ln703_2231_fu_12513098_p1.read().is_01() || !sext_ln703_2229_fu_12513094_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2231_fu_12513098_p1.read()) + sc_bigint<15>(sext_ln703_2229_fu_12513094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3944_fu_12502277_p2() {
    add_ln703_3944_fu_12502277_p2 = (!zext_ln1118_3948_fu_12476751_p1.read().is_01() || !trunc_ln1118_157_fu_12476811_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3948_fu_12476751_p1.read()) + sc_biguint<10>(trunc_ln1118_157_fu_12476811_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3945_fu_12502287_p2() {
    add_ln703_3945_fu_12502287_p2 = (!zext_ln703_615_fu_12502283_p1.read().is_01() || !sext_ln708_225_fu_12476797_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_615_fu_12502283_p1.read()) + sc_bigint<12>(sext_ln708_225_fu_12476797_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3946_fu_12502297_p2() {
    add_ln703_3946_fu_12502297_p2 = (!sext_ln1118_1261_fu_12476731_p1.read().is_01() || !zext_ln1118_3947_fu_12476683_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1261_fu_12476731_p1.read()) + sc_biguint<10>(zext_ln1118_3947_fu_12476683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3947_fu_12502307_p2() {
    add_ln703_3947_fu_12502307_p2 = (!sext_ln703_2233_fu_12502303_p1.read().is_01() || !sext_ln1118_1258_fu_12476697_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2233_fu_12502303_p1.read()) + sc_bigint<11>(sext_ln1118_1258_fu_12476697_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3948_fu_12502317_p2() {
    add_ln703_3948_fu_12502317_p2 = (!sext_ln703_2234_fu_12502313_p1.read().is_01() || !sext_ln703_2232_fu_12502293_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2234_fu_12502313_p1.read()) + sc_bigint<13>(sext_ln703_2232_fu_12502293_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3949_fu_12513110_p2() {
    add_ln703_3949_fu_12513110_p2 = (!sext_ln703_2235_fu_12513107_p1.read().is_01() || !add_ln703_3943_fu_12513101_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2235_fu_12513107_p1.read()) + sc_biguint<15>(add_ln703_3943_fu_12513101_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_394_fu_12480257_p2() {
    add_ln703_394_fu_12480257_p2 = (!zext_ln1118_2336_fu_12409836_p1.read().is_01() || !zext_ln1116_217_fu_12409924_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2336_fu_12409836_p1.read()) + sc_biguint<10>(zext_ln1116_217_fu_12409924_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3950_fu_12502323_p2() {
    add_ln703_3950_fu_12502323_p2 = (!sext_ln203_589_fu_12476831_p1.read().is_01() || !sext_ln203_590_fu_12476845_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_589_fu_12476831_p1.read()) + sc_bigint<12>(sext_ln203_590_fu_12476845_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3951_fu_12513119_p2() {
    add_ln703_3951_fu_12513119_p2 = (!sext_ln703_2236_fu_12513116_p1.read().is_01() || !add_ln703_3949_fu_12513110_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2236_fu_12513116_p1.read()) + sc_biguint<15>(add_ln703_3949_fu_12513110_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3952_fu_12502329_p2() {
    add_ln703_3952_fu_12502329_p2 = (!sext_ln203_592_fu_12476963_p1.read().is_01() || !zext_ln203_196_fu_12476859_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_592_fu_12476963_p1.read()) + sc_biguint<12>(zext_ln203_196_fu_12476859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3953_fu_12502339_p2() {
    add_ln703_3953_fu_12502339_p2 = (!sext_ln703_2237_fu_12502335_p1.read().is_01() || !sext_ln203_591_fu_12476883_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2237_fu_12502335_p1.read()) + sc_bigint<13>(sext_ln203_591_fu_12476883_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3954_fu_12513128_p2() {
    add_ln703_3954_fu_12513128_p2 = (!sext_ln703_2238_fu_12513125_p1.read().is_01() || !add_ln703_3951_fu_12513119_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2238_fu_12513125_p1.read()) + sc_biguint<15>(add_ln703_3951_fu_12513119_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3955_fu_12502345_p2() {
    add_ln703_3955_fu_12502345_p2 = (!zext_ln203_452_fu_12476907_p1.read().is_01() || !zext_ln203_453_fu_12476921_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_452_fu_12476907_p1.read()) + sc_biguint<10>(zext_ln203_453_fu_12476921_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3956_fu_12502351_p2() {
    add_ln703_3956_fu_12502351_p2 = (!add_ln703_3955_fu_12502345_p2.read().is_01() || !zext_ln203_451_fu_12476863_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3955_fu_12502345_p2.read()) + sc_biguint<10>(zext_ln203_451_fu_12476863_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3957_fu_12502361_p2() {
    add_ln703_3957_fu_12502361_p2 = (!zext_ln708_1603_fu_12476949_p1.read().is_01() || !sext_ln203_593_fu_12476967_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1603_fu_12476949_p1.read()) + sc_bigint<11>(sext_ln203_593_fu_12476967_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3958_fu_12502371_p2() {
    add_ln703_3958_fu_12502371_p2 = (!sext_ln703_2240_fu_12502367_p1.read().is_01() || !zext_ln203_197_fu_12476935_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2240_fu_12502367_p1.read()) + sc_biguint<12>(zext_ln203_197_fu_12476935_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3959_fu_12502377_p2() {
    add_ln703_3959_fu_12502377_p2 = (!add_ln703_3958_fu_12502371_p2.read().is_01() || !zext_ln703_616_fu_12502357_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3958_fu_12502371_p2.read()) + sc_biguint<12>(zext_ln703_616_fu_12502357_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_395_fu_12480267_p2() {
    add_ln703_395_fu_12480267_p2 = (!zext_ln703_71_fu_12480263_p1.read().is_01() || !zext_ln708_1016_fu_12409822_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_71_fu_12480263_p1.read()) + sc_biguint<11>(zext_ln708_1016_fu_12409822_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3961_fu_12502383_p2() {
    add_ln703_3961_fu_12502383_p2 = (!sext_ln1118_1263_fu_12476987_p1.read().is_01() || !ap_const_lv9_98.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1263_fu_12476987_p1.read()) + sc_biguint<9>(ap_const_lv9_98));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3962_fu_12502389_p2() {
    add_ln703_3962_fu_12502389_p2 = (!add_ln703_3961_fu_12502383_p2.read().is_01() || !zext_ln1118_3951_fu_12477005_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_3961_fu_12502383_p2.read()) + sc_biguint<9>(zext_ln1118_3951_fu_12477005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3963_fu_12502399_p2() {
    add_ln703_3963_fu_12502399_p2 = (!sext_ln1118_1265_fu_12477019_p1.read().is_01() || !sext_ln1118_1264_fu_12476991_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1265_fu_12477019_p1.read()) + sc_bigint<11>(sext_ln1118_1264_fu_12476991_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3964_fu_12502409_p2() {
    add_ln703_3964_fu_12502409_p2 = (!sext_ln703_2242_fu_12502405_p1.read().is_01() || !zext_ln703_617_fu_12502395_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2242_fu_12502405_p1.read()) + sc_biguint<12>(zext_ln703_617_fu_12502395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3965_fu_12502415_p2() {
    add_ln703_3965_fu_12502415_p2 = (!add_ln703_3964_fu_12502409_p2.read().is_01() || !zext_ln708_869_fu_12477047_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3964_fu_12502409_p2.read()) + sc_biguint<12>(zext_ln708_869_fu_12477047_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3966_fu_12502421_p2() {
    add_ln703_3966_fu_12502421_p2 = (!zext_ln1118_3955_fu_12477099_p1.read().is_01() || !zext_ln1118_3788_fu_12470638_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3955_fu_12477099_p1.read()) + sc_biguint<10>(zext_ln1118_3788_fu_12470638_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3967_fu_12502431_p2() {
    add_ln703_3967_fu_12502431_p2 = (!zext_ln703_618_fu_12502427_p1.read().is_01() || !add_ln703_3965_fu_12502415_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_618_fu_12502427_p1.read()) + sc_biguint<12>(add_ln703_3965_fu_12502415_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3968_fu_12502437_p2() {
    add_ln703_3968_fu_12502437_p2 = (!sext_ln1118_1268_fu_12477075_p1.read().is_01() || !sext_ln1118_1267_fu_12477023_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1268_fu_12477075_p1.read()) + sc_bigint<11>(sext_ln1118_1267_fu_12477023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3969_fu_12502447_p2() {
    add_ln703_3969_fu_12502447_p2 = (!sext_ln1118_1072_fu_12466626_p1.read().is_01() || !zext_ln1118_3953_fu_12477061_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1072_fu_12466626_p1.read()) + sc_biguint<10>(zext_ln1118_3953_fu_12477061_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_396_fu_12480277_p2() {
    add_ln703_396_fu_12480277_p2 = (!zext_ln1118_2343_fu_12409952_p1.read().is_01() || !zext_ln1118_2344_fu_12409966_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2343_fu_12409952_p1.read()) + sc_biguint<9>(zext_ln1118_2344_fu_12409966_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3970_fu_12502457_p2() {
    add_ln703_3970_fu_12502457_p2 = (!sext_ln703_2245_fu_12502453_p1.read().is_01() || !sext_ln1118_1269_fu_12477113_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2245_fu_12502453_p1.read()) + sc_bigint<11>(sext_ln1118_1269_fu_12477113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3971_fu_12502467_p2() {
    add_ln703_3971_fu_12502467_p2 = (!sext_ln703_2246_fu_12502463_p1.read().is_01() || !sext_ln703_2244_fu_12502443_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2246_fu_12502463_p1.read()) + sc_bigint<12>(sext_ln703_2244_fu_12502443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3972_fu_12513153_p2() {
    add_ln703_3972_fu_12513153_p2 = (!sext_ln703_2247_fu_12513150_p1.read().is_01() || !sext_ln703_2243_fu_12513147_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2247_fu_12513150_p1.read()) + sc_bigint<13>(sext_ln703_2243_fu_12513147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3973_fu_12513163_p2() {
    add_ln703_3973_fu_12513163_p2 = (!sext_ln703_2248_fu_12513159_p1.read().is_01() || !sext_ln1118_1273_fu_12503416_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2248_fu_12513159_p1.read()) + sc_bigint<14>(sext_ln1118_1273_fu_12503416_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3974_fu_12502473_p2() {
    add_ln703_3974_fu_12502473_p2 = (!sext_ln1118_1277_fu_12477253_p1.read().is_01() || !zext_ln1118_3958_fu_12477169_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1277_fu_12477253_p1.read()) + sc_biguint<12>(zext_ln1118_3958_fu_12477169_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3975_fu_12502483_p2() {
    add_ln703_3975_fu_12502483_p2 = (!sext_ln703_2249_fu_12502479_p1.read().is_01() || !sext_ln708_226_fu_12477183_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2249_fu_12502479_p1.read()) + sc_bigint<13>(sext_ln708_226_fu_12477183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3976_fu_12513172_p2() {
    add_ln703_3976_fu_12513172_p2 = (!sext_ln703_2250_fu_12513169_p1.read().is_01() || !add_ln703_3973_fu_12513163_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2250_fu_12513169_p1.read()) + sc_biguint<14>(add_ln703_3973_fu_12513163_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3977_fu_12502489_p2() {
    add_ln703_3977_fu_12502489_p2 = (!sext_ln708_220_fu_12474388_p1.read().is_01() || !sext_ln1118_1276_fu_12477229_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_220_fu_12474388_p1.read()) + sc_bigint<11>(sext_ln1118_1276_fu_12477229_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3978_fu_12502499_p2() {
    add_ln703_3978_fu_12502499_p2 = (!sext_ln1118_1275_fu_12477215_p1.read().is_01() || !zext_ln1118_3959_fu_12477187_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1275_fu_12477215_p1.read()) + sc_biguint<10>(zext_ln1118_3959_fu_12477187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3979_fu_12502509_p2() {
    add_ln703_3979_fu_12502509_p2 = (!sext_ln703_2253_fu_12502505_p1.read().is_01() || !sext_ln1118_1274_fu_12477201_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2253_fu_12502505_p1.read()) + sc_bigint<11>(sext_ln1118_1274_fu_12477201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_397_fu_12480287_p2() {
    add_ln703_397_fu_12480287_p2 = (!sext_ln1118_20_fu_12403149_p1.read().is_01() || !sext_ln1118_129_fu_12409872_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_20_fu_12403149_p1.read()) + sc_bigint<11>(sext_ln1118_129_fu_12409872_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3980_fu_12502519_p2() {
    add_ln703_3980_fu_12502519_p2 = (!sext_ln703_2254_fu_12502515_p1.read().is_01() || !sext_ln703_2252_fu_12502495_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2254_fu_12502515_p1.read()) + sc_bigint<12>(sext_ln703_2252_fu_12502495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3981_fu_12513185_p2() {
    add_ln703_3981_fu_12513185_p2 = (!sext_ln703_2255_fu_12513182_p1.read().is_01() || !sext_ln703_2251_fu_12513178_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2255_fu_12513182_p1.read()) + sc_bigint<15>(sext_ln703_2251_fu_12513178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3982_fu_12502525_p2() {
    add_ln703_3982_fu_12502525_p2 = (!zext_ln203_198_fu_12477257_p1.read().is_01() || !sext_ln1118_988_fu_12461435_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_198_fu_12477257_p1.read()) + sc_bigint<12>(sext_ln1118_988_fu_12461435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3983_fu_12513194_p2() {
    add_ln703_3983_fu_12513194_p2 = (!sext_ln703_2256_fu_12513191_p1.read().is_01() || !add_ln703_3981_fu_12513185_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2256_fu_12513191_p1.read()) + sc_biguint<15>(add_ln703_3981_fu_12513185_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3984_fu_12502531_p2() {
    add_ln703_3984_fu_12502531_p2 = (!zext_ln203_454_fu_12477285_p1.read().is_01() || !zext_ln203_455_fu_12477299_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_454_fu_12477285_p1.read()) + sc_biguint<10>(zext_ln203_455_fu_12477299_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3985_fu_12502541_p2() {
    add_ln703_3985_fu_12502541_p2 = (!zext_ln703_619_fu_12502537_p1.read().is_01() || !sext_ln203_596_fu_12477377_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_619_fu_12502537_p1.read()) + sc_bigint<12>(sext_ln203_596_fu_12477377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3986_fu_12513203_p2() {
    add_ln703_3986_fu_12513203_p2 = (!sext_ln703_2257_fu_12513200_p1.read().is_01() || !add_ln703_3983_fu_12513194_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2257_fu_12513200_p1.read()) + sc_biguint<15>(add_ln703_3983_fu_12513194_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3987_fu_12502547_p2() {
    add_ln703_3987_fu_12502547_p2 = (!trunc_ln708_3017_fu_12464277_p4.read().is_01() || !zext_ln203_456_fu_12477397_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln708_3017_fu_12464277_p4.read()) + sc_biguint<10>(zext_ln203_456_fu_12477397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3988_fu_12502557_p2() {
    add_ln703_3988_fu_12502557_p2 = (!zext_ln703_620_fu_12502553_p1.read().is_01() || !zext_ln708_1604_fu_12477323_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_620_fu_12502553_p1.read()) + sc_biguint<11>(zext_ln708_1604_fu_12477323_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3989_fu_12502567_p2() {
    add_ln703_3989_fu_12502567_p2 = (!zext_ln1118_3469_fu_12459549_p1.read().is_01() || !sext_ln203_594_fu_12477281_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3469_fu_12459549_p1.read()) + sc_bigint<10>(sext_ln203_594_fu_12477281_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_398_fu_12480297_p2() {
    add_ln703_398_fu_12480297_p2 = (!sext_ln703_306_fu_12480293_p1.read().is_01() || !zext_ln703_73_fu_12480283_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_306_fu_12480293_p1.read()) + sc_biguint<12>(zext_ln703_73_fu_12480283_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3990_fu_12502577_p2() {
    add_ln703_3990_fu_12502577_p2 = (!sext_ln703_2258_fu_12502573_p1.read().is_01() || !sext_ln203_595_fu_12477353_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2258_fu_12502573_p1.read()) + sc_bigint<11>(sext_ln203_595_fu_12477353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3991_fu_12502587_p2() {
    add_ln703_3991_fu_12502587_p2 = (!sext_ln703_2259_fu_12502583_p1.read().is_01() || !zext_ln703_621_fu_12502563_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2259_fu_12502583_p1.read()) + sc_biguint<12>(zext_ln703_621_fu_12502563_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3993_fu_12502593_p2() {
    add_ln703_3993_fu_12502593_p2 = (!zext_ln203_457_fu_12477417_p1.read().is_01() || !ap_const_lv10_3F0.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_457_fu_12477417_p1.read()) + sc_bigint<10>(ap_const_lv10_3F0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3994_fu_12502603_p2() {
    add_ln703_3994_fu_12502603_p2 = (!zext_ln708_1605_fu_12477445_p1.read().is_01() || !sext_ln703_563_fu_12502599_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1605_fu_12477445_p1.read()) + sc_bigint<11>(sext_ln703_563_fu_12502599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3995_fu_12502613_p2() {
    add_ln703_3995_fu_12502613_p2 = (!zext_ln1118_3966_fu_12477459_p1.read().is_01() || !zext_ln203_458_fu_12477463_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3966_fu_12477459_p1.read()) + sc_biguint<10>(zext_ln203_458_fu_12477463_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3996_fu_12502623_p2() {
    add_ln703_3996_fu_12502623_p2 = (!zext_ln703_622_fu_12502619_p1.read().is_01() || !sext_ln703_564_fu_12502609_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_622_fu_12502619_p1.read()) + sc_bigint<12>(sext_ln703_564_fu_12502609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3997_fu_12502629_p2() {
    add_ln703_3997_fu_12502629_p2 = (!add_ln703_3996_fu_12502623_p2.read().is_01() || !zext_ln1118_3969_fu_12477495_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3996_fu_12502623_p2.read()) + sc_biguint<12>(zext_ln1118_3969_fu_12477495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3998_fu_12502639_p2() {
    add_ln703_3998_fu_12502639_p2 = (!sext_ln1118_1281_fu_12477467_p1.read().is_01() || !sext_ln1118_1062_fu_12465950_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1281_fu_12477467_p1.read()) + sc_bigint<11>(sext_ln1118_1062_fu_12465950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3999_fu_12502645_p2() {
    add_ln703_3999_fu_12502645_p2 = (!add_ln703_3998_fu_12502639_p2.read().is_01() || !zext_ln708_1606_fu_12477509_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3998_fu_12502639_p2.read()) + sc_biguint<11>(zext_ln708_1606_fu_12477509_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_399_fu_12480307_p2() {
    add_ln703_399_fu_12480307_p2 = (!sext_ln703_307_fu_12480303_p1.read().is_01() || !zext_ln703_72_fu_12480273_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_307_fu_12480303_p1.read()) + sc_biguint<13>(zext_ln703_72_fu_12480273_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_39_fu_12503505_p2() {
    add_ln703_39_fu_12503505_p2 = (!sext_ln703_35_fu_12503502_p1.read().is_01() || !sext_ln703_11_fu_12503499_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_35_fu_12503502_p1.read()) + sc_bigint<14>(sext_ln703_11_fu_12503499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3_fu_12477825_p2() {
    add_ln703_3_fu_12477825_p2 = (!sext_ln703_fu_12477821_p1.read().is_01() || !add_ln703_1_fu_12477809_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_fu_12477821_p1.read()) + sc_biguint<12>(add_ln703_1_fu_12477809_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4000_fu_12502655_p2() {
    add_ln703_4000_fu_12502655_p2 = (!sext_ln703_2263_fu_12502651_p1.read().is_01() || !sext_ln703_2262_fu_12502635_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2263_fu_12502651_p1.read()) + sc_bigint<13>(sext_ln703_2262_fu_12502635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4001_fu_12502661_p2() {
    add_ln703_4001_fu_12502661_p2 = (!zext_ln1118_3971_fu_12477533_p1.read().is_01() || !zext_ln1118_3972_fu_12477547_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3971_fu_12477533_p1.read()) + sc_biguint<10>(zext_ln1118_3972_fu_12477547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4002_fu_12502671_p2() {
    add_ln703_4002_fu_12502671_p2 = (!zext_ln703_623_fu_12502667_p1.read().is_01() || !add_ln703_4000_fu_12502655_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_623_fu_12502667_p1.read()) + sc_biguint<13>(add_ln703_4000_fu_12502655_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4003_fu_12502677_p2() {
    add_ln703_4003_fu_12502677_p2 = (!sext_ln1118_1188_fu_12473348_p1.read().is_01() || !sext_ln1118_1284_fu_12477561_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1188_fu_12473348_p1.read()) + sc_bigint<11>(sext_ln1118_1284_fu_12477561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4004_fu_12502687_p2() {
    add_ln703_4004_fu_12502687_p2 = (!sext_ln1118_1238_fu_12475668_p1.read().is_01() || !zext_ln708_563_fu_12460322_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1238_fu_12475668_p1.read()) + sc_biguint<10>(zext_ln708_563_fu_12460322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4005_fu_12502697_p2() {
    add_ln703_4005_fu_12502697_p2 = (!sext_ln703_2266_fu_12502693_p1.read().is_01() || !sext_ln703_2265_fu_12502683_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2266_fu_12502693_p1.read()) + sc_bigint<12>(sext_ln703_2265_fu_12502683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4006_fu_12513228_p2() {
    add_ln703_4006_fu_12513228_p2 = (!sext_ln703_2267_fu_12513225_p1.read().is_01() || !sext_ln703_2264_fu_12513222_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2267_fu_12513225_p1.read()) + sc_bigint<14>(sext_ln703_2264_fu_12513222_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4007_fu_12502703_p2() {
    add_ln703_4007_fu_12502703_p2 = (!sext_ln1118_1249_fu_12476253_p1.read().is_01() || !sext_ln1118_1286_fu_12477683_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1249_fu_12476253_p1.read()) + sc_bigint<12>(sext_ln1118_1286_fu_12477683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4008_fu_12513237_p2() {
    add_ln703_4008_fu_12513237_p2 = (!sext_ln703_2268_fu_12513234_p1.read().is_01() || !add_ln703_4006_fu_12513228_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2268_fu_12513234_p1.read()) + sc_biguint<14>(add_ln703_4006_fu_12513228_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4009_fu_12502709_p2() {
    add_ln703_4009_fu_12502709_p2 = (!zext_ln708_1609_fu_12477607_p1.read().is_01() || !zext_ln708_1610_fu_12477621_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1609_fu_12477607_p1.read()) + sc_biguint<11>(zext_ln708_1610_fu_12477621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_400_fu_12504389_p2() {
    add_ln703_400_fu_12504389_p2 = (!sext_ln703_308_fu_12504386_p1.read().is_01() || !add_ln703_393_fu_12504380_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_308_fu_12504386_p1.read()) + sc_biguint<15>(add_ln703_393_fu_12504380_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4010_fu_12502715_p2() {
    add_ln703_4010_fu_12502715_p2 = (!add_ln703_4009_fu_12502709_p2.read().is_01() || !zext_ln708_1608_fu_12477603_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4009_fu_12502709_p2.read()) + sc_biguint<11>(zext_ln708_1608_fu_12477603_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4011_fu_12513250_p2() {
    add_ln703_4011_fu_12513250_p2 = (!zext_ln703_624_fu_12513247_p1.read().is_01() || !sext_ln703_2269_fu_12513243_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_624_fu_12513247_p1.read()) + sc_bigint<15>(sext_ln703_2269_fu_12513243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4012_fu_12502721_p2() {
    add_ln703_4012_fu_12502721_p2 = (!trunc_ln1118_158_fu_12477701_p4.read().is_01() || !zext_ln1118_3975_fu_12477727_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_158_fu_12477701_p4.read()) + sc_biguint<10>(zext_ln1118_3975_fu_12477727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4013_fu_12502731_p2() {
    add_ln703_4013_fu_12502731_p2 = (!zext_ln703_625_fu_12502727_p1.read().is_01() || !zext_ln708_1611_fu_12477669_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_625_fu_12502727_p1.read()) + sc_biguint<11>(zext_ln708_1611_fu_12477669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4014_fu_12502741_p2() {
    add_ln703_4014_fu_12502741_p2 = (!sext_ln708_228_fu_12477697_p1.read().is_01() || !sext_ln708_227_fu_12477575_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_228_fu_12477697_p1.read()) + sc_bigint<11>(sext_ln708_227_fu_12477575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4015_fu_12502747_p2() {
    add_ln703_4015_fu_12502747_p2 = (!zext_ln708_1607_fu_12477589_p1.read().is_01() || !sext_ln1118_1285_fu_12477645_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1607_fu_12477589_p1.read()) + sc_bigint<8>(sext_ln1118_1285_fu_12477645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4016_fu_12502757_p2() {
    add_ln703_4016_fu_12502757_p2 = (!sext_ln703_2270_fu_12502753_p1.read().is_01() || !add_ln703_4014_fu_12502741_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2270_fu_12502753_p1.read()) + sc_biguint<11>(add_ln703_4014_fu_12502741_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4017_fu_12502767_p2() {
    add_ln703_4017_fu_12502767_p2 = (!sext_ln703_2271_fu_12502763_p1.read().is_01() || !zext_ln703_626_fu_12502737_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2271_fu_12502763_p1.read()) + sc_biguint<12>(zext_ln703_626_fu_12502737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4018_fu_12513259_p2() {
    add_ln703_4018_fu_12513259_p2 = (!sext_ln703_2272_fu_12513256_p1.read().is_01() || !add_ln703_4011_fu_12513250_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2272_fu_12513256_p1.read()) + sc_biguint<15>(add_ln703_4011_fu_12513250_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4019_fu_12502773_p2() {
    add_ln703_4019_fu_12502773_p2 = (!zext_ln203_459_fu_12477751_p1.read().is_01() || !trunc_ln203_71_fu_12477769_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_459_fu_12477751_p1.read()) + sc_biguint<10>(trunc_ln203_71_fu_12477769_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_401_fu_12504395_p2() {
    add_ln703_401_fu_12504395_p2 = (!add_ln703_400_fu_12504389_p2.read().is_01() || !sext_ln203_52_fu_12502861_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_400_fu_12504389_p2.read()) + sc_bigint<15>(sext_ln203_52_fu_12502861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4020_fu_12513268_p2() {
    add_ln703_4020_fu_12513268_p2 = (!zext_ln703_627_fu_12513265_p1.read().is_01() || !add_ln703_4018_fu_12513259_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_627_fu_12513265_p1.read()) + sc_biguint<15>(add_ln703_4018_fu_12513259_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4021_fu_12502779_p2() {
    add_ln703_4021_fu_12502779_p2 = (!sext_ln708_189_fu_12465735_p1.read().is_01() || !sext_ln203_599_fu_12477799_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_189_fu_12465735_p1.read()) + sc_bigint<9>(sext_ln203_599_fu_12477799_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4022_fu_12502789_p2() {
    add_ln703_4022_fu_12502789_p2 = (!sext_ln703_2273_fu_12502785_p1.read().is_01() || !sext_ln203_598_fu_12477765_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2273_fu_12502785_p1.read()) + sc_bigint<10>(sext_ln203_598_fu_12477765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_402_fu_12480313_p2() {
    add_ln703_402_fu_12480313_p2 = (!sext_ln203_53_fu_12410055_p1.read().is_01() || !zext_ln203_22_fu_12410008_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_53_fu_12410055_p1.read()) + sc_biguint<12>(zext_ln203_22_fu_12410008_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_403_fu_12504408_p2() {
    add_ln703_403_fu_12504408_p2 = (!sext_ln703_310_fu_12504405_p1.read().is_01() || !sext_ln703_309_fu_12504401_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_310_fu_12504405_p1.read()) + sc_bigint<16>(sext_ln703_309_fu_12504401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_404_fu_12480319_p2() {
    add_ln703_404_fu_12480319_p2 = (!zext_ln708_1017_fu_12410022_p1.read().is_01() || !zext_ln708_1018_fu_12410036_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1017_fu_12410022_p1.read()) + sc_biguint<11>(zext_ln708_1018_fu_12410036_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_405_fu_12480329_p2() {
    add_ln703_405_fu_12480329_p2 = (!zext_ln708_1019_fu_12410069_p1.read().is_01() || !sext_ln203_54_fu_12410089_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1019_fu_12410069_p1.read()) + sc_bigint<11>(sext_ln203_54_fu_12410089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_406_fu_12480339_p2() {
    add_ln703_406_fu_12480339_p2 = (!sext_ln703_311_fu_12480335_p1.read().is_01() || !zext_ln203_15_fu_12407687_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_311_fu_12480335_p1.read()) + sc_biguint<12>(zext_ln203_15_fu_12407687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_407_fu_12480349_p2() {
    add_ln703_407_fu_12480349_p2 = (!sext_ln703_315_fu_12480345_p1.read().is_01() || !zext_ln703_74_fu_12480325_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_315_fu_12480345_p1.read()) + sc_biguint<13>(zext_ln703_74_fu_12480325_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_409_fu_12480355_p2() {
    add_ln703_409_fu_12480355_p2 = (!zext_ln708_1021_fu_12410123_p1.read().is_01() || !ap_const_lv11_5D0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1021_fu_12410123_p1.read()) + sc_bigint<11>(ap_const_lv11_5D0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_40_fu_12478053_p2() {
    add_ln703_40_fu_12478053_p2 = (!zext_ln708_955_fu_12402164_p1.read().is_01() || !zext_ln708_956_fu_12402178_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_955_fu_12402164_p1.read()) + sc_biguint<11>(zext_ln708_956_fu_12402178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_410_fu_12480361_p2() {
    add_ln703_410_fu_12480361_p2 = (!add_ln703_409_fu_12480355_p2.read().is_01() || !zext_ln708_1020_fu_12410103_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_409_fu_12480355_p2.read()) + sc_biguint<11>(zext_ln708_1020_fu_12410103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_411_fu_12480371_p2() {
    add_ln703_411_fu_12480371_p2 = (!sext_ln703_61_fu_12480367_p1.read().is_01() || !sext_ln203_55_fu_12410161_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_61_fu_12480367_p1.read()) + sc_bigint<12>(sext_ln203_55_fu_12410161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_412_fu_12480377_p2() {
    add_ln703_412_fu_12480377_p2 = (!add_ln703_411_fu_12480371_p2.read().is_01() || !zext_ln1118_1112_fu_12410181_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_411_fu_12480371_p2.read()) + sc_biguint<12>(zext_ln1118_1112_fu_12410181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_413_fu_12480387_p2() {
    add_ln703_413_fu_12480387_p2 = (!zext_ln708_1022_fu_12410195_p1.read().is_01() || !sext_ln1118_30_fu_12403659_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1022_fu_12410195_p1.read()) + sc_bigint<11>(sext_ln1118_30_fu_12403659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_414_fu_12480397_p2() {
    add_ln703_414_fu_12480397_p2 = (!sext_ln703_318_fu_12480393_p1.read().is_01() || !sext_ln703_317_fu_12480383_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_318_fu_12480393_p1.read()) + sc_bigint<13>(sext_ln703_317_fu_12480383_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_415_fu_12480403_p2() {
    add_ln703_415_fu_12480403_p2 = (!add_ln703_414_fu_12480397_p2.read().is_01() || !zext_ln708_111_fu_12410227_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_414_fu_12480397_p2.read()) + sc_biguint<13>(zext_ln708_111_fu_12410227_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_416_fu_12480409_p2() {
    add_ln703_416_fu_12480409_p2 = (!sext_ln1118_133_fu_12410279_p1.read().is_01() || !sext_ln1118_134_fu_12410299_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_133_fu_12410279_p1.read()) + sc_bigint<12>(sext_ln1118_134_fu_12410299_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_417_fu_12504429_p2() {
    add_ln703_417_fu_12504429_p2 = (!sext_ln703_320_fu_12504426_p1.read().is_01() || !sext_ln703_319_fu_12504423_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_320_fu_12504426_p1.read()) + sc_bigint<14>(sext_ln703_319_fu_12504423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_418_fu_12480415_p2() {
    add_ln703_418_fu_12480415_p2 = (!zext_ln1118_2345_fu_12410265_p1.read().is_01() || !zext_ln1118_2305_fu_12407970_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2345_fu_12410265_p1.read()) + sc_biguint<10>(zext_ln1118_2305_fu_12407970_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_419_fu_12480421_p2() {
    add_ln703_419_fu_12480421_p2 = (!trunc_ln1118_48_fu_12410321_p4.read().is_01() || !zext_ln1118_1119_fu_12410241_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_48_fu_12410321_p4.read()) + sc_biguint<9>(zext_ln1118_1119_fu_12410241_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_41_fu_12478063_p2() {
    add_ln703_41_fu_12478063_p2 = (!sext_ln1118_7_fu_12402083_p1.read().is_01() || !zext_ln708_29_fu_12402150_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_7_fu_12402083_p1.read()) + sc_biguint<10>(zext_ln708_29_fu_12402150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_420_fu_12480431_p2() {
    add_ln703_420_fu_12480431_p2 = (!zext_ln703_75_fu_12480427_p1.read().is_01() || !add_ln703_418_fu_12480415_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_75_fu_12480427_p1.read()) + sc_biguint<10>(add_ln703_418_fu_12480415_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_421_fu_12504438_p2() {
    add_ln703_421_fu_12504438_p2 = (!zext_ln703_76_fu_12504435_p1.read().is_01() || !add_ln703_417_fu_12504429_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_76_fu_12504435_p1.read()) + sc_biguint<14>(add_ln703_417_fu_12504429_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_422_fu_12480437_p2() {
    add_ln703_422_fu_12480437_p2 = (!sext_ln1118_135_fu_12410363_p1.read().is_01() || !sext_ln1118_136_fu_12410421_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_135_fu_12410363_p1.read()) + sc_bigint<12>(sext_ln1118_136_fu_12410421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_423_fu_12504447_p2() {
    add_ln703_423_fu_12504447_p2 = (!sext_ln703_321_fu_12504444_p1.read().is_01() || !add_ln703_421_fu_12504438_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_321_fu_12504444_p1.read()) + sc_biguint<14>(add_ln703_421_fu_12504438_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_424_fu_12480443_p2() {
    add_ln703_424_fu_12480443_p2 = (!zext_ln708_997_fu_12408088_p1.read().is_01() || !zext_ln708_1024_fu_12410417_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_997_fu_12408088_p1.read()) + sc_biguint<11>(zext_ln708_1024_fu_12410417_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_425_fu_12480453_p2() {
    add_ln703_425_fu_12480453_p2 = (!zext_ln703_77_fu_12480449_p1.read().is_01() || !zext_ln708_112_fu_12410377_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_77_fu_12480449_p1.read()) + sc_biguint<12>(zext_ln708_112_fu_12410377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_426_fu_12504460_p2() {
    add_ln703_426_fu_12504460_p2 = (!zext_ln703_78_fu_12504457_p1.read().is_01() || !sext_ln703_322_fu_12504453_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_78_fu_12504457_p1.read()) + sc_bigint<15>(sext_ln703_322_fu_12504453_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_427_fu_12480459_p2() {
    add_ln703_427_fu_12480459_p2 = (!zext_ln708_1026_fu_12410463_p1.read().is_01() || !zext_ln708_1027_fu_12410497_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1026_fu_12410463_p1.read()) + sc_biguint<11>(zext_ln708_1027_fu_12410497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_428_fu_12480465_p2() {
    add_ln703_428_fu_12480465_p2 = (!add_ln703_427_fu_12480459_p2.read().is_01() || !zext_ln708_1025_fu_12410435_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_427_fu_12480459_p2.read()) + sc_biguint<11>(zext_ln708_1025_fu_12410435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_429_fu_12480475_p2() {
    add_ln703_429_fu_12480475_p2 = (!zext_ln708_1023_fu_12410397_p1.read().is_01() || !zext_ln1118_744_fu_12407404_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1023_fu_12410397_p1.read()) + sc_biguint<10>(zext_ln1118_744_fu_12407404_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_42_fu_12478073_p2() {
    add_ln703_42_fu_12478073_p2 = (!sext_ln703_36_fu_12478069_p1.read().is_01() || !zext_ln703_17_fu_12478059_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_36_fu_12478069_p1.read()) + sc_biguint<12>(zext_ln703_17_fu_12478059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_430_fu_12480485_p2() {
    add_ln703_430_fu_12480485_p2 = (!zext_ln703_80_fu_12480481_p1.read().is_01() || !sext_ln708_26_fu_12410477_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_80_fu_12480481_p1.read()) + sc_bigint<12>(sext_ln708_26_fu_12410477_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_431_fu_12480495_p2() {
    add_ln703_431_fu_12480495_p2 = (!sext_ln703_323_fu_12480491_p1.read().is_01() || !zext_ln703_79_fu_12480471_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_323_fu_12480491_p1.read()) + sc_biguint<13>(zext_ln703_79_fu_12480471_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_432_fu_12504469_p2() {
    add_ln703_432_fu_12504469_p2 = (!sext_ln703_324_fu_12504466_p1.read().is_01() || !add_ln703_426_fu_12504460_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_324_fu_12504466_p1.read()) + sc_biguint<15>(add_ln703_426_fu_12504460_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_433_fu_12504475_p2() {
    add_ln703_433_fu_12504475_p2 = (!add_ln703_432_fu_12504469_p2.read().is_01() || !sext_ln203_56_fu_12502864_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_432_fu_12504469_p2.read()) + sc_bigint<15>(sext_ln203_56_fu_12502864_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_434_fu_12480501_p2() {
    add_ln703_434_fu_12480501_p2 = (!sext_ln203_57_fu_12410521_p1.read().is_01() || !sext_ln203_58_fu_12410603_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_57_fu_12410521_p1.read()) + sc_bigint<12>(sext_ln203_58_fu_12410603_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_435_fu_12504484_p2() {
    add_ln703_435_fu_12504484_p2 = (!sext_ln703_327_fu_12504481_p1.read().is_01() || !add_ln703_433_fu_12504475_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_327_fu_12504481_p1.read()) + sc_biguint<15>(add_ln703_433_fu_12504475_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_436_fu_12480507_p2() {
    add_ln703_436_fu_12480507_p2 = (!zext_ln708_1028_fu_12410549_p1.read().is_01() || !zext_ln708_1029_fu_12410569_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1028_fu_12410549_p1.read()) + sc_biguint<11>(zext_ln708_1029_fu_12410569_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_437_fu_12480517_p2() {
    add_ln703_437_fu_12480517_p2 = (!sext_ln203_60_fu_12410653_p1.read().is_01() || !sext_ln203_59_fu_12410607_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_60_fu_12410653_p1.read()) + sc_bigint<10>(sext_ln203_59_fu_12410607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_438_fu_12480527_p2() {
    add_ln703_438_fu_12480527_p2 = (!sext_ln703_329_fu_12480523_p1.read().is_01() || !zext_ln708_1030_fu_12410621_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_329_fu_12480523_p1.read()) + sc_biguint<11>(zext_ln708_1030_fu_12410621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_439_fu_12480537_p2() {
    add_ln703_439_fu_12480537_p2 = (!sext_ln703_330_fu_12480533_p1.read().is_01() || !zext_ln703_81_fu_12480513_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_330_fu_12480533_p1.read()) + sc_biguint<13>(zext_ln703_81_fu_12480513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_43_fu_12503514_p2() {
    add_ln703_43_fu_12503514_p2 = (!sext_ln703_37_fu_12503511_p1.read().is_01() || !add_ln703_39_fu_12503505_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_37_fu_12503511_p1.read()) + sc_biguint<14>(add_ln703_39_fu_12503505_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_441_fu_12480543_p2() {
    add_ln703_441_fu_12480543_p2 = (!sext_ln203_20_fu_12404347_p1.read().is_01() || !zext_ln203_25_fu_12410673_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_20_fu_12404347_p1.read()) + sc_biguint<12>(zext_ln203_25_fu_12410673_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_442_fu_12480549_p2() {
    add_ln703_442_fu_12480549_p2 = (!zext_ln1118_2357_fu_12410705_p1.read().is_01() || !ap_const_lv10_3B8.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2357_fu_12410705_p1.read()) + sc_bigint<10>(ap_const_lv10_3B8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_443_fu_12480559_p2() {
    add_ln703_443_fu_12480559_p2 = (!sext_ln703_333_fu_12480555_p1.read().is_01() || !add_ln703_441_fu_12480543_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_333_fu_12480555_p1.read()) + sc_biguint<12>(add_ln703_441_fu_12480543_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_444_fu_12480569_p2() {
    add_ln703_444_fu_12480569_p2 = (!sext_ln703_66_fu_12480565_p1.read().is_01() || !sext_ln203_61_fu_12410759_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_66_fu_12480565_p1.read()) + sc_bigint<13>(sext_ln203_61_fu_12410759_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_445_fu_12480575_p2() {
    add_ln703_445_fu_12480575_p2 = (!zext_ln708_1031_fu_12410745_p1.read().is_01() || !sext_ln708_27_fu_12410725_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1031_fu_12410745_p1.read()) + sc_bigint<11>(sext_ln708_27_fu_12410725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_446_fu_12480585_p2() {
    add_ln703_446_fu_12480585_p2 = (!sext_ln703_334_fu_12480581_p1.read().is_01() || !add_ln703_444_fu_12480569_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_334_fu_12480581_p1.read()) + sc_biguint<13>(add_ln703_444_fu_12480569_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_447_fu_12480595_p2() {
    add_ln703_447_fu_12480595_p2 = (!zext_ln708_1032_fu_12410773_p1.read().is_01() || !zext_ln708_1033_fu_12410839_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1032_fu_12410773_p1.read()) + sc_biguint<11>(zext_ln708_1033_fu_12410839_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_448_fu_12480605_p2() {
    add_ln703_448_fu_12480605_p2 = (!zext_ln703_82_fu_12480601_p1.read().is_01() || !sext_ln703_67_fu_12480591_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_82_fu_12480601_p1.read()) + sc_bigint<14>(sext_ln703_67_fu_12480591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_449_fu_12480611_p2() {
    add_ln703_449_fu_12480611_p2 = (!sext_ln708_29_fu_12410825_p1.read().is_01() || !zext_ln1118_1160_fu_12410801_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_29_fu_12410825_p1.read()) + sc_biguint<11>(zext_ln1118_1160_fu_12410801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_44_fu_12503520_p2() {
    add_ln703_44_fu_12503520_p2 = (!add_ln703_43_fu_12503514_p2.read().is_01() || !sext_ln708_2_fu_12502798_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_43_fu_12503514_p2.read()) + sc_bigint<14>(sext_ln708_2_fu_12502798_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_450_fu_12480621_p2() {
    add_ln703_450_fu_12480621_p2 = (!sext_ln703_335_fu_12480617_p1.read().is_01() || !sext_ln708_28_fu_12410787_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_335_fu_12480617_p1.read()) + sc_bigint<12>(sext_ln708_28_fu_12410787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_451_fu_12480631_p2() {
    add_ln703_451_fu_12480631_p2 = (!sext_ln703_336_fu_12480627_p1.read().is_01() || !add_ln703_448_fu_12480605_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_336_fu_12480627_p1.read()) + sc_biguint<14>(add_ln703_448_fu_12480605_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_452_fu_12480637_p2() {
    add_ln703_452_fu_12480637_p2 = (!sext_ln1118_139_fu_12410931_p1.read().is_01() || !sext_ln708_32_fu_12411051_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_139_fu_12410931_p1.read()) + sc_bigint<12>(sext_ln708_32_fu_12411051_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_453_fu_12504509_p2() {
    add_ln703_453_fu_12504509_p2 = (!sext_ln703_337_fu_12504506_p1.read().is_01() || !sext_ln703_68_fu_12504503_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_337_fu_12504506_p1.read()) + sc_bigint<15>(sext_ln703_68_fu_12504503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_454_fu_12480643_p2() {
    add_ln703_454_fu_12480643_p2 = (!zext_ln708_1034_fu_12410889_p1.read().is_01() || !zext_ln708_1035_fu_12410903_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1034_fu_12410889_p1.read()) + sc_biguint<11>(zext_ln708_1035_fu_12410903_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_455_fu_12480653_p2() {
    add_ln703_455_fu_12480653_p2 = (!zext_ln708_1036_fu_12410917_p1.read().is_01() || !zext_ln708_1037_fu_12410945_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1036_fu_12410917_p1.read()) + sc_biguint<11>(zext_ln708_1037_fu_12410945_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_456_fu_12480663_p2() {
    add_ln703_456_fu_12480663_p2 = (!zext_ln703_84_fu_12480659_p1.read().is_01() || !zext_ln703_83_fu_12480649_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_84_fu_12480659_p1.read()) + sc_biguint<12>(zext_ln703_83_fu_12480649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_457_fu_12504518_p2() {
    add_ln703_457_fu_12504518_p2 = (!zext_ln703_85_fu_12504515_p1.read().is_01() || !add_ln703_453_fu_12504509_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_85_fu_12504515_p1.read()) + sc_biguint<15>(add_ln703_453_fu_12504509_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_458_fu_12480669_p2() {
    add_ln703_458_fu_12480669_p2 = (!trunc_ln1118_50_fu_12411055_p4.read().is_01() || !zext_ln1118_2392_fu_12411075_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_50_fu_12411055_p4.read()) + sc_biguint<10>(zext_ln1118_2392_fu_12411075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_459_fu_12480679_p2() {
    add_ln703_459_fu_12480679_p2 = (!zext_ln703_86_fu_12480675_p1.read().is_01() || !zext_ln708_1039_fu_12411007_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_86_fu_12480675_p1.read()) + sc_biguint<11>(zext_ln708_1039_fu_12411007_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_45_fu_12478079_p2() {
    add_ln703_45_fu_12478079_p2 = (!sext_ln1118_12_fu_12402380_p1.read().is_01() || !sext_ln1118_14_fu_12402434_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_12_fu_12402380_p1.read()) + sc_bigint<12>(sext_ln1118_14_fu_12402434_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_460_fu_12480689_p2() {
    add_ln703_460_fu_12480689_p2 = (!zext_ln708_1038_fu_12410983_p1.read().is_01() || !sext_ln708_30_fu_12410875_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1038_fu_12410983_p1.read()) + sc_bigint<8>(sext_ln708_30_fu_12410875_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_461_fu_12480699_p2() {
    add_ln703_461_fu_12480699_p2 = (!sext_ln708_31_fu_12410969_p1.read().is_01() || !sext_ln1118_140_fu_12411031_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln708_31_fu_12410969_p1.read()) + sc_bigint<7>(sext_ln1118_140_fu_12411031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_462_fu_12480709_p2() {
    add_ln703_462_fu_12480709_p2 = (!sext_ln703_342_fu_12480705_p1.read().is_01() || !sext_ln703_338_fu_12480695_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_342_fu_12480705_p1.read()) + sc_bigint<9>(sext_ln703_338_fu_12480695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_463_fu_12480719_p2() {
    add_ln703_463_fu_12480719_p2 = (!sext_ln703_344_fu_12480715_p1.read().is_01() || !zext_ln703_87_fu_12480685_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_344_fu_12480715_p1.read()) + sc_biguint<12>(zext_ln703_87_fu_12480685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_464_fu_12504527_p2() {
    add_ln703_464_fu_12504527_p2 = (!sext_ln703_345_fu_12504524_p1.read().is_01() || !add_ln703_457_fu_12504518_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_345_fu_12504524_p1.read()) + sc_biguint<15>(add_ln703_457_fu_12504518_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_465_fu_12504533_p2() {
    add_ln703_465_fu_12504533_p2 = (!add_ln703_464_fu_12504527_p2.read().is_01() || !sext_ln203_62_fu_12502867_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_464_fu_12504527_p2.read()) + sc_bigint<15>(sext_ln203_62_fu_12502867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_466_fu_12480725_p2() {
    add_ln703_466_fu_12480725_p2 = (!sext_ln203_42_fu_12408310_p1.read().is_01() || !sext_ln203_66_fu_12411197_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_42_fu_12408310_p1.read()) + sc_bigint<12>(sext_ln203_66_fu_12411197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_467_fu_12504542_p2() {
    add_ln703_467_fu_12504542_p2 = (!sext_ln703_346_fu_12504539_p1.read().is_01() || !add_ln703_465_fu_12504533_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_346_fu_12504539_p1.read()) + sc_biguint<15>(add_ln703_465_fu_12504533_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_468_fu_12480731_p2() {
    add_ln703_468_fu_12480731_p2 = (!zext_ln708_1040_fu_12411135_p1.read().is_01() || !sext_ln203_63_fu_12411099_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1040_fu_12411135_p1.read()) + sc_bigint<11>(sext_ln203_63_fu_12411099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_469_fu_12480741_p2() {
    add_ln703_469_fu_12480741_p2 = (!sext_ln203_67_fu_12411233_p1.read().is_01() || !sext_ln203_64_fu_12411159_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_67_fu_12411233_p1.read()) + sc_bigint<11>(sext_ln203_64_fu_12411159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_46_fu_12478089_p2() {
    add_ln703_46_fu_12478089_p2 = (!sext_ln703_39_fu_12478085_p1.read().is_01() || !sext_ln1118_11_fu_12402348_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_39_fu_12478085_p1.read()) + sc_bigint<13>(sext_ln1118_11_fu_12402348_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_470_fu_12480751_p2() {
    add_ln703_470_fu_12480751_p2 = (!sext_ln703_352_fu_12480747_p1.read().is_01() || !sext_ln203_65_fu_12411163_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_352_fu_12480747_p1.read()) + sc_bigint<12>(sext_ln203_65_fu_12411163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_471_fu_12480757_p2() {
    add_ln703_471_fu_12480757_p2 = (!add_ln703_470_fu_12480751_p2.read().is_01() || !sext_ln703_351_fu_12480737_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_470_fu_12480751_p2.read()) + sc_bigint<12>(sext_ln703_351_fu_12480737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_473_fu_12480763_p2() {
    add_ln703_473_fu_12480763_p2 = (!zext_ln708_1041_fu_12411261_p1.read().is_01() || !sext_ln1118_143_fu_12411247_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1041_fu_12411261_p1.read()) + sc_bigint<11>(sext_ln1118_143_fu_12411247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_474_fu_12480773_p2() {
    add_ln703_474_fu_12480773_p2 = (!sext_ln703_354_fu_12480769_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_354_fu_12480769_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_475_fu_12480779_p2() {
    add_ln703_475_fu_12480779_p2 = (!zext_ln1118_2395_fu_12411325_p1.read().is_01() || !trunc_ln1118_53_fu_12411377_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2395_fu_12411325_p1.read()) + sc_biguint<10>(trunc_ln1118_53_fu_12411377_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_476_fu_12480789_p2() {
    add_ln703_476_fu_12480789_p2 = (!zext_ln703_88_fu_12480785_p1.read().is_01() || !add_ln703_474_fu_12480773_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_88_fu_12480785_p1.read()) + sc_biguint<12>(add_ln703_474_fu_12480773_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_477_fu_12480795_p2() {
    add_ln703_477_fu_12480795_p2 = (!zext_ln708_1042_fu_12411397_p1.read().is_01() || !sext_ln1118_144_fu_12411297_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1042_fu_12411397_p1.read()) + sc_bigint<11>(sext_ln1118_144_fu_12411297_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_478_fu_12480801_p2() {
    add_ln703_478_fu_12480801_p2 = (!zext_ln708_118_fu_12411363_p1.read().is_01() || !sext_ln708_33_fu_12411349_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_118_fu_12411363_p1.read()) + sc_bigint<9>(sext_ln708_33_fu_12411349_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_479_fu_12480811_p2() {
    add_ln703_479_fu_12480811_p2 = (!sext_ln703_355_fu_12480807_p1.read().is_01() || !add_ln703_477_fu_12480795_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_355_fu_12480807_p1.read()) + sc_biguint<11>(add_ln703_477_fu_12480795_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_47_fu_12503533_p2() {
    add_ln703_47_fu_12503533_p2 = (!sext_ln703_40_fu_12503530_p1.read().is_01() || !sext_ln703_38_fu_12503526_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_40_fu_12503530_p1.read()) + sc_bigint<15>(sext_ln703_38_fu_12503526_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_480_fu_12480821_p2() {
    add_ln703_480_fu_12480821_p2 = (!sext_ln703_356_fu_12480817_p1.read().is_01() || !add_ln703_476_fu_12480789_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_356_fu_12480817_p1.read()) + sc_biguint<12>(add_ln703_476_fu_12480789_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_481_fu_12480827_p2() {
    add_ln703_481_fu_12480827_p2 = (!sext_ln1118_145_fu_12411433_p1.read().is_01() || !zext_ln1118_1192_fu_12411453_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_145_fu_12411433_p1.read()) + sc_biguint<12>(zext_ln1118_1192_fu_12411453_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_482_fu_12504567_p2() {
    add_ln703_482_fu_12504567_p2 = (!sext_ln703_358_fu_12504564_p1.read().is_01() || !sext_ln703_357_fu_12504561_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_358_fu_12504564_p1.read()) + sc_bigint<13>(sext_ln703_357_fu_12504561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_483_fu_12480833_p2() {
    add_ln703_483_fu_12480833_p2 = (!sext_ln1118_146_fu_12411467_p1.read().is_01() || !sext_ln1118_147_fu_12411481_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_146_fu_12411467_p1.read()) + sc_bigint<10>(sext_ln1118_147_fu_12411481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_484_fu_12480843_p2() {
    add_ln703_484_fu_12480843_p2 = (!sext_ln703_359_fu_12480839_p1.read().is_01() || !sext_ln1118_149_fu_12411509_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_359_fu_12480839_p1.read()) + sc_bigint<11>(sext_ln1118_149_fu_12411509_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_485_fu_12504576_p2() {
    add_ln703_485_fu_12504576_p2 = (!sext_ln703_360_fu_12504573_p1.read().is_01() || !add_ln703_482_fu_12504567_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_360_fu_12504573_p1.read()) + sc_biguint<13>(add_ln703_482_fu_12504567_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_486_fu_12504586_p2() {
    add_ln703_486_fu_12504586_p2 = (!sext_ln1118_154_fu_12502870_p1.read().is_01() || !sext_ln1118_156_fu_12502873_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_154_fu_12502870_p1.read()) + sc_bigint<12>(sext_ln1118_156_fu_12502873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_487_fu_12504596_p2() {
    add_ln703_487_fu_12504596_p2 = (!sext_ln703_362_fu_12504592_p1.read().is_01() || !sext_ln703_361_fu_12504582_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_362_fu_12504592_p1.read()) + sc_bigint<14>(sext_ln703_361_fu_12504582_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_488_fu_12480849_p2() {
    add_ln703_488_fu_12480849_p2 = (!zext_ln1118_2399_fu_12411571_p1.read().is_01() || !zext_ln708_1043_fu_12411677_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2399_fu_12411571_p1.read()) + sc_biguint<10>(zext_ln708_1043_fu_12411677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_489_fu_12480855_p2() {
    add_ln703_489_fu_12480855_p2 = (!add_ln703_488_fu_12480849_p2.read().is_01() || !zext_ln1118_2396_fu_12411557_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_488_fu_12480849_p2.read()) + sc_biguint<10>(zext_ln1118_2396_fu_12411557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_48_fu_12478095_p2() {
    add_ln703_48_fu_12478095_p2 = (!zext_ln1118_2244_fu_12402324_p1.read().is_01() || !trunc_ln1118_2_fu_12402328_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2244_fu_12402324_p1.read()) + sc_biguint<10>(trunc_ln1118_2_fu_12402328_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_490_fu_12504605_p2() {
    add_ln703_490_fu_12504605_p2 = (!zext_ln703_89_fu_12504602_p1.read().is_01() || !add_ln703_487_fu_12504596_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_89_fu_12504602_p1.read()) + sc_biguint<14>(add_ln703_487_fu_12504596_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_491_fu_12480861_p2() {
    add_ln703_491_fu_12480861_p2 = (!zext_ln1118_1207_fu_12411705_p1.read().is_01() || !sext_ln1118_158_fu_12411767_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1207_fu_12411705_p1.read()) + sc_bigint<12>(sext_ln1118_158_fu_12411767_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_492_fu_12480867_p2() {
    add_ln703_492_fu_12480867_p2 = (!add_ln703_491_fu_12480861_p2.read().is_01() || !zext_ln708_122_fu_12411691_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_491_fu_12480861_p2.read()) + sc_biguint<12>(zext_ln708_122_fu_12411691_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_493_fu_12480877_p2() {
    add_ln703_493_fu_12480877_p2 = (!sext_ln1118_152_fu_12411613_p1.read().is_01() || !sext_ln1118_153_fu_12411645_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_152_fu_12411613_p1.read()) + sc_bigint<9>(sext_ln1118_153_fu_12411645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_494_fu_12480887_p2() {
    add_ln703_494_fu_12480887_p2 = (!sext_ln703_367_fu_12480883_p1.read().is_01() || !sext_ln1118_150_fu_12411533_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_367_fu_12480883_p1.read()) + sc_bigint<10>(sext_ln1118_150_fu_12411533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_495_fu_12480897_p2() {
    add_ln703_495_fu_12480897_p2 = (!sext_ln703_370_fu_12480893_p1.read().is_01() || !sext_ln703_366_fu_12480873_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_370_fu_12480893_p1.read()) + sc_bigint<13>(sext_ln703_366_fu_12480873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_496_fu_12504618_p2() {
    add_ln703_496_fu_12504618_p2 = (!sext_ln703_371_fu_12504615_p1.read().is_01() || !sext_ln703_363_fu_12504611_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_371_fu_12504615_p1.read()) + sc_bigint<15>(sext_ln703_363_fu_12504611_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_497_fu_12504624_p2() {
    add_ln703_497_fu_12504624_p2 = (!add_ln703_496_fu_12504618_p2.read().is_01() || !zext_ln203_26_fu_12502876_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_496_fu_12504618_p2.read()) + sc_biguint<15>(zext_ln203_26_fu_12502876_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_498_fu_12480903_p2() {
    add_ln703_498_fu_12480903_p2 = (!sext_ln203_69_fu_12411879_p1.read().is_01() || !zext_ln203_27_fu_12411837_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_69_fu_12411879_p1.read()) + sc_biguint<12>(zext_ln203_27_fu_12411837_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_499_fu_12504633_p2() {
    add_ln703_499_fu_12504633_p2 = (!sext_ln703_372_fu_12504630_p1.read().is_01() || !add_ln703_497_fu_12504624_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_372_fu_12504630_p1.read()) + sc_biguint<15>(add_ln703_497_fu_12504624_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_49_fu_12478105_p2() {
    add_ln703_49_fu_12478105_p2 = (!zext_ln703_18_fu_12478101_p1.read().is_01() || !sext_ln1118_15_fu_12402448_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_18_fu_12478101_p1.read()) + sc_bigint<12>(sext_ln1118_15_fu_12402448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4_fu_12477835_p2() {
    add_ln703_4_fu_12477835_p2 = (!sext_ln703_12_fu_12477831_p1.read().is_01() || !sext_ln1116_1_fu_12400782_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_12_fu_12477831_p1.read()) + sc_bigint<13>(sext_ln1116_1_fu_12400782_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_500_fu_12480909_p2() {
    add_ln703_500_fu_12480909_p2 = (!zext_ln708_1044_fu_12411851_p1.read().is_01() || !zext_ln708_1045_fu_12411865_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1044_fu_12411851_p1.read()) + sc_biguint<11>(zext_ln708_1045_fu_12411865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_501_fu_12480919_p2() {
    add_ln703_501_fu_12480919_p2 = (!sext_ln203_70_fu_12411903_p1.read().is_01() || !zext_ln1118_221_fu_12401586_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_70_fu_12411903_p1.read()) + sc_biguint<10>(zext_ln1118_221_fu_12401586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_502_fu_12480929_p2() {
    add_ln703_502_fu_12480929_p2 = (!sext_ln703_373_fu_12480925_p1.read().is_01() || !sext_ln203_68_fu_12411801_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_373_fu_12480925_p1.read()) + sc_bigint<11>(sext_ln203_68_fu_12411801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_503_fu_12480939_p2() {
    add_ln703_503_fu_12480939_p2 = (!sext_ln703_375_fu_12480935_p1.read().is_01() || !zext_ln703_90_fu_12480915_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_375_fu_12480935_p1.read()) + sc_biguint<13>(zext_ln703_90_fu_12480915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_505_fu_12480945_p2() {
    add_ln703_505_fu_12480945_p2 = (!sext_ln1118_143_fu_12411247_p1.read().is_01() || !ap_const_lv11_740.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_143_fu_12411247_p1.read()) + sc_bigint<11>(ap_const_lv11_740));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_506_fu_12480951_p2() {
    add_ln703_506_fu_12480951_p2 = (!add_ln703_505_fu_12480945_p2.read().is_01() || !zext_ln708_1003_fu_12408422_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_505_fu_12480945_p2.read()) + sc_biguint<11>(zext_ln708_1003_fu_12408422_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_507_fu_12480961_p2() {
    add_ln703_507_fu_12480961_p2 = (!sext_ln1116_17_fu_12411917_p1.read().is_01() || !sext_ln1118_67_fu_12406289_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_17_fu_12411917_p1.read()) + sc_bigint<10>(sext_ln1118_67_fu_12406289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_508_fu_12480971_p2() {
    add_ln703_508_fu_12480971_p2 = (!sext_ln703_383_fu_12480967_p1.read().is_01() || !sext_ln703_378_fu_12480957_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_383_fu_12480967_p1.read()) + sc_bigint<12>(sext_ln703_378_fu_12480957_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_509_fu_12480977_p2() {
    add_ln703_509_fu_12480977_p2 = (!add_ln703_508_fu_12480971_p2.read().is_01() || !zext_ln1118_1300_fu_12411950_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_508_fu_12480971_p2.read()) + sc_biguint<12>(zext_ln1118_1300_fu_12411950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_50_fu_12478115_p2() {
    add_ln703_50_fu_12478115_p2 = (!sext_ln1118_9_fu_12402296_p1.read().is_01() || !sext_ln1118_10_fu_12402310_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_9_fu_12402296_p1.read()) + sc_bigint<10>(sext_ln1118_10_fu_12402310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_510_fu_12480983_p2() {
    add_ln703_510_fu_12480983_p2 = (!zext_ln1118_2400_fu_12411964_p1.read().is_01() || !zext_ln1118_2401_fu_12411978_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2400_fu_12411964_p1.read()) + sc_biguint<10>(zext_ln1118_2401_fu_12411978_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_511_fu_12480993_p2() {
    add_ln703_511_fu_12480993_p2 = (!zext_ln703_91_fu_12480989_p1.read().is_01() || !add_ln703_509_fu_12480977_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_91_fu_12480989_p1.read()) + sc_biguint<12>(add_ln703_509_fu_12480977_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_512_fu_12480999_p2() {
    add_ln703_512_fu_12480999_p2 = (!sext_ln1118_160_fu_12411936_p1.read().is_01() || !sext_ln1118_161_fu_12412016_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_160_fu_12411936_p1.read()) + sc_bigint<11>(sext_ln1118_161_fu_12412016_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_513_fu_12481009_p2() {
    add_ln703_513_fu_12481009_p2 = (!zext_ln708_980_fu_12405889_p1.read().is_01() || !sext_ln1116_18_fu_12412002_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_980_fu_12405889_p1.read()) + sc_bigint<8>(sext_ln1116_18_fu_12412002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_514_fu_12481019_p2() {
    add_ln703_514_fu_12481019_p2 = (!sext_ln703_388_fu_12481015_p1.read().is_01() || !sext_ln703_387_fu_12481005_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_388_fu_12481015_p1.read()) + sc_bigint<12>(sext_ln703_387_fu_12481005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_515_fu_12504658_p2() {
    add_ln703_515_fu_12504658_p2 = (!sext_ln703_389_fu_12504655_p1.read().is_01() || !sext_ln703_384_fu_12504652_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_389_fu_12504655_p1.read()) + sc_bigint<13>(sext_ln703_384_fu_12504652_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_516_fu_12481025_p2() {
    add_ln703_516_fu_12481025_p2 = (!sext_ln708_34_fu_12412068_p1.read().is_01() || !sext_ln1116_20_fu_12412216_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_34_fu_12412068_p1.read()) + sc_bigint<12>(sext_ln1116_20_fu_12412216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_517_fu_12504671_p2() {
    add_ln703_517_fu_12504671_p2 = (!sext_ln703_392_fu_12504668_p1.read().is_01() || !sext_ln703_391_fu_12504664_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_392_fu_12504668_p1.read()) + sc_bigint<14>(sext_ln703_391_fu_12504664_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_518_fu_12481031_p2() {
    add_ln703_518_fu_12481031_p2 = (!sext_ln1116_23_fu_12412307_p1.read().is_01() || !zext_ln1118_1389_fu_12412118_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_23_fu_12412307_p1.read()) + sc_biguint<12>(zext_ln1118_1389_fu_12412118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_519_fu_12481037_p2() {
    add_ln703_519_fu_12481037_p2 = (!zext_ln1116_219_fu_12412192_p1.read().is_01() || !zext_ln1116_220_fu_12412284_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_219_fu_12412192_p1.read()) + sc_biguint<9>(zext_ln1116_220_fu_12412284_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_51_fu_12478125_p2() {
    add_ln703_51_fu_12478125_p2 = (!sext_ln703_42_fu_12478121_p1.read().is_01() || !zext_ln1118_282_fu_12402252_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_42_fu_12478121_p1.read()) + sc_biguint<11>(zext_ln1118_282_fu_12402252_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_520_fu_12481047_p2() {
    add_ln703_520_fu_12481047_p2 = (!zext_ln703_92_fu_12481043_p1.read().is_01() || !add_ln703_518_fu_12481031_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_92_fu_12481043_p1.read()) + sc_biguint<12>(add_ln703_518_fu_12481031_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_521_fu_12504680_p2() {
    add_ln703_521_fu_12504680_p2 = (!sext_ln703_393_fu_12504677_p1.read().is_01() || !add_ln703_517_fu_12504671_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_393_fu_12504677_p1.read()) + sc_biguint<14>(add_ln703_517_fu_12504671_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_522_fu_12481053_p2() {
    add_ln703_522_fu_12481053_p2 = (!sext_ln708_35_fu_12412104_p1.read().is_01() || !sext_ln1118_164_fu_12412152_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_35_fu_12412104_p1.read()) + sc_bigint<10>(sext_ln1118_164_fu_12412152_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_523_fu_12481063_p2() {
    add_ln703_523_fu_12481063_p2 = (!sext_ln703_395_fu_12481059_p1.read().is_01() || !sext_ln1116_19_fu_12412050_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_395_fu_12481059_p1.read()) + sc_bigint<11>(sext_ln1116_19_fu_12412050_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_524_fu_12481073_p2() {
    add_ln703_524_fu_12481073_p2 = (!sext_ln1116_21_fu_12412230_p1.read().is_01() || !sext_ln1116_22_fu_12412244_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_21_fu_12412230_p1.read()) + sc_bigint<10>(sext_ln1116_22_fu_12412244_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_525_fu_12481083_p2() {
    add_ln703_525_fu_12481083_p2 = (!zext_ln1116_218_fu_12412072_p1.read().is_01() || !zext_ln1116_212_fu_12407364_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1116_218_fu_12412072_p1.read()) + sc_biguint<6>(zext_ln1116_212_fu_12407364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_526_fu_12481093_p2() {
    add_ln703_526_fu_12481093_p2 = (!zext_ln703_93_fu_12481089_p1.read().is_01() || !sext_ln703_397_fu_12481079_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_93_fu_12481089_p1.read()) + sc_bigint<11>(sext_ln703_397_fu_12481079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_527_fu_12481103_p2() {
    add_ln703_527_fu_12481103_p2 = (!sext_ln703_401_fu_12481099_p1.read().is_01() || !sext_ln703_396_fu_12481069_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_401_fu_12481099_p1.read()) + sc_bigint<12>(sext_ln703_396_fu_12481069_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_528_fu_12504693_p2() {
    add_ln703_528_fu_12504693_p2 = (!sext_ln703_405_fu_12504690_p1.read().is_01() || !sext_ln703_394_fu_12504686_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_405_fu_12504690_p1.read()) + sc_bigint<15>(sext_ln703_394_fu_12504686_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_529_fu_12481109_p2() {
    add_ln703_529_fu_12481109_p2 = (!sext_ln203_73_fu_12412377_p1.read().is_01() || !sext_ln203_74_fu_12412391_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_73_fu_12412377_p1.read()) + sc_bigint<11>(sext_ln203_74_fu_12412391_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_52_fu_12478135_p2() {
    add_ln703_52_fu_12478135_p2 = (!sext_ln703_45_fu_12478131_p1.read().is_01() || !sext_ln703_41_fu_12478111_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_45_fu_12478131_p1.read()) + sc_bigint<13>(sext_ln703_41_fu_12478111_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_530_fu_12504702_p2() {
    add_ln703_530_fu_12504702_p2 = (!sext_ln703_408_fu_12504699_p1.read().is_01() || !add_ln703_528_fu_12504693_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_408_fu_12504699_p1.read()) + sc_biguint<15>(add_ln703_528_fu_12504693_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_531_fu_12481115_p2() {
    add_ln703_531_fu_12481115_p2 = (!sext_ln203_71_fu_12412343_p1.read().is_01() || !sext_ln203_72_fu_12412363_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_71_fu_12412343_p1.read()) + sc_bigint<10>(sext_ln203_72_fu_12412363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_532_fu_12481125_p2() {
    add_ln703_532_fu_12481125_p2 = (!sext_ln203_75_fu_12412405_p1.read().is_01() || !zext_ln203_28_fu_12412424_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_75_fu_12412405_p1.read()) + sc_biguint<10>(zext_ln203_28_fu_12412424_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_533_fu_12481135_p2() {
    add_ln703_533_fu_12481135_p2 = (!sext_ln703_410_fu_12481131_p1.read().is_01() || !sext_ln703_409_fu_12481121_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_410_fu_12481131_p1.read()) + sc_bigint<11>(sext_ln703_409_fu_12481121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_535_fu_12481141_p2() {
    add_ln703_535_fu_12481141_p2 = (!sext_ln1118_167_fu_12412428_p1.read().is_01() || !ap_const_lv10_380.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_167_fu_12412428_p1.read()) + sc_bigint<10>(ap_const_lv10_380));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_536_fu_12481151_p2() {
    add_ln703_536_fu_12481151_p2 = (!sext_ln1118_168_fu_12412442_p1.read().is_01() || !zext_ln203_29_fu_12412456_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_168_fu_12412442_p1.read()) + sc_biguint<12>(zext_ln203_29_fu_12412456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_537_fu_12481157_p2() {
    add_ln703_537_fu_12481157_p2 = (!add_ln703_536_fu_12481151_p2.read().is_01() || !sext_ln703_413_fu_12481147_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_536_fu_12481151_p2.read()) + sc_bigint<12>(sext_ln703_413_fu_12481147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_538_fu_12481167_p2() {
    add_ln703_538_fu_12481167_p2 = (!zext_ln708_30_fu_12402763_p1.read().is_01() || !zext_ln1118_1518_fu_12412460_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_30_fu_12402763_p1.read()) + sc_biguint<9>(zext_ln1118_1518_fu_12412460_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_539_fu_12481177_p2() {
    add_ln703_539_fu_12481177_p2 = (!zext_ln703_94_fu_12481173_p1.read().is_01() || !zext_ln708_1046_fu_12412474_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_94_fu_12481173_p1.read()) + sc_biguint<11>(zext_ln708_1046_fu_12412474_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_53_fu_12503542_p2() {
    add_ln703_53_fu_12503542_p2 = (!sext_ln703_46_fu_12503539_p1.read().is_01() || !add_ln703_47_fu_12503533_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_46_fu_12503539_p1.read()) + sc_biguint<15>(add_ln703_47_fu_12503533_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_540_fu_12481187_p2() {
    add_ln703_540_fu_12481187_p2 = (!zext_ln703_95_fu_12481183_p1.read().is_01() || !sext_ln703_416_fu_12481163_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_95_fu_12481183_p1.read()) + sc_bigint<13>(sext_ln703_416_fu_12481163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_541_fu_12481193_p2() {
    add_ln703_541_fu_12481193_p2 = (!add_ln703_540_fu_12481187_p2.read().is_01() || !sext_ln1118_170_fu_12412574_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_540_fu_12481187_p2.read()) + sc_bigint<13>(sext_ln1118_170_fu_12412574_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_542_fu_12481203_p2() {
    add_ln703_542_fu_12481203_p2 = (!zext_ln1118_2403_fu_12412526_p1.read().is_01() || !zext_ln1118_2404_fu_12412540_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2403_fu_12412526_p1.read()) + sc_biguint<10>(zext_ln1118_2404_fu_12412540_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_543_fu_12481213_p2() {
    add_ln703_543_fu_12481213_p2 = (!zext_ln703_96_fu_12481209_p1.read().is_01() || !sext_ln703_417_fu_12481199_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_96_fu_12481209_p1.read()) + sc_bigint<14>(sext_ln703_417_fu_12481199_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_544_fu_12481219_p2() {
    add_ln703_544_fu_12481219_p2 = (!zext_ln708_1047_fu_12412560_p1.read().is_01() || !trunc_ln1118_60_fu_12412564_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1047_fu_12412560_p1.read()) + sc_biguint<10>(trunc_ln1118_60_fu_12412564_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_545_fu_12481229_p2() {
    add_ln703_545_fu_12481229_p2 = (!sext_ln1118_169_fu_12412488_p1.read().is_01() || !zext_ln708_29_fu_12402150_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_169_fu_12412488_p1.read()) + sc_biguint<10>(zext_ln708_29_fu_12402150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_546_fu_12481239_p2() {
    add_ln703_546_fu_12481239_p2 = (!sext_ln703_418_fu_12481235_p1.read().is_01() || !sext_ln708_36_fu_12412502_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_418_fu_12481235_p1.read()) + sc_bigint<11>(sext_ln708_36_fu_12412502_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_547_fu_12481249_p2() {
    add_ln703_547_fu_12481249_p2 = (!sext_ln703_419_fu_12481245_p1.read().is_01() || !zext_ln703_97_fu_12481225_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_419_fu_12481245_p1.read()) + sc_biguint<12>(zext_ln703_97_fu_12481225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_548_fu_12504724_p2() {
    add_ln703_548_fu_12504724_p2 = (!sext_ln703_420_fu_12504721_p1.read().is_01() || !add_ln703_543_reg_12515557.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_420_fu_12504721_p1.read()) + sc_biguint<14>(add_ln703_543_reg_12515557.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_549_fu_12481255_p2() {
    add_ln703_549_fu_12481255_p2 = (!sext_ln203_13_fu_12404049_p1.read().is_01() || !sext_ln1118_174_fu_12412708_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_13_fu_12404049_p1.read()) + sc_bigint<12>(sext_ln1118_174_fu_12412708_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_54_fu_12503548_p2() {
    add_ln703_54_fu_12503548_p2 = (!add_ln703_53_fu_12503542_p2.read().is_01() || !zext_ln203_2_fu_12502801_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_53_fu_12503542_p2.read()) + sc_biguint<15>(zext_ln203_2_fu_12502801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_550_fu_12504732_p2() {
    add_ln703_550_fu_12504732_p2 = (!sext_ln703_421_fu_12504729_p1.read().is_01() || !add_ln703_548_fu_12504724_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_421_fu_12504729_p1.read()) + sc_biguint<14>(add_ln703_548_fu_12504724_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_551_fu_12481261_p2() {
    add_ln703_551_fu_12481261_p2 = (!zext_ln1118_2405_fu_12412666_p1.read().is_01() || !zext_ln1118_2408_fu_12412680_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2405_fu_12412666_p1.read()) + sc_biguint<10>(zext_ln1118_2408_fu_12412680_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_552_fu_12481271_p2() {
    add_ln703_552_fu_12481271_p2 = (!zext_ln703_98_fu_12481267_p1.read().is_01() || !sext_ln708_38_fu_12412722_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_98_fu_12481267_p1.read()) + sc_bigint<12>(sext_ln708_38_fu_12412722_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_553_fu_12504745_p2() {
    add_ln703_553_fu_12504745_p2 = (!sext_ln703_425_fu_12504742_p1.read().is_01() || !sext_ln703_424_fu_12504738_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_425_fu_12504742_p1.read()) + sc_bigint<15>(sext_ln703_424_fu_12504738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_554_fu_12481277_p2() {
    add_ln703_554_fu_12481277_p2 = (!zext_ln708_1048_fu_12412750_p1.read().is_01() || !sext_ln1118_173_fu_12412694_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1048_fu_12412750_p1.read()) + sc_bigint<11>(sext_ln1118_173_fu_12412694_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_555_fu_12481287_p2() {
    add_ln703_555_fu_12481287_p2 = (!sext_ln703_426_fu_12481283_p1.read().is_01() || !zext_ln1118_1542_fu_12412736_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_426_fu_12481283_p1.read()) + sc_biguint<12>(zext_ln1118_1542_fu_12412736_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_556_fu_12481293_p2() {
    add_ln703_556_fu_12481293_p2 = (!sext_ln1118_171_fu_12412610_p1.read().is_01() || !zext_ln1118_1537_fu_12412634_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_171_fu_12412610_p1.read()) + sc_biguint<9>(zext_ln1118_1537_fu_12412634_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_557_fu_12481303_p2() {
    add_ln703_557_fu_12481303_p2 = (!sext_ln703_427_fu_12481299_p1.read().is_01() || !sext_ln708_37_fu_12412630_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_427_fu_12481299_p1.read()) + sc_bigint<10>(sext_ln708_37_fu_12412630_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_558_fu_12481313_p2() {
    add_ln703_558_fu_12481313_p2 = (!sext_ln703_428_fu_12481309_p1.read().is_01() || !add_ln703_555_fu_12481287_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_428_fu_12481309_p1.read()) + sc_biguint<12>(add_ln703_555_fu_12481287_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_559_fu_12504754_p2() {
    add_ln703_559_fu_12504754_p2 = (!sext_ln703_429_fu_12504751_p1.read().is_01() || !add_ln703_553_fu_12504745_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_429_fu_12504751_p1.read()) + sc_biguint<15>(add_ln703_553_fu_12504745_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_55_fu_12478141_p2() {
    add_ln703_55_fu_12478141_p2 = (!trunc_ln203_48_fu_12402578_p4.read().is_01() || !zext_ln203_331_fu_12402621_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_48_fu_12402578_p4.read()) + sc_biguint<10>(zext_ln203_331_fu_12402621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_560_fu_12481319_p2() {
    add_ln703_560_fu_12481319_p2 = (!sext_ln203_76_fu_12412764_p1.read().is_01() || !sext_ln203_78_fu_12412848_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_76_fu_12412764_p1.read()) + sc_bigint<12>(sext_ln203_78_fu_12412848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_561_fu_12504763_p2() {
    add_ln703_561_fu_12504763_p2 = (!sext_ln703_430_fu_12504760_p1.read().is_01() || !add_ln703_559_fu_12504754_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_430_fu_12504760_p1.read()) + sc_biguint<15>(add_ln703_559_fu_12504754_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_562_fu_12481325_p2() {
    add_ln703_562_fu_12481325_p2 = (!zext_ln708_1049_fu_12412834_p1.read().is_01() || !sext_ln203_77_fu_12412820_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1049_fu_12412834_p1.read()) + sc_bigint<11>(sext_ln203_77_fu_12412820_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_563_fu_12481335_p2() {
    add_ln703_563_fu_12481335_p2 = (!sext_ln703_431_fu_12481331_p1.read().is_01() || !zext_ln203_30_fu_12412778_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_431_fu_12481331_p1.read()) + sc_biguint<12>(zext_ln203_30_fu_12412778_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_565_fu_12481341_p2() {
    add_ln703_565_fu_12481341_p2 = (!sext_ln1118_176_fu_12412872_p1.read().is_01() || !ap_const_lv10_340.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_176_fu_12412872_p1.read()) + sc_bigint<10>(ap_const_lv10_340));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_566_fu_12481347_p2() {
    add_ln703_566_fu_12481347_p2 = (!add_ln703_565_fu_12481341_p2.read().is_01() || !zext_ln1118_2410_fu_12412896_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_565_fu_12481341_p2.read()) + sc_biguint<10>(zext_ln1118_2410_fu_12412896_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_567_fu_12481357_p2() {
    add_ln703_567_fu_12481357_p2 = (!sext_ln1118_178_fu_12412934_p1.read().is_01() || !zext_ln1118_1559_fu_12412958_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_178_fu_12412934_p1.read()) + sc_biguint<12>(zext_ln1118_1559_fu_12412958_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_568_fu_12481367_p2() {
    add_ln703_568_fu_12481367_p2 = (!sext_ln703_438_fu_12481363_p1.read().is_01() || !sext_ln703_82_fu_12481353_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_438_fu_12481363_p1.read()) + sc_bigint<13>(sext_ln703_82_fu_12481353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_569_fu_12481373_p2() {
    add_ln703_569_fu_12481373_p2 = (!zext_ln1118_2413_fu_12413002_p1.read().is_01() || !zext_ln1118_2415_fu_12413026_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2413_fu_12413002_p1.read()) + sc_biguint<10>(zext_ln1118_2415_fu_12413026_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_56_fu_12478151_p2() {
    add_ln703_56_fu_12478151_p2 = (!zext_ln703_19_fu_12478147_p1.read().is_01() || !zext_ln708_957_fu_12402574_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_19_fu_12478147_p1.read()) + sc_biguint<11>(zext_ln708_957_fu_12402574_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_570_fu_12481383_p2() {
    add_ln703_570_fu_12481383_p2 = (!zext_ln703_99_fu_12481379_p1.read().is_01() || !zext_ln708_1050_fu_12412982_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_99_fu_12481379_p1.read()) + sc_biguint<11>(zext_ln708_1050_fu_12412982_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_571_fu_12481393_p2() {
    add_ln703_571_fu_12481393_p2 = (!zext_ln703_100_fu_12481389_p1.read().is_01() || !add_ln703_568_fu_12481367_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_100_fu_12481389_p1.read()) + sc_biguint<13>(add_ln703_568_fu_12481367_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_572_fu_12481403_p2() {
    add_ln703_572_fu_12481403_p2 = (!zext_ln1118_1581_fu_12413050_p1.read().is_01() || !sext_ln1118_180_fu_12413098_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1581_fu_12413050_p1.read()) + sc_bigint<12>(sext_ln1118_180_fu_12413098_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_573_fu_12481413_p2() {
    add_ln703_573_fu_12481413_p2 = (!sext_ln703_439_fu_12481409_p1.read().is_01() || !sext_ln703_83_fu_12481399_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_439_fu_12481409_p1.read()) + sc_bigint<14>(sext_ln703_83_fu_12481399_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_574_fu_12481419_p2() {
    add_ln703_574_fu_12481419_p2 = (!zext_ln708_1051_fu_12413084_p1.read().is_01() || !zext_ln708_1052_fu_12413130_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1051_fu_12413084_p1.read()) + sc_biguint<11>(zext_ln708_1052_fu_12413130_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_575_fu_12481429_p2() {
    add_ln703_575_fu_12481429_p2 = (!zext_ln1118_2416_fu_12413154_p1.read().is_01() || !sext_ln1118_179_fu_12413070_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2416_fu_12413154_p1.read()) + sc_bigint<10>(sext_ln1118_179_fu_12413070_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_576_fu_12481439_p2() {
    add_ln703_576_fu_12481439_p2 = (!sext_ln703_440_fu_12481435_p1.read().is_01() || !zext_ln703_101_fu_12481425_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_440_fu_12481435_p1.read()) + sc_biguint<12>(zext_ln703_101_fu_12481425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_577_fu_12504785_p2() {
    add_ln703_577_fu_12504785_p2 = (!sext_ln703_441_fu_12504782_p1.read().is_01() || !add_ln703_573_reg_12515592.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_441_fu_12504782_p1.read()) + sc_biguint<14>(add_ln703_573_reg_12515592.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_578_fu_12504790_p2() {
    add_ln703_578_fu_12504790_p2 = (!add_ln703_577_fu_12504785_p2.read().is_01() || !zext_ln1118_1621_fu_12502879_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_577_fu_12504785_p2.read()) + sc_biguint<14>(zext_ln1118_1621_fu_12502879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_579_fu_12481445_p2() {
    add_ln703_579_fu_12481445_p2 = (!zext_ln1118_1624_fu_12413220_p1.read().is_01() || !sext_ln1118_183_fu_12413248_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1624_fu_12413220_p1.read()) + sc_bigint<12>(sext_ln1118_183_fu_12413248_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_57_fu_12503557_p2() {
    add_ln703_57_fu_12503557_p2 = (!zext_ln703_20_fu_12503554_p1.read().is_01() || !add_ln703_54_fu_12503548_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_20_fu_12503554_p1.read()) + sc_biguint<15>(add_ln703_54_fu_12503548_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_580_fu_12481455_p2() {
    add_ln703_580_fu_12481455_p2 = (!sext_ln703_443_fu_12481451_p1.read().is_01() || !zext_ln708_151_fu_12413206_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_443_fu_12481451_p1.read()) + sc_biguint<13>(zext_ln708_151_fu_12413206_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_581_fu_12504803_p2() {
    add_ln703_581_fu_12504803_p2 = (!sext_ln703_444_fu_12504800_p1.read().is_01() || !sext_ln703_442_fu_12504796_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_444_fu_12504800_p1.read()) + sc_bigint<15>(sext_ln703_442_fu_12504796_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_582_fu_12481461_p2() {
    add_ln703_582_fu_12481461_p2 = (!sext_ln1118_185_fu_12413282_p1.read().is_01() || !sext_ln1118_187_fu_12413322_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_185_fu_12413282_p1.read()) + sc_bigint<10>(sext_ln1118_187_fu_12413322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_583_fu_12481467_p2() {
    add_ln703_583_fu_12481467_p2 = (!sext_ln1118_184_fu_12413262_p1.read().is_01() || !sext_ln1118_181_fu_12413174_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_184_fu_12413262_p1.read()) + sc_bigint<7>(sext_ln1118_181_fu_12413174_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_584_fu_12481477_p2() {
    add_ln703_584_fu_12481477_p2 = (!sext_ln703_446_fu_12481473_p1.read().is_01() || !sext_ln1118_182_fu_12413244_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln703_446_fu_12481473_p1.read()) + sc_bigint<8>(sext_ln1118_182_fu_12413244_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_585_fu_12481487_p2() {
    add_ln703_585_fu_12481487_p2 = (!sext_ln703_447_fu_12481483_p1.read().is_01() || !add_ln703_582_fu_12481461_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_447_fu_12481483_p1.read()) + sc_biguint<10>(add_ln703_582_fu_12481461_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_586_fu_12504812_p2() {
    add_ln703_586_fu_12504812_p2 = (!sext_ln703_448_fu_12504809_p1.read().is_01() || !add_ln703_581_fu_12504803_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_448_fu_12504809_p1.read()) + sc_biguint<15>(add_ln703_581_fu_12504803_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_587_fu_12504818_p2() {
    add_ln703_587_fu_12504818_p2 = (!add_ln703_586_fu_12504812_p2.read().is_01() || !sext_ln203_79_fu_12502882_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_586_fu_12504812_p2.read()) + sc_bigint<15>(sext_ln203_79_fu_12502882_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_588_fu_12481493_p2() {
    add_ln703_588_fu_12481493_p2 = (!zext_ln203_341_fu_12413374_p1.read().is_01() || !zext_ln203_342_fu_12413398_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_341_fu_12413374_p1.read()) + sc_biguint<9>(zext_ln203_342_fu_12413398_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_589_fu_12481503_p2() {
    add_ln703_589_fu_12481503_p2 = (!zext_ln703_102_fu_12481499_p1.read().is_01() || !sext_ln203_83_fu_12413488_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_102_fu_12481499_p1.read()) + sc_bigint<12>(sext_ln203_83_fu_12413488_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_58_fu_12478157_p2() {
    add_ln703_58_fu_12478157_p2 = (!zext_ln708_958_fu_12402635_p1.read().is_01() || !zext_ln708_959_fu_12402659_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_958_fu_12402635_p1.read()) + sc_biguint<11>(zext_ln708_959_fu_12402659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_590_fu_12504827_p2() {
    add_ln703_590_fu_12504827_p2 = (!sext_ln703_449_fu_12504824_p1.read().is_01() || !add_ln703_587_fu_12504818_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_449_fu_12504824_p1.read()) + sc_biguint<15>(add_ln703_587_fu_12504818_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_591_fu_12481509_p2() {
    add_ln703_591_fu_12481509_p2 = (!sext_ln203_80_fu_12413370_p1.read().is_01() || !sext_ln203_82_fu_12413474_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_80_fu_12413370_p1.read()) + sc_bigint<11>(sext_ln203_82_fu_12413474_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_592_fu_12481519_p2() {
    add_ln703_592_fu_12481519_p2 = (!sext_ln703_450_fu_12481515_p1.read().is_01() || !zext_ln203_31_fu_12413446_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_450_fu_12481515_p1.read()) + sc_biguint<12>(zext_ln203_31_fu_12413446_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_593_fu_12481525_p2() {
    add_ln703_593_fu_12481525_p2 = (!zext_ln708_953_fu_12401850_p1.read().is_01() || !sext_ln203_85_fu_12413526_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_953_fu_12401850_p1.read()) + sc_bigint<8>(sext_ln203_85_fu_12413526_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_594_fu_12481535_p2() {
    add_ln703_594_fu_12481535_p2 = (!sext_ln703_451_fu_12481531_p1.read().is_01() || !sext_ln203_81_fu_12413422_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_451_fu_12481531_p1.read()) + sc_bigint<9>(sext_ln203_81_fu_12413422_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_595_fu_12481545_p2() {
    add_ln703_595_fu_12481545_p2 = (!sext_ln703_452_fu_12481541_p1.read().is_01() || !add_ln703_592_fu_12481519_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_452_fu_12481541_p1.read()) + sc_biguint<12>(add_ln703_592_fu_12481519_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_597_fu_12481551_p2() {
    add_ln703_597_fu_12481551_p2 = (!zext_ln203_343_fu_12413550_p1.read().is_01() || !ap_const_lv9_158.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_343_fu_12413550_p1.read()) + sc_bigint<9>(ap_const_lv9_158));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_598_fu_12481561_p2() {
    add_ln703_598_fu_12481561_p2 = (!zext_ln203_344_fu_12413570_p1.read().is_01() || !sext_ln703_86_fu_12481557_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_344_fu_12413570_p1.read()) + sc_bigint<10>(sext_ln703_86_fu_12481557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_599_fu_12481567_p2() {
    add_ln703_599_fu_12481567_p2 = (!add_ln703_598_fu_12481561_p2.read().is_01() || !zext_ln203_345_fu_12413594_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_598_fu_12481561_p2.read()) + sc_biguint<10>(zext_ln203_345_fu_12413594_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_59_fu_12478167_p2() {
    add_ln703_59_fu_12478167_p2 = (!sext_ln203_5_fu_12402492_p1.read().is_01() || !sext_ln203_6_fu_12402673_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_5_fu_12402492_p1.read()) + sc_bigint<11>(sext_ln203_6_fu_12402673_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_5_fu_12477841_p2() {
    add_ln703_5_fu_12477841_p2 = (!zext_ln708_948_fu_12400650_p1.read().is_01() || !zext_ln708_949_fu_12400690_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_948_fu_12400650_p1.read()) + sc_biguint<11>(zext_ln708_949_fu_12400690_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_600_fu_12481577_p2() {
    add_ln703_600_fu_12481577_p2 = (!sext_ln203_86_fu_12413598_p1.read().is_01() || !sext_ln703_87_fu_12481573_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_86_fu_12413598_p1.read()) + sc_bigint<12>(sext_ln703_87_fu_12481573_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_601_fu_12481583_p2() {
    add_ln703_601_fu_12481583_p2 = (!add_ln703_600_fu_12481577_p2.read().is_01() || !zext_ln1118_1664_fu_12413636_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_600_fu_12481577_p2.read()) + sc_biguint<12>(zext_ln1118_1664_fu_12413636_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_602_fu_12481593_p2() {
    add_ln703_602_fu_12481593_p2 = (!sext_ln203_87_fu_12413618_p1.read().is_01() || !zext_ln708_155_fu_12413622_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_87_fu_12413618_p1.read()) + sc_biguint<10>(zext_ln708_155_fu_12413622_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_603_fu_12481603_p2() {
    add_ln703_603_fu_12481603_p2 = (!sext_ln703_459_fu_12481599_p1.read().is_01() || !sext_ln703_458_fu_12481589_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_459_fu_12481599_p1.read()) + sc_bigint<13>(sext_ln703_458_fu_12481589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_604_fu_12504846_p2() {
    add_ln703_604_fu_12504846_p2 = (!add_ln703_603_reg_12515622.read().is_01() || !sext_ln1118_191_fu_12502885_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_603_reg_12515622.read()) + sc_bigint<13>(sext_ln1118_191_fu_12502885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_605_fu_12481609_p2() {
    add_ln703_605_fu_12481609_p2 = (!trunc_ln1118_67_fu_12413664_p4.read().is_01() || !zext_ln708_1053_fu_12413694_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_67_fu_12413664_p4.read()) + sc_biguint<9>(zext_ln708_1053_fu_12413694_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_606_fu_12504854_p2() {
    add_ln703_606_fu_12504854_p2 = (!zext_ln703_103_fu_12504851_p1.read().is_01() || !add_ln703_604_fu_12504846_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_103_fu_12504851_p1.read()) + sc_biguint<13>(add_ln703_604_fu_12504846_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_607_fu_12481615_p2() {
    add_ln703_607_fu_12481615_p2 = (!sext_ln1118_192_fu_12413722_p1.read().is_01() || !sext_ln1118_193_fu_12413736_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_192_fu_12413722_p1.read()) + sc_bigint<11>(sext_ln1118_193_fu_12413736_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_608_fu_12481625_p2() {
    add_ln703_608_fu_12481625_p2 = (!zext_ln708_1054_fu_12413708_p1.read().is_01() || !sext_ln1118_190_fu_12413660_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1054_fu_12413708_p1.read()) + sc_bigint<8>(sext_ln1118_190_fu_12413660_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_609_fu_12481635_p2() {
    add_ln703_609_fu_12481635_p2 = (!sext_ln703_462_fu_12481631_p1.read().is_01() || !sext_ln703_461_fu_12481621_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_462_fu_12481631_p1.read()) + sc_bigint<12>(sext_ln703_461_fu_12481621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_60_fu_12478177_p2() {
    add_ln703_60_fu_12478177_p2 = (!sext_ln703_48_fu_12478173_p1.read().is_01() || !zext_ln203_3_fu_12402717_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_48_fu_12478173_p1.read()) + sc_biguint<12>(zext_ln203_3_fu_12402717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_610_fu_12504867_p2() {
    add_ln703_610_fu_12504867_p2 = (!sext_ln703_463_fu_12504864_p1.read().is_01() || !sext_ln703_460_fu_12504860_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_463_fu_12504864_p1.read()) + sc_bigint<14>(sext_ln703_460_fu_12504860_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_611_fu_12504873_p2() {
    add_ln703_611_fu_12504873_p2 = (!add_ln703_610_fu_12504867_p2.read().is_01() || !sext_ln1118_194_fu_12502888_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_610_fu_12504867_p2.read()) + sc_bigint<14>(sext_ln1118_194_fu_12502888_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_612_fu_12481641_p2() {
    add_ln703_612_fu_12481641_p2 = (!sext_ln1118_12_fu_12402380_p1.read().is_01() || !sext_ln203_13_fu_12404049_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_12_fu_12402380_p1.read()) + sc_bigint<12>(sext_ln203_13_fu_12404049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_613_fu_12504886_p2() {
    add_ln703_613_fu_12504886_p2 = (!sext_ln703_465_fu_12504883_p1.read().is_01() || !sext_ln1118_198_fu_12502894_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_465_fu_12504883_p1.read()) + sc_bigint<13>(sext_ln1118_198_fu_12502894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_614_fu_12504896_p2() {
    add_ln703_614_fu_12504896_p2 = (!sext_ln703_468_fu_12504892_p1.read().is_01() || !sext_ln703_464_fu_12504879_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_468_fu_12504892_p1.read()) + sc_bigint<15>(sext_ln703_464_fu_12504879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_615_fu_12481647_p2() {
    add_ln703_615_fu_12481647_p2 = (!zext_ln708_1056_fu_12413802_p1.read().is_01() || !zext_ln708_1057_fu_12413816_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1056_fu_12413802_p1.read()) + sc_biguint<11>(zext_ln708_1057_fu_12413816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_616_fu_12481653_p2() {
    add_ln703_616_fu_12481653_p2 = (!add_ln703_615_fu_12481647_p2.read().is_01() || !zext_ln708_1055_fu_12413760_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_615_fu_12481647_p2.read()) + sc_biguint<11>(zext_ln708_1055_fu_12413760_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_617_fu_12481663_p2() {
    add_ln703_617_fu_12481663_p2 = (!sext_ln1118_196_fu_12413788_p1.read().is_01() || !sext_ln1118_195_fu_12413774_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_196_fu_12413788_p1.read()) + sc_bigint<11>(sext_ln1118_195_fu_12413774_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_618_fu_12481673_p2() {
    add_ln703_618_fu_12481673_p2 = (!sext_ln703_469_fu_12481669_p1.read().is_01() || !zext_ln1118_1673_fu_12413820_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_469_fu_12481669_p1.read()) + sc_biguint<12>(zext_ln1118_1673_fu_12413820_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_619_fu_12481683_p2() {
    add_ln703_619_fu_12481683_p2 = (!sext_ln703_470_fu_12481679_p1.read().is_01() || !zext_ln703_104_fu_12481659_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_470_fu_12481679_p1.read()) + sc_biguint<13>(zext_ln703_104_fu_12481659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_61_fu_12478187_p2() {
    add_ln703_61_fu_12478187_p2 = (!sext_ln703_50_fu_12478183_p1.read().is_01() || !zext_ln703_21_fu_12478163_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_50_fu_12478183_p1.read()) + sc_biguint<13>(zext_ln703_21_fu_12478163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_620_fu_12504905_p2() {
    add_ln703_620_fu_12504905_p2 = (!sext_ln703_471_fu_12504902_p1.read().is_01() || !add_ln703_614_fu_12504896_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_471_fu_12504902_p1.read()) + sc_biguint<15>(add_ln703_614_fu_12504896_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_621_fu_12504911_p2() {
    add_ln703_621_fu_12504911_p2 = (!add_ln703_620_fu_12504905_p2.read().is_01() || !sext_ln203_90_fu_12502897_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_620_fu_12504905_p2.read()) + sc_bigint<15>(sext_ln203_90_fu_12502897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_622_fu_12481689_p2() {
    add_ln703_622_fu_12481689_p2 = (!sext_ln203_92_fu_12413924_p1.read().is_01() || !zext_ln203_32_fu_12413972_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_92_fu_12413924_p1.read()) + sc_biguint<12>(zext_ln203_32_fu_12413972_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_623_fu_12504920_p2() {
    add_ln703_623_fu_12504920_p2 = (!sext_ln703_473_fu_12504917_p1.read().is_01() || !add_ln703_621_fu_12504911_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_473_fu_12504917_p1.read()) + sc_biguint<15>(add_ln703_621_fu_12504911_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_624_fu_12481695_p2() {
    add_ln703_624_fu_12481695_p2 = (!sext_ln203_93_fu_12413938_p1.read().is_01() || !sext_ln203_88_fu_12413844_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_93_fu_12413938_p1.read()) + sc_bigint<10>(sext_ln203_88_fu_12413844_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_625_fu_12481705_p2() {
    add_ln703_625_fu_12481705_p2 = (!sext_ln203_94_fu_12413958_p1.read().is_01() || !sext_ln203_91_fu_12413904_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_94_fu_12413958_p1.read()) + sc_bigint<9>(sext_ln203_91_fu_12413904_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_626_fu_12481715_p2() {
    add_ln703_626_fu_12481715_p2 = (!sext_ln703_475_fu_12481711_p1.read().is_01() || !sext_ln203_89_fu_12413864_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_475_fu_12481711_p1.read()) + sc_bigint<10>(sext_ln203_89_fu_12413864_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_627_fu_12481725_p2() {
    add_ln703_627_fu_12481725_p2 = (!sext_ln703_476_fu_12481721_p1.read().is_01() || !sext_ln703_474_fu_12481701_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_476_fu_12481721_p1.read()) + sc_bigint<11>(sext_ln703_474_fu_12481701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_629_fu_12481731_p2() {
    add_ln703_629_fu_12481731_p2 = (!zext_ln708_1058_fu_12413996_p1.read().is_01() || !ap_const_lv11_450.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1058_fu_12413996_p1.read()) + sc_bigint<11>(ap_const_lv11_450));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_630_fu_12481741_p2() {
    add_ln703_630_fu_12481741_p2 = (!zext_ln203_33_fu_12414048_p1.read().is_01() || !sext_ln203_95_fu_12414016_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_33_fu_12414048_p1.read()) + sc_bigint<12>(sext_ln203_95_fu_12414016_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_631_fu_12481747_p2() {
    add_ln703_631_fu_12481747_p2 = (!add_ln703_630_fu_12481741_p2.read().is_01() || !sext_ln703_92_fu_12481737_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_630_fu_12481741_p2.read()) + sc_bigint<12>(sext_ln703_92_fu_12481737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_632_fu_12481753_p2() {
    add_ln703_632_fu_12481753_p2 = (!add_ln703_631_fu_12481747_p2.read().is_01() || !zext_ln1118_1679_fu_12414062_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_631_fu_12481747_p2.read()) + sc_biguint<12>(zext_ln1118_1679_fu_12414062_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_633_fu_12481759_p2() {
    add_ln703_633_fu_12481759_p2 = (!zext_ln1118_2417_fu_12414106_p1.read().is_01() || !sext_ln708_40_fu_12414082_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2417_fu_12414106_p1.read()) + sc_bigint<10>(sext_ln708_40_fu_12414082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_634_fu_12481769_p2() {
    add_ln703_634_fu_12481769_p2 = (!sext_ln703_479_fu_12481765_p1.read().is_01() || !add_ln703_632_fu_12481753_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_479_fu_12481765_p1.read()) + sc_biguint<12>(add_ln703_632_fu_12481753_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_635_fu_12481779_p2() {
    add_ln703_635_fu_12481779_p2 = (!sext_ln703_483_fu_12481775_p1.read().is_01() || !zext_ln1118_1687_fu_12414134_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_483_fu_12481775_p1.read()) + sc_biguint<13>(zext_ln1118_1687_fu_12414134_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_636_fu_12481785_p2() {
    add_ln703_636_fu_12481785_p2 = (!zext_ln1118_2418_fu_12414176_p1.read().is_01() || !zext_ln1118_2422_fu_12414190_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2418_fu_12414176_p1.read()) + sc_biguint<10>(zext_ln1118_2422_fu_12414190_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_637_fu_12481795_p2() {
    add_ln703_637_fu_12481795_p2 = (!zext_ln703_105_fu_12481791_p1.read().is_01() || !zext_ln708_1059_fu_12414148_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_105_fu_12481791_p1.read()) + sc_biguint<11>(zext_ln708_1059_fu_12414148_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_638_fu_12481805_p2() {
    add_ln703_638_fu_12481805_p2 = (!zext_ln703_106_fu_12481801_p1.read().is_01() || !add_ln703_635_fu_12481779_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_106_fu_12481801_p1.read()) + sc_biguint<13>(add_ln703_635_fu_12481779_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_639_fu_12481811_p2() {
    add_ln703_639_fu_12481811_p2 = (!zext_ln1118_2426_fu_12414256_p1.read().is_01() || !zext_ln1116_221_fu_12414276_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2426_fu_12414256_p1.read()) + sc_biguint<10>(zext_ln1116_221_fu_12414276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_63_fu_12478193_p2() {
    add_ln703_63_fu_12478193_p2 = (!sext_ln203_7_fu_12402731_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_7_fu_12402731_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_640_fu_12481821_p2() {
    add_ln703_640_fu_12481821_p2 = (!zext_ln1118_2425_fu_12414204_p1.read().is_01() || !sext_ln708_41_fu_12414130_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1118_2425_fu_12414204_p1.read()) + sc_bigint<6>(sext_ln708_41_fu_12414130_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_641_fu_12481831_p2() {
    add_ln703_641_fu_12481831_p2 = (!sext_ln703_486_fu_12481827_p1.read().is_01() || !sext_ln1118_200_fu_12414236_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_486_fu_12481827_p1.read()) + sc_bigint<9>(sext_ln1118_200_fu_12414236_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_642_fu_12481841_p2() {
    add_ln703_642_fu_12481841_p2 = (!sext_ln703_487_fu_12481837_p1.read().is_01() || !zext_ln703_107_fu_12481817_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_487_fu_12481837_p1.read()) + sc_biguint<11>(zext_ln703_107_fu_12481817_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_643_fu_12504945_p2() {
    add_ln703_643_fu_12504945_p2 = (!sext_ln703_488_fu_12504942_p1.read().is_01() || !sext_ln703_485_fu_12504939_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_488_fu_12504942_p1.read()) + sc_bigint<14>(sext_ln703_485_fu_12504939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_644_fu_12504951_p2() {
    add_ln703_644_fu_12504951_p2 = (!add_ln703_643_fu_12504945_p2.read().is_01() || !sext_ln708_42_fu_12502900_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_643_fu_12504945_p2.read()) + sc_bigint<14>(sext_ln708_42_fu_12502900_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_645_fu_12481847_p2() {
    add_ln703_645_fu_12481847_p2 = (!zext_ln708_1061_fu_12414400_p1.read().is_01() || !trunc_ln1118_71_fu_12414454_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1061_fu_12414400_p1.read()) + sc_biguint<10>(trunc_ln1118_71_fu_12414454_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_646_fu_12481857_p2() {
    add_ln703_646_fu_12481857_p2 = (!zext_ln703_108_fu_12481853_p1.read().is_01() || !zext_ln708_1060_fu_12414320_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_108_fu_12481853_p1.read()) + sc_biguint<11>(zext_ln708_1060_fu_12414320_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_647_fu_12504960_p2() {
    add_ln703_647_fu_12504960_p2 = (!zext_ln703_109_fu_12504957_p1.read().is_01() || !add_ln703_644_fu_12504951_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_109_fu_12504957_p1.read()) + sc_biguint<14>(add_ln703_644_fu_12504951_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_648_fu_12481863_p2() {
    add_ln703_648_fu_12481863_p2 = (!sext_ln1118_203_fu_12414356_p1.read().is_01() || !sext_ln1118_208_fu_12414494_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_203_fu_12414356_p1.read()) + sc_bigint<11>(sext_ln1118_208_fu_12414494_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_649_fu_12481873_p2() {
    add_ln703_649_fu_12481873_p2 = (!sext_ln1118_201_fu_12414300_p1.read().is_01() || !sext_ln1118_204_fu_12414386_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_201_fu_12414300_p1.read()) + sc_bigint<9>(sext_ln1118_204_fu_12414386_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_64_fu_12478203_p2() {
    add_ln703_64_fu_12478203_p2 = (!sext_ln708_3_fu_12402745_p1.read().is_01() || !zext_ln1118_327_fu_12402759_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_3_fu_12402745_p1.read()) + sc_biguint<12>(zext_ln1118_327_fu_12402759_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_650_fu_12481883_p2() {
    add_ln703_650_fu_12481883_p2 = (!sext_ln703_494_fu_12481879_p1.read().is_01() || !sext_ln1118_206_fu_12414434_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_494_fu_12481879_p1.read()) + sc_bigint<10>(sext_ln1118_206_fu_12414434_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_651_fu_12481893_p2() {
    add_ln703_651_fu_12481893_p2 = (!sext_ln703_495_fu_12481889_p1.read().is_01() || !sext_ln703_493_fu_12481869_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_495_fu_12481889_p1.read()) + sc_bigint<12>(sext_ln703_493_fu_12481869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_652_fu_12504973_p2() {
    add_ln703_652_fu_12504973_p2 = (!sext_ln703_496_fu_12504970_p1.read().is_01() || !sext_ln703_492_fu_12504966_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_496_fu_12504970_p1.read()) + sc_bigint<15>(sext_ln703_492_fu_12504966_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_653_fu_12504979_p2() {
    add_ln703_653_fu_12504979_p2 = (!add_ln703_652_fu_12504973_p2.read().is_01() || !zext_ln203_34_fu_12502903_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_652_fu_12504973_p2.read()) + sc_biguint<15>(zext_ln203_34_fu_12502903_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_654_fu_12481899_p2() {
    add_ln703_654_fu_12481899_p2 = (!sext_ln203_77_fu_12412820_p1.read().is_01() || !sext_ln203_99_fu_12414588_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_77_fu_12412820_p1.read()) + sc_bigint<11>(sext_ln203_99_fu_12414588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_655_fu_12504988_p2() {
    add_ln703_655_fu_12504988_p2 = (!sext_ln703_497_fu_12504985_p1.read().is_01() || !add_ln703_653_fu_12504979_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_497_fu_12504985_p1.read()) + sc_biguint<15>(add_ln703_653_fu_12504979_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_656_fu_12481905_p2() {
    add_ln703_656_fu_12481905_p2 = (!sext_ln203_96_fu_12414508_p1.read().is_01() || !sext_ln203_97_fu_12414522_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_96_fu_12414508_p1.read()) + sc_bigint<10>(sext_ln203_97_fu_12414522_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_657_fu_12481915_p2() {
    add_ln703_657_fu_12481915_p2 = (!sext_ln203_98_fu_12414546_p1.read().is_01() || !sext_ln203_84_fu_12413522_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_98_fu_12414546_p1.read()) + sc_bigint<9>(sext_ln203_84_fu_12413522_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_658_fu_12481925_p2() {
    add_ln703_658_fu_12481925_p2 = (!sext_ln703_499_fu_12481921_p1.read().is_01() || !sext_ln703_498_fu_12481911_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_499_fu_12481921_p1.read()) + sc_bigint<11>(sext_ln703_498_fu_12481911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_65_fu_12478213_p2() {
    add_ln703_65_fu_12478213_p2 = (!sext_ln703_52_fu_12478209_p1.read().is_01() || !sext_ln703_14_fu_12478199_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_52_fu_12478209_p1.read()) + sc_bigint<13>(sext_ln703_14_fu_12478199_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_660_fu_12481931_p2() {
    add_ln703_660_fu_12481931_p2 = (!trunc_ln203_7_fu_12414610_p4.read().is_01() || !ap_const_lv9_1D8.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_7_fu_12414610_p4.read()) + sc_bigint<9>(ap_const_lv9_1D8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_661_fu_12481941_p2() {
    add_ln703_661_fu_12481941_p2 = (!zext_ln708_1062_fu_12414636_p1.read().is_01() || !sext_ln703_97_fu_12481937_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1062_fu_12414636_p1.read()) + sc_bigint<11>(sext_ln703_97_fu_12481937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_662_fu_12481951_p2() {
    add_ln703_662_fu_12481951_p2 = (!sext_ln703_98_fu_12481947_p1.read().is_01() || !zext_ln203_36_fu_12414650_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_98_fu_12481947_p1.read()) + sc_biguint<12>(zext_ln203_36_fu_12414650_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_663_fu_12481961_p2() {
    add_ln703_663_fu_12481961_p2 = (!zext_ln708_1063_fu_12414664_p1.read().is_01() || !trunc_ln708_1290_fu_12414668_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1063_fu_12414664_p1.read()) + sc_biguint<10>(trunc_ln708_1290_fu_12414668_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_664_fu_12481971_p2() {
    add_ln703_664_fu_12481971_p2 = (!zext_ln703_110_fu_12481967_p1.read().is_01() || !sext_ln703_99_fu_12481957_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_110_fu_12481967_p1.read()) + sc_bigint<13>(sext_ln703_99_fu_12481957_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_665_fu_12481977_p2() {
    add_ln703_665_fu_12481977_p2 = (!zext_ln708_1064_fu_12414702_p1.read().is_01() || !sext_ln1118_70_fu_12406363_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1064_fu_12414702_p1.read()) + sc_bigint<11>(sext_ln1118_70_fu_12406363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_666_fu_12481987_p2() {
    add_ln703_666_fu_12481987_p2 = (!sext_ln703_502_fu_12481983_p1.read().is_01() || !zext_ln1118_1791_fu_12414688_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_502_fu_12481983_p1.read()) + sc_biguint<12>(zext_ln1118_1791_fu_12414688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_667_fu_12481997_p2() {
    add_ln703_667_fu_12481997_p2 = (!sext_ln703_503_fu_12481993_p1.read().is_01() || !add_ln703_664_fu_12481971_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_503_fu_12481993_p1.read()) + sc_biguint<13>(add_ln703_664_fu_12481971_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_668_fu_12482003_p2() {
    add_ln703_668_fu_12482003_p2 = (!zext_ln1118_2427_fu_12414754_p1.read().is_01() || !trunc_ln1118_72_fu_12414786_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2427_fu_12414754_p1.read()) + sc_biguint<10>(trunc_ln1118_72_fu_12414786_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_669_fu_12505013_p2() {
    add_ln703_669_fu_12505013_p2 = (!zext_ln703_111_fu_12505010_p1.read().is_01() || !sext_ln703_100_fu_12505007_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_111_fu_12505010_p1.read()) + sc_bigint<14>(sext_ln703_100_fu_12505007_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_66_fu_12478219_p2() {
    add_ln703_66_fu_12478219_p2 = (!zext_ln1118_2245_fu_12402795_p1.read().is_01() || !zext_ln708_960_fu_12402863_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2245_fu_12402795_p1.read()) + sc_biguint<10>(zext_ln708_960_fu_12402863_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_670_fu_12482009_p2() {
    add_ln703_670_fu_12482009_p2 = (!sext_ln708_43_fu_12414782_p1.read().is_01() || !sext_ln1118_211_fu_12414740_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_43_fu_12414782_p1.read()) + sc_bigint<11>(sext_ln1118_211_fu_12414740_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_671_fu_12482019_p2() {
    add_ln703_671_fu_12482019_p2 = (!sext_ln703_504_fu_12482015_p1.read().is_01() || !sext_ln1118_210_fu_12414716_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_504_fu_12482015_p1.read()) + sc_bigint<12>(sext_ln1118_210_fu_12414716_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_672_fu_12505022_p2() {
    add_ln703_672_fu_12505022_p2 = (!sext_ln703_507_fu_12505019_p1.read().is_01() || !add_ln703_669_fu_12505013_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_507_fu_12505019_p1.read()) + sc_biguint<14>(add_ln703_669_fu_12505013_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_673_fu_12505028_p2() {
    add_ln703_673_fu_12505028_p2 = (!add_ln703_672_fu_12505022_p2.read().is_01() || !sext_ln1118_214_fu_12502906_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_672_fu_12505022_p2.read()) + sc_bigint<14>(sext_ln1118_214_fu_12502906_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_674_fu_12482025_p2() {
    add_ln703_674_fu_12482025_p2 = (!zext_ln1118_2436_fu_12414852_p1.read().is_01() || !zext_ln1118_2453_fu_12414866_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2436_fu_12414852_p1.read()) + sc_biguint<9>(zext_ln1118_2453_fu_12414866_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_675_fu_12482035_p2() {
    add_ln703_675_fu_12482035_p2 = (!zext_ln703_112_fu_12482031_p1.read().is_01() || !zext_ln203_346_fu_12414838_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_112_fu_12482031_p1.read()) + sc_biguint<10>(zext_ln203_346_fu_12414838_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_676_fu_12505037_p2() {
    add_ln703_676_fu_12505037_p2 = (!zext_ln703_113_fu_12505034_p1.read().is_01() || !add_ln703_673_fu_12505028_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_113_fu_12505034_p1.read()) + sc_biguint<14>(add_ln703_673_fu_12505028_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_677_fu_12482041_p2() {
    add_ln703_677_fu_12482041_p2 = (!sext_ln1118_213_fu_12414824_p1.read().is_01() || !sext_ln1118_203_fu_12414356_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_213_fu_12414824_p1.read()) + sc_bigint<11>(sext_ln1118_203_fu_12414356_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_678_fu_12482051_p2() {
    add_ln703_678_fu_12482051_p2 = (!sext_ln703_511_fu_12482047_p1.read().is_01() || !zext_ln1118_1800_fu_12414926_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_511_fu_12482047_p1.read()) + sc_biguint<12>(zext_ln1118_1800_fu_12414926_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_679_fu_12482061_p2() {
    add_ln703_679_fu_12482061_p2 = (!sext_ln708_44_fu_12414912_p1.read().is_01() || !sext_ln1118_186_fu_12413318_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_44_fu_12414912_p1.read()) + sc_bigint<9>(sext_ln1118_186_fu_12413318_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_67_fu_12478229_p2() {
    add_ln703_67_fu_12478229_p2 = (!zext_ln1118_338_fu_12402877_p1.read().is_01() || !sext_ln1118_16_fu_12402831_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_338_fu_12402877_p1.read()) + sc_bigint<12>(sext_ln1118_16_fu_12402831_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_680_fu_12482071_p2() {
    add_ln703_680_fu_12482071_p2 = (!sext_ln703_513_fu_12482067_p1.read().is_01() || !sext_ln1118_215_fu_12414880_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_513_fu_12482067_p1.read()) + sc_bigint<11>(sext_ln1118_215_fu_12414880_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_681_fu_12482081_p2() {
    add_ln703_681_fu_12482081_p2 = (!sext_ln703_514_fu_12482077_p1.read().is_01() || !sext_ln703_512_fu_12482057_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_514_fu_12482077_p1.read()) + sc_bigint<13>(sext_ln703_512_fu_12482057_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_682_fu_12505050_p2() {
    add_ln703_682_fu_12505050_p2 = (!sext_ln703_516_fu_12505047_p1.read().is_01() || !sext_ln703_508_fu_12505043_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_516_fu_12505047_p1.read()) + sc_bigint<15>(sext_ln703_508_fu_12505043_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_683_fu_12505056_p2() {
    add_ln703_683_fu_12505056_p2 = (!add_ln703_682_fu_12505050_p2.read().is_01() || !zext_ln203_37_fu_12502909_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_682_fu_12505050_p2.read()) + sc_biguint<15>(zext_ln203_37_fu_12502909_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_684_fu_12482087_p2() {
    add_ln703_684_fu_12482087_p2 = (!zext_ln708_1066_fu_12415008_p1.read().is_01() || !zext_ln708_1067_fu_12415022_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1066_fu_12415008_p1.read()) + sc_biguint<11>(zext_ln708_1067_fu_12415022_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_685_fu_12482093_p2() {
    add_ln703_685_fu_12482093_p2 = (!add_ln703_684_fu_12482087_p2.read().is_01() || !zext_ln708_1065_fu_12414994_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_684_fu_12482087_p2.read()) + sc_biguint<11>(zext_ln708_1065_fu_12414994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_686_fu_12505065_p2() {
    add_ln703_686_fu_12505065_p2 = (!zext_ln703_114_fu_12505062_p1.read().is_01() || !add_ln703_683_fu_12505056_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_114_fu_12505062_p1.read()) + sc_biguint<15>(add_ln703_683_fu_12505056_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_687_fu_12482099_p2() {
    add_ln703_687_fu_12482099_p2 = (!zext_ln203_347_fu_12415042_p1.read().is_01() || !zext_ln203_348_fu_12415074_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_347_fu_12415042_p1.read()) + sc_biguint<10>(zext_ln203_348_fu_12415074_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_688_fu_12482109_p2() {
    add_ln703_688_fu_12482109_p2 = (!sext_ln203_101_fu_12414970_p1.read().is_01() || !sext_ln203_102_fu_12415094_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_101_fu_12414970_p1.read()) + sc_bigint<9>(sext_ln203_102_fu_12415094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_689_fu_12482119_p2() {
    add_ln703_689_fu_12482119_p2 = (!sext_ln703_517_fu_12482115_p1.read().is_01() || !sext_ln203_100_fu_12414940_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_517_fu_12482115_p1.read()) + sc_bigint<11>(sext_ln203_100_fu_12414940_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_68_fu_12478235_p2() {
    add_ln703_68_fu_12478235_p2 = (!add_ln703_67_fu_12478229_p2.read().is_01() || !zext_ln703_22_fu_12478225_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_67_fu_12478229_p2.read()) + sc_biguint<12>(zext_ln703_22_fu_12478225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_690_fu_12482129_p2() {
    add_ln703_690_fu_12482129_p2 = (!sext_ln703_518_fu_12482125_p1.read().is_01() || !zext_ln703_115_fu_12482105_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_518_fu_12482125_p1.read()) + sc_biguint<12>(zext_ln703_115_fu_12482105_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_692_fu_12482135_p2() {
    add_ln703_692_fu_12482135_p2 = (!trunc_ln203_8_fu_12415112_p4.read().is_01() || !ap_const_lv8_98.is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln203_8_fu_12415112_p4.read()) + sc_bigint<8>(ap_const_lv8_98));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_693_fu_12482145_p2() {
    add_ln703_693_fu_12482145_p2 = (!sext_ln203_103_fu_12415122_p1.read().is_01() || !sext_ln703_103_fu_12482141_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_103_fu_12415122_p1.read()) + sc_bigint<12>(sext_ln703_103_fu_12482141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_694_fu_12482155_p2() {
    add_ln703_694_fu_12482155_p2 = (!sext_ln1118_216_fu_12415136_p1.read().is_01() || !sext_ln1118_218_fu_12415172_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_216_fu_12415136_p1.read()) + sc_bigint<11>(sext_ln1118_218_fu_12415172_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_695_fu_12482165_p2() {
    add_ln703_695_fu_12482165_p2 = (!sext_ln703_525_fu_12482161_p1.read().is_01() || !sext_ln703_104_fu_12482151_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_525_fu_12482161_p1.read()) + sc_bigint<13>(sext_ln703_104_fu_12482151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_696_fu_12482171_p2() {
    add_ln703_696_fu_12482171_p2 = (!add_ln703_695_fu_12482165_p2.read().is_01() || !zext_ln1118_1816_fu_12415216_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_695_fu_12482165_p2.read()) + sc_biguint<13>(zext_ln1118_1816_fu_12415216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_697_fu_12482177_p2() {
    add_ln703_697_fu_12482177_p2 = (!zext_ln1118_2455_fu_12415230_p1.read().is_01() || !zext_ln1116_214_fu_12409687_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2455_fu_12415230_p1.read()) + sc_biguint<10>(zext_ln1116_214_fu_12409687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_698_fu_12482187_p2() {
    add_ln703_698_fu_12482187_p2 = (!zext_ln703_116_fu_12482183_p1.read().is_01() || !add_ln703_696_fu_12482171_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_116_fu_12482183_p1.read()) + sc_biguint<13>(add_ln703_696_fu_12482171_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_699_fu_12482193_p2() {
    add_ln703_699_fu_12482193_p2 = (!zext_ln708_1069_fu_12415264_p1.read().is_01() || !sext_ln1118_222_fu_12415250_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1069_fu_12415264_p1.read()) + sc_bigint<11>(sext_ln1118_222_fu_12415250_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_69_fu_12478245_p2() {
    add_ln703_69_fu_12478245_p2 = (!sext_ln703_53_fu_12478241_p1.read().is_01() || !add_ln703_65_fu_12478213_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_53_fu_12478241_p1.read()) + sc_biguint<13>(add_ln703_65_fu_12478213_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_6_fu_12503422_p2() {
    add_ln703_6_fu_12503422_p2 = (!zext_ln703_12_fu_12503419_p1.read().is_01() || !add_ln703_4_reg_12514967.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_12_fu_12503419_p1.read()) + sc_biguint<13>(add_ln703_4_reg_12514967.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_700_fu_12482203_p2() {
    add_ln703_700_fu_12482203_p2 = (!sext_ln708_45_fu_12415192_p1.read().is_01() || !sext_ln1116_8_fu_12407233_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_45_fu_12415192_p1.read()) + sc_bigint<10>(sext_ln1116_8_fu_12407233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_701_fu_12482213_p2() {
    add_ln703_701_fu_12482213_p2 = (!sext_ln703_530_fu_12482209_p1.read().is_01() || !sext_ln703_529_fu_12482199_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_530_fu_12482209_p1.read()) + sc_bigint<12>(sext_ln703_529_fu_12482199_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_702_fu_12505090_p2() {
    add_ln703_702_fu_12505090_p2 = (!sext_ln703_532_fu_12505087_p1.read().is_01() || !sext_ln703_528_fu_12505084_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_532_fu_12505087_p1.read()) + sc_bigint<14>(sext_ln703_528_fu_12505084_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_703_fu_12505096_p2() {
    add_ln703_703_fu_12505096_p2 = (!add_ln703_702_fu_12505090_p2.read().is_01() || !sext_ln1118_224_fu_12502915_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_702_fu_12505090_p2.read()) + sc_bigint<14>(sext_ln1118_224_fu_12502915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_704_fu_12482219_p2() {
    add_ln703_704_fu_12482219_p2 = (!sext_ln1118_228_fu_12415358_p1.read().is_01() || !sext_ln1118_229_fu_12415372_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_228_fu_12415358_p1.read()) + sc_bigint<12>(sext_ln1118_229_fu_12415372_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_705_fu_12482229_p2() {
    add_ln703_705_fu_12482229_p2 = (!sext_ln703_534_fu_12482225_p1.read().is_01() || !sext_ln1118_227_fu_12415344_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_534_fu_12482225_p1.read()) + sc_bigint<13>(sext_ln1118_227_fu_12415344_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_706_fu_12505109_p2() {
    add_ln703_706_fu_12505109_p2 = (!sext_ln703_535_fu_12505106_p1.read().is_01() || !sext_ln703_533_fu_12505102_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_535_fu_12505106_p1.read()) + sc_bigint<15>(sext_ln703_533_fu_12505102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_707_fu_12482235_p2() {
    add_ln703_707_fu_12482235_p2 = (!sext_ln1118_231_fu_12415406_p1.read().is_01() || !sext_ln1118_12_fu_12402380_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_231_fu_12415406_p1.read()) + sc_bigint<12>(sext_ln1118_12_fu_12402380_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_708_fu_12482245_p2() {
    add_ln703_708_fu_12482245_p2 = (!sext_ln1118_225_fu_12415316_p1.read().is_01() || !sext_ln1118_230_fu_12415392_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_225_fu_12415316_p1.read()) + sc_bigint<9>(sext_ln1118_230_fu_12415392_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_709_fu_12482255_p2() {
    add_ln703_709_fu_12482255_p2 = (!sext_ln703_537_fu_12482251_p1.read().is_01() || !zext_ln1118_2465_fu_12415420_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_537_fu_12482251_p1.read()) + sc_biguint<10>(zext_ln1118_2465_fu_12415420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_70_fu_12478251_p2() {
    add_ln703_70_fu_12478251_p2 = (!add_ln703_69_fu_12478245_p2.read().is_01() || !zext_ln1116_4_fu_12400751_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_69_fu_12478245_p2.read()) + sc_biguint<13>(zext_ln1116_4_fu_12400751_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_710_fu_12482265_p2() {
    add_ln703_710_fu_12482265_p2 = (!sext_ln703_538_fu_12482261_p1.read().is_01() || !sext_ln703_536_fu_12482241_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_538_fu_12482261_p1.read()) + sc_bigint<13>(sext_ln703_536_fu_12482241_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_711_fu_12505118_p2() {
    add_ln703_711_fu_12505118_p2 = (!sext_ln703_542_fu_12505115_p1.read().is_01() || !add_ln703_706_fu_12505109_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_542_fu_12505115_p1.read()) + sc_biguint<15>(add_ln703_706_fu_12505109_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_712_fu_12482271_p2() {
    add_ln703_712_fu_12482271_p2 = (!sext_ln203_105_fu_12415474_p1.read().is_01() || !sext_ln203_106_fu_12415540_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_105_fu_12415474_p1.read()) + sc_bigint<12>(sext_ln203_106_fu_12415540_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_713_fu_12505127_p2() {
    add_ln703_713_fu_12505127_p2 = (!sext_ln703_546_fu_12505124_p1.read().is_01() || !add_ln703_711_fu_12505118_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_546_fu_12505124_p1.read()) + sc_biguint<15>(add_ln703_711_fu_12505118_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_714_fu_12482277_p2() {
    add_ln703_714_fu_12482277_p2 = (!trunc_ln203_52_fu_12415478_p4.read().is_01() || !zext_ln203_349_fu_12415498_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_52_fu_12415478_p4.read()) + sc_biguint<10>(zext_ln203_349_fu_12415498_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_715_fu_12482287_p2() {
    add_ln703_715_fu_12482287_p2 = (!zext_ln703_117_fu_12482283_p1.read().is_01() || !sext_ln203_107_fu_12415596_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_117_fu_12482283_p1.read()) + sc_bigint<12>(sext_ln203_107_fu_12415596_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_716_fu_12505136_p2() {
    add_ln703_716_fu_12505136_p2 = (!sext_ln703_549_fu_12505133_p1.read().is_01() || !add_ln703_713_fu_12505127_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_549_fu_12505133_p1.read()) + sc_biguint<15>(add_ln703_713_fu_12505127_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_717_fu_12482293_p2() {
    add_ln703_717_fu_12482293_p2 = (!zext_ln708_1071_fu_12415526_p1.read().is_01() || !zext_ln708_993_fu_12407651_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1071_fu_12415526_p1.read()) + sc_biguint<11>(zext_ln708_993_fu_12407651_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_718_fu_12482299_p2() {
    add_ln703_718_fu_12482299_p2 = (!add_ln703_717_fu_12482293_p2.read().is_01() || !zext_ln708_1070_fu_12415512_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_717_fu_12482293_p2.read()) + sc_biguint<11>(zext_ln708_1070_fu_12415512_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_719_fu_12482309_p2() {
    add_ln703_719_fu_12482309_p2 = (!zext_ln708_1072_fu_12415610_p1.read().is_01() || !sext_ln203_104_fu_12415454_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1072_fu_12415610_p1.read()) + sc_bigint<11>(sext_ln203_104_fu_12415454_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_71_fu_12478257_p2() {
    add_ln703_71_fu_12478257_p2 = (!sext_ln1118_17_fu_12402891_p1.read().is_01() || !zext_ln708_32_fu_12403008_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_17_fu_12402891_p1.read()) + sc_biguint<12>(zext_ln708_32_fu_12403008_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_720_fu_12482319_p2() {
    add_ln703_720_fu_12482319_p2 = (!sext_ln703_551_fu_12482315_p1.read().is_01() || !zext_ln203_38_fu_12415572_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_551_fu_12482315_p1.read()) + sc_biguint<12>(zext_ln203_38_fu_12415572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_721_fu_12482329_p2() {
    add_ln703_721_fu_12482329_p2 = (!sext_ln703_552_fu_12482325_p1.read().is_01() || !zext_ln703_118_fu_12482305_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_552_fu_12482325_p1.read()) + sc_biguint<13>(zext_ln703_118_fu_12482305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_723_fu_12482335_p2() {
    add_ln703_723_fu_12482335_p2 = (!zext_ln708_1073_fu_12415638_p1.read().is_01() || !ap_const_lv11_5F8.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1073_fu_12415638_p1.read()) + sc_bigint<11>(ap_const_lv11_5F8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_724_fu_12482345_p2() {
    add_ln703_724_fu_12482345_p2 = (!sext_ln703_554_fu_12482341_p1.read().is_01() || !sext_ln203_108_fu_12415624_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_554_fu_12482341_p1.read()) + sc_bigint<12>(sext_ln203_108_fu_12415624_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_725_fu_12482355_p2() {
    add_ln703_725_fu_12482355_p2 = (!sext_ln1118_216_fu_12415136_p1.read().is_01() || !sext_ln203_109_fu_12415658_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_216_fu_12415136_p1.read()) + sc_bigint<11>(sext_ln203_109_fu_12415658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_726_fu_12482365_p2() {
    add_ln703_726_fu_12482365_p2 = (!sext_ln703_557_fu_12482361_p1.read().is_01() || !sext_ln703_108_fu_12482351_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_557_fu_12482361_p1.read()) + sc_bigint<13>(sext_ln703_108_fu_12482351_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_727_fu_12482371_p2() {
    add_ln703_727_fu_12482371_p2 = (!add_ln703_726_fu_12482365_p2.read().is_01() || !zext_ln1118_1888_fu_12415682_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_726_fu_12482365_p2.read()) + sc_biguint<13>(zext_ln1118_1888_fu_12415682_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_728_fu_12482377_p2() {
    add_ln703_728_fu_12482377_p2 = (!zext_ln708_1068_fu_12415212_p1.read().is_01() || !zext_ln708_1074_fu_12415706_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1068_fu_12415212_p1.read()) + sc_biguint<11>(zext_ln708_1074_fu_12415706_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_729_fu_12505158_p2() {
    add_ln703_729_fu_12505158_p2 = (!zext_ln703_119_fu_12505155_p1.read().is_01() || !add_ln703_727_reg_12515757.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_119_fu_12505155_p1.read()) + sc_biguint<13>(add_ln703_727_reg_12515757.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_72_fu_12503582_p2() {
    add_ln703_72_fu_12503582_p2 = (!sext_ln703_55_fu_12503579_p1.read().is_01() || !sext_ln703_54_fu_12503576_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_55_fu_12503579_p1.read()) + sc_bigint<14>(sext_ln703_54_fu_12503576_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_730_fu_12482383_p2() {
    add_ln703_730_fu_12482383_p2 = (!zext_ln1118_2471_fu_12415730_p1.read().is_01() || !sext_ln1118_237_fu_12415750_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2471_fu_12415730_p1.read()) + sc_bigint<10>(sext_ln1118_237_fu_12415750_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_731_fu_12482393_p2() {
    add_ln703_731_fu_12482393_p2 = (!sext_ln1118_238_fu_12415774_p1.read().is_01() || !sext_ln708_40_fu_12414082_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_238_fu_12415774_p1.read()) + sc_bigint<10>(sext_ln708_40_fu_12414082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_732_fu_12482403_p2() {
    add_ln703_732_fu_12482403_p2 = (!sext_ln703_559_fu_12482399_p1.read().is_01() || !sext_ln703_558_fu_12482389_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_559_fu_12482399_p1.read()) + sc_bigint<11>(sext_ln703_558_fu_12482389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_733_fu_12505166_p2() {
    add_ln703_733_fu_12505166_p2 = (!sext_ln703_560_fu_12505163_p1.read().is_01() || !add_ln703_729_fu_12505158_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_560_fu_12505163_p1.read()) + sc_biguint<13>(add_ln703_729_fu_12505158_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_734_fu_12505176_p2() {
    add_ln703_734_fu_12505176_p2 = (!sext_ln1118_223_fu_12502912_p1.read().is_01() || !sext_ln1118_197_fu_12502891_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_223_fu_12502912_p1.read()) + sc_bigint<12>(sext_ln1118_197_fu_12502891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_735_fu_12505186_p2() {
    add_ln703_735_fu_12505186_p2 = (!sext_ln703_562_fu_12505182_p1.read().is_01() || !sext_ln703_561_fu_12505172_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_562_fu_12505182_p1.read()) + sc_bigint<14>(sext_ln703_561_fu_12505172_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_736_fu_12482409_p2() {
    add_ln703_736_fu_12482409_p2 = (!zext_ln1118_2473_fu_12415798_p1.read().is_01() || !trunc_ln1118_s_fu_12415802_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2473_fu_12415798_p1.read()) + sc_biguint<10>(trunc_ln1118_s_fu_12415802_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_737_fu_12482419_p2() {
    add_ln703_737_fu_12482419_p2 = (!zext_ln703_120_fu_12482415_p1.read().is_01() || !sext_ln708_46_fu_12415936_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_120_fu_12482415_p1.read()) + sc_bigint<12>(sext_ln708_46_fu_12415936_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_738_fu_12505195_p2() {
    add_ln703_738_fu_12505195_p2 = (!sext_ln703_565_fu_12505192_p1.read().is_01() || !add_ln703_735_fu_12505186_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_565_fu_12505192_p1.read()) + sc_biguint<14>(add_ln703_735_fu_12505186_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_739_fu_12482425_p2() {
    add_ln703_739_fu_12482425_p2 = (!zext_ln708_1076_fu_12415956_p1.read().is_01() || !zext_ln708_1077_fu_12415970_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1076_fu_12415956_p1.read()) + sc_biguint<11>(zext_ln708_1077_fu_12415970_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_73_fu_12478263_p2() {
    add_ln703_73_fu_12478263_p2 = (!trunc_ln1118_5_fu_12403039_p4.read().is_01() || !zext_ln1118_2250_fu_12403089_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_5_fu_12403039_p4.read()) + sc_biguint<10>(zext_ln1118_2250_fu_12403089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_740_fu_12482431_p2() {
    add_ln703_740_fu_12482431_p2 = (!add_ln703_739_fu_12482425_p2.read().is_01() || !zext_ln708_1075_fu_12415864_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_739_fu_12482425_p2.read()) + sc_biguint<11>(zext_ln708_1075_fu_12415864_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_741_fu_12482441_p2() {
    add_ln703_741_fu_12482441_p2 = (!sext_ln1118_243_fu_12415902_p1.read().is_01() || !sext_ln1118_240_fu_12415850_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_243_fu_12415902_p1.read()) + sc_bigint<11>(sext_ln1118_240_fu_12415850_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_742_fu_12482451_p2() {
    add_ln703_742_fu_12482451_p2 = (!sext_ln703_567_fu_12482447_p1.read().is_01() || !sext_ln1118_242_fu_12415888_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_567_fu_12482447_p1.read()) + sc_bigint<12>(sext_ln1118_242_fu_12415888_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_743_fu_12482461_p2() {
    add_ln703_743_fu_12482461_p2 = (!sext_ln703_568_fu_12482457_p1.read().is_01() || !zext_ln703_121_fu_12482437_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_568_fu_12482457_p1.read()) + sc_biguint<13>(zext_ln703_121_fu_12482437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_744_fu_12505208_p2() {
    add_ln703_744_fu_12505208_p2 = (!sext_ln703_569_fu_12505205_p1.read().is_01() || !sext_ln703_566_fu_12505201_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_569_fu_12505205_p1.read()) + sc_bigint<15>(sext_ln703_566_fu_12505201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_745_fu_12505214_p2() {
    add_ln703_745_fu_12505214_p2 = (!add_ln703_744_fu_12505208_p2.read().is_01() || !sext_ln203_110_fu_12502918_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_744_fu_12505208_p2.read()) + sc_bigint<15>(sext_ln203_110_fu_12502918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_746_fu_12482467_p2() {
    add_ln703_746_fu_12482467_p2 = (!zext_ln708_1078_fu_12415998_p1.read().is_01() || !zext_ln708_1080_fu_12416074_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1078_fu_12415998_p1.read()) + sc_biguint<11>(zext_ln708_1080_fu_12416074_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_747_fu_12482477_p2() {
    add_ln703_747_fu_12482477_p2 = (!zext_ln703_122_fu_12482473_p1.read().is_01() || !sext_ln203_113_fu_12416106_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_122_fu_12482473_p1.read()) + sc_bigint<13>(sext_ln203_113_fu_12416106_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_748_fu_12505223_p2() {
    add_ln703_748_fu_12505223_p2 = (!sext_ln703_570_fu_12505220_p1.read().is_01() || !add_ln703_745_fu_12505214_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_570_fu_12505220_p1.read()) + sc_biguint<15>(add_ln703_745_fu_12505214_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_749_fu_12482483_p2() {
    add_ln703_749_fu_12482483_p2 = (!sext_ln203_43_fu_12408330_p1.read().is_01() || !sext_ln203_114_fu_12416120_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_43_fu_12408330_p1.read()) + sc_bigint<11>(sext_ln203_114_fu_12416120_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_74_fu_12478273_p2() {
    add_ln703_74_fu_12478273_p2 = (!zext_ln708_962_fu_12403022_p1.read().is_01() || !sext_ln708_4_fu_12402927_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_962_fu_12403022_p1.read()) + sc_bigint<8>(sext_ln708_4_fu_12402927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_750_fu_12482493_p2() {
    add_ln703_750_fu_12482493_p2 = (!zext_ln708_1079_fu_12416012_p1.read().is_01() || !sext_ln203_111_fu_12416046_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1079_fu_12416012_p1.read()) + sc_bigint<8>(sext_ln203_111_fu_12416046_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_751_fu_12482503_p2() {
    add_ln703_751_fu_12482503_p2 = (!sext_ln703_572_fu_12482499_p1.read().is_01() || !zext_ln203_39_fu_12415984_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_572_fu_12482499_p1.read()) + sc_biguint<11>(zext_ln203_39_fu_12415984_p1.read()));
}

}

