#ifndef TK_MU_SIMPLE_H
#define TK_MU_SIMPLE_H

#include "ap_fixed.h"
#include "ap_int.h"
#include <stdlib.h>



typedef ap_int<15> invpt_t;  // inverse pt [1% at 100 GeV] -- 32768
typedef ap_int<12> pt_t;
typedef ap_int<12> eta_t;    // eta [sinh(eta) measure to 0.005] -- 4096 (each bit is 0.005)
typedef ap_int<17> phi_t;    // phi (50 micro-rad) -- 131072 (each bit is 50E-6rad)
typedef ap_int<10> chisq_t;  // chi^2 (0 - 100; 0.1 steps) -- 1024 (each bit is ~0.1)
typedef ap_int<2> q_t;       // charge
//typedef ap_int<12> z0_t;   // z0  (1 mm over +/-14.9 cm) -- 4096 (1 cm = 273) (same as eta_t)


// size of the LUTs
// 12-bit signed = 11-bit signed -> 2048
#define N_TABLE_SIZE 2048
#define Z0_TABLE_SIZE 2048

#define TANH_RANGE 3
#define COSH_RANGE 3
#define Z0_RANGE 15

#define ETA_CONVERSION 200
#define PHI_CONVERSION 20000

// Define structs for physics objects in software
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


// Define structs for physics objects in hardware
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





// 1/cosh(x) LUT (follow tanh example)
template<class data_T, int N_TABLE>
void init_cosh_table(data_T table_out[N_TABLE]) {
    /* Implement cosh lookup */
    for (int ii = 0; ii < N_TABLE; ii++) {
        // Convert from table index to X-value
        float in_val = (COSH_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);

        // Next, compute lookup table function
        data_T real_val = round( (1./cosh(in_val))*ETA_CONVERSION );
        //std::cout << "1/cosh:  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }

    return;
}


template<class data_T, class res_T, int TABLE_SIZE/*=1024*/>
void invCosh(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T cosh_table[TABLE_SIZE];
    init_cosh_table<res_T, TABLE_SIZE>(cosh_table);

    // Index into the lookup table based on data

    #pragma HLS PIPELINE

//    int index;
//    index = (1-data/(COSH_RANGE*ETA_CONVERSION))*TABLE_SIZE;
//    if (index < 0) index = 0;
//    else if (index > TABLE_SIZE-1) index = TABLE_SIZE-1;

    if (data<0) res = cosh_table[0];
    else if (data>TABLE_SIZE-1) res = cosh_table[TABLE_SIZE-1];
    else res = cosh_table[data];

    return;
}


// Default table size provided here:
template<class data_T, class res_T>
void invCosh(data_T &data, res_T &res) { 
    /* Get the tanh value from the LUT -- symmetric function */
    // should only get positive values!
    if (data < 0) res = 0;
    else invCosh<data_T, res_T, N_TABLE_SIZE>(data, res); 

    return;
}




// *************************************************
//       TanH Activation
// Implemented following:
//  https://github.com/Xilinx/RFNoC-HLS-NeuralNet/blob/master/rfnoc/hls/nnet_lib/nnet_activation.h#L111-L153
//  -- remove references to NN layers
//  -- Make the range for tanh (0,4) [symmetric function]
//     -- Use +/- in the function call below
// *************************************************
template<class data_T, int N_TABLE>
void init_tanh_table(data_T table_out[N_TABLE]) {
    /* Implement tanh lookup */
    for (int ii = 0; ii < N_TABLE; ii++) {
        // Convert from table index to X-value (unsigned 4-bit, range 0 to +4)
        float in_val = (TANH_RANGE)*((N_TABLE-1)-ii)/float(N_TABLE);

        // Next, compute lookup table function
        data_T real_val = round( tanh(in_val)*ETA_CONVERSION );
        //std::cout << "Tanh:  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }

    return;
}


template<class data_T, class res_T, int TABLE_SIZE/*=1024*/>
void tanh(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T tanh_table[TABLE_SIZE];
    init_tanh_table<res_T, TABLE_SIZE>(tanh_table);

    // Index into the lookup table based on data

    #pragma HLS PIPELINE

//    int index;
//    index = (1-data/(TANH_RANGE*ETA_CONVERSION))*TABLE_SIZE;
//    if (index < 0) index = 0;
//    else if (index > TABLE_SIZE-1) index = TABLE_SIZE-1;

    if (data<0) res = tanh_table[0];
    else if (data>TABLE_SIZE-1) res = tanh_table[TABLE_SIZE-1];
    else res = tanh_table[data];

    return;
}


// Gateway to calling tanh(x)
template<class data_T, class res_T>
void tanh(data_T &data, res_T &res) { 
    /* Get the tanh value from the LUT -- symmetric function */
    if (data < 0) {
        data_T tmp_data = -1*data;
        tanh<data_T, res_T, N_TABLE_SIZE>(tmp_data, res);
        res  *= -1;
    }
    else{
        tanh<data_T, res_T, N_TABLE_SIZE>(data, res); 
    }

    return;
}





// *************************************************
// Other LUTs
// *************************************************


///////////////////////////
template<class data_T>
void init_deta_table(data_T table_out[Z0_TABLE_SIZE]){
    /* deta_LUT  = track.hwZ0 * (1/550)*/
    for (int ii = 0; ii < Z0_TABLE_SIZE; ii++) {
        float in_val = (Z0_RANGE)*((Z0_TABLE_SIZE-1)-ii)/float(Z0_TABLE_SIZE);

        // Next, compute lookup table 
        data_T real_val = round( (in_val/550.)*ETA_CONVERSION );  // convert to proper type
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T>
void deta_LUT(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T deta_table[Z0_TABLE_SIZE];
    init_deta_table<res_T>(deta_table);

    // Index into the lookup table based on data
    int index;

    #pragma HLS PIPELINE

    index = (1-data/(Z0_RANGE*ETA_CONVERSION))*Z0_TABLE_SIZE;

    if (index < 0) index = 0;
    else if (index > Z0_TABLE_SIZE-1) index = Z0_TABLE_SIZE-1;

    res = deta_table[index];

    return;
}


///////////////////////////
template<class data_T>
void init_delta_table(data_T table_out[Z0_TABLE_SIZE]){
    /* delta_LUT  = track.hwZ0 * (1/850)*/
    for (int ii = 0; ii < Z0_TABLE_SIZE; ii++) {
        float in_val = (Z0_RANGE)*((Z0_TABLE_SIZE-1)-ii)/float(Z0_TABLE_SIZE);

        // Next, compute lookup table 
        data_T real_val = round( (in_val/850.)*ETA_CONVERSION );  // convert to proper type
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T>
void delta_LUT(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T delta_table[Z0_TABLE_SIZE];
    init_delta_table<res_T>(delta_table);

    // Index into the lookup table based on data
    int index;

    #pragma HLS PIPELINE

    index = (1-data/(Z0_RANGE*ETA_CONVERSION))*Z0_TABLE_SIZE;

    if (index < 0) index = 0;
    else if (index > Z0_TABLE_SIZE-1) index = Z0_TABLE_SIZE-1;

    res = delta_table[index];

    return;
}


///////////////////////////
template<class data_T>
void init_delta_plus_table(data_T table_out[Z0_TABLE_SIZE]){
    /* delta_plus_LUT  12-bit resolution  ::(4096 size) 
         -15/850 -> 15/850
    */
    for (int ii = 0; ii < Z0_TABLE_SIZE; ii++) {
        float in_val = (Z0_RANGE)*((Z0_TABLE_SIZE-1)-ii)/float(Z0_TABLE_SIZE);

        // Next, compute lookup table 
        float numerator   = in_val / 850.;    // just repeat the calculation from delta_LUT
        float denominator = 1 + numerator;
        data_T real_val    = round( (numerator/denominator)*ETA_CONVERSION ); // convert to proper type
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T>
void delta_plus_LUT(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T delta_plus_table[Z0_TABLE_SIZE];
    init_delta_plus_table<res_T>(delta_plus_table);

    // Index into the lookup table based on data
    int index;

    #pragma HLS PIPELINE

    index = (1-data/(Z0_RANGE*ETA_CONVERSION))*Z0_TABLE_SIZE;

    if (index < 0) index = 0;
    else if (index > Z0_TABLE_SIZE-1) index = Z0_TABLE_SIZE-1;

    res = delta_plus_table[index];

    return;
}


///////////////////////////
template<class data_T>
void init_delta_minus_table(data_T table_out[Z0_TABLE_SIZE]){
    /* delta_minus_LUT 12-bit resolution  ::(4096 size)
         -15/850 -> 15/850
    */
    for (int ii = 0; ii < Z0_TABLE_SIZE; ii++) {
        float in_val = (Z0_RANGE)*((Z0_TABLE_SIZE-1)-ii)/float(Z0_TABLE_SIZE);

        // Next, compute lookup table 
        float numerator   = in_val / 850.;    // just repeat the calculation from delta_LUT
        float denominator = 1 - numerator;
        data_T real_val   = round( (numerator/denominator)*ETA_CONVERSION ); // convert to proper type
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T>
void delta_minus_LUT(data_T &data, res_T &res) {
    // Initialize the lookup table
    res_T delta_minus_table[Z0_TABLE_SIZE];
    init_delta_minus_table<res_T>(delta_minus_table);

    // Index into the lookup table based on data
    int index;

    #pragma HLS PIPELINE

    index = (1-data/(Z0_RANGE*ETA_CONVERSION))*Z0_TABLE_SIZE;

    if (index < 0) index = 0;
    else if (index > Z0_TABLE_SIZE-1) index = Z0_TABLE_SIZE-1;

    res = delta_minus_table[index];

    return;
}

#endif
