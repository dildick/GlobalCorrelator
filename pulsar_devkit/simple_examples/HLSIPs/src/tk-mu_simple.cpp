/*
Created: 
Last Updated:   5 February 2018

Dan Marley
daniel.edison.marley@cernSPAMNOT.ch
Texas A&M University

-----

HLS implementation of TK-MU Linking
  > https://github.com/cms-l1t-offline/cmssw/blob/phase2-l1t-inegration-CMSSW_9_3_2/L1Trigger/L1TTrackMatch/plugins/L1TkMuonProducer.cc

**
LUTs are simplified to only include positive calculations,
as long as negative calculations are simple transformations.
*/
#include "tk-mu_simple.h"
#include <cmath>
#include <cassert>
#ifndef __SYNTHESIS__
#include <cstdio>
#endif



void tkmu_simple_hw(  const TkObj_tkmu& in, PropTkObj_tkmu& out ){
    /* Hardware implementation of the track propagation */
    feta_t boundary(1.1);           // barrel/endcap boundary
    feta_t unity(1.0);
    fphi_t M_PI_144(0.0218);        // used in phi propagation
    fphi_t tmp_A(1.464);            // constant in phi extrapolation
    fphi_t tmp_B(2.82832);          // cosh(1.7): constant in phi extrapolation

    // declare some variables
    fphi_t dzCorrPhi(1.0);
    fphi_t delta(0.0);
    feta_t deta(0.0);
    feta_t etaProp(1.1);
    fphi_t invCoshEta_Phi(0.0);
    feta_t invCoshEta_EtaBarrel(0.0);

    // convert inputs (ap_int<>) to ap_fixed<> for internal use
    fz0_t inhwZ0(in.hwZ0*INVETA_CONVERSION);     // same conversion as eta
    feta_t inhwEta(in.hwEta*INVETA_CONVERSION);   // ap_int<> -> ap_fixed<>
    feta_t abshwEta   = inhwEta;
    if (inhwEta<0) abshwEta*=-1;

    fphi_t inhwPhi(in.hwPhi*INVPHI_CONVERSION);
    fphi_t inhwInvPt(in.hwInvPt*INVPHI_CONVERSION);  // same conversion for invPt & phi
    if (in.hwQ<0) inhwInvPt *= -1;  

    // Do the calculations!
    std::cout << " FIRMWARE : Eta calculation " << std::endl;
    if (abshwEta < boundary){
        // barrel
        std::cout << " FIRMWARE : -- Barrel " << std::endl;
        dzCorrPhi = unity;            // convert 1.0 to eta_t
        etaProp   = boundary;         // 1.1;

        // 2DLUT:  deta_cosh_LUT(inhwZ0,abshwEta,deta);       // LUT: z0/550/cosh(|eta|) [not using!]
        // 2, 1DLUTs: [z0/550] * [1/cosh(|eta|)]
        if (inhwZ0<0){
            fz0_t tmp_inhwZ0 = -1*inhwZ0;
            deta_LUT(tmp_inhwZ0,deta);                       // only takes positive values
            deta *= -1;
        }
        else{
            deta_LUT(inhwZ0,deta);
        }

        invCosh(abshwEta,invCoshEta_EtaBarrel);              // LUT: 1/cosh(|eta|)
        deta *= invCoshEta_EtaBarrel;
    }
    else {
        // endcap
        std::cout << " FIRMWARE : -- Endcap " << std::endl;
        etaProp = abshwEta;

        // LUT: z0/850.
        if (inhwZ0<0){
            fz0_t tmp_inhwZ0 = -1*inhwZ0;
            delta_LUT(tmp_inhwZ0,delta);     // only takes positive values
            delta *= -1;
        }
        else{
            delta_LUT(inhwZ0,delta);
        }

        std::cout << " FIRMWARE :       delta   = " << delta << std::endl;

        // Only LUTs for
        // 1)  z0 / (850+z0)
        // 2)  z0 / (850-z0)
        // depending on sign(z0): multiply by '-1', if necessary, & choose the correct LUT!
        deta = 0;
        if (in.hwEta>0){
            dzCorrPhi = unity-delta;
            // Check z0 value, call the correct LUT!
            if (inhwZ0<0){
                delta_plus_LUT(inhwZ0,deta);                                    // LUT: delta / (1-delta)
                deta *= -1;
            }
            else
                delta_minus_LUT(inhwZ0,deta);                                   // LUT: delta / (1-delta)
            //--2D LUT: deta_tanh_delta_minus_LUT( inhwZ0, inhwEta, deta );     // LUT: tanh * delta / (1-delta)
        }
        else{
            dzCorrPhi = unity+delta;
            if (inhwZ0<0){
                delta_minus_LUT(inhwZ0,deta);                                   // LUT: delta / (1+delta)
                deta *= -1;
            }
            else
                delta_plus_LUT(inhwZ0,deta);                                    // LUT: delta / (1+delta)
            //--2D LUT: deta_tanh_delta_plus_LUT( inhwZ0, inhwEta, deta );      // LUT: tanh * delta / (1+delta)
        }

        feta_t tanhEta;
        tanh(inhwEta,tanhEta);  // handles the sign internally
        deta*=tanhEta;

        std::cout << " FIRMWARE :       deta      = " << deta << std::endl;
        std::cout << " FIRMWARE :       dzCorrPhi = " << dzCorrPhi << std::endl;
    }


    // ** calculate the propagated eta ** //
    out.hwPropEta = (inhwEta + deta)*ETA_CONVERSION;


    // ** calculate the propagated phi ** //
    std::cout << " FIRMWARE : -- Phi calculation " << std::endl;

    invCosh(etaProp,invCoshEta_Phi);            // LUT: 1/cosh(x)
    std::cout << " FIRMWARE :    invCoshEta = " << invCoshEta_Phi << std::endl;

    // Include two constants used in calculation (1.464*cosh(1.7))
    tmp_A *= inhwInvPt;
    tmp_B *= dzCorrPhi;       // cosh(1.7) * dzCorrPhi
    fphi_t tmp_val4   = tmp_A * tmp_B * invCoshEta_Phi;
    fphi_t outPropPhi = inhwPhi - tmp_val4 - M_PI_144;

    out.hwPropPhi = outPropPhi*PHI_CONVERSION;

    // Print results to screen for debugging
    std::cout << " FIRMWARE : in.hwPhi      = " << in.hwPhi << std::endl;
    std::cout << " FIRMWARE : out.hwPropPhi = " << out.hwPropPhi << std::endl;

    return;
}

// THE END
