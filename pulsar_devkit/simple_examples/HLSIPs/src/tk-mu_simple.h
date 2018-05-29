/*
// *************************************************
//       TanH Activation
// Implemented following:
//  https://github.com/Xilinx/RFNoC-HLS-NeuralNet/blob/master/rfnoc/hls/nnet_lib/nnet_activation.h#L111-L153
//  -- remove references to NN layers
//  -- Make the range for tanh (0,4) [antisymmetric function]
//     -- Use +/- in the function call below
// *************************************************

Update bit values for FPGA outputs 
Twiki page:     https://twiki.cern.ch/twiki/bin/viewauth/CMS/L1TriggerPhase2InterfaceSpecifications
FPGA reference: https://indico.cern.ch/event/696147/contributions/2855708/
                        attachments/1606757/2550062/TAMUHardware_SvenDildick_20180226.pdf

if z0<0: z0 += 1024 then multiply by INVZ_CONVERSION
if sinhEta<0: sinhEta+=8192 then multiply by INVETA_CONVERSION
if rinv<0: rinv+=16384 then multiply by INVRINV_CONVERSION
*/
#ifndef TK_MU_SIMPLE_H
#define TK_MU_SIMPLE_H

#include "ap_fixed.h"
#include "ap_int.h"
#include <stdlib.h>

#define DEBUG 0

typedef ap_int<15> invpt_t;  // inverse pt [1% at 100 GeV]
typedef ap_int<12> pt_t;     // convert from RINV
typedef ap_int<14> eta_t;    // eta [sinh(eta) measure to 0.005]
typedef ap_int<19> phi_t;    // phi (50 micro-rad)
typedef ap_int<10> chisq_t;  // chi^2 (0 - 100; 0.1 steps)
typedef ap_int<1> q_t;       // charge
typedef ap_int<11> z0_t;     // z0  (1 mm over +/-14.9 cm)
typedef ap_int<3> bx_t;     // z0  (1 mm over +/-14.9 cm)
typedef ap_int<4> sector_t;     // 9 phi sectors --> 4 bits  
typedef ap_int<2> subsector_t;     // 3 phi subsectors --> 2 bits  

// before the decimal point, after the decimal point
typedef ap_fixed<15,2> finvpt_t;  // inverse pt [1% at 100 GeV]
typedef ap_fixed<12,9> fpt_t;     // 1/Rinv
typedef ap_fixed<14,4> feta_t;    // eta [sinh(eta) measure to 0.005]
typedef ap_fixed<19,3> fphi_t;    // phi (50 micro-rad)
typedef ap_fixed<10,7> fchisq_t;  // chi^2 (0 - 100; 0.1 steps) 
typedef ap_fixed<11,5> fz0_t;     // z0  (1 mm over +/-14.9 cm) 

typedef ap_fixed<10,4> feta_m;    // eta [sinh(eta) measure to 0.005]
typedef ap_fixed<9,3> fphi_m;    // phi (50 micro-rad)

// muon data
typedef ap_int<9> pt_m;
typedef ap_int<10> eta_m;
typedef ap_int<9> phi_m;
typedef ap_int<4> quality_m;

// size of the LUTs
#define ETA_TABLE_SIZE 8192  // 13 unsigned bits
#define Z0_TABLE_SIZE 1024   // 10 unsigned bits

// range for LUTs
#define SINHETA_RANGE 6
#define ETA_RANGE 3
#define COSH_RANGE 3
#define Z0_RANGE 15
#define INV_SINHETA_RANGE 1/SINHETA_RANGE
#define INV_ETA_RANGE 1/ETA_RANGE
#define INV_COSH_RANGE 1/COSH_RANGE
#define INV_Z0_RANGE 1/Z0_RANGE

// Conversions between binary and floating point (using example file to derive)
#define RINV_CONVERSION 1314233             // 1/(76090E-11)
#define PT_CONVERSION 87719298E-6           // 1/(0.01*0.3*3.8); 87719298E-6
#define ETA_CONVERSION 855                  // 1/0.0011698 = 854.84698
#define PHI_CONVERSION 219037
#define Z_CONVERSION 18                     // 1/0.05615 = 17.81
#define INVRINV_CONVERSION 76090E-11
#define INVETA_CONVERSION 11698E-7
#define INVPHI_CONVERSION 456544E-11        // compare floating point and bit values from example file
#define INVZ_CONVERSION 5615E-5             // 0.05615 -- shift of 1024 for negative values!


// -- Define structs for physics objects in software
struct TrackObj_tkmu {
  float rinv;
  float pt;
  float sinheta;
  float eta;
  float phi;
  float z0;
  int q;
  int VALID;
  int BX;
  int sector;
  int subsector;
  // constructor
  TrackObj_tkmu() :
    rinv(0),
    pt(0),
    sinheta(0),
    eta(0),
    phi(0),
    z0(0),
    q(0),
    VALID(0),
    BX(0),
    sector(0),
    subsector(0)
  {
  }
};

struct MuonObj_tkmu {
  float pt;
  float eta;
  float phi;
  int q;
  int VALID;
  int BX;
  // constructor
  MuonObj_tkmu() : 
    pt(0),
    eta(0),
    phi(0),
    q(0),
    VALID(0),
    BX(0)
  {
  }
};

struct TrackMuonObj_tkmu 
{
  float pt;
  float eta;
  float phi;
  int q;
  int VALID;   // VALID bit
  int BX;    // bunch crossing
  // constructor
  TrackMuonObj_tkmu() : 
    pt(0),
    eta(0),
    phi(0),
    q(0),
    VALID(0),
    BX(0)
  {
  }
};


struct PropTrackObj_tkmu : public TrackObj_tkmu {
  float propEta;
  float propPhi;
  // constructor
  PropTrackObj_tkmu() : 
    TrackObj_tkmu(),
    propEta(0),
    propPhi(0)
  {
  }
};

// -- Define structs for physics objects in hardware
struct TkObj_tkmu {
    invpt_t hwRinv;
    pt_t hwPt;
    eta_t hwSinhEta;
    eta_t hwEta;
    phi_t hwPhi;
    z0_t hwZ0;  // same precision at eta_t (Accoring to Dan: z0 precision needed to get precision on eta, which derives from z0)
    // test precision of z0 11 to 14 
    q_t hwQ;
    chisq_t hwX2;
    q_t VALID;   // VALID bit
    bx_t hwBX;    // bunch crossing 3-bit counter
    sector_t hwSector;
    subsector_t hwSubsector;
  // constructor
  TkObj_tkmu() : 
    hwRinv(0),
    hwPt(0),
    hwSinhEta(0),  
    hwEta(0),
    hwPhi(0),
    hwZ0(0),
    hwQ(0),
    hwX2(0),
    VALID(0),
    hwBX(0),
    hwSector(0),
    hwSubsector(0)
  {
  }
};

struct PropTkObj_tkmu : public TkObj_tkmu {
    eta_t hwPropEta;
    phi_t hwPropPhi;
  // constructor
  PropTkObj_tkmu() : 
    TkObj_tkmu(),
    hwPropEta(0),
    hwPropPhi(0)
  {
  }
};

struct MuObj_tkmu {
    pt_t hwPt;
    eta_t hwEta;
    phi_t hwPhi;
    q_t hwQ;
    q_t VALID;   // VALID bit
    bx_t hwBX;    // bunch crossing
  // constructor
  MuObj_tkmu() : 
    hwPt(0),
    hwEta(0),
    hwPhi(0),
    hwQ(0),
    VALID(0),
    hwBX(0)
  {
  }
};

struct TkMuObj_tkmu {
    pt_t hwPt;
    eta_m hwEta;
    phi_m hwPhi;
    q_t hwQ;
    q_t VALID;   // VALID bit
    bx_t hwBX;    // bunch crossing
  // constructor
  TkMuObj_tkmu() : 
    hwPt(0),
    hwEta(0),
    hwPhi(0),
    hwQ(0),
    VALID(0),
    hwBX(0)
  {
  }
};



namespace {

std::ostream& operator << (std::ostream& os, const PropTrackObj_tkmu& rhs)
{
    os << rhs.pt << " " 
       << rhs.eta << " "
       << rhs.phi << " " 
       << rhs.propEta << " " 
       << rhs.propPhi << " "
       << rhs.q << " ";
    return os;
}

std::ostream& operator << (std::ostream& os, const MuonObj_tkmu& rhs)
{
    os << rhs.pt << " " 
       << rhs.eta << " "
       << rhs.phi << " " 
       << rhs.q << " ";
    return os;
}

std::ostream& operator << (std::ostream& os, const TrackMuonObj_tkmu& rhs)
{
    os << rhs.pt << " " 
       << rhs.eta << " "
       << rhs.phi << " " 
       << rhs.q << " ";
    return os;
}

}


inline void clear(TkObj_tkmu & c) {
    c.hwRinv  = 0; 
    c.hwPhi = 0; 
    c.hwEta = 0; 
    c.hwSinhEta = 0; 
    c.hwPt  = 0;
    c.hwZ0  = 0;
    c.hwQ   = 0;
    c.hwX2  = 0;
    c.VALID = 0;
    c.hwBX = 0;
}
inline void init(PropTkObj_tkmu & p, const TkObj_tkmu & i){
    p.hwRinv  = i.hwRinv; 
    p.hwPt  = i.hwPt;
    p.hwEta = i.hwEta; 
    p.hwPhi = i.hwPhi; 
    p.hwSinhEta = i.hwSinhEta; 
    p.hwZ0  = i.hwZ0;
    p.hwQ   = i.hwQ;
    p.hwX2  = i.hwX2;
    p.VALID = i.VALID;
    p.hwBX = i.hwBX;
}
inline void clearProp(PropTkObj_tkmu & c) {
    clear(c);
    c.hwPropEta = 0; 
    c.hwPropPhi = 0; 
}


// reference and hardware functions
PropTrackObj_tkmu tkmu_simple_ref( const TrackObj_tkmu& in );
PropTkObj_tkmu tkmu_simple_hw(  TkObj_tkmu& in );
TkMuObj_tkmu match_hw(const PropTkObj_tkmu&, const MuObj_tkmu&);
TrackMuonObj_tkmu match_sw(const PropTrackObj_tkmu&, const MuonObj_tkmu&);



template<class data_T, int N_TABLE>
void init_deta_table(data_T table_out[N_TABLE]){
    /* deta_LUT  = track.hwZ0 * (1/550)*/
    for (int ii = 0; ii < N_TABLE; ii++) {
        float in_val = (Z0_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);

        // Next, compute lookup table 
        data_T real_val = in_val/550.;  // convert to proper type
        if (DEBUG) std::cout << "deta_LUT:  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }

    return;
}

template<class data_T, class res_T, int TABLE_SIZE>
void deta_LUT(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T deta_table[TABLE_SIZE];
    init_deta_table<res_T,TABLE_SIZE>(deta_table);

    #pragma HLS PIPELINE
    res = 0;

    // convert input to index
    int index = TABLE_SIZE - data * TABLE_SIZE * INV_Z0_RANGE;

    if (index<0) res = deta_table[0];
    else if (index>TABLE_SIZE-1) res = deta_table[TABLE_SIZE-1];
    else res = deta_table[index];

    return;
}

template<class data_T, class res_T>
void deta_LUT(data_T &data, res_T &res) { 
    /* Gateway to deta_LUT (z0/550) : checks boundaries */
    res = 0;
    deta_LUT<data_T, res_T, Z0_TABLE_SIZE>(data, res); 

    return;
}


///////////////////////////
///////////////////////////
template<class data_T, int N_TABLE>
void init_delta_minus_LUT(data_T table_out[N_TABLE]){
    /* delta_minus_LUT  z0 / (z0-850) */
    for (int ii = 0; ii < N_TABLE; ii++) {
        float in_val = (Z0_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);

        // Next, compute lookup table 
        float numerator   = in_val;    // just repeat the calculation from delta_LUT
        float denominator = 850. - in_val;
        data_T real_val   = numerator/denominator; // convert to proper type
        if (DEBUG) std::cout << "delta_minus_LUT (z0/(850-z0)):  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T, int TABLE_SIZE>
void delta_minus_LUT(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T delta_minus_table[TABLE_SIZE];
    init_delta_minus_LUT<res_T,TABLE_SIZE>(delta_minus_table);

    #pragma HLS PIPELINE

    res = 0;

    // convert input to index
    int index = TABLE_SIZE - data * TABLE_SIZE * INV_Z0_RANGE;

    if (index<0) res = delta_minus_table[0];
    else if (index>TABLE_SIZE-1) res = delta_minus_table[TABLE_SIZE-1];
    else res = delta_minus_table[index];

    return;
}

template<class data_T, class res_T>
void delta_minus_LUT(data_T &data, res_T &res) { 
    /* Gateway to delta_minus_LUT (z0/(850-z0)) */
    res = 0;
    delta_minus_LUT<data_T, res_T, Z0_TABLE_SIZE>(data, res); 

    return;
}



///////////////////////////
template<class data_T, int N_TABLE>
void init_delta_plus_LUT(data_T table_out[N_TABLE]){
    /* delta_plus_LUT  z0 / (z0+850) */
    for (int ii = 0; ii < N_TABLE; ii++) {
        float in_val = (Z0_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);

        // Next, compute lookup table 
        float numerator   = in_val;    // just repeat the calculation from delta_LUT
        float denominator = 850. + in_val;
        data_T real_val    = numerator/denominator; // convert to proper type
        if (DEBUG) std::cout << "delta_plus_LUT (z0/(850+z0)):  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T, int TABLE_SIZE>
void delta_plus_LUT(data_T &data, res_T &res) {
    /* Initialize the lookup table */
    res_T delta_plus_table[TABLE_SIZE];
    init_delta_plus_LUT<res_T,TABLE_SIZE>(delta_plus_table);

    #pragma HLS PIPELINE

    res = 0;

    // convert input to index
    int index = TABLE_SIZE - data * TABLE_SIZE * INV_Z0_RANGE;

    if (index<0) res = delta_plus_table[0];
    else if (index>TABLE_SIZE-1) res = delta_plus_table[TABLE_SIZE-1];
    else res = delta_plus_table[index];

    return;
}

template<class data_T, class res_T>
void delta_plus_LUT(data_T &data, res_T &res) { 
    /* Gateway to delta_plus_LUT (z0/(850+z0)) */
    res = 0;
    delta_plus_LUT<data_T, res_T, Z0_TABLE_SIZE>(data, res); 

    return;
}


///////////////////////////
template<class data_T, int N_TABLE>
void init_delta_LUT(data_T table_out[N_TABLE]){
    /* delta_LUT  = track.hwZ0 / 850 */
    for (int ii = 0; ii < N_TABLE; ii++) {
        float in_val = (Z0_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);

        // Next, compute lookup table 
        data_T real_val = in_val/850.;  // convert to proper type
        if (DEBUG) std::cout << "delta_LUT (z0/850):  Lookup table Index " <<  ii << ": In Value = " << in_val << "; Result = " << real_val << std::endl;
        table_out[ii] = real_val;
    }

    return;
}

template<class data_T, class res_T, int TABLE_SIZE>
void delta_LUT(data_T &data, res_T &res) {
    /* Initialize the LUT */
    res_T delta_table[TABLE_SIZE];
    init_delta_LUT<res_T,TABLE_SIZE>(delta_table);

    #pragma HLS PIPELINE

    res = 0;

    // convert input to index
    int index = TABLE_SIZE - data * TABLE_SIZE * INV_Z0_RANGE;

    if (index<0) res = delta_table[0];
    else if (index>TABLE_SIZE-1) res = delta_table[TABLE_SIZE-1];
    else res = delta_table[index];

    return;
}

template<class data_T, class res_T>
void delta_LUT(data_T &data, res_T &res) { 
    /* Gateway to delta_LUT (z0/850) : checks boundaries */
    res = 0;
    delta_LUT<data_T, res_T, Z0_TABLE_SIZE>(data, res); 

    return;
}


///////////////////////////
// -- TANH FUNCTION 
template<class data_T, int N_TABLE>
void init_tanh_table(data_T table_out[N_TABLE]) {
    /* Implement tanh lookup */
    for (int ii = 0; ii < N_TABLE; ii++) {
        // Convert from table index to X-value (unsigned 4-bit, range 0 to +4)
        float in_val = (ETA_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);

        // Next, compute lookup table function
        data_T real_val = tanh(in_val);
        if (DEBUG) std::cout << "Tanh:  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }

    return;
}

template<class data_T, class res_T, int TABLE_SIZE/*=1024*/>
void tanh(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T tanh_table[TABLE_SIZE];
    init_tanh_table<res_T, TABLE_SIZE>(tanh_table);

    #pragma HLS PIPELINE

    // convert input to index
    int index = TABLE_SIZE - data * TABLE_SIZE * INV_ETA_RANGE;

    if (index<0) res = tanh_table[0];
    else if (index>TABLE_SIZE-1) res = tanh_table[TABLE_SIZE-1];
    else res = tanh_table[index];

    return;
}

// Gateway to calling tanh(x)
template<class data_T, class res_T>
void tanh(data_T &data, res_T &res) { 
    /* Get the tanh value from the LUT -- symmetric function */
    res = 0;
    tanh<data_T, res_T, ETA_TABLE_SIZE>(data, res); 

    return;
}


///////////////////////////
// -- 1/cosh(x) LUT (follow tanh example)
template<class data_T, int N_TABLE>
void init_cosh_table(data_T table_out[N_TABLE]) {
    /* Implement cosh lookup */
    for (int ii = 0; ii < N_TABLE; ii++) {
        // Convert from table index to X-value
        float in_val = (COSH_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);

        // Next, compute lookup table function
        data_T real_val = 1./cosh(in_val);
        if (DEBUG) std::cout << "1/cosh:  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }

    return;
}

template<class data_T, class res_T, int TABLE_SIZE/*=1024*/>
void invCosh(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T cosh_table[TABLE_SIZE];
    init_cosh_table<res_T, TABLE_SIZE>(cosh_table);

    #pragma HLS PIPELINE

    res = 0;

    // convert input to index
    int index = TABLE_SIZE - data * TABLE_SIZE * INV_COSH_RANGE;

    if (index<0) res = cosh_table[0];
    else if (index>TABLE_SIZE-1) res = cosh_table[TABLE_SIZE-1];
    else res = cosh_table[index];

    return;
}

template<class data_T, class res_T>
void invCosh(data_T &data, res_T &res) { 
    /* Get the tanh value from the LUT -- symmetric function */
    // should only get positive values!
    res = 0;
    invCosh<data_T, res_T, ETA_TABLE_SIZE>(data, res); 

    return;
}


///////////////////////////
// -- ARCSINH FUNCTION 
//    Tracker provides sinh(eta) and we need eta!
//    http://mathworld.wolfram.com/InverseHyperbolicSine.html
template<class data_T, int N_TABLE>
void init_arcsinh_table(data_T table_out[N_TABLE]) {
    /* Implement arcsinh lookup */
    for (int ii = 0; ii < N_TABLE; ii++) {
        // Convert from table index to X-value (unsigned 4-bit, range 0 to +4)
        float in_val = (SINHETA_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);

        // Next, compute lookup table function
        data_T real_val = log(in_val + sqrt(1+pow(in_val,2)));
        if (DEBUG) std::cout << "Arcsinh:  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }

    return;
}

template<class data_T, class res_T, int TABLE_SIZE/*=1024*/>
void arcsinh(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T arcsinh_table[TABLE_SIZE];
    init_arcsinh_table<res_T, TABLE_SIZE>(arcsinh_table);

    #pragma HLS PIPELINE

    res = 0;

    // convert input to index
    int index = TABLE_SIZE - data * TABLE_SIZE * INV_SINHETA_RANGE;

    if (index<0) res = arcsinh_table[0];
    else if (index>TABLE_SIZE-1) res = arcsinh_table[TABLE_SIZE-1];
    else res = arcsinh_table[index];

    return;
}

// Gateway to calling arcsinh(x)
template<class data_T, class res_T>
void arcsinh(data_T &data, res_T &res) { 
    /* Get the arcsinh value from the LUT -- anti-symmetric function */
    res = 0;
    arcsinh<data_T, res_T, ETA_TABLE_SIZE>(data, res); 

    return;
}

// delta R matching
// choose eta precision of the muon as the dR precision of the match
template<class data_T, class data_S, class data_U, class data_V>
data_S dr2_int(data_T eta1, data_S phi1, data_U eta2, data_V phi2) {
  // eta1, phi1: track properties
  // eta2, phi2: muon properties
  data_T deta = (eta1-eta2);
  data_S dphi = (phi1-phi2);
  return deta*deta + dphi*dphi;
}

#endif
