// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _avg_ap_fixed_12_4_0_0_0_8_s_HH_
#define _avg_ap_fixed_12_4_0_0_0_8_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct avg_ap_fixed_12_4_0_0_0_8_s : public sc_module {
    // Port declarations 10
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > x_0_V_read;
    sc_in< sc_lv<8> > x_1_V_read;
    sc_in< sc_lv<8> > x_2_V_read;
    sc_in< sc_lv<8> > x_3_V_read;
    sc_in< sc_lv<8> > x_4_V_read;
    sc_in< sc_lv<8> > x_5_V_read;
    sc_in< sc_lv<8> > x_6_V_read;
    sc_in< sc_lv<8> > x_7_V_read;
    sc_out< sc_lv<9> > ap_return;


    // Module declarations
    avg_ap_fixed_12_4_0_0_0_8_s(sc_module_name name);
    SC_HAS_PROCESS(avg_ap_fixed_12_4_0_0_0_8_s);

    ~avg_ap_fixed_12_4_0_0_0_8_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<9> > zext_ln703_778_fu_92_p1;
    sc_signal< sc_lv<9> > zext_ln703_fu_88_p1;
    sc_signal< sc_lv<9> > add_ln703_fu_96_p2;
    sc_signal< sc_lv<10> > zext_ln703_779_fu_102_p1;
    sc_signal< sc_lv<10> > zext_ln703_780_fu_106_p1;
    sc_signal< sc_lv<10> > add_ln703_4939_fu_110_p2;
    sc_signal< sc_lv<10> > zext_ln703_781_fu_116_p1;
    sc_signal< sc_lv<10> > add_ln703_4940_fu_120_p2;
    sc_signal< sc_lv<11> > zext_ln703_782_fu_126_p1;
    sc_signal< sc_lv<11> > x_4_V_read_cast_cast_fu_84_p1;
    sc_signal< sc_lv<11> > add_ln703_4941_fu_130_p2;
    sc_signal< sc_lv<11> > x_5_V_read_cast_cast_fu_80_p1;
    sc_signal< sc_lv<11> > add_ln703_4942_fu_136_p2;
    sc_signal< sc_lv<11> > x_6_V_read_cast_cast_fu_76_p1;
    sc_signal< sc_lv<11> > add_ln703_4943_fu_142_p2;
    sc_signal< sc_lv<11> > x_7_V_read_cast_cast_fu_72_p1;
    sc_signal< sc_lv<11> > add_ln703_4944_fu_148_p2;
    sc_signal< sc_lv<8> > tmp_fu_154_p4;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_add_ln703_4939_fu_110_p2();
    void thread_add_ln703_4940_fu_120_p2();
    void thread_add_ln703_4941_fu_130_p2();
    void thread_add_ln703_4942_fu_136_p2();
    void thread_add_ln703_4943_fu_142_p2();
    void thread_add_ln703_4944_fu_148_p2();
    void thread_add_ln703_fu_96_p2();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_tmp_fu_154_p4();
    void thread_x_4_V_read_cast_cast_fu_84_p1();
    void thread_x_5_V_read_cast_cast_fu_80_p1();
    void thread_x_6_V_read_cast_cast_fu_76_p1();
    void thread_x_7_V_read_cast_cast_fu_72_p1();
    void thread_zext_ln703_778_fu_92_p1();
    void thread_zext_ln703_779_fu_102_p1();
    void thread_zext_ln703_780_fu_106_p1();
    void thread_zext_ln703_781_fu_116_p1();
    void thread_zext_ln703_782_fu_126_p1();
    void thread_zext_ln703_fu_88_p1();
};

}

using namespace ap_rtl;

#endif
