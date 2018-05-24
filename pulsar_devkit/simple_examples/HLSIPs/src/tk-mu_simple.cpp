/*
Created: 
Last Updated:   17 February 2018

Dan Marley
daniel.edison.marley@cernSPAMNOT.ch
Texas A&M University

-----

HLS implementation of TK-MU Linking
  > https://github.com/cms-l1t-offline/cmssw/blob/phase2-l1t-inegration-CMSSW_9_3_2/L1Trigger/L1TTrackMatch/plugins/L1TkMuonProducer.cc

**
LUTs are simplified to only include positive calculations,
as long as negative calculations are simple transformations.

 pt = (0.3*3.8*0.01)/rinv

Negative values in binary are generated assuming "One's complement"
*/
#include "tk-mu_simple.h"
#include <cmath>
#include <cassert>
#ifndef __SYNTHESIS__
#include <cstdio>
#endif



PropTkObj_tkmu tkmu_simple_hw(  TkObj_tkmu& in)
{
  PropTkObj_tkmu out;

    /* Hardware implementation of the track propagation */
    feta_t boundary(1.1);           // barrel/endcap boundary
    feta_t unity(1.0);
    fphi_t M_PI_144(0.0218);        // used in phi propagation
    fphi_t tmp_A(1.464);            // constant in phi extrapolation
    fphi_t tmp_B(2.82832);          // cosh(1.7): constant in phi extrapolation

    // declare some variables
    fphi_t dzCorrPhi(1.0);
    fphi_t delta(0.0);

    feta_t inhwEta;
    feta_t deta(0.0);
    feta_t etaProp(1.1);

    fphi_t invCoshEta_Phi(0.0);
    feta_t invCoshEta_EtaBarrel(0.0);

    // ** convert inputs (ap_int<>) to ap_fixed<> for internal use ** //

    // sinhEta -> eta (8192 = 2^13; number of unsigned bits)
    if (DEBUG) std::cout << " FIRMWARE : SinhEta calculation " << in.hwSinhEta << std::endl;
    feta_t sinhEta;
    feta_t absSinhEta;
    if (in.hwSinhEta<0){
        absSinhEta = (in.hwSinhEta+8192)*INVETA_CONVERSION;     // use ap_fixed<>
        sinhEta    = -1*(in.hwSinhEta+8192)*INVETA_CONVERSION;
    }
    else{
        absSinhEta = in.hwSinhEta*INVETA_CONVERSION;
        sinhEta    = in.hwSinhEta*INVETA_CONVERSION;
    }
    if (DEBUG) std::cout << " -- |sinheta| = " << absSinhEta << std::endl;
    arcsinh(absSinhEta, inhwEta);
    feta_t abshwEta = inhwEta;
    if (in.hwSinhEta<0) inhwEta*=-1;
    in.hwEta = inhwEta*ETA_CONVERSION;             // set input eta ap_int

    if (DEBUG) std::cout << " -- sinheta = " << sinhEta << std::endl;
    if (DEBUG) std::cout << " -- eta     = " << inhwEta << std::endl;

    // Z0 (1024 = 2^10; number of unsigned bits)
    if (DEBUG) std::cout << " FIRMWARE : z0 calculation " << std::endl;
    fz0_t inhwZ0;
    fz0_t absInhwZ0;
    if (in.hwZ0<0) {
        inhwZ0    = -1*(in.hwZ0+1024)*INVZ_CONVERSION;
        absInhwZ0 = (in.hwZ0+1024)*INVZ_CONVERSION;
    }
    else{
        inhwZ0    = in.hwZ0*INVZ_CONVERSION;
        absInhwZ0 = in.hwZ0*INVZ_CONVERSION;
    }

    if (DEBUG) std::cout << " -- inz0 = " << in.hwZ0 << std::endl;
    if (DEBUG) std::cout << " -- z0   = " << inhwZ0 << std::endl;
    if (DEBUG) std::cout << " -- |z0| = " << absInhwZ0 << std::endl;

    // Phi0 (262144 = 2^18; number of unsigned bits)
    fphi_t inhwPhi;
    if (in.hwPhi<0)
        inhwPhi = -1*(in.hwPhi+262144)*INVPHI_CONVERSION;
    else
        inhwPhi = in.hwPhi*INVPHI_CONVERSION;
    if (DEBUG) std::cout << " -- phi  = " << inhwPhi << std::endl;

    // Rinv -> 1/pT (16384 = 2^14; number of unsigned bits)
    finvpt_t inhwRinv;
    if (in.hwRinv<0)
        inhwRinv = (in.hwRinv+16384)*INVRINV_CONVERSION;
    else
        inhwRinv = in.hwRinv*INVRINV_CONVERSION;

    fphi_t invPt_f1(0.719297);
    fphi_t inhwInvPt(inhwRinv*invPt_f1);
    inhwInvPt += inhwRinv*87;  // PT_CONVERSION
    if (in.hwQ<0) inhwInvPt*=-1;

    if (DEBUG) std::cout << " -- inrinv = " << in.hwRinv << std::endl;
    if (DEBUG) std::cout << " -- rinv   = " << inhwRinv << std::endl;
    if (DEBUG) std::cout << " -- invptf = " << invPt_f1 << std::endl;
    if (DEBUG) std::cout << " -- invpt  = " << inhwInvPt << std::endl;

    // Do the calculations!
    if (DEBUG) std::cout << " FIRMWARE : Eta calculation " << std::endl;
    if (abshwEta < boundary){
        // barrel
        if (DEBUG) std::cout << " FIRMWARE : -- Barrel " << std::endl;
        dzCorrPhi = unity;            // convert 1.0 to eta_t
        etaProp   = boundary;         // 1.1;

        // 2, 1DLUTs: [z0/550] * [1/cosh(|eta|)]
        deta_LUT(absInhwZ0,deta);                             // only takes positive values
        if (inhwZ0<0)
            deta *= -1;

        invCosh(abshwEta,invCoshEta_EtaBarrel);               // LUT: 1/cosh(|eta|)
        deta *= invCoshEta_EtaBarrel;

        if (DEBUG) std::cout << " FIRMWARE :       deta       = " << deta << std::endl;
        if (DEBUG) std::cout << " FIRMWARE :       invCoshEta = " << invCoshEta_EtaBarrel << std::endl;
        if (DEBUG) std::cout << " FIRMWARE :       dzCorrPhi  = " << dzCorrPhi << std::endl;
    }
    else {
        // endcap
        if (DEBUG) std::cout << " FIRMWARE : -- Endcap " << std::endl;
        etaProp = abshwEta;

        // LUT: z0/850.
        if (inhwZ0<0){
            delta_LUT(absInhwZ0,delta);     // only takes positive values
            delta *= -1;
        }
        else{
            delta_LUT(inhwZ0,delta);
        }

        if (DEBUG) std::cout << " FIRMWARE :       delta   = " << delta << std::endl;

        // Only LUTs for
        // 1)  z0 / (850+z0)
        // 2)  z0 / (850-z0)
        // depending on sign(z0): multiply by '-1', if necessary, & choose the correct LUT!
        deta = 0;
        if (in.hwEta>0){
            dzCorrPhi = unity-delta;
            // Check z0 value, call the correct LUT!
            if (inhwZ0<0){
                delta_plus_LUT(absInhwZ0,deta);                                 // LUT: delta / (1-delta)
                deta *= -1;
            }
            else
                delta_minus_LUT(inhwZ0,deta);                                   // LUT: delta / (1-delta)
        }
        else{
            dzCorrPhi = unity+delta;
            if (inhwZ0<0){
                delta_minus_LUT(absInhwZ0,deta);                                // LUT: delta / (1+delta)
                deta *= -1;
            }
            else
                delta_plus_LUT(inhwZ0,deta);                                    // LUT: delta / (1+delta)
        }

        if (DEBUG) std::cout << " FIRMWARE :       deta      = " << deta << std::endl;

        feta_t tanhEta;
        tanh(inhwEta,tanhEta);  // handles the sign internally
        deta*=tanhEta;

        if (DEBUG) std::cout << " FIRMWARE :       deta      = " << deta << std::endl;
        if (DEBUG) std::cout << " FIRMWARE :       tanhEta   = " << tanhEta << std::endl;
        if (DEBUG) std::cout << " FIRMWARE :       dzCorrPhi = " << dzCorrPhi << std::endl;
    }


    // ** calculate the propagated eta ** //
    if (DEBUG) std::cout << " FIRMWARE : -- ETA calculation " << inhwEta + deta << std::endl;
    eta_t etaconv(ETA_CONVERSION);
    out.hwPropEta = (inhwEta + deta)*etaconv;


    // ** calculate the propagated phi ** //
    if (DEBUG) std::cout << " FIRMWARE : -- Phi calculation " << std::endl;

    invCosh(etaProp,invCoshEta_Phi);            // LUT: 1/cosh(x)

    // Include two constants used in calculation (1.464*cosh(1.7))
    tmp_A *= inhwInvPt;       // 1.464 * 1/pT
    tmp_B *= dzCorrPhi;       // cosh(1.7) * dzCorrPhi
    fphi_t tmp_val4   = tmp_A * tmp_B * invCoshEta_Phi;
    fphi_t outPropPhi = inhwPhi - tmp_val4 - M_PI_144;

    out.hwPropPhi = outPropPhi*PHI_CONVERSION;

    // Print results to screen for debugging
    if (DEBUG) std::cout << " FIRMWARE :    invCoshEta = " << invCoshEta_Phi << std::endl;
    if (DEBUG) std::cout << " FIRMWARE :    1.464/pT   = " << tmp_A << std::endl;
    if (DEBUG) std::cout << " FIRMWARE :    cosh(1.7)*dzcorrphi = " << tmp_B << std::endl;
    if (DEBUG) std::cout << " FIRMWARE :    1.464*cosh(1.7)*dzcorrphi / (pT*cosh(etaProp)) = " << tmp_val4 << std::endl;
    if (DEBUG) std::cout << " FIRMWARE : hwPropPhi     = " << outPropPhi << std::endl;

    if (DEBUG) std::cout << " FIRMWARE : in.hwPhi      = " << in.hwPhi << std::endl;
    if (DEBUG) std::cout << " FIRMWARE : out.hwPropPhi = " << out.hwPropPhi << std::endl;

    return out;
}

TkMuObj_tkmu match_hw(const PropTkObj_tkmu& inTrack, const MuObj_tkmu& inMuon)
{
  TkMuObj_tkmu outTrack;
  feta_t tkEta = inTrack.hwEta;
  fphi_t tkPhi = inTrack.hwPhi;

  feta_m muEta = inMuon.hwEta;
  fphi_m muPhi = inMuon.hwPhi;

  // dR calculation
  feta_t dR2_tk_mu = dr2_int (tkEta, tkPhi, muEta, muPhi);

  if (dR2_tk_mu < 0.01) {
    outTrack.hwPt = inTrack.hwPt;
    outTrack.hwEta = inTrack.hwEta;
    outTrack.hwPhi = inTrack.hwPhi;
    outTrack.hwQ = inTrack.hwQ;
    outTrack.VALID = inTrack.VALID and inMuon.VALID; 
    outTrack.hwBX = inTrack.hwBX;
  }
  return outTrack;
}

TrackMuonObj_tkmu match_sim(const PropTrackObj_tkmu& inTrack, const MuonObj_tkmu& inMuon)
{
  TrackMuonObj_tkmu outTrack;
  float tketa = inTrack.eta;
  float tkphi = inTrack.phi;

  float mueta = inMuon.eta;
  float muphi = inMuon.phi;

  // dR calculation
  float dR2_tk_mu = dr2_int (tketa, tkphi, mueta, muphi);

  if (dR2_tk_mu < 0.01) {
    outTrack.pt = inTrack.pt;
    outTrack.eta = inTrack.eta;
    outTrack.phi = inTrack.phi;
    outTrack.q = inTrack.q;
    outTrack.VALID = inTrack.VALID and inMuon.VALID; 
    outTrack.BX = inTrack.BX;
  }
  return outTrack;
}

// THE END
