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

// functions to read text files
void read_track_file(const std::string &file_name, 
	       std::vector<std::string> &values, 
	       const std::string &comment);
void read_muon_file(const std::string &file_name, 
		    std::vector<std::string> &values, 
		    const std::vector<std::string> &comment);

// functions to decode data
void decode_sw_track_data(const std::string &word, TrackObj_tkmu&);
void decode_hw_track_data(const std::string &word, TkObj_tkmu&);
void decode_sw_muon_data(const std::string &word, MuonObj_tkmu&);
void decode_hw_muon_data(const std::string &word, MuObj_tkmu&);

void split(const std::string &s, 
	   char delim, std::vector<std::string> &elems);
float rinv2pt(const float& rinv);
float sinhEta2eta(const float& sinhEta);
void isNegative( std::string& bit_value, bool& isNeg);

int main() 
{
    /* Run the program -- 
        Reading in data and predicting new eta/phi values 
	in software and firmware 
        Data from text file provided by track trigger group 
	(see GitLab group)
    */
  
    std::vector<std::string> muonComment;
    muonComment.push_back("Empty");
    muonComment.push_back("MuonB");
    muonComment.push_back("MuonO");
    muonComment.push_back("MuonE");

    // truth information I/O (CMSSW SimTrack)
    std::vector<std::string> true_track_data;

    // software data I/O
    std::vector<std::string> sw_track_data;
    read_track_file("../../../../config/sw_track_data.dat",sw_track_data,"BX");

    std::vector<std::string> sw_muon_data;
    read_muon_file("../../../../config/sw_muon_data.dat",sw_muon_data, muonComment);

    std::ofstream software_output;
    software_output.open("../../../../software_prop.txt");

    // firmware data I/O
    std::vector<std::string> hw_track_data;
    read_track_file("../../../../config/hw_track_data.dat",hw_track_data,"BX");

    std::vector<std::string> hw_muon_data;
    read_muon_file("../../../../config/hw_muon_data.dat",hw_muon_data, muonComment);

    std::ofstream firmware_output;
    firmware_output.open("../../../../firmware_prop.txt");



    // start the loop on the events...
    for (unsigned int i=0,size=sw_track_data.size();i<size;i++){

        // :: SOFTWARE :: //
        std::string track_data_sw = sw_track_data[i];
        std::string muon_data_sw = sw_muon_data[i];

	// define the reference track and decode the 
	// data from the data file
        TrackObj_tkmu in_track_sw;
	decode_sw_track_data(track_data_sw, in_track_sw);
	  
	// define the propagated track and obtain it by 
	// propagating the reference track to the second 
	// muon station
        PropTrackObj_tkmu prop_track_sw = tkmu_simple_ref(in_track_sw);
	std::cout << "test prop track " << prop_track_sw << std::endl;

	// define the reference track and decode the data 
	// from the sim muon data file
        MuonObj_tkmu in_muon_sw;
	decode_sw_muon_data(muon_data_sw, in_muon_sw);
	std::cout << "test mu " << in_muon_sw << std::endl;

	// obtain the track-muon by matching the track to the muon
        TrackMuonObj_tkmu out_trackmuon_sw;
	out_trackmuon_sw = match_sw(prop_track_sw, in_muon_sw);
	
	if (false){
	  std::cout << " REF : eta = " << in_track_sw.eta 
		    << " => " << prop_track_sw.propEta << std::endl;
	  std::cout << "     : phi = " << in_track_sw.phi 
		    << " => " << prop_track_sw.propPhi << std::endl;
	  std::cout << "     : in z0 = " << (in_track_sw.z0) << std::endl;
	  std::cout << "     : in invpT = " << (1/in_track_sw.pt) << std::endl;
	}

	// dump output to "track software" file
        software_output 
	  // track properties
	  << in_track_sw.rinv      << "," 
	  << in_track_sw.eta       << "," 
	  << prop_track_sw.propEta << "," 
	  << in_track_sw.phi       << "," 
	  << prop_track_sw.propPhi << ","
	  << in_track_sw.z0        << ","
	  // muon properties
	  << in_muon_sw.pt         << "," 
	  << in_muon_sw.eta        << "," 
	  << in_muon_sw.phi        << "," 
	  << in_muon_sw.q          << ","
	  // track-muon properties
	  << out_trackmuon_sw.pt         << "," 
	  << out_trackmuon_sw.eta        << "," 
	  << out_trackmuon_sw.phi        << "," 
	  << out_trackmuon_sw.q
	  << "\n";

        // :: FIRMWARE :: //
        std::string track_data_fw = hw_track_data[i];
        std::string muon_data_fw = hw_muon_data[i];
	
	// get the track 
        TkObj_tkmu in_track_hw;
	decode_hw_track_data(track_data_fw, in_track_hw);

	// propagate the track
        PropTkObj_tkmu prop_track_hw;
        prop_track_hw = tkmu_simple_hw(in_track_hw);

	// get the muon
        MuObj_tkmu in_muon_hw;
	decode_hw_muon_data(muon_data_fw, in_muon_hw);

	// match the track with the muon
        TkMuObj_tkmu out_trackmuon_hw;
	out_trackmuon_hw = match_hw(prop_track_hw, in_muon_hw);

        // save results to file
        firmware_output 
	  // track properties
	  << in_track_hw.hwRinv*INVRINV_CONVERSION     << "," 
	  << in_track_hw.hwEta*INVETA_CONVERSION       << "," 
	  << prop_track_hw.hwPropEta*INVETA_CONVERSION << ","
	  << in_track_hw.hwPhi*INVPHI_CONVERSION       << "," 
	  << prop_track_hw.hwPropPhi*INVPHI_CONVERSION << ","
	  << in_track_hw.hwZ0*INVZ_CONVERSION          << "," 
	  // muon properties
	  << in_muon_hw.hwPt         << "," 
	  << in_muon_hw.hwEta        << "," 
	  << in_muon_hw.hwPhi        << "," 
	  << in_muon_hw.hwQ          << ","
	  // track-muon properties
	  << out_trackmuon_hw.hwPt         << "," 
	  << out_trackmuon_hw.hwEta        << "," 
	  << out_trackmuon_hw.hwPhi        << "," 
	  << out_trackmuon_hw.hwQ
	  << "\n";
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


void read_track_file( const std::string &file_name, std::vector<std::string> &values, const std::string &comment ) {
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


void read_muon_file( const std::string &file_name, std::vector<std::string> &values, const std::vector<std::string> &comments ) {
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

 	    // if line starts with "Begin processing the" -- ignore
	    if (newstring.find("Begin processing the") != std::string::npos) continue;
	    
	    // bool wantToProcess(false);
	    
	    // check if we want to process this line 
	    for (int iC=0; iC < comments.size(); ++iC){
	      // allow for comments
	      std::size_t lineComment = line.find(comments[iC]);

	      if (lineComment == 0) continue;
	      if (lineComment != std::string::npos) {
		newstring = line.substr(0,lineComment);
		// wantToProcess = true;
		std::cout << "newstring " << std::endl;
	      }
	    }
	    
	    // if (!wantToProcess) continue;
	    
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

void decode_sw_track_data(const std::string &data_sw, TrackObj_tkmu& in_track_sw)
{
  std::vector<std::string> values_sw;
  split(data_sw,' ',values_sw);
  
  // setup Rinv
  float rinv    = std::atof(values_sw.at(1).c_str());
  float sinhEta = std::atof(values_sw.at(3).c_str());
  
  in_track_sw.rinv = rinv;
  in_track_sw.pt  = rinv2pt(rinv);           // 1.360636778;
  in_track_sw.sinheta = sinhEta;
  in_track_sw.eta = sinhEta2eta(sinhEta);    //-2.265;
  in_track_sw.phi = std::atof(values_sw.at(2).c_str()); // 1.26735;
  in_track_sw.z0  = std::atof(values_sw.at(4).c_str()); //-4.72;
  in_track_sw.q   = (rinv>0) ? 1 : -1;       //-1;

  if (false){
    std::cout << "Decode track software data " 
	      << data_sw
	      << " pt " << in_track_sw.pt
	      << " rinv " << in_track_sw.rinv
	      << " eta " << in_track_sw.eta
	      << " phi " << in_track_sw.phi
	      << " q " << in_track_sw.q 
	      << " z0 " << in_track_sw.z0 
	      << std::endl;
  }
}

void decode_hw_track_data(const std::string &data_fw, TkObj_tkmu& in_track_hw)
{
  std::vector<std::string> values_fw;
  split(data_fw,' ',values_fw);
  
  // setup Rinv
  bool isNegativeCharge(false);
  std::string rinv_str = values_fw.at(1);
  isNegative(rinv_str, isNegativeCharge);
  in_track_hw.hwRinv = std::bitset<15>(rinv_str).to_ulong();   
  //std::stoi(values_fw.at(1).c_str(),NULL,2);
  if (isNegativeCharge) in_track_hw.hwRinv *= -1;
  in_track_hw.hwQ = (isNegativeCharge) ? -1 : 1;

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
}

void decode_sw_muon_data(const std::string &data_sw, MuonObj_tkmu& in_muon_sw)
{
  std::vector<std::string> values_sw;
  split(data_sw,' ',values_sw);

  // note that even empty muons must have some kind of data in them, i.e. 
  // all members set to 0!
  in_muon_sw.pt  = std::atof(values_sw.at(1).c_str());
  in_muon_sw.eta = std::atof(values_sw.at(2).c_str());
  // keep in mind that muon phi is from 0 to 2pi
  in_muon_sw.phi = std::atof(values_sw.at(3).c_str());
  // normalize
  if (in_muon_sw.phi <= -M_PI)
    in_muon_sw.phi += 2*M_PI;
  if (in_muon_sw.phi > M_PI)
    in_muon_sw.phi -= 2*M_PI;
  
  in_muon_sw.q   = std::atoi(values_sw.at(4).c_str());

  if (false){
    std::cout << "Decode muon software data " 
	      << data_sw
	      << " pt " << in_muon_sw.pt
	      << " eta " << in_muon_sw.eta
	      << " phi " << in_muon_sw.phi
	      << " q " << in_muon_sw.q << std::endl;
  }
}

void decode_hw_muon_data(const std::string &data_fw, MuObj_tkmu& in_muon_hw)
{
  std::vector<std::string> values_fw;
  split(data_fw,' ',values_fw);

  // muon 1 or muon 2?
  std::string muonword = values_fw.at(0);
  int iMuon = std::atoi( &muonword.at(5) );

  std::string dataword = values_fw.at(1);

  // split up in 3 frames
  std::string frame1 = dataword.substr(64,32);
  std::string frame2 = dataword.substr(32,32);
  std::string frame3 = dataword.substr(0,32);

  // note that here, you must be careful with how the information is encoded
  /* now insert the bits into the datawords

   96-bit words look like

   first frame:
   BX0 phi H/F eta qual pT
   31  30  22  21  12   8  0
   
   second frame:
   SE track addresses VCH CH
   31 30               1  0

   third frame:
   B0  Empty
   31   0                                                                                                                                                                                                        
   fourth frame:                                                                                                                                              B1 phi H/F eta qual pT                                                                                                                                     31  30  22  21  12   8  0                                                                                                                                                                                     
   fifth frame:                                                                                                                                               B2 track addresses VCH CH                                                                                                                                  31 30               1  0                                                                                                                                                                                      
   sixth frame:                                                                                                                                               Empty                                                                                                                                                      31   0                                                                                                                                                    */
  
  // it is slightly difference for the first muon than for the second muon
  // int B0, B1, B2, BX0, SE;
  std::string pt_str, eta_str, phi_str, q_str;
  pt_str = frame2.substr(23,9);
  eta_str = frame2.substr(10,10);
  phi_str = frame2.substr(1,9);
  q_str = frame3.substr(0,1);

  in_muon_hw.hwPt = std::bitset<9>(pt_str).to_ulong();
  in_muon_hw.hwEta = std::bitset<10>(eta_str).to_ulong();
  in_muon_hw.hwPhi = std::bitset<9>(phi_str).to_ulong();
  in_muon_hw.hwQ = std::bitset<1>(q_str).to_ulong();

  if (false) {
    std::cout << "data_fw " << data_fw << std::endl;
    std::cout << "dataword " << dataword << std::endl;
    std::cout << "frame 1: " << frame1 << std::endl;
    std::cout << "frame 2: " << frame2 << std::endl;
    std::cout << "frame 3: " << frame3 << std::endl;
    std::cout << "check muon data " 
	      << " pt " << pt_str << " " 
	      << " eta " << eta_str << " "
	      << " phi " << phi_str << " "
	      << " q " << q_str << std::endl;
  }



  // if (iMuon == 1){
  //   B0 = std::atoi(frame3.at(0));
  //   in_track_hw.hwPhi = std::bitset<19>(phi_str).to_ulong();   //std::stoi(values_fw.at(2).c_str(),NULL,2);
  

  // } else if (iMuon == 2) {

  // } else {
  //   std::cout << "Corrupted muon data format" << std::endl;
  // }
}


// THE END
