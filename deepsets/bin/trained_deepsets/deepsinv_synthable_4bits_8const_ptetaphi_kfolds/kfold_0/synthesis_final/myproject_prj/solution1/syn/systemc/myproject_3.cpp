#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"input_layer_V\" :  \"" << input_layer_V.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"layer18_out_0_V\" :  \"" << layer18_out_0_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer18_out_1_V\" :  \"" << layer18_out_1_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer18_out_2_V\" :  \"" << layer18_out_2_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer18_out_3_V\" :  \"" << layer18_out_3_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer18_out_4_V\" :  \"" << layer18_out_4_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_layer_V_ap_vld\" :  \"" << input_layer_V_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer18_out_0_V_ap_vld\" :  \"" << layer18_out_0_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer18_out_1_V_ap_vld\" :  \"" << layer18_out_1_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer18_out_2_V_ap_vld\" :  \"" << layer18_out_2_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer18_out_3_V_ap_vld\" :  \"" << layer18_out_3_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer18_out_4_V_ap_vld\" :  \"" << layer18_out_4_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

