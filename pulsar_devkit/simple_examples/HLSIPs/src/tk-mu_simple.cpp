/*
HLS implementation of TK-MU Linking
*/
//#include "simple_algo_tanh.h"
#include "tk-mu_simple.h"
#include <cmath>
#include <cassert>
#ifndef __SYNTHESIS__
#include <cstdio>
#endif

// https://github.com/Xilinx/RFNoC-HLS-NeuralNet/blob/master/rfnoc/hls/test_activations/test_activations.h/cpp
/* ORIGINAL:
void simple_algo_tanh_hw(etaphi_t data, etaphi_t& res){ 
    tanh<etaphi_t, etaphi_t>(data, res);
    return;
}
*/


void tkmu_simple_hw(  const TkObj_tkmu& in, PropTkObj_tkmu& out ){

    eta_t dzCorrPhi;
    eta_t delta;
    eta_t etaProp;
    eta_t deta;

    eta_t absEta = abs(in.hwEta);
    eta_t boundary  = 220;    // 1.1 as 12 bit integer: 0.005 resolution, 1.100 -> 220

    if (absEta < boundary){ 
        dzCorrPhi = 200;      //1.0
        etaProp   = boundary; //1.1;
        deta_LUT(in.hwZ0,deta);
        eta_t tmp_deta;
        invCosh(absEta,tmp_deta); // LUTs; 1/550 = 0.00182
        deta *= tmp_deta;
    }
    else {
        etaProp   = absEta;
        delta_LUT(in.hwZ0,delta);             // LUT; 1/850. (-0.01764705882 -> 0.01764705882) [-4,4]
        if (in.hwEta>0){
            dzCorrPhi = 200-delta;            // '1.0-delta'
            delta_minus_LUT(in.hwZ0,deta);    // (delta / (1-delta))
        }
        else{
            dzCorrPhi = 200+delta;
            delta_plus_LUT(in.hwZ0,deta);     // (delta / (1+delta))
        }
        eta_t tmp_deta;
        tanh( in.hwEta, deta );               // LUT
        deta *= tmp_deta;
    }

    out.hwPropEta = in.hwEta + deta;

    eta_t tmp_invCoshEta;
    invCosh(etaProp,tmp_invCoshEta);

    out.hwPropPhi = in.hwPhi - in.hwQ * dzCorrPhi * in.hwInvPt * tmp_invCoshEta - "100";

    return;
}

// THE END
