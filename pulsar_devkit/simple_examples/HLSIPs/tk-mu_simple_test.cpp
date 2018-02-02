/*
Propagate track to muon station

main script for running tests comparing
HLS to c++
*/
#include <cstdio>

#include "ap_fixed.h"
#include "src/simple_algo_tk-mu.h"


int main() {

    // Reference
    float in_eta = 1.3;   // -2.5,2.5
    float in_phi = -0.2;  // -pi,pi
    float prop_eta;
    float prop_phi;

    simple_algo_tk-mu_ref(in, out);
    std::cout << " REF : tanh(" << in << ") = " << out << std::endl;

    val_t eta_hw,phi_hw;
    result_t propEta_hw,propPhi_hw;

    simple_algo_tk-mu_hw(eta_hw, phi_hw, propEta_hw, propPhi_hw);
    std::cout << " HW  : tanh(" << in_hw << ") = " << out_hw << std::endl;

    return 0;
}
