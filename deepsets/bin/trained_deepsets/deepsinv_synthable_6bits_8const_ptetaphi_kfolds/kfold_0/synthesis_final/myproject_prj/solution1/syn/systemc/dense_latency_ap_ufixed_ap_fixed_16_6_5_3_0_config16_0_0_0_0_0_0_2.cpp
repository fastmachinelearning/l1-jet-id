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
            ap_return_0_preg = add_ln703_4446_fu_103388_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_1_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_1_preg = acc_1_V_fu_103422_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_2_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_2_preg = acc_2_V_fu_103475_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_3_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_3_preg = acc_3_V_fu_103545_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_4_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_4_preg = acc_4_V_fu_103605_p2.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        add_ln703_4418_reg_103646 = add_ln703_4418_fu_102267_p2.read();
        add_ln703_4424_reg_103651 = add_ln703_4424_fu_102319_p2.read();
        add_ln703_4430_reg_103656 = add_ln703_4430_fu_102371_p2.read();
        add_ln703_4433_reg_103661 = add_ln703_4433_fu_102387_p2.read();
        add_ln703_4434_reg_103666 = add_ln703_4434_fu_102393_p2.read();
        add_ln703_4444_reg_103671 = add_ln703_4444_fu_102455_p2.read();
        add_ln703_4453_reg_103676 = add_ln703_4453_fu_102521_p2.read();
        add_ln703_4460_reg_103681 = add_ln703_4460_fu_102583_p2.read();
        add_ln703_4468_reg_103686 = add_ln703_4468_fu_102645_p2.read();
        add_ln703_4475_reg_103691 = add_ln703_4475_fu_102707_p2.read();
        add_ln703_4483_reg_103696 = add_ln703_4483_fu_102763_p2.read();
        add_ln703_4490_reg_103701 = add_ln703_4490_fu_102817_p2.read();
        add_ln703_4494_reg_103706 = add_ln703_4494_fu_102843_p2.read();
        add_ln703_4497_reg_103711 = add_ln703_4497_fu_102869_p2.read();
        add_ln703_4499_reg_103716 = add_ln703_4499_fu_102875_p2.read();
        add_ln703_4500_reg_103721 = add_ln703_4500_fu_102881_p2.read();
        add_ln703_4504_reg_103726 = add_ln703_4504_fu_102903_p2.read();
        add_ln703_4509_reg_103731 = add_ln703_4509_fu_102915_p2.read();
        add_ln703_4512_reg_103736 = add_ln703_4512_fu_102941_p2.read();
        add_ln703_4520_reg_103741 = add_ln703_4520_fu_103003_p2.read();
        add_ln703_4522_reg_103746 = add_ln703_4522_fu_103009_p2.read();
        add_ln703_4523_reg_103751 = add_ln703_4523_fu_103015_p2.read();
        add_ln703_4525_reg_103756 = add_ln703_4525_fu_103021_p2.read();
        add_ln703_4526_reg_103761 = add_ln703_4526_fu_103027_p2.read();
        add_ln703_4535_reg_103766 = add_ln703_4535_fu_103093_p2.read();
        add_ln703_4544_reg_103771 = add_ln703_4544_fu_103155_p2.read();
        add_ln703_4551_reg_103776 = add_ln703_4551_fu_103213_p2.read();
        add_ln703_4555_reg_103781 = add_ln703_4555_fu_103239_p2.read();
        add_ln703_4558_reg_103786 = add_ln703_4558_fu_103261_p2.read();
        add_ln703_4562_reg_103791 = add_ln703_4562_fu_103287_p2.read();
        add_ln703_4566_reg_103796 = add_ln703_4566_fu_103323_p2.read();
        trunc_ln708_2934_reg_103641 = sub_ln1118_1869_fu_99595_p2.read().range(19, 8);
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

