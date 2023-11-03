// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s_HH_
#define _softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_mul_mul_18s_17ns_26_1_1.h"
#include "softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s_exp_table1.h"
#include "softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s_invert_table2.h"

namespace ap_rtl {

struct softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > data_0_V_read;
    sc_in< sc_lv<16> > data_1_V_read;
    sc_in< sc_lv<16> > data_2_V_read;
    sc_in< sc_lv<16> > data_3_V_read;
    sc_in< sc_lv<16> > data_4_V_read;
    sc_out< sc_lv<16> > res_0_V;
    sc_out< sc_logic > res_0_V_ap_vld;
    sc_out< sc_lv<16> > res_1_V;
    sc_out< sc_logic > res_1_V_ap_vld;
    sc_out< sc_lv<16> > res_2_V;
    sc_out< sc_logic > res_2_V_ap_vld;
    sc_out< sc_lv<16> > res_3_V;
    sc_out< sc_logic > res_3_V_ap_vld;
    sc_out< sc_lv<16> > res_4_V;
    sc_out< sc_logic > res_4_V_ap_vld;


    // Module declarations
    softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s(sc_module_name name);
    SC_HAS_PROCESS(softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s);

    ~softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s();

    sc_trace_file* mVcdFile;

    softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s_exp_table1* exp_table1_U;
    softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_Softmax_config18_s_invert_table2* invert_table2_U;
    myproject_mul_mul_18s_17ns_26_1_1<1,1,18,17,26>* myproject_mul_mul_18s_17ns_26_1_1_U2166;
    myproject_mul_mul_18s_17ns_26_1_1<1,1,18,17,26>* myproject_mul_mul_18s_17ns_26_1_1_U2167;
    myproject_mul_mul_18s_17ns_26_1_1<1,1,18,17,26>* myproject_mul_mul_18s_17ns_26_1_1_U2168;
    myproject_mul_mul_18s_17ns_26_1_1<1,1,18,17,26>* myproject_mul_mul_18s_17ns_26_1_1_U2169;
    myproject_mul_mul_18s_17ns_26_1_1<1,1,18,17,26>* myproject_mul_mul_18s_17ns_26_1_1_U2170;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > exp_table1_address0;
    sc_signal< sc_logic > exp_table1_ce0;
    sc_signal< sc_lv<17> > exp_table1_q0;
    sc_signal< sc_lv<10> > exp_table1_address1;
    sc_signal< sc_logic > exp_table1_ce1;
    sc_signal< sc_lv<17> > exp_table1_q1;
    sc_signal< sc_lv<10> > exp_table1_address2;
    sc_signal< sc_logic > exp_table1_ce2;
    sc_signal< sc_lv<17> > exp_table1_q2;
    sc_signal< sc_lv<10> > exp_table1_address3;
    sc_signal< sc_logic > exp_table1_ce3;
    sc_signal< sc_lv<17> > exp_table1_q3;
    sc_signal< sc_lv<10> > exp_table1_address4;
    sc_signal< sc_logic > exp_table1_ce4;
    sc_signal< sc_lv<17> > exp_table1_q4;
    sc_signal< sc_lv<10> > invert_table2_address0;
    sc_signal< sc_logic > invert_table2_ce0;
    sc_signal< sc_lv<18> > invert_table2_q0;
    sc_signal< sc_lv<10> > y_V_fu_583_p3;
    sc_signal< sc_lv<10> > y_V_reg_1108;
    sc_signal< sc_lv<10> > y_V_1_fu_617_p3;
    sc_signal< sc_lv<10> > y_V_1_reg_1113;
    sc_signal< sc_lv<10> > y_V_2_fu_651_p3;
    sc_signal< sc_lv<10> > y_V_2_reg_1118;
    sc_signal< sc_lv<10> > y_V_3_fu_685_p3;
    sc_signal< sc_lv<10> > y_V_3_reg_1123;
    sc_signal< sc_lv<10> > y_V_4_fu_719_p3;
    sc_signal< sc_lv<10> > y_V_4_reg_1128;
    sc_signal< sc_lv<10> > y_V_4_reg_1128_pp0_iter1_reg;
    sc_signal< sc_lv<17> > exp_res_0_V_reg_1153;
    sc_signal< sc_lv<17> > exp_res_0_V_reg_1153_pp0_iter3_reg;
    sc_signal< sc_lv<17> > exp_res_1_V_reg_1158;
    sc_signal< sc_lv<17> > exp_res_1_V_reg_1158_pp0_iter3_reg;
    sc_signal< sc_lv<17> > exp_res_2_V_reg_1163;
    sc_signal< sc_lv<17> > exp_res_2_V_reg_1163_pp0_iter3_reg;
    sc_signal< sc_lv<17> > exp_res_3_V_reg_1168;
    sc_signal< sc_lv<17> > exp_res_3_V_reg_1168_pp0_iter3_reg;
    sc_signal< sc_lv<18> > p_Val2_16_fu_889_p3;
    sc_signal< sc_lv<18> > p_Val2_16_reg_1178;
    sc_signal< sc_lv<17> > exp_res_4_V_reg_1184;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_lv<64> > zext_ln255_fu_727_p1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > zext_ln255_1_fu_731_p1;
    sc_signal< sc_lv<64> > zext_ln255_2_fu_735_p1;
    sc_signal< sc_lv<64> > zext_ln255_3_fu_739_p1;
    sc_signal< sc_lv<64> > zext_ln255_4_fu_743_p1;
    sc_signal< sc_lv<64> > zext_ln265_fu_999_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<16> > icmp_ln1496_fu_217_p0;
    sc_signal< sc_lv<16> > icmp_ln1496_fu_217_p1;
    sc_signal< sc_lv<1> > icmp_ln1496_fu_217_p2;
    sc_signal< sc_lv<16> > select_ln66_fu_223_p1;
    sc_signal< sc_lv<16> > select_ln66_fu_223_p2;
    sc_signal< sc_lv<16> > icmp_ln1496_1_fu_231_p0;
    sc_signal< sc_lv<16> > icmp_ln1496_1_fu_231_p1;
    sc_signal< sc_lv<1> > icmp_ln1496_1_fu_231_p2;
    sc_signal< sc_lv<16> > select_ln66_1_fu_237_p1;
    sc_signal< sc_lv<16> > select_ln66_1_fu_237_p2;
    sc_signal< sc_lv<16> > select_ln66_fu_223_p3;
    sc_signal< sc_lv<16> > select_ln66_1_fu_237_p3;
    sc_signal< sc_lv<1> > icmp_ln1496_2_fu_245_p2;
    sc_signal< sc_lv<16> > select_ln66_2_fu_251_p3;
    sc_signal< sc_lv<16> > icmp_ln1496_3_fu_259_p1;
    sc_signal< sc_lv<1> > icmp_ln1496_3_fu_259_p2;
    sc_signal< sc_lv<16> > x_max_V_fu_265_p1;
    sc_signal< sc_lv<16> > sext_ln703_fu_273_p0;
    sc_signal< sc_lv<16> > x_max_V_fu_265_p3;
    sc_signal< sc_lv<17> > sext_ln703_fu_273_p1;
    sc_signal< sc_lv<17> > sext_ln703_1_fu_277_p1;
    sc_signal< sc_lv<17> > sub_ln1193_fu_281_p2;
    sc_signal< sc_lv<1> > tmp_3_fu_295_p3;
    sc_signal< sc_lv<1> > tmp_1_fu_287_p3;
    sc_signal< sc_lv<1> > xor_ln786_fu_303_p2;
    sc_signal< sc_lv<1> > xor_ln340_fu_321_p2;
    sc_signal< sc_lv<16> > sext_ln703_2_fu_333_p0;
    sc_signal< sc_lv<17> > sext_ln703_2_fu_333_p1;
    sc_signal< sc_lv<17> > sub_ln1193_1_fu_337_p2;
    sc_signal< sc_lv<1> > tmp_7_fu_351_p3;
    sc_signal< sc_lv<1> > tmp_5_fu_343_p3;
    sc_signal< sc_lv<1> > xor_ln786_1_fu_359_p2;
    sc_signal< sc_lv<1> > xor_ln340_1_fu_377_p2;
    sc_signal< sc_lv<16> > sext_ln703_3_fu_389_p0;
    sc_signal< sc_lv<17> > sext_ln703_3_fu_389_p1;
    sc_signal< sc_lv<17> > sub_ln1193_2_fu_393_p2;
    sc_signal< sc_lv<1> > tmp_10_fu_407_p3;
    sc_signal< sc_lv<1> > tmp_9_fu_399_p3;
    sc_signal< sc_lv<1> > xor_ln786_2_fu_415_p2;
    sc_signal< sc_lv<1> > xor_ln340_2_fu_433_p2;
    sc_signal< sc_lv<16> > sext_ln703_4_fu_445_p0;
    sc_signal< sc_lv<17> > sext_ln703_4_fu_445_p1;
    sc_signal< sc_lv<17> > sub_ln1193_3_fu_449_p2;
    sc_signal< sc_lv<1> > tmp_12_fu_463_p3;
    sc_signal< sc_lv<1> > tmp_11_fu_455_p3;
    sc_signal< sc_lv<1> > xor_ln786_3_fu_471_p2;
    sc_signal< sc_lv<1> > xor_ln340_3_fu_489_p2;
    sc_signal< sc_lv<16> > sext_ln703_5_fu_501_p0;
    sc_signal< sc_lv<17> > sext_ln703_5_fu_501_p1;
    sc_signal< sc_lv<17> > sub_ln1193_4_fu_505_p2;
    sc_signal< sc_lv<1> > tmp_14_fu_519_p3;
    sc_signal< sc_lv<1> > tmp_13_fu_511_p3;
    sc_signal< sc_lv<1> > xor_ln786_4_fu_527_p2;
    sc_signal< sc_lv<1> > xor_ln340_4_fu_545_p2;
    sc_signal< sc_lv<1> > xor_ln340_5_fu_315_p2;
    sc_signal< sc_lv<10> > tmp_fu_557_p4;
    sc_signal< sc_lv<1> > and_ln786_fu_309_p2;
    sc_signal< sc_lv<1> > or_ln340_fu_327_p2;
    sc_signal< sc_lv<10> > select_ln340_fu_567_p3;
    sc_signal< sc_lv<10> > select_ln388_fu_575_p3;
    sc_signal< sc_lv<1> > xor_ln340_6_fu_371_p2;
    sc_signal< sc_lv<10> > tmp_2_fu_591_p4;
    sc_signal< sc_lv<1> > and_ln786_1_fu_365_p2;
    sc_signal< sc_lv<1> > or_ln340_1_fu_383_p2;
    sc_signal< sc_lv<10> > select_ln340_2_fu_601_p3;
    sc_signal< sc_lv<10> > select_ln388_1_fu_609_p3;
    sc_signal< sc_lv<1> > xor_ln340_7_fu_427_p2;
    sc_signal< sc_lv<10> > tmp_4_fu_625_p4;
    sc_signal< sc_lv<1> > and_ln786_2_fu_421_p2;
    sc_signal< sc_lv<1> > or_ln340_2_fu_439_p2;
    sc_signal< sc_lv<10> > select_ln340_4_fu_635_p3;
    sc_signal< sc_lv<10> > select_ln388_2_fu_643_p3;
    sc_signal< sc_lv<1> > xor_ln340_8_fu_483_p2;
    sc_signal< sc_lv<10> > tmp_6_fu_659_p4;
    sc_signal< sc_lv<1> > and_ln786_3_fu_477_p2;
    sc_signal< sc_lv<1> > or_ln340_3_fu_495_p2;
    sc_signal< sc_lv<10> > select_ln340_6_fu_669_p3;
    sc_signal< sc_lv<10> > select_ln388_3_fu_677_p3;
    sc_signal< sc_lv<1> > xor_ln340_9_fu_539_p2;
    sc_signal< sc_lv<10> > tmp_8_fu_693_p4;
    sc_signal< sc_lv<1> > and_ln786_4_fu_533_p2;
    sc_signal< sc_lv<1> > or_ln340_4_fu_551_p2;
    sc_signal< sc_lv<10> > select_ln340_8_fu_703_p3;
    sc_signal< sc_lv<10> > select_ln388_4_fu_711_p3;
    sc_signal< sc_lv<18> > p_Val2_6_fu_747_p1;
    sc_signal< sc_lv<18> > p_Val2_7_fu_751_p1;
    sc_signal< sc_lv<18> > p_Val2_8_fu_755_p2;
    sc_signal< sc_lv<1> > p_Result_s_fu_761_p3;
    sc_signal< sc_lv<18> > p_Val2_9_fu_777_p1;
    sc_signal< sc_lv<18> > p_Val2_10_fu_781_p1;
    sc_signal< sc_lv<18> > p_Val2_11_fu_785_p2;
    sc_signal< sc_lv<1> > p_Result_14_fu_791_p3;
    sc_signal< sc_lv<18> > p_Val2_12_fu_769_p3;
    sc_signal< sc_lv<18> > p_Val2_13_fu_799_p3;
    sc_signal< sc_lv<19> > rhs_V_fu_811_p1;
    sc_signal< sc_lv<19> > lhs_V_fu_807_p1;
    sc_signal< sc_lv<19> > ret_V_fu_815_p2;
    sc_signal< sc_lv<18> > p_Val2_15_fu_829_p2;
    sc_signal< sc_lv<1> > p_Result_16_fu_835_p3;
    sc_signal< sc_lv<1> > p_Result_15_fu_821_p3;
    sc_signal< sc_lv<1> > xor_ln786_5_fu_843_p2;
    sc_signal< sc_lv<1> > xor_ln340_11_fu_861_p2;
    sc_signal< sc_lv<1> > xor_ln340_10_fu_855_p2;
    sc_signal< sc_lv<1> > underflow_fu_849_p2;
    sc_signal< sc_lv<1> > or_ln340_5_fu_867_p2;
    sc_signal< sc_lv<18> > select_ln340_12_fu_873_p3;
    sc_signal< sc_lv<18> > select_ln388_5_fu_881_p3;
    sc_signal< sc_lv<19> > lhs_V_1_fu_901_p1;
    sc_signal< sc_lv<19> > rhs_V_1_fu_904_p1;
    sc_signal< sc_lv<19> > ret_V_1_fu_908_p2;
    sc_signal< sc_lv<18> > p_Val2_17_fu_897_p1;
    sc_signal< sc_lv<18> > p_Val2_19_fu_922_p2;
    sc_signal< sc_lv<1> > p_Result_18_fu_927_p3;
    sc_signal< sc_lv<1> > p_Result_17_fu_914_p3;
    sc_signal< sc_lv<1> > xor_ln786_6_fu_935_p2;
    sc_signal< sc_lv<1> > xor_ln340_13_fu_953_p2;
    sc_signal< sc_lv<1> > xor_ln340_12_fu_947_p2;
    sc_signal< sc_lv<10> > tmp_s_fu_965_p4;
    sc_signal< sc_lv<1> > underflow_1_fu_941_p2;
    sc_signal< sc_lv<1> > or_ln340_6_fu_959_p2;
    sc_signal< sc_lv<10> > select_ln340_14_fu_975_p3;
    sc_signal< sc_lv<10> > select_ln388_6_fu_983_p3;
    sc_signal< sc_lv<10> > y_V_5_fu_991_p3;
    sc_signal< sc_lv<26> > mul_ln1118_fu_1073_p2;
    sc_signal< sc_lv<26> > mul_ln1118_1_fu_1080_p2;
    sc_signal< sc_lv<26> > mul_ln1118_2_fu_1087_p2;
    sc_signal< sc_lv<26> > mul_ln1118_3_fu_1094_p2;
    sc_signal< sc_lv<26> > mul_ln1118_4_fu_1101_p2;
    sc_signal< sc_lv<18> > mul_ln1118_fu_1073_p0;
    sc_signal< sc_lv<26> > sext_ln1116_fu_1004_p1;
    sc_signal< sc_lv<17> > mul_ln1118_fu_1073_p1;
    sc_signal< sc_lv<18> > mul_ln1118_1_fu_1080_p0;
    sc_signal< sc_lv<17> > mul_ln1118_1_fu_1080_p1;
    sc_signal< sc_lv<18> > mul_ln1118_2_fu_1087_p0;
    sc_signal< sc_lv<17> > mul_ln1118_2_fu_1087_p1;
    sc_signal< sc_lv<18> > mul_ln1118_3_fu_1094_p0;
    sc_signal< sc_lv<17> > mul_ln1118_3_fu_1094_p1;
    sc_signal< sc_lv<18> > mul_ln1118_4_fu_1101_p0;
    sc_signal< sc_lv<17> > mul_ln1118_4_fu_1101_p1;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to3;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<26> > mul_ln1118_1_fu_1080_p10;
    sc_signal< sc_lv<26> > mul_ln1118_2_fu_1087_p10;
    sc_signal< sc_lv<26> > mul_ln1118_3_fu_1094_p10;
    sc_signal< sc_lv<26> > mul_ln1118_4_fu_1101_p10;
    sc_signal< sc_lv<26> > mul_ln1118_fu_1073_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<10> ap_const_lv10_1FF;
    static const sc_lv<10> ap_const_lv10_200;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<18> ap_const_lv18_1FFFF;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<18> ap_const_lv18_20000;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_19;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_and_ln786_1_fu_365_p2();
    void thread_and_ln786_2_fu_421_p2();
    void thread_and_ln786_3_fu_477_p2();
    void thread_and_ln786_4_fu_533_p2();
    void thread_and_ln786_fu_309_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state4_pp0_stage0_iter3();
    void thread_ap_block_state5_pp0_stage0_iter4();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to3();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_exp_table1_address0();
    void thread_exp_table1_address1();
    void thread_exp_table1_address2();
    void thread_exp_table1_address3();
    void thread_exp_table1_address4();
    void thread_exp_table1_ce0();
    void thread_exp_table1_ce1();
    void thread_exp_table1_ce2();
    void thread_exp_table1_ce3();
    void thread_exp_table1_ce4();
    void thread_icmp_ln1496_1_fu_231_p0();
    void thread_icmp_ln1496_1_fu_231_p1();
    void thread_icmp_ln1496_1_fu_231_p2();
    void thread_icmp_ln1496_2_fu_245_p2();
    void thread_icmp_ln1496_3_fu_259_p1();
    void thread_icmp_ln1496_3_fu_259_p2();
    void thread_icmp_ln1496_fu_217_p0();
    void thread_icmp_ln1496_fu_217_p1();
    void thread_icmp_ln1496_fu_217_p2();
    void thread_invert_table2_address0();
    void thread_invert_table2_ce0();
    void thread_lhs_V_1_fu_901_p1();
    void thread_lhs_V_fu_807_p1();
    void thread_mul_ln1118_1_fu_1080_p0();
    void thread_mul_ln1118_1_fu_1080_p1();
    void thread_mul_ln1118_1_fu_1080_p10();
    void thread_mul_ln1118_2_fu_1087_p0();
    void thread_mul_ln1118_2_fu_1087_p1();
    void thread_mul_ln1118_2_fu_1087_p10();
    void thread_mul_ln1118_3_fu_1094_p0();
    void thread_mul_ln1118_3_fu_1094_p1();
    void thread_mul_ln1118_3_fu_1094_p10();
    void thread_mul_ln1118_4_fu_1101_p0();
    void thread_mul_ln1118_4_fu_1101_p1();
    void thread_mul_ln1118_4_fu_1101_p10();
    void thread_mul_ln1118_fu_1073_p0();
    void thread_mul_ln1118_fu_1073_p1();
    void thread_mul_ln1118_fu_1073_p10();
    void thread_or_ln340_1_fu_383_p2();
    void thread_or_ln340_2_fu_439_p2();
    void thread_or_ln340_3_fu_495_p2();
    void thread_or_ln340_4_fu_551_p2();
    void thread_or_ln340_5_fu_867_p2();
    void thread_or_ln340_6_fu_959_p2();
    void thread_or_ln340_fu_327_p2();
    void thread_p_Result_14_fu_791_p3();
    void thread_p_Result_15_fu_821_p3();
    void thread_p_Result_16_fu_835_p3();
    void thread_p_Result_17_fu_914_p3();
    void thread_p_Result_18_fu_927_p3();
    void thread_p_Result_s_fu_761_p3();
    void thread_p_Val2_10_fu_781_p1();
    void thread_p_Val2_11_fu_785_p2();
    void thread_p_Val2_12_fu_769_p3();
    void thread_p_Val2_13_fu_799_p3();
    void thread_p_Val2_15_fu_829_p2();
    void thread_p_Val2_16_fu_889_p3();
    void thread_p_Val2_17_fu_897_p1();
    void thread_p_Val2_19_fu_922_p2();
    void thread_p_Val2_6_fu_747_p1();
    void thread_p_Val2_7_fu_751_p1();
    void thread_p_Val2_8_fu_755_p2();
    void thread_p_Val2_9_fu_777_p1();
    void thread_res_0_V();
    void thread_res_0_V_ap_vld();
    void thread_res_1_V();
    void thread_res_1_V_ap_vld();
    void thread_res_2_V();
    void thread_res_2_V_ap_vld();
    void thread_res_3_V();
    void thread_res_3_V_ap_vld();
    void thread_res_4_V();
    void thread_res_4_V_ap_vld();
    void thread_ret_V_1_fu_908_p2();
    void thread_ret_V_fu_815_p2();
    void thread_rhs_V_1_fu_904_p1();
    void thread_rhs_V_fu_811_p1();
    void thread_select_ln340_12_fu_873_p3();
    void thread_select_ln340_14_fu_975_p3();
    void thread_select_ln340_2_fu_601_p3();
    void thread_select_ln340_4_fu_635_p3();
    void thread_select_ln340_6_fu_669_p3();
    void thread_select_ln340_8_fu_703_p3();
    void thread_select_ln340_fu_567_p3();
    void thread_select_ln388_1_fu_609_p3();
    void thread_select_ln388_2_fu_643_p3();
    void thread_select_ln388_3_fu_677_p3();
    void thread_select_ln388_4_fu_711_p3();
    void thread_select_ln388_5_fu_881_p3();
    void thread_select_ln388_6_fu_983_p3();
    void thread_select_ln388_fu_575_p3();
    void thread_select_ln66_1_fu_237_p1();
    void thread_select_ln66_1_fu_237_p2();
    void thread_select_ln66_1_fu_237_p3();
    void thread_select_ln66_2_fu_251_p3();
    void thread_select_ln66_fu_223_p1();
    void thread_select_ln66_fu_223_p2();
    void thread_select_ln66_fu_223_p3();
    void thread_sext_ln1116_fu_1004_p1();
    void thread_sext_ln703_1_fu_277_p1();
    void thread_sext_ln703_2_fu_333_p0();
    void thread_sext_ln703_2_fu_333_p1();
    void thread_sext_ln703_3_fu_389_p0();
    void thread_sext_ln703_3_fu_389_p1();
    void thread_sext_ln703_4_fu_445_p0();
    void thread_sext_ln703_4_fu_445_p1();
    void thread_sext_ln703_5_fu_501_p0();
    void thread_sext_ln703_5_fu_501_p1();
    void thread_sext_ln703_fu_273_p0();
    void thread_sext_ln703_fu_273_p1();
    void thread_sub_ln1193_1_fu_337_p2();
    void thread_sub_ln1193_2_fu_393_p2();
    void thread_sub_ln1193_3_fu_449_p2();
    void thread_sub_ln1193_4_fu_505_p2();
    void thread_sub_ln1193_fu_281_p2();
    void thread_tmp_10_fu_407_p3();
    void thread_tmp_11_fu_455_p3();
    void thread_tmp_12_fu_463_p3();
    void thread_tmp_13_fu_511_p3();
    void thread_tmp_14_fu_519_p3();
    void thread_tmp_1_fu_287_p3();
    void thread_tmp_2_fu_591_p4();
    void thread_tmp_3_fu_295_p3();
    void thread_tmp_4_fu_625_p4();
    void thread_tmp_5_fu_343_p3();
    void thread_tmp_6_fu_659_p4();
    void thread_tmp_7_fu_351_p3();
    void thread_tmp_8_fu_693_p4();
    void thread_tmp_9_fu_399_p3();
    void thread_tmp_fu_557_p4();
    void thread_tmp_s_fu_965_p4();
    void thread_underflow_1_fu_941_p2();
    void thread_underflow_fu_849_p2();
    void thread_x_max_V_fu_265_p1();
    void thread_x_max_V_fu_265_p3();
    void thread_xor_ln340_10_fu_855_p2();
    void thread_xor_ln340_11_fu_861_p2();
    void thread_xor_ln340_12_fu_947_p2();
    void thread_xor_ln340_13_fu_953_p2();
    void thread_xor_ln340_1_fu_377_p2();
    void thread_xor_ln340_2_fu_433_p2();
    void thread_xor_ln340_3_fu_489_p2();
    void thread_xor_ln340_4_fu_545_p2();
    void thread_xor_ln340_5_fu_315_p2();
    void thread_xor_ln340_6_fu_371_p2();
    void thread_xor_ln340_7_fu_427_p2();
    void thread_xor_ln340_8_fu_483_p2();
    void thread_xor_ln340_9_fu_539_p2();
    void thread_xor_ln340_fu_321_p2();
    void thread_xor_ln786_1_fu_359_p2();
    void thread_xor_ln786_2_fu_415_p2();
    void thread_xor_ln786_3_fu_471_p2();
    void thread_xor_ln786_4_fu_527_p2();
    void thread_xor_ln786_5_fu_843_p2();
    void thread_xor_ln786_6_fu_935_p2();
    void thread_xor_ln786_fu_303_p2();
    void thread_y_V_1_fu_617_p3();
    void thread_y_V_2_fu_651_p3();
    void thread_y_V_3_fu_685_p3();
    void thread_y_V_4_fu_719_p3();
    void thread_y_V_5_fu_991_p3();
    void thread_y_V_fu_583_p3();
    void thread_zext_ln255_1_fu_731_p1();
    void thread_zext_ln255_2_fu_735_p1();
    void thread_zext_ln255_3_fu_739_p1();
    void thread_zext_ln255_4_fu_743_p1();
    void thread_zext_ln255_fu_727_p1();
    void thread_zext_ln265_fu_999_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
