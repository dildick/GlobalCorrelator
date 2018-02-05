/*
Propagate track to muon station

main script for running tests comparing
HLS to c++
*/
#include <cstdio>

#include "ap_fixed.h"
#include "src/tk-mu_simple.h"



int main() {
    // Data from text file provided by track trigger group
    // :: Reference :: //
    // 00 -0.00128212 0.11572 -0.29363 -4.49219
    TrackObj_tkmu in_ref;
    in_ref.pt  = 779.9581942408;

    in_ref.eta = 2.745; //-0.289566;
    in_ref.phi = -1.49705; //0.11572;
    in_ref.z0  = -4.49219;
    in_ref.q   = -1;

    PropTrackObj_tkmu out_ref;

    tkmu_simple_ref(in_ref, out_ref);
    std::cout << " REF : eta = " << in_ref.eta << " => " << out_ref.propEta << std::endl;
    std::cout << "     : phi = " << in_ref.phi << " => " << out_ref.propPhi << std::endl;
    std::cout << "     : in z0 = " << (in_ref.z0) << std::endl;
    std::cout << "     : in invpT = " << (1/in_ref.pt) << std::endl;


    // :: HARDWARE :: //
// [rinv          | phi0              | t            | z0]
// 111100101101011|0000110001100000011|11111100000101|11110110000
// rinv = 15 bit 31083/32768;  -1685
// phi0 = 19 bit 25347/524288; 
// t = 14 bit    16133/16384;  -251
// z0 = 11 bit   1968/2048;    -80

    TkObj_tkmu in_hw;
    in_hw.hwInvPt = "111100101101011";
    in_hw.hwEta   = "100111000101";          // 12-bit = -453 :: "11111100000101" 14-bit = (0.9693603516)*5 -> -2.28194 (assuming the range is -5,5)
    in_hw.hwPhi   = "00110001100000011";     // 17-bit = 1.26735 (drop leading 0's)
    in_hw.hwZ0    = "101110110000";          // 12-bit (add zero after signed bit)
    in_hw.hwQ     = 1;  // negative charge

    PropTkObj_tkmu out_hw;

    tkmu_simple_hw(in_hw, out_hw);
    std::cout << " HW  : eta   = " << float(in_hw.hwEta)/(ETA_CONVERSION) << " => " << float(out_hw.hwPropEta)/(ETA_CONVERSION) << std::endl;
    std::cout << "     : phi   = " << float(in_hw.hwPhi)/(PHI_CONVERSION) << " => " << float(out_hw.hwPropPhi)/(PHI_CONVERSION) << std::endl;
    std::cout << "     : in z0 = " << float(in_hw.hwZ0)/(ETA_CONVERSION) << std::endl;
    std::cout << "     : in invpT = " << float(in_hw.hwInvPt)/(2E4) << std::endl;

    return 0;
}

// THE END
