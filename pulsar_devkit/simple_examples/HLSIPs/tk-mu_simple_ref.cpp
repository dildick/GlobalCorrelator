/*
Propagate track to muon system

Reference algorithm
*/
#include <math.h>
#include <cmath>
#include <algorithm>
#include "src/simple_algo_tk-mu.h"

void simple_algo_tk-mu_ref( float in_eta, float in_phi, float& prop_eta, float& prop_phi ){
    prop_eta = propEta(in_eta);
    prop_phi = propPhi(in_phi);
    return;
}
