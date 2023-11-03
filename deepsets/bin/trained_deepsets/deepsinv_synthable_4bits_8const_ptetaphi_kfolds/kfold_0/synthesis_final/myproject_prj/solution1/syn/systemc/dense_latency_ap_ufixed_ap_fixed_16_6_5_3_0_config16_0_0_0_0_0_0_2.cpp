#include "dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config16_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config16_0_0_0_0_0_0::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_0_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_0_preg = add_ln703_3901_fu_98447_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_1_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_1_preg = acc_1_V_fu_98494_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_2_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_2_preg = acc_2_V_fu_98525_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_3_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_3_preg = acc_3_V_fu_98564_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_4_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_4_preg = acc_4_V_fu_98599_p2.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        add_ln703_3876_reg_98635 = add_ln703_3876_fu_97265_p2.read();
        add_ln703_3883_reg_98640 = add_ln703_3883_fu_97327_p2.read();
        add_ln703_3887_reg_98645 = add_ln703_3887_fu_97353_p2.read();
        add_ln703_3890_reg_98650 = add_ln703_3890_fu_97379_p2.read();
        add_ln703_3894_reg_98655 = add_ln703_3894_fu_97405_p2.read();
        add_ln703_3898_reg_98660 = add_ln703_3898_fu_97441_p2.read();
        add_ln703_3907_reg_98665 = add_ln703_3907_fu_97497_p2.read();
        add_ln703_3914_reg_98670 = add_ln703_3914_fu_97555_p2.read();
        add_ln703_3917_reg_98675 = add_ln703_3917_fu_97567_p2.read();
        add_ln703_3920_reg_98680 = add_ln703_3920_fu_97593_p2.read();
        add_ln703_3928_reg_98685 = add_ln703_3928_fu_97659_p2.read();
        add_ln703_3937_reg_98690 = add_ln703_3937_fu_97721_p2.read();
        add_ln703_3940_reg_98695 = add_ln703_3940_fu_97747_p2.read();
        add_ln703_3943_reg_98700 = add_ln703_3943_fu_97773_p2.read();
        add_ln703_3952_reg_98705 = add_ln703_3952_fu_97839_p2.read();
        add_ln703_3960_reg_98710 = add_ln703_3960_fu_97915_p2.read();
        add_ln703_3969_reg_98715 = add_ln703_3969_fu_97977_p2.read();
        add_ln703_3976_reg_98720 = add_ln703_3976_fu_98035_p2.read();
        add_ln703_3980_reg_98725 = add_ln703_3980_fu_98061_p2.read();
        add_ln703_3983_reg_98730 = add_ln703_3983_fu_98087_p2.read();
        add_ln703_3991_reg_98735 = add_ln703_3991_fu_98149_p2.read();
        add_ln703_3996_reg_98740 = add_ln703_3996_fu_98171_p2.read();
        add_ln703_3999_reg_98745 = add_ln703_3999_fu_98197_p2.read();
        add_ln703_4007_reg_98750 = add_ln703_4007_fu_98255_p2.read();
        add_ln703_4015_reg_98755 = add_ln703_4015_fu_98321_p2.read();
        add_ln703_4022_reg_98760 = add_ln703_4022_fu_98387_p2.read();
    }
}

void dense_latency_ap_ufixed_ap_fixed_16_6_5_3_0_config16_0_0_0_0_0_0::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}

