// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module avg_ap_fixed_12_4_0_0_0_8_s (
        ap_ready,
        x_0_V_read,
        x_1_V_read,
        x_2_V_read,
        x_3_V_read,
        x_4_V_read,
        x_5_V_read,
        x_6_V_read,
        x_7_V_read,
        ap_return
);


output   ap_ready;
input  [7:0] x_0_V_read;
input  [7:0] x_1_V_read;
input  [7:0] x_2_V_read;
input  [7:0] x_3_V_read;
input  [7:0] x_4_V_read;
input  [7:0] x_5_V_read;
input  [7:0] x_6_V_read;
input  [7:0] x_7_V_read;
output  [8:0] ap_return;

wire   [8:0] zext_ln703_716_fu_92_p1;
wire   [8:0] zext_ln703_fu_88_p1;
wire   [8:0] add_ln703_fu_96_p2;
wire   [9:0] zext_ln703_717_fu_102_p1;
wire   [9:0] zext_ln703_718_fu_106_p1;
wire   [9:0] add_ln703_5565_fu_110_p2;
wire   [9:0] zext_ln703_719_fu_116_p1;
wire   [9:0] add_ln703_5566_fu_120_p2;
wire   [10:0] zext_ln703_720_fu_126_p1;
wire   [10:0] x_4_V_read_cast_cast_fu_84_p1;
wire   [10:0] add_ln703_5567_fu_130_p2;
wire   [10:0] x_5_V_read_cast_cast_fu_80_p1;
wire   [10:0] add_ln703_5568_fu_136_p2;
wire   [10:0] x_6_V_read_cast_cast_fu_76_p1;
wire   [10:0] add_ln703_5569_fu_142_p2;
wire   [10:0] x_7_V_read_cast_cast_fu_72_p1;
wire   [10:0] add_ln703_5570_fu_148_p2;
wire   [7:0] tmp_fu_154_p4;

assign add_ln703_5565_fu_110_p2 = (zext_ln703_717_fu_102_p1 + zext_ln703_718_fu_106_p1);

assign add_ln703_5566_fu_120_p2 = (add_ln703_5565_fu_110_p2 + zext_ln703_719_fu_116_p1);

assign add_ln703_5567_fu_130_p2 = (zext_ln703_720_fu_126_p1 + x_4_V_read_cast_cast_fu_84_p1);

assign add_ln703_5568_fu_136_p2 = (add_ln703_5567_fu_130_p2 + x_5_V_read_cast_cast_fu_80_p1);

assign add_ln703_5569_fu_142_p2 = (add_ln703_5568_fu_136_p2 + x_6_V_read_cast_cast_fu_76_p1);

assign add_ln703_5570_fu_148_p2 = (add_ln703_5569_fu_142_p2 + x_7_V_read_cast_cast_fu_72_p1);

assign add_ln703_fu_96_p2 = (zext_ln703_716_fu_92_p1 + zext_ln703_fu_88_p1);

assign ap_ready = 1'b1;

assign ap_return = tmp_fu_154_p4;

assign tmp_fu_154_p4 = {{add_ln703_5570_fu_148_p2[10:3]}};

assign x_4_V_read_cast_cast_fu_84_p1 = x_4_V_read;

assign x_5_V_read_cast_cast_fu_80_p1 = x_5_V_read;

assign x_6_V_read_cast_cast_fu_76_p1 = x_6_V_read;

assign x_7_V_read_cast_cast_fu_72_p1 = x_7_V_read;

assign zext_ln703_716_fu_92_p1 = x_0_V_read;

assign zext_ln703_717_fu_102_p1 = add_ln703_fu_96_p2;

assign zext_ln703_718_fu_106_p1 = x_1_V_read;

assign zext_ln703_719_fu_116_p1 = x_3_V_read;

assign zext_ln703_720_fu_126_p1 = add_ln703_5566_fu_120_p2;

assign zext_ln703_fu_88_p1 = x_2_V_read;

endmodule //avg_ap_fixed_12_4_0_0_0_8_s
