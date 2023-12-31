// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "avg_ap_fixed_12_4_0_0_0_8_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic avg_ap_fixed_12_4_0_0_0_8_s::ap_const_logic_1 = sc_dt::Log_1;
const bool avg_ap_fixed_12_4_0_0_0_8_s::ap_const_boolean_1 = true;
const sc_lv<32> avg_ap_fixed_12_4_0_0_0_8_s::ap_const_lv32_3 = "11";
const sc_lv<32> avg_ap_fixed_12_4_0_0_0_8_s::ap_const_lv32_A = "1010";
const sc_logic avg_ap_fixed_12_4_0_0_0_8_s::ap_const_logic_0 = sc_dt::Log_0;

avg_ap_fixed_12_4_0_0_0_8_s::avg_ap_fixed_12_4_0_0_0_8_s(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_add_ln703_5565_fu_110_p2);
    sensitive << ( zext_ln703_717_fu_102_p1 );
    sensitive << ( zext_ln703_718_fu_106_p1 );

    SC_METHOD(thread_add_ln703_5566_fu_120_p2);
    sensitive << ( add_ln703_5565_fu_110_p2 );
    sensitive << ( zext_ln703_719_fu_116_p1 );

    SC_METHOD(thread_add_ln703_5567_fu_130_p2);
    sensitive << ( zext_ln703_720_fu_126_p1 );
    sensitive << ( x_4_V_read_cast_cast_fu_84_p1 );

    SC_METHOD(thread_add_ln703_5568_fu_136_p2);
    sensitive << ( add_ln703_5567_fu_130_p2 );
    sensitive << ( x_5_V_read_cast_cast_fu_80_p1 );

    SC_METHOD(thread_add_ln703_5569_fu_142_p2);
    sensitive << ( add_ln703_5568_fu_136_p2 );
    sensitive << ( x_6_V_read_cast_cast_fu_76_p1 );

    SC_METHOD(thread_add_ln703_5570_fu_148_p2);
    sensitive << ( add_ln703_5569_fu_142_p2 );
    sensitive << ( x_7_V_read_cast_cast_fu_72_p1 );

    SC_METHOD(thread_add_ln703_fu_96_p2);
    sensitive << ( zext_ln703_716_fu_92_p1 );
    sensitive << ( zext_ln703_fu_88_p1 );

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return);
    sensitive << ( tmp_fu_154_p4 );

    SC_METHOD(thread_tmp_fu_154_p4);
    sensitive << ( add_ln703_5570_fu_148_p2 );

    SC_METHOD(thread_x_4_V_read_cast_cast_fu_84_p1);
    sensitive << ( x_4_V_read );

    SC_METHOD(thread_x_5_V_read_cast_cast_fu_80_p1);
    sensitive << ( x_5_V_read );

    SC_METHOD(thread_x_6_V_read_cast_cast_fu_76_p1);
    sensitive << ( x_6_V_read );

    SC_METHOD(thread_x_7_V_read_cast_cast_fu_72_p1);
    sensitive << ( x_7_V_read );

    SC_METHOD(thread_zext_ln703_716_fu_92_p1);
    sensitive << ( x_0_V_read );

    SC_METHOD(thread_zext_ln703_717_fu_102_p1);
    sensitive << ( add_ln703_fu_96_p2 );

    SC_METHOD(thread_zext_ln703_718_fu_106_p1);
    sensitive << ( x_1_V_read );

    SC_METHOD(thread_zext_ln703_719_fu_116_p1);
    sensitive << ( x_3_V_read );

    SC_METHOD(thread_zext_ln703_720_fu_126_p1);
    sensitive << ( add_ln703_5566_fu_120_p2 );

    SC_METHOD(thread_zext_ln703_fu_88_p1);
    sensitive << ( x_2_V_read );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "avg_ap_fixed_12_4_0_0_0_8_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, x_0_V_read, "(port)x_0_V_read");
    sc_trace(mVcdFile, x_1_V_read, "(port)x_1_V_read");
    sc_trace(mVcdFile, x_2_V_read, "(port)x_2_V_read");
    sc_trace(mVcdFile, x_3_V_read, "(port)x_3_V_read");
    sc_trace(mVcdFile, x_4_V_read, "(port)x_4_V_read");
    sc_trace(mVcdFile, x_5_V_read, "(port)x_5_V_read");
    sc_trace(mVcdFile, x_6_V_read, "(port)x_6_V_read");
    sc_trace(mVcdFile, x_7_V_read, "(port)x_7_V_read");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, zext_ln703_716_fu_92_p1, "zext_ln703_716_fu_92_p1");
    sc_trace(mVcdFile, zext_ln703_fu_88_p1, "zext_ln703_fu_88_p1");
    sc_trace(mVcdFile, add_ln703_fu_96_p2, "add_ln703_fu_96_p2");
    sc_trace(mVcdFile, zext_ln703_717_fu_102_p1, "zext_ln703_717_fu_102_p1");
    sc_trace(mVcdFile, zext_ln703_718_fu_106_p1, "zext_ln703_718_fu_106_p1");
    sc_trace(mVcdFile, add_ln703_5565_fu_110_p2, "add_ln703_5565_fu_110_p2");
    sc_trace(mVcdFile, zext_ln703_719_fu_116_p1, "zext_ln703_719_fu_116_p1");
    sc_trace(mVcdFile, add_ln703_5566_fu_120_p2, "add_ln703_5566_fu_120_p2");
    sc_trace(mVcdFile, zext_ln703_720_fu_126_p1, "zext_ln703_720_fu_126_p1");
    sc_trace(mVcdFile, x_4_V_read_cast_cast_fu_84_p1, "x_4_V_read_cast_cast_fu_84_p1");
    sc_trace(mVcdFile, add_ln703_5567_fu_130_p2, "add_ln703_5567_fu_130_p2");
    sc_trace(mVcdFile, x_5_V_read_cast_cast_fu_80_p1, "x_5_V_read_cast_cast_fu_80_p1");
    sc_trace(mVcdFile, add_ln703_5568_fu_136_p2, "add_ln703_5568_fu_136_p2");
    sc_trace(mVcdFile, x_6_V_read_cast_cast_fu_76_p1, "x_6_V_read_cast_cast_fu_76_p1");
    sc_trace(mVcdFile, add_ln703_5569_fu_142_p2, "add_ln703_5569_fu_142_p2");
    sc_trace(mVcdFile, x_7_V_read_cast_cast_fu_72_p1, "x_7_V_read_cast_cast_fu_72_p1");
    sc_trace(mVcdFile, add_ln703_5570_fu_148_p2, "add_ln703_5570_fu_148_p2");
    sc_trace(mVcdFile, tmp_fu_154_p4, "tmp_fu_154_p4");
#endif

    }
}

avg_ap_fixed_12_4_0_0_0_8_s::~avg_ap_fixed_12_4_0_0_0_8_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_add_ln703_5565_fu_110_p2() {
    add_ln703_5565_fu_110_p2 = (!zext_ln703_717_fu_102_p1.read().is_01() || !zext_ln703_718_fu_106_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_717_fu_102_p1.read()) + sc_biguint<10>(zext_ln703_718_fu_106_p1.read()));
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_add_ln703_5566_fu_120_p2() {
    add_ln703_5566_fu_120_p2 = (!add_ln703_5565_fu_110_p2.read().is_01() || !zext_ln703_719_fu_116_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_5565_fu_110_p2.read()) + sc_biguint<10>(zext_ln703_719_fu_116_p1.read()));
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_add_ln703_5567_fu_130_p2() {
    add_ln703_5567_fu_130_p2 = (!zext_ln703_720_fu_126_p1.read().is_01() || !x_4_V_read_cast_cast_fu_84_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_720_fu_126_p1.read()) + sc_biguint<11>(x_4_V_read_cast_cast_fu_84_p1.read()));
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_add_ln703_5568_fu_136_p2() {
    add_ln703_5568_fu_136_p2 = (!add_ln703_5567_fu_130_p2.read().is_01() || !x_5_V_read_cast_cast_fu_80_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_5567_fu_130_p2.read()) + sc_biguint<11>(x_5_V_read_cast_cast_fu_80_p1.read()));
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_add_ln703_5569_fu_142_p2() {
    add_ln703_5569_fu_142_p2 = (!add_ln703_5568_fu_136_p2.read().is_01() || !x_6_V_read_cast_cast_fu_76_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_5568_fu_136_p2.read()) + sc_biguint<11>(x_6_V_read_cast_cast_fu_76_p1.read()));
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_add_ln703_5570_fu_148_p2() {
    add_ln703_5570_fu_148_p2 = (!add_ln703_5569_fu_142_p2.read().is_01() || !x_7_V_read_cast_cast_fu_72_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_5569_fu_142_p2.read()) + sc_biguint<11>(x_7_V_read_cast_cast_fu_72_p1.read()));
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_add_ln703_fu_96_p2() {
    add_ln703_fu_96_p2 = (!zext_ln703_716_fu_92_p1.read().is_01() || !zext_ln703_fu_88_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_716_fu_92_p1.read()) + sc_biguint<9>(zext_ln703_fu_88_p1.read()));
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_ap_return() {
    ap_return = esl_zext<9,8>(tmp_fu_154_p4.read());
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_tmp_fu_154_p4() {
    tmp_fu_154_p4 = add_ln703_5570_fu_148_p2.read().range(10, 3);
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_x_4_V_read_cast_cast_fu_84_p1() {
    x_4_V_read_cast_cast_fu_84_p1 = esl_zext<11,8>(x_4_V_read.read());
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_x_5_V_read_cast_cast_fu_80_p1() {
    x_5_V_read_cast_cast_fu_80_p1 = esl_zext<11,8>(x_5_V_read.read());
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_x_6_V_read_cast_cast_fu_76_p1() {
    x_6_V_read_cast_cast_fu_76_p1 = esl_zext<11,8>(x_6_V_read.read());
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_x_7_V_read_cast_cast_fu_72_p1() {
    x_7_V_read_cast_cast_fu_72_p1 = esl_zext<11,8>(x_7_V_read.read());
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_zext_ln703_716_fu_92_p1() {
    zext_ln703_716_fu_92_p1 = esl_zext<9,8>(x_0_V_read.read());
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_zext_ln703_717_fu_102_p1() {
    zext_ln703_717_fu_102_p1 = esl_zext<10,9>(add_ln703_fu_96_p2.read());
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_zext_ln703_718_fu_106_p1() {
    zext_ln703_718_fu_106_p1 = esl_zext<10,8>(x_1_V_read.read());
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_zext_ln703_719_fu_116_p1() {
    zext_ln703_719_fu_116_p1 = esl_zext<10,8>(x_3_V_read.read());
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_zext_ln703_720_fu_126_p1() {
    zext_ln703_720_fu_126_p1 = esl_zext<11,10>(add_ln703_5566_fu_120_p2.read());
}

void avg_ap_fixed_12_4_0_0_0_8_s::thread_zext_ln703_fu_88_p1() {
    zext_ln703_fu_88_p1 = esl_zext<9,8>(x_2_V_read.read());
}

}

