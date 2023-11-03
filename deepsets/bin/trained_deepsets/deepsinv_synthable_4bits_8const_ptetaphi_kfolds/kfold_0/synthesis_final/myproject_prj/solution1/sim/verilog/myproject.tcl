
 
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set layer18_out_group [add_wave_group layer18_out(wire) -into $coutputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/layer18_out_4_V_ap_vld -into $layer18_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer18_out_3_V_ap_vld -into $layer18_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer18_out_2_V_ap_vld -into $layer18_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer18_out_1_V_ap_vld -into $layer18_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer18_out_0_V_ap_vld -into $layer18_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer18_out_4_V -into $layer18_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer18_out_3_V -into $layer18_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer18_out_2_V -into $layer18_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer18_out_1_V -into $layer18_out_group -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/layer18_out_0_V -into $layer18_out_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set input_layer_group [add_wave_group input_layer(wire) -into $cinputgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/input_layer_V_ap_vld -into $input_layer_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/AESL_inst_myproject/input_layer_V -into $input_layer_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_start -into $blocksiggroup
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_done -into $blocksiggroup
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_ready -into $blocksiggroup
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_idle -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_myproject_top/AESL_inst_myproject/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_myproject_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_myproject_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_myproject_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_myproject_top/LENGTH_input_layer_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer18_out_0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer18_out_1_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer18_out_2_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer18_out_3_V -into $tb_portdepth_group -radix hex
add_wave /apatb_myproject_top/LENGTH_layer18_out_4_V -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_layer18_out_group [add_wave_group layer18_out(wire) -into $tbcoutputgroup]
add_wave /apatb_myproject_top/layer18_out_4_V_ap_vld -into $tb_layer18_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer18_out_3_V_ap_vld -into $tb_layer18_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer18_out_2_V_ap_vld -into $tb_layer18_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer18_out_1_V_ap_vld -into $tb_layer18_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer18_out_0_V_ap_vld -into $tb_layer18_out_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/layer18_out_4_V -into $tb_layer18_out_group -radix hex
add_wave /apatb_myproject_top/layer18_out_3_V -into $tb_layer18_out_group -radix hex
add_wave /apatb_myproject_top/layer18_out_2_V -into $tb_layer18_out_group -radix hex
add_wave /apatb_myproject_top/layer18_out_1_V -into $tb_layer18_out_group -radix hex
add_wave /apatb_myproject_top/layer18_out_0_V -into $tb_layer18_out_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_input_layer_group [add_wave_group input_layer(wire) -into $tbcinputgroup]
add_wave /apatb_myproject_top/input_layer_V_ap_vld -into $tb_input_layer_group -color #ffff00 -radix hex
add_wave /apatb_myproject_top/input_layer_V -into $tb_input_layer_group -radix hex
save_wave_config myproject.wcfg
run all
quit

