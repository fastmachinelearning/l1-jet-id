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
            ap_return_0_preg = add_ln703_4565_fu_103976_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_1_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_1_preg = acc_1_V_fu_104019_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_2_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_2_preg = acc_2_V_fu_104050_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_3_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_3_preg = acc_3_V_fu_104098_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_4_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
            ap_return_4_preg = acc_4_V_fu_104155_p2.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        add_ln703_4541_reg_104191 = add_ln703_4541_fu_102851_p2.read();
        add_ln703_4548_reg_104196 = add_ln703_4548_fu_102917_p2.read();
        add_ln703_4552_reg_104201 = add_ln703_4552_fu_102939_p2.read();
        add_ln703_4555_reg_104206 = add_ln703_4555_fu_102961_p2.read();
        add_ln703_4563_reg_104211 = add_ln703_4563_fu_103027_p2.read();
        add_ln703_4572_reg_104216 = add_ln703_4572_fu_103093_p2.read();
        add_ln703_4579_reg_104221 = add_ln703_4579_fu_103155_p2.read();
        add_ln703_4583_reg_104226 = add_ln703_4583_fu_103181_p2.read();
        add_ln703_4586_reg_104231 = add_ln703_4586_fu_103207_p2.read();
        add_ln703_4595_reg_104236 = add_ln703_4595_fu_103287_p2.read();
        add_ln703_4603_reg_104241 = add_ln703_4603_fu_103339_p2.read();
        add_ln703_4610_reg_104246 = add_ln703_4610_fu_103389_p2.read();
        add_ln703_4614_reg_104251 = add_ln703_4614_fu_103415_p2.read();
        add_ln703_4617_reg_104256 = add_ln703_4617_fu_103441_p2.read();
        add_ln703_4625_reg_104261 = add_ln703_4625_fu_103503_p2.read();
        add_ln703_4633_reg_104266 = add_ln703_4633_fu_103555_p2.read();
        add_ln703_4640_reg_104271 = add_ln703_4640_fu_103613_p2.read();
        add_ln703_4644_reg_104276 = add_ln703_4644_fu_103639_p2.read();
        add_ln703_4647_reg_104281 = add_ln703_4647_fu_103665_p2.read();
        add_ln703_4651_reg_104286 = add_ln703_4651_fu_103691_p2.read();
        add_ln703_4654_reg_104291 = add_ln703_4654_fu_103713_p2.read();
        add_ln703_4664_reg_104296 = add_ln703_4664_fu_103771_p2.read();
        add_ln703_4671_reg_104301 = add_ln703_4671_fu_103829_p2.read();
        add_ln703_4675_reg_104306 = add_ln703_4675_fu_103855_p2.read();
        add_ln703_4678_reg_104311 = add_ln703_4678_fu_103881_p2.read();
        add_ln703_4680_reg_104316 = add_ln703_4680_fu_103887_p2.read();
        add_ln703_4681_reg_104321 = add_ln703_4681_fu_103893_p2.read();
        add_ln703_4686_reg_104326 = add_ln703_4686_fu_103929_p2.read();
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

