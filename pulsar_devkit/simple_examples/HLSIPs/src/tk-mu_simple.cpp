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



void tkmu_simple_hw(  const TkObj_tkmu& in, PropTkObj_tkmu& out ){
    /* Hardware implementation of the track propagation 
       -> Eta has 0.005 resolution
       -> Convert float to 12-bit signed integer (eta_t precision):
       -> 1.1 @ 0.005 = 220 = "000011011100"; round( 1.1*ETA_CONVERSION )
       -> 1.0 @ 0.005 = 200 = "000011001000"; round( 1.0*ETA_CONVERSION )
    */
    eta_t dzCorrPhi;
    eta_t delta;
    eta_t etaProp;
    eta_t deta;

    eta_t absEta   = abs(in.hwEta);
    eta_t boundary = "000011011100";  // 1.1 as 12-bit signed integer
    eta_t unity    = "000011001000";  // 1.0 as 12-bit signed integer

    // barrel
    if (absEta < boundary){
        dzCorrPhi = "000011001000";   // convert 1.0 to eta_t
        etaProp   = boundary;         // 1.1;
        deta_LUT(in.hwZ0,deta);
        eta_t tmp_deta;
        invCosh(absEta,tmp_deta); // LUTs; 1/550 = 0.00182
        deta *= tmp_deta;
    }
    // endcap
    else {
        etaProp = absEta;
        delta_LUT(in.hwZ0,delta);             // LUT; 1/850. (-0.01764705882 -> 0.01764705882) [-4,4]

        if (in.hwEta>0){
            dzCorrPhi = unity-delta;            // '1.0-delta'
            delta_minus_LUT(in.hwZ0,deta);    // (delta / (1-delta))
        }
        else{
            dzCorrPhi = unity+delta;
            delta_plus_LUT(in.hwZ0,deta);     // (delta / (1+delta))
        }
        eta_t tmp_deta;
        tanh( in.hwEta, deta );               // LUT
        deta *= tmp_deta;
    }
    // calculate the propagated eta
    out.hwPropEta = in.hwEta + deta;

    // inverse cosh(etaProp)
    eta_t tmp_invCoshEta;
    invCosh(etaProp,tmp_invCoshEta);

    // Multiple in pieces to make sure the numbers stay within -pi,pi
    // e.g., 1.464 * cosh(1.7) = 4.14
    // 1.464     = 29280 in phi_t  (each bit is 0.00005) = "00111001001100000"
    // cosh(1.7) = 56566 = "01101110011110110"
    // M_PI/144  = 0.02181661565 -> 436 = "110110100"
    phi_t tmp_val1 = "00111001001100000" * in.hwQ;      // +/- 1.464
    phi_t tmp_val2 = "01101110011110110" * in.hwInvPt;  // < cosh(1.7) = 2.82
    phi_t tmp_val3 = dzCorrPhi * tmp_invCoshEta;        // max = (1 + 15/850) / cosh(0.0)

    // calculate the propagated phi
    out.hwPropPhi  = in.hwPhi;
    out.hwPropPhi -= tmp_val1 * tmp_val2 * tmp_val3;
    out.hwPropPhi -= "00000000110110100";

    return;
}

// THE END
