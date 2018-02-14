// *************************************************
//       TanH Activation
// Implemented following:
//  https://github.com/Xilinx/RFNoC-HLS-NeuralNet/blob/master/rfnoc/hls/nnet_lib/nnet_activation.h#L111-L153
//  -- remove references to NN layers
//  -- Make the range for tanh (0,4) [antisymmetric function]
//     -- Use +/- in the function call below
// *************************************************
#ifndef TK_MU_SIMPLE_H
#define TK_MU_SIMPLE_H

#include "ap_fixed.h"
#include "ap_int.h"
#include <stdlib.h>

#define DEBUG 0

typedef ap_int<15> invpt_t;  // inverse pt [1% at 100 GeV] -- 32768
typedef ap_int<12> pt_t;
typedef ap_int<12> eta_t;    // eta [sinh(eta) measure to 0.005] -- 2048 (signed)
typedef ap_int<17> phi_t;    // phi (50 micro-rad) -- 65536 (signed)
typedef ap_int<10> chisq_t;  // chi^2 (0 - 100; 0.1 steps) -- 1024 (each bit is ~0.1)
typedef ap_int<1> q_t;       // charge
//typedef ap_int<12> z0_t;   // z0  (1 mm over +/-14.9 cm) -- 2048 (signed) (same as eta_t)

typedef ap_fixed<15,1> finvpt_t;  // inverse pt [1% at 100 GeV] -- 32768
typedef ap_fixed<12,9> fpt_t;
typedef ap_fixed<12,4> feta_t;    // eta [sinh(eta) measure to 0.005] -- 4096 
typedef ap_fixed<17,3> fphi_t;    // phi (50 micro-rad) -- 131072 
typedef ap_fixed<10,7> fchisq_t;  // chi^2 (0 - 100; 0.1 steps) -- 1024 (each bit is ~0.1)
typedef ap_fixed<12,5> fz0_t;     // z0  (1 mm over +/-14.9 cm) -- 4096 (1 cm = 273) (same as eta_t)



// size of the LUTs
// 12-bit signed = 11-bit signed -> 2048
#define ETA_TABLE_SIZE 2048
#define Z0_TABLE_SIZE 2048

#define ETA_RANGE 3
#define COSH_RANGE 3
#define Z0_RANGE 15

#define ETA_CONVERSION 200
#define PHI_CONVERSION 20000
#define INVETA_CONVERSION 5E-3
#define INVPHI_CONVERSION 5E-5

// -- Define structs for physics objects in software
struct TrackObj_tkmu {
    float pt;
    float eta;
    float phi;
    float z0;
    int q;
};

struct PropTrackObj_tkmu : TrackObj_tkmu {
    float propEta;
    float propPhi;
};

// -- Define structs for physics objects in hardware
struct TkObj_tkmu {
    invpt_t hwInvPt;
    pt_t hwPt;
    eta_t hwEta;
    phi_t hwPhi;
    eta_t hwZ0;  // same precision at eta_t
    q_t hwQ;
    chisq_t hwX2;
};

struct PropTkObj_tkmu : TkObj_tkmu {
    eta_t hwPropEta;
    phi_t hwPropPhi;
};



// reference and hardware functions
void tkmu_simple_ref( const TrackObj_tkmu& in, PropTrackObj_tkmu& out );
void tkmu_simple_hw(  const TkObj_tkmu& in, PropTkObj_tkmu& out );


///////////////////////////
//         2D LUTs       //
///////////////////////////

// z0/550/cosh(eta)
///////////////////////////
template<class res_T, int N_TABLE>
void init_deta_cosh_table(res_T table_out[N_TABLE][N_TABLE]){
    /* Define 2D LUT: z0/550/cosh(eta) */
    for (int ii=0; ii<N_TABLE; ii++){
        float z0 = (Z0_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);
        for (int jj=0;jj<N_TABLE; jj++){

            float eta = (ETA_RANGE)*((N_TABLE-1)-jj)/float(N_TABLE);
            float numerator   = z0 / 550.;
            float denominator = cosh(eta);

            res_T real_val    = numerator/denominator;
            table_out[ii][jj] = real_val;
        }
    }
    return;
}

template<class data_T, class res_T, int TABLE_SIZE/*=1024*/>
void deta_cosh_LUT(const data_T& data_z0, const data_T& data_eta, res_T& res){
    /* Initialize LUT and return value from table */
    res_T deta_cosh_table[TABLE_SIZE][TABLE_SIZE];
    init_deta_cosh_table<res_T>(deta_cosh_table);

    #pragma HLS PIPELINE

    data_T z0_index(data_z0);
    data_T eta_index(data_eta);

    // boundary checks
    if (data_z0<0) z0_index = 0;
    else if (data_z0>Z0_TABLE_SIZE-1) z0_index = Z0_TABLE_SIZE-1;

    if (data_eta<0) eta_index = 0;
    else if (data_eta>ETA_TABLE_SIZE-1) eta_index = ETA_TABLE_SIZE-1;

    res = deta_cosh_table[z0_index][eta_index];

    return;
}

template<class data_T, class res_T>
void deta_cosh_LUT(const data_T& data_z0, const data_T& data_eta, res_T& res){
    /* Gateway to 2D LUT */
    res = 0;
    data_T tmp_data_z0;
    data_T tmp_data_eta;

    if (data_z0 < 0) tmp_data_z0  = -1*data_z0;
    else tmp_data_z0 = data_z0;
    if (data_eta< 0) tmp_data_eta = -1*data_eta;
    else tmp_data_eta = data_eta;

    deta_cosh_LUT<data_T, res_T, ETA_TABLE_SIZE>(tmp_data_z0, tmp_data_eta, res);

    if (data_z0 < 0) res *= -1;

    return;
}

// tanh(eta)*z0 / (z0+850)
///////////////////////////
template<class data_T, int N_TABLE>
void init_deta_tanh_delta_plus_LUT( data_T table_out[N_TABLE][N_TABLE]){
    /* Define 2D LUT: tanh(eta)*z0 / (z0+850) */
    for (int ii=0; ii<N_TABLE; ii++){
        float z0 = (Z0_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);
        for (int jj=0; jj<N_TABLE; jj++){

            float eta = (ETA_RANGE)*((N_TABLE-1)-jj)/float(N_TABLE);
            float numerator   = tanh(eta)*z0;
            float denominator = 850. + z0;

            data_T real_val   = numerator/denominator;
            table_out[ii][jj] = real_val;
        }
    }
    return;
}

template<class data_T, class res_T, int TABLE_SIZE>
void deta_tanh_delta_plus_LUT( const data_T& data_z0, const data_T& data_eta, res_T &res ){
    /* Initialize LUT and return value from table */
    res_T deta_tanh_delta_plus_table[TABLE_SIZE][TABLE_SIZE];
    init_deta_tanh_delta_plus_LUT<res_T,TABLE_SIZE>(deta_tanh_delta_plus_table);

    #pragma HLS PIPELINE

    // Add boundary checks later
    data_T z0_index;
    data_T eta_index;

    // Boundary checks
    if (data_z0<0) z0_index = 0;
    else if (data_z0>TABLE_SIZE-1) z0_index = TABLE_SIZE-1;
    else z0_index = data_z0;

    if (data_eta<0) eta_index = 0;
    else if (data_eta>TABLE_SIZE-1) eta_index = TABLE_SIZE-1;
    else eta_index = data_eta;

    res = deta_tanh_delta_plus_table[z0_index][eta_index];

    return;
}

template<class data_T, class res_T>
void deta_tanh_delta_plus_LUT( const data_T& data_z0, const data_T& data_eta, res_T &res ){
    /* Gateway to 2D LUT */
    res=0;
    data_T tmp_data_z0;
    data_T tmp_data_eta;

    if (data_z0<0)  tmp_data_z0  = -1*data_z0;
    if (data_eta<0) tmp_data_eta = -1*data_eta;

    deta_tanh_delta_plus_LUT<data_T,res_T,ETA_TABLE_SIZE>( tmp_data_z0,tmp_data_eta,res );

    if (data_z0<0) res = -1*res;
    if (data_eta<0) res = -1*res;

    return;
}


// tanh(eta)*z0 / (z0-850)
///////////////////////////
template<class data_T, int N_TABLE>
void init_deta_tanh_delta_minus_LUT( data_T table_out[N_TABLE][N_TABLE]){
    /* Define 2D LUT: tanh(eta)*z0 / (z0+850) */
    for (int ii=0; ii<N_TABLE; ii++){
        float z0 = (Z0_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);
        for (int jj=0; jj<N_TABLE; jj++){

            float eta = (ETA_RANGE)*((N_TABLE-1)-jj)/float(N_TABLE);
            float numerator   = tanh(eta)*z0;
            float denominator = 850. - z0;

            data_T real_val   = round( (numerator/denominator)*ETA_CONVERSION );
            table_out[ii][jj] = real_val;
        }
    }
    return;
}

template<class data_T, class res_T, int TABLE_SIZE>
void deta_tanh_delta_minus_LUT( const data_T& data_z0, const data_T& data_eta, res_T &res ){
    /* Initialize LUT and return value from table */
    res_T deta_tanh_delta_minus_table[TABLE_SIZE][TABLE_SIZE];
    init_deta_tanh_delta_minus_LUT<res_T,TABLE_SIZE>(deta_tanh_delta_minus_table);

    #pragma HLS PIPELINE

    // Add boundary checks later
    data_T z0_index;
    data_T eta_index;

    // Boundary checks
    if (data_z0<0) z0_index = 0;
    else if (data_z0>TABLE_SIZE-1) z0_index = TABLE_SIZE-1;
    else z0_index = data_z0;

    if (data_eta<0) eta_index = 0;
    else if (data_eta>TABLE_SIZE-1) eta_index = TABLE_SIZE-1;
    else eta_index = data_eta;

    res = deta_tanh_delta_minus_table[z0_index][eta_index];

    return;
}

template<class data_T, class res_T>
void deta_tanh_delta_minus_LUT( const data_T& data_z0, const data_T& data_eta, res_T &res ){
    /* Gateway to 2D LUT */
    res=0;
    data_T tmp_data_z0;
    data_T tmp_data_eta;

    if (data_z0<0)  tmp_data_z0  = -1*data_z0;
    if (data_eta<0) tmp_data_eta = -1*data_eta;

    deta_tanh_delta_minus_LUT<data_T,res_T,ETA_TABLE_SIZE>( tmp_data_z0,tmp_data_eta,res );

    if (data_z0<0) res = -1*res;
    if (data_eta<0) res = -1*res;

    return;
}



///////////////////////////
//         1D LUTs       //
///////////////////////////


///////////////////////////
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
    if (data < 0) res = deta_table[0];
    else if (data > Z0_RANGE) res = deta_table[TABLE_SIZE-1];
    else res = deta_table[data];

    return;
}

template<class data_T, class res_T>
void deta_LUT(data_T &data, res_T &res) { 
    /* Gateway to deta_LUT (z0/550) : checks boundaries */
    res = 0;
    if (data < 0) {
        data_T tmp_data = -1*data;
        deta_LUT<data_T, res_T, Z0_TABLE_SIZE>(tmp_data, res);
        res  *= -1;
    }
    else{
        deta_LUT<data_T, res_T, Z0_TABLE_SIZE>(data, res); 
    }

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
        if (DEBUG) std::cout << "delta_minus_LUT:  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
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
    if (data < 0) res = delta_minus_table[0];
    else if (data > Z0_RANGE) res = delta_minus_table[TABLE_SIZE-1];
    else res = delta_minus_table[data];

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
        if (DEBUG) std::cout << "delta_plus_LUT:  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
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
    if (data < 0) res = delta_plus_table[0];
    else if (data > Z0_RANGE) res = delta_plus_table[TABLE_SIZE-1];
    else res = delta_plus_table[data];

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
        if (DEBUG) std::cout << "delta_LUT:  Lookup table Index " <<  ii << ": In Value = " << in_val << "; Result = " << real_val << std::endl;
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
    if (data < 0) res = delta_table[0];
    else if (data > Z0_RANGE) res = delta_table[TABLE_SIZE-1];
    else res = delta_table[data];

    return;
}

template<class data_T, class res_T>
void delta_LUT(data_T &data, res_T &res) { 
    /* Gateway to delta_LUT (z0/850) : checks boundaries */
    res = 0;
    if (data < 0) {
        data_T tmp_data = -1*data;
        delta_LUT<data_T, res_T, Z0_TABLE_SIZE>(tmp_data, res);
        res  *= -1;
    }
    else{
        delta_LUT<data_T, res_T, Z0_TABLE_SIZE>(data, res); 
    }

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

    if (data<0) res = tanh_table[0];
    else if (data>TABLE_SIZE-1) res = tanh_table[TABLE_SIZE-1];
    else res = tanh_table[data];

    return;
}

// Gateway to calling tanh(x)
template<class data_T, class res_T>
void tanh(data_T &data, res_T &res) { 
    /* Get the tanh value from the LUT -- symmetric function */
    res = 0;
    if (data < 0) {
        data_T tmp_data = -1*data;
        tanh<data_T, res_T, ETA_TABLE_SIZE>(tmp_data, res);
        res  *= -1;
    }
    else{
        tanh<data_T, res_T, ETA_TABLE_SIZE>(data, res); 
    }

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

    if (data<0) res = cosh_table[0];
    else if (data>TABLE_SIZE-1) res = cosh_table[TABLE_SIZE-1];
    else res = cosh_table[data];

    return;
}

template<class data_T, class res_T>
void invCosh(data_T &data, res_T &res) { 
    /* Get the tanh value from the LUT -- symmetric function */
    // should only get positive values!
    res = 0;
    if (data>=0) invCosh<data_T, res_T, ETA_TABLE_SIZE>(data, res); 

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
        float in_val = (ETA_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);

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

    if (data<0) res = arcsinh_table[0];
    else if (data>TABLE_SIZE-1) res = arcsinh_table[TABLE_SIZE-1];
    else res = arcsinh_table[data];

    return;
}

// Gateway to calling arcsinh(x)
template<class data_T, class res_T>
void arcsinh(data_T &data, res_T &res) { 
    /* Get the arcsinh value from the LUT -- anti-symmetric function */
    res = 0;
    if (data < 0) {
        data_T tmp_data = -1*data;
        arcsinh<data_T, res_T, ETA_TABLE_SIZE>(tmp_data, res);
        res  *= -1;
    }
    else{
        arcsinh<data_T, res_T, ETA_TABLE_SIZE>(data, res); 
    }

    return;
}

#endif
