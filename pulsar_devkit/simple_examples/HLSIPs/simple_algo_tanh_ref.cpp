#include <math.h>
#include <cmath>
#include <algorithm>
#include "ap_fixed.h"
#include "src/simple_algo_tanh.h"

void simple_algo_tanh_ref( const float& in, float& out ){
    out = tanh(in);
    return;
}

