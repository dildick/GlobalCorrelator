/*
Created: 
Last Updated:   5 February 2018

Dan Marley
daniel.edison.marley@cernSPAMNOT.ch
Texas A&M University

-----

HLS implementation of TK-MU Linking
  > https://github.com/cms-l1t-offline/cmssw/blob/phase2-l1t-inegration-CMSSW_9_3_2/L1Trigger/L1TTrackMatch/plugins/L1TkMuonProducer.cc
*/
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
    feta_t dzCorrPhi;
    feta_t delta;
    feta_t etaProp;
    feta_t deta;

    feta_t absEta   = abs(in.hwEta);   // just inspect the first bit?
    feta_t boundary = 1.1;             // barrel/endcap boundary
    feta_t unity    = 1.0;

    std::cout << " FIRMWARE : Eta calculation " << std::endl;
    // barrel
    if (absEta < boundary){
        std::cout << " FIRMWARE : Barrel " << std::endl;
        dzCorrPhi = unity;            // convert 1.0 to eta_t
        etaProp   = boundary;         // 1.1;

        feta_t inhwZ0 = (in.hwZ0>0) ?  1.*in.hwZ0 : -1.*in.hwZ0;
        std::cout << " FIRMWARE : DETA COSH LUT " << std::endl;
        deta_cosh_LUT(inhwZ0,absEta,deta);       // LUT: z0/550/cosh(|eta|)
    }
    // endcap
    else {
        std::cout << " FIRMWARE : Endcap " << std::endl;
        etaProp = absEta;
        delta_LUT(in.hwZ0,delta);               // LUT: 1/850. (-0.01764705882 -> 0.01764705882) [-4,4]

        std::cout << " FIRMWARE : etaProp = " << absEta << std::endl;
        std::cout << " FIRMWARE : delta   = " << delta << std::endl;

        deta = 0;
        if (in.hwEta>0){
            dzCorrPhi = unity-delta;            // '1.0-delta'
            std::cout << " FIRMWARE : +dzcorrphi   = " << dzCorrPhi << std::endl;

            //delta_minus_LUT(in.hwZ0,deta);    // LUT: delta / (1-delta)
            deta_tanh_delta_minus_LUT( in.hwZ0, in.hwEta, deta );          // LUT: tanh * delta / (1-delta)
        }
        else{
            dzCorrPhi = unity+delta;            // '1.0+delta'
            std::cout << " FIRMWARE : -dzcorrphi   = " << dzCorrPhi << std::endl;
            std::cout << " FIRMWARE : in.hwZ0      = " << in.hwZ0 << std::endl;
            std::cout << " FIRMWARE : in.hwEta     = " << in.hwEta << std::endl;

            //delta_plus_LUT(in.hwZ0,deta);     // LUT: delta / (1+delta)
            deta_tanh_delta_plus_LUT( in.hwZ0, in.hwEta, deta );           // LUT: tanh * delta / (1+delta)
            std::cout << " FIRMWARE : 2d lut" << std::endl;
        }

        std::cout << " FIRMWARE : dzCorrPhi = " << dzCorrPhi << std::endl;
        std::cout << " FIRMWARE : deta      = " << deta << std::endl;
    }
    // ** calculate the propagated eta ** //
    feta_t inhwEta = in.hwEta;
    out.hwPropEta = (inhwEta + deta);

    // ** calculate the propagated phi ** //
    // inverse cosh(etaProp)
    std::cout << " FIRMWARE : Phi calculation " << std::endl;
    feta_t tmp_invCoshEta = 0;
    invCosh(etaProp,tmp_invCoshEta);            // LUT: 1/cosh(x) * 1.464*cosh(1.7) [from original function]

    std::cout << " FIRMWARE : invCoshEta = " << tmp_invCoshEta << std::endl;

    // Multiple in pieces to make sure the numbers stay within -pi,pi
    // e.g., 1.464 * cosh(1.7) = 4.14
    // 1.464     = 29280 in phi_t  (each bit is 0.00005) = "00111001001100000"
    // cosh(1.7) = 56566 = "01101110011110110"
    // M_PI/144  = 0.02181661565 -> 436 = "110110100"
    fphi_t tmp_val1 = (in.hwQ>0) ? 1*in.hwInvPt : -1*in.hwInvPt;
    fphi_t tmp_val2 = tmp_invCoshEta; //dzCorrPhi  * tmp_invCoshEta;        // max = (1 + 15/850) / cosh(0.0)
    fphi_t tmp_val3 = dzCorrPhi;
    fphi_t tmp_val4 = tmp_val1 * tmp_val2 * tmp_val3;

    // calculate the propagated phi
    std::cout << " FIRMWARE : in.hwPhi = " << in.hwPhi << std::endl;
    std::cout << " FIRMWARE : tmp_val4 = " << tmp_val4 << std::endl;

    fphi_t tmp_propPhi(in.hwPhi);
    fphi_t M_PI_144 = 0.0218;
    tmp_propPhi = tmp_propPhi - tmp_val4 - M_PI_144;

    out.hwPropPhi = tmp_propPhi;

    return;
}

// THE END
