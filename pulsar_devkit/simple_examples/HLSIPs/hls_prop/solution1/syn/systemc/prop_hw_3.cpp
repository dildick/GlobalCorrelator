#include "prop_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void prop_hw::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_hwRinv_V\" :  \"" << in_hwRinv_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_hwPt_V\" :  \"" << in_hwPt_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_hwSinhEta_V\" :  \"" << in_hwSinhEta_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_hwEta_V\" :  \"" << in_hwEta_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_hwEta_V_ap_vld\" :  \"" << in_hwEta_V_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_hwPhi_V\" :  \"" << in_hwPhi_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_hwPhiGlobal_V\" :  \"" << in_hwPhiGlobal_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_hwPhiGlobal_V_ap_vld\" :  \"" << in_hwPhiGlobal_V_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_hwZ0_V\" :  \"" << in_hwZ0_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_hwSector_V\" :  \"" << in_hwSector_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_hwQ_V\" :  \"" << in_hwQ_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_hwX2_V\" :  \"" << in_hwX2_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_hwValid_V\" :  \"" << in_hwValid_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_hwBX_V\" :  \"" << in_hwBX_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"outEtaPhi_first_V\" :  \"" << outEtaPhi_first_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"outEtaPhi_first_V_ap_vld\" :  \"" << outEtaPhi_first_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"outEtaPhi_second_V\" :  \"" << outEtaPhi_second_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"outEtaPhi_second_V_ap_vld\" :  \"" << outEtaPhi_second_V_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

