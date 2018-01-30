/*
Example using tanh LUT
*/
#include <vector>
#include <cstdio>

#include "ap_int.h"
#include "ap_fixed.h"
#include "src/simple_algo_tanh.h"


int main() {
    etaphi_t in_hw;
    etaphi_t out_hw;
    float in,out;

    float values = 0.1;

    in  = 0.1;
    out = 0;

    // c++ implementation
    simple_algo_tanh_ref(in, out);
    std::cout << " REF : tanh(" << in << ") = " << out << std::endl;


    // hardware implementation
    in_hw  = round(values * VTX_ETA_SCALE);
    out_hw = 0;
    simple_algo_tanh_hw(in_hw, out_hw);

    out = out_hw.to_int()/VTX_ETA_SCALE;

    std::cout << " HW  : tanh(" << in_hw << ") = " << out_hw << std::endl;
    std::cout << " HW  : converted output = " << out << std::endl;
    return 0;
}
