/*
Propagate track to muon station

main script for running tests comparing
HLS with c++

    // :: FIRMWARE :: //
    // [rinv (15 bit) | phi0 (19 bit)     | t (14 bit)  | z0 (11 bit)]
    // 111100101101011|0000110001100000011|11111100000101|11110110000
*/
#include <cstdio>
#include <vector> 
#include <bitset>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <math.h>

#include "ap_fixed.h"
#include "src/tk-mu_simple.h"


void read_file(const std::string &file_name, std::vector<std::string> &values, const std::string &comment);
void split(const std::string &s, char delim, std::vector<std::string> &elems);
float rinv2pt(const float& rinv);
float sinhEta2eta(const float& sinhEta);
void isNegative( std::string& bit_value, bool& isNeg);

int main() {
    /* Run the program -- 
        Reading in data and predicting new eta/phi values in software and firmware 
        Data from text file provided by track trigger group (see GitLab group)
    */
    // software data I/O
    std::vector<std::string> real_data;
    read_file("../../../../config/CleanTracks_muminus_2-10_real.dat",real_data,"BX");

    std::ofstream software_output;
    software_output.open("../../../../software_prop.txt");

    // firmware data I/O
    std::vector<std::string> real_hw_data;
    read_file("../../../../config/CleanTracks_muminus_2-10.dat",real_hw_data,"BX");

    std::ofstream firmware_output;
    firmware_output.open("../../../../firmware_prop.txt");

    for (unsigned int i=0,size=real_data.size();i<size;i++){

        // :: SOFTWARE :: //
        std::string data_sw = real_data[i];
        std::vector<std::string> values_sw;
        split(data_sw,' ',values_sw);

        TrackObj_tkmu in_track_sim;

        float rinv    = std::atof(values_sw.at(1).c_str());
        float sinhEta = std::atof(values_sw.at(3).c_str());

        in_track_sim.pt  = rinv2pt(rinv);           // 1.360636778;
        in_track_sim.eta = sinhEta2eta(sinhEta);    //-2.265;
        in_track_sim.phi = std::atof(values_sw.at(2).c_str()); // 1.26735;
        in_track_sim.z0  = std::atof(values_sw.at(4).c_str()); //-4.72;
        in_track_sim.q   = (rinv>0) ? 1 : -1;       //-1;

        PropTrackObj_tkmu prop_track_sim;

        prop_track_sim = tkmu_simple_ref(in_track_sim);
        //stdz::cout << " REF : eta = " << in_track_sim.eta << " => " << prop_track_sim.propEta << std::endl;
        //std::cout << "     : phi = " << in_track_sim.phi << " => " << prop_track_sim.propPhi << std::endl;
        //std::cout << "     : in z0 = " << (in_track_sim.z0) << std::endl;
        //std::cout << "     : in invpT = " << (1/in_track_sim.pt) << std::endl;

        software_output << in_track_sim.eta << "," << prop_track_sim.propEta << "," 
                        << in_track_sim.phi << "," << prop_track_sim.propPhi << ","
                        << rinv       << "," << in_track_sim.z0       << "\n";


        MuonObj_tkmu in_muon_sim;
	// assign muon properties here
        TrackMuonObj_tkmu out_trackmuon_sim = match_sim(prop_track_sim, in_muon_sim);




        // :: FIRMWARE :: //
        std::string data_fw = real_hw_data[i];
        std::vector<std::string> values_fw;
        split(data_fw,' ',values_fw);

        TkObj_tkmu in_track_hw;
        PropTkObj_tkmu prop_track_hw;

        MuObj_tkmu in_muon_hw;
        TkMuObj_tkmu out_trackmuon_hw;

        // setup Rinv
        bool isNegativeCharge(false);
        std::string rinv_str = values_fw.at(1);
        isNegative(rinv_str, isNegativeCharge);
        in_track_hw.hwRinv = std::bitset<15>(rinv_str).to_ulong();   //std::stoi(values_fw.at(1).c_str(),NULL,2);
        if (isNegativeCharge) in_track_hw.hwRinv *= -1;
        in_track_hw.hwQ = (isNegativeCharge) ? -1 : 1;

        if (DEBUG) std::cout << " Looping over data - hwRinv = " << in_track_hw.hwRinv << std::endl;

        // setup sinhEta
        bool isNegativeEta(false);
        std::string eta_str = values_fw.at(3);
        isNegative(eta_str, isNegativeEta);
        in_track_hw.hwSinhEta = std::bitset<14>(eta_str).to_ulong();   //std::stoi(values_fw.at(3).c_str(),NULL,2);
        if (isNegativeEta) in_track_hw.hwSinhEta *= -1;

        if (DEBUG) std::cout << " Looping over data - hwSinhEta = " << in_track_hw.hwSinhEta << std::endl;

        // setup phi0
        bool isNegativePhi(false);
        std::string phi_str = values_fw.at(2);
        isNegative(phi_str, isNegativePhi);
        in_track_hw.hwPhi = std::bitset<19>(phi_str).to_ulong();   //std::stoi(values_fw.at(2).c_str(),NULL,2);
        if (isNegativePhi) in_track_hw.hwPhi *= -1;

        if (DEBUG) std::cout << " Looping over data - hwPhi = " << in_track_hw.hwPhi << std::endl;

        // setup z0
        bool isNegativeZ0(false);
        std::string z0_str = values_fw.at(4);
        isNegative(z0_str, isNegativeZ0);
        in_track_hw.hwZ0 = std::bitset<12>(z0_str).to_ulong();   //std::stoi(values_fw.at(4).c_str(),NULL,2);
        if (isNegativeZ0) in_track_hw.hwZ0 *= -1;

        if (DEBUG) std::cout << " Looping over data - hwZ0 = " << in_track_hw.hwZ0 << std::endl;

        //in_track_hw.hwInvPt: convert in algorithm with '1/pt = 87.719298*in_track_hw.hwRinv;' // pt = (0.3*3.8*0.01)/rinv
        //in_track_hw.hwEta:   convert in algorithm with LUT

	// propagate the track
        prop_track_hw = tkmu_simple_hw(in_track_hw);

	// match the track with the muon
	out_trackmuon_hw = match_hw(prop_track_hw, in_muon_hw);

	// test dR
	feta_t eta1 = 0.001;
	fphi_t phi1 = 0.005;
	feta_m eta2 = 0.100;
	fphi_m phi2 = 0.500;
	feta_t outdR = dr2_int(eta1, phi1, eta2, phi2);
	std::cout << "test eta1 " << eta1 << std::endl;
	std::cout << "test phi1 " << phi1 << std::endl;
	std::cout << "test eta2 " << eta2 << std::endl;
	std::cout << "test phi2 " << phi2 << std::endl;
	std::cout << "test dR " << outdR << std::endl;
	
        //std::cout << " HW  : eta   = " << float(in_track_hw.hwEta)/(ETA_CONVERSION) << " => " << float(prop_track_hw.hwPropEta)/(ETA_CONVERSION) << std::endl;
        //std::cout << "     : phi   = " << float(in_track_hw.hwPhi)/(PHI_CONVERSION) << " => " << float(prop_track_hw.hwPropPhi)/(PHI_CONVERSION) << std::endl;

        // save results to file
        firmware_output << in_track_hw.hwEta*INVETA_CONVERSION   << "," << prop_track_hw.hwPropEta*INVETA_CONVERSION << ","
                        << in_track_hw.hwPhi*INVPHI_CONVERSION   << "," << prop_track_hw.hwPropPhi*INVPHI_CONVERSION << ","
                        << in_track_hw.hwRinv*INVRINV_CONVERSION << "," << in_track_hw.hwZ0*INVZ_CONVERSION         << "\n";
    }

    std::cout << " Finished " << std::endl;

    software_output.close();
    firmware_output.close();

    return 0;
}




void split(const std::string &s, char delim, std::vector<std::string> &elems) {
    /* Split a string into pieces based on delimiter */
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return;
}


void read_file( const std::string &file_name, std::vector<std::string> &values, const std::string &comment ) {
    /* Read in a generic file and put it into a vector of strings */
    std::ifstream ifile(file_name.c_str());

    if (!ifile) {
        std::cout << "File does not exist: " << file_name << std::endl;
        std::cout << "Exiting. " << std::endl;
        exit(0);
    }

    // open the file and put the data into a vector
    std::string line("");
    if (ifile.is_open()){

        while (std::getline(ifile, line)) {
            std::string newstring(line);

            // allow for comments
            std::size_t lineComment = line.find(comment);
            if (lineComment == 0) continue;
            if (lineComment != std::string::npos) newstring = line.substr(0,lineComment);

            // remove all white spaces at the end of the string
            std::size_t space_pos = newstring.rfind(" ");
            while ( space_pos != std::string::npos && space_pos == newstring.size()-1 ) {
                newstring = newstring.substr(0, newstring.rfind(" "));
                space_pos = newstring.rfind(" ");
            }

            // ignore empty lines
            if(newstring.length()==0) continue;

            values.push_back(newstring); // put values into vector
        }

        ifile.close();
    }

    return;
}


float rinv2pt(const float& rinv){
    /* Convert rinv to pT 
       pt = (0.3*3.8/100.0)/irinv
    */
    float pt(-999.);
    float r = (rinv>0) ? rinv : -rinv;
    pt = 0.0114 / r;
    return pt;
}


float sinhEta2eta(const float& sinhEta){
    /* Convert sinhEta to eta */
    float eta(-999.);
    eta = log( sinhEta + sqrt(1+pow(sinhEta,2)) );
    return eta;
}


void isNegative(std::string& bit_value, bool& isNeg){
    /* Convert string of signed bit value to unsigned */
    isNeg = false;
    const char bit_value_0 = bit_value[0];
    if (bit_value_0 == '1'){
        bit_value = bit_value.replace(0,1,"0");
        isNeg = true;
    }

    return;
}


// THE END
