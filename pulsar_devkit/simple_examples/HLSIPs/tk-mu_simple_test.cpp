/*
Propagate track to muon station

m1;95;0cain script for running tests comparing
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

#include <sys/types.h>
#include <dirent.h>

#include "ap_fixed.h"
#include "src/tk-mu_simple.h"

// functions to decode track and muon data
void decode_sw_track_data(const std::string &word, SwTrack&);
void decode_hw_track_data(const std::string &word, HwTrack&);
void decode_sw_muon_data(const std::string &word, SwMuon&);
void decode_hw_muon_data(const std::string &word, HwMuon&);

// helpers
void split(const std::string &s, 
	   char delim, std::vector<std::string> &elems);
float rinv2pt(const float& rinv);
float sinhEta2eta(const float& sinhEta);
void isNegative( std::string& bit_value, bool& isNeg);

// calculate offset in phi
float getPhiOffset(int sector, float offset = -0.0387851);
fphi_t getPhiOffsetBinary(int sector, float offset = -0.0387851);

// dump event output
void writeOutput(std::ofstream&, const Event&);

/*
  Collect data files from a specific directory
 */
void getDataFiles(const std::string& directory,
		  const std::string& simTrackPattern, std::vector<std::string>& simTrackFiles,
		  const std::string& swTrackPattern, std::vector<std::string>& swTrackFiles,
		  const std::string& swMuonPattern, std::vector<std::string>& swMuonFiles,
		  const std::string& hwTrackPattern, std::vector<std::string>& hwTrackFiles,
		  const std::string& hwMuonPattern, std::vector<std::string>& hwMuonFiles);

/*
  read events from a collection of files
  events       - the vector with events (output)
  simTrackFiles - files containing SimTrack information
  swTracks      - files containing TT track information in floating point format
  hwTracks      - files containing TT track information in binary format
  swMuons       - files containing muon information in floating point format
  hwMuons       - files containing muon information in binary format
*/
void eventReader(std::vector<Event>& events,
		 const std::vector<std::string>& simTrackFiles,
		 const std::vector<std::string>& swTrackFiles,
		 const std::vector<std::string>& swMuonFiles,
		 const std::vector<std::string>& hwTrackFiles,
		 const std::vector<std::string>& hwMuonFiles);

/*
  read events from a single file
  events       - the vector with events (output)
  simTrackFile - file containing SimTrack information
  swTrack      - file containing TT track information in floating point format
  hwTrack      - file containing TT track information in binary format
  swMuon       - file containing muon information in floating point format
  hwMuon       - file containing muon information in binary format
  batchNumber  - each file contains 100 events. batch number 0,1,2... 
                 denotes which batch is being processed
*/
void eventReader(std::vector<Event>& events, 
		 const std::string& simTrackFile,
		 const std::string& swTrackFile,
		 const std::string& swMuonFile,
		 const std::string& hwTrackFile,
		 const std::string& hwMuonFile,
		 int batchNumber); 

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

    std::string directory = "../../../../data/";

    std::string simTrackPattern = "sim_muon_data";
    std::string swTrackPattern = "CleanTracksAll_floating";
    std::string swMuonPattern = "sw_muon_data";
    std::string hwTrackPattern = "CleanTracksAll_binary";
    std::string hwMuonPattern = "hw_muon_data";

    std::vector<std::string> simTrackFiles;
    std::vector<std::string> swTrackFiles;
    std::vector<std::string> swMuonFiles;
    std::vector<std::string> hwTrackFiles;
    std::vector<std::string> hwMuonFiles;

    // get all data files    
    getDataFiles(directory,
		 simTrackPattern, simTrackFiles,
		 swTrackPattern,  swTrackFiles,
		 swMuonPattern,   swMuonFiles,
		 hwTrackPattern,  hwTrackFiles,
		 hwMuonPattern,   hwMuonFiles);


    // truth information I/O (CMSSW SimTrack)
    // 
    std::vector<Event> events;
    eventReader(events,
		simTrackFiles,
		swTrackFiles,
		swMuonFiles,
		hwTrackFiles,
		hwMuonFiles);
    
    // process the tracks and muons
    for (unsigned int iEvent = 0; iEvent < events.size(); ++iEvent){

      std::cout << "Processing event " << iEvent+1 << std::endl;

      // propagate the tracks
      for (unsigned int iHwTrack = 0; iHwTrack < events[iEvent].hwTracks.size(); ++iHwTrack){
	HwTrack hwTrack = events[iEvent].hwTracks[iHwTrack];
	HwPropTrack prop_track_hw = tkmu_simple_hw(hwTrack);
	events[iEvent].hwPropTracks.push_back(prop_track_hw);
	// std::cout << "Track " << hwTrack << " PropTrack " << prop_track_hw << std::endl; 
      } 

      // propagate the tracks
      for (unsigned int iSwTrack = 0; iSwTrack < events[iEvent].swTracks.size(); ++iSwTrack){
	SwTrack track_sw = events[iEvent].swTracks[iSwTrack];
	SwPropTrack prop_track_sw = tkmu_simple_ref(track_sw);
	events[iEvent].swPropTracks.push_back(prop_track_sw);
	// std::cout << "Track " << track_sw << " PropTrack " << prop_track_sw << std::endl; 
      } 

      for (unsigned int iHwMuon = 0; iHwMuon < events[iEvent].hwMuons.size(); ++iHwMuon){
	HwMuon hwMuon = events[iEvent].hwMuons[iHwMuon];

	// std::cout << ">>Candidate hwmuon " << hwMuon << std::endl;

	// check all possible matches!
	for (unsigned int iHwTrack = 0; 
	     iHwTrack < events[iEvent].hwTracks.size(); ++iHwTrack){
	  HwTrack hwTrack = events[iEvent].hwTracks[iHwTrack];
	  HwTrackMuon hwTrackMuon = match_hw(hwTrack, hwMuon);

	  // std::cout << ">>Candidate hwtrack " << hwTrack << std::endl;

	  // std::cout << ">>Candiate hwtrackmuon " << hwTrackMuon << std::endl;

	  if (hwTrackMuon.hwValid)
	    events[iEvent].hwTrackMuons.push_back(hwTrackMuon);
	}
	for (unsigned int iHwPropTrack = 0; 
	     iHwPropTrack < events[iEvent].hwPropTracks.size(); ++iHwPropTrack){
	  HwPropTrack hwPropTrack = events[iEvent].hwPropTracks[iHwPropTrack];
	  HwTrackMuon hwPropTrackMuon = match_prop_hw(hwPropTrack, hwMuon);

	  // std::cout << ">>Candidate hwProptrack " << hwPropTrack << std::endl;

	  // std::cout << ">>Candiate hwPropTrackmuon " << hwPropTrackMuon << std::endl;

	  if (hwPropTrackMuon.hwValid)
	    events[iEvent].hwPropTrackMuons.push_back(hwPropTrackMuon);
	}
	// add a section to select only one track-muon per l1 muon
      } 


      for (unsigned int iSwMuon = 0; iSwMuon < events[iEvent].swMuons.size(); 
	   ++iSwMuon){
	SwMuon swMuon = events[iEvent].swMuons[iSwMuon];
	// std::cout << ">>Candidate muon " << swMuon << std::endl;

	// check all possible matches!
	float maxDeltaPt = 999;
	SwTrackMuon candidateTrackMuon; 
	for (unsigned int iSwTrack = 0; 
	     iSwTrack < events[iEvent].swTracks.size(); ++iSwTrack){
	  SwTrack swTrack = events[iEvent].swTracks[iSwTrack];
	  // std::cout << ">>Candidate track " << swTrack << std::endl;
	  SwTrackMuon swTrackMuon = match_sw(swTrack, swMuon);

	  // check if valid or not
	  if (not swTrackMuon.valid) continue;

	  // std::cout << ">>Candiate trackmuon " << swTrackMuon << std::endl;
	  float deltaPt = fabs(swTrackMuon.pt - swMuon.pt); 
	  // std::cout << "Proto deltaPt " << deltaPt << " maxDeltaPt " << maxDeltaPt << std::endl;

	  // retain the matching one that has the smallest delta Pt
	  if ( deltaPt < maxDeltaPt){
	    maxDeltaPt = deltaPt;
	    candidateTrackMuon = swTrackMuon; 
	  }	 
	}
	// add the match to the collection	
	if (candidateTrackMuon.valid) {
	  // std::cout << "Adding trackmuon " << candidateTrackMuon << std::endl << std::endl;
	  events[iEvent].swTrackMuons.push_back(candidateTrackMuon);
	}

	// check all possible matches!
	maxDeltaPt = 999;
	SwTrackMuon candidatePropTrackMuon; 
	for (unsigned int iSwPropTrack = 0; 
	     iSwPropTrack < events[iEvent].swPropTracks.size(); ++iSwPropTrack){
	  SwPropTrack swPropTrack = events[iEvent].swPropTracks[iSwPropTrack];
	  // std::cout << ">>Candidate track " << swPropTrack << std::endl;
	  SwTrackMuon swPropTrackMuon = match_prop_sw(swPropTrack, swMuon);

	  // check if valid or not
	  if (not swPropTrackMuon.valid) continue;

	  // std::cout << ">>Candiate trackmuon " << swPropTrackMuon << std::endl;
	  float deltaPt = fabs(swPropTrackMuon.pt - swMuon.pt); 
	  // std::cout << "Proto deltaPt " << deltaPt << " maxDeltaPt " << maxDeltaPt << std::endl;

	  // retain the matching one that has the smallest delta Pt
	  if ( deltaPt < maxDeltaPt){
	    maxDeltaPt = deltaPt;
	    candidatePropTrackMuon = swPropTrackMuon; 
	  }
	}
	// add the match to the collection
	if (candidatePropTrackMuon.valid) {
	  // std::cout << ">>Adding proptrackmuon " << candidatePropTrackMuon << std::endl << std::endl;
	  events[iEvent].swPropTrackMuons.push_back(candidatePropTrackMuon);
	}
      }
      // std::cout << events[iEvent] << std::endl;
    }

    // print all information to a file
    std::ofstream data_output;
    data_output.open("../../../../output_data.txt");
    for (unsigned int i = 0; i < events.size(); ++i) {
      writeOutput(data_output, events[i]);
    }
    data_output.close();
    
    std::cout << " Finished " << std::endl;
    
    return 0;
}

std::string keepOnlyDigits(std::string input)
{
  std::string target = "";
  for(std::string::size_type i = 0; i < input.size(); ++i) {
    if (std::isdigit(input[i])) target += input[i];
  }
  return target;
}

void getDataFiles(const std::string& directory,
		  const std::string& simTrackPattern, std::vector<std::string>& simTrackFiles,
		  const std::string& swTrackPattern, std::vector<std::string>& swTrackFiles,
		  const std::string& swMuonPattern, std::vector<std::string>& swMuonFiles,
		  const std::string& hwTrackPattern, std::vector<std::string>& hwTrackFiles,
		  const std::string& hwMuonPattern, std::vector<std::string>& hwMuonFiles)
{
  simTrackFiles.clear();
  swTrackFiles.clear();
  swMuonFiles.clear();
  hwTrackFiles.clear();
  hwMuonFiles.clear();

  bool debug(false);

  DIR* dirp = opendir(directory.c_str());
  struct dirent * dp;
  while ((dp = readdir(dirp)) != NULL) {
    if (debug) std::cout << "Directory " << directory << " open " << std::endl;
    std::string fileName(dp->d_name);
    // check if file matches the simtrack pattern
    if (fileName.find(simTrackPattern.c_str())!=std::string::npos){
      if (debug) std::cout << "Adding file " << directory + dp->d_name << std::endl;
      simTrackFiles.push_back(directory + dp->d_name);
    }
    // check if file matches the swTrack pattern
    if (fileName.find(swTrackPattern.c_str())!=std::string::npos){
      if (debug) std::cout << "Adding file " << directory + dp->d_name << std::endl;
      swTrackFiles.push_back(directory + dp->d_name);
    }
    // check if file matches the hwTrack pattern
    if (fileName.find(hwTrackPattern.c_str())!=std::string::npos){
      if (debug) std::cout << "Adding file " << directory + dp->d_name << std::endl;
      hwTrackFiles.push_back(directory + dp->d_name);
    }
    // check if file matches the swMuon pattern
    if (fileName.find(swMuonPattern.c_str())!=std::string::npos){
      if (debug) std::cout << "Adding file " << directory + dp->d_name << std::endl;
      swMuonFiles.push_back(directory + dp->d_name);
    }
    // check if file matches the hwMuon pattern
    if (fileName.find(hwMuonPattern.c_str())!=std::string::npos){
      if (debug) std::cout << "Adding file " << directory + dp->d_name << std::endl;
      hwMuonFiles.push_back(directory + dp->d_name);
    }
  }
  closedir(dirp);
}

void eventReader(std::vector<Event>& events, 
		 const std::vector<std::string>& simTrackFiles,
		 const std::vector<std::string>& swTracks,
		 const std::vector<std::string>& swMuons,
		 const std::vector<std::string>& hwTracks,
		 const std::vector<std::string>& hwMuons)
{
  events.clear();
  // keep in mind that the event number is per file, not for the entire dataset
  // find a way to introduce a global event number
  // I assume that each file has 100 events...
  for (unsigned int iFile = 0; iFile < simTrackFiles.size(); iFile++){
    eventReader(events, 
		simTrackFiles[iFile], 
		swTracks[iFile], 
		swMuons[iFile], 
		hwTracks[iFile], 
		hwMuons[iFile],
		iFile);
  }
}

void eventReader(std::vector<Event>& events, 
		 const std::string& simTrackFile,
		 const std::string& swTrack,
		 const std::string& swMuon,
		 const std::string& hwTrack,
		 const std::string& hwMuon,
		 int batchNumber)
{
  bool debug(false);

  if (debug) std::cout << "BatchNumber " << batchNumber << std::endl;
  
  // todo: extend the interface for a set of files

  std::ifstream ifile(simTrackFile.c_str());
  
  if (!ifile) {
    std::cout << "File does not exist: " << simTrackFile << std::endl;
    std::cout << "Exiting. " << std::endl;
    exit(0);
  }
  
  // step 1: generate as many events as there are in the truth file
  // open the file and put the truth data into a vector
  
  if (debug) std::cout << "Begin reading SimTrack file" << std::endl;

  std::string line("");
  if (ifile.is_open()){
    
    while (std::getline(ifile, line)) {
      std::string newString(line);

      // create a new event
      if (newString.substr(0,5) == "Event"){
	Event newEvent;
	std::vector<std::string> values;
	split(newString,' ',values);
	newEvent.eventNumber = std::atoi( values.at(1).c_str() ) + (batchNumber * 100);
	newEvent.BX = std::atoi( values.at(3).c_str() );	
	if (newEvent.eventNumber > 1000000) break;
	events.push_back(newEvent);
      }
      
      if (newString.substr(0,8) == "SimTrack"){
	SimTrack newSimTrack;
	std::vector<std::string> values;
	split(newString,' ',values);
	newSimTrack.index =  std::atof( values.at(1).c_str() );
	newSimTrack.pt =  std::atof( values.at(2).c_str() );
	newSimTrack.eta = std::atof( values.at(3).c_str() );
	newSimTrack.phi = std::atof( values.at(4).c_str() );
	newSimTrack.q  =  std::atoi( values.at(5).c_str() );
	events.back().simTracks.push_back(newSimTrack);
      }
    }
  }

  ifile.close();

  if (debug) std::cout << "End reading SimTrack file" << std::endl;

  if (debug) std::cout << "Begin reading SwTrack file" << std::endl;

  // step 2: read the Sw tracks
  std::ifstream swTrackFile(swTrack.c_str());
  
  if (!swTrackFile) {
    std::cout << "File does not exist: " << swTrack << std::endl;
    std::cout << "Exiting. " << std::endl;
    exit(0);
  }
  
  // open the file and put the truth data into a vector
  line = "";
  if (swTrackFile.is_open()){
    
    std::string phisector;
    int eventNumber;
    int BX;
    while (std::getline(swTrackFile, line)) {
      std::string newString(line);
      // create a new event
      if (newString.substr(0,2) == "BX"){
	std::vector<std::string> values;
	split(newString,' ',values);
	eventNumber = std::atoi( values.at(3).c_str() ) + (batchNumber * 100);
	if (eventNumber > events.size()) break;
	phisector = values.at(7);
      }
      // add attributes
      else{
       	SwTrack newTrack;
	newTrack.BX = 0;
	if (debug) std::cout << "eventNumber "  << eventNumber <<  " " << newString + " " + phisector << std::endl;
	decode_sw_track_data(newString + " " + phisector, newTrack);
	if (newTrack.valid)
	  events[eventNumber-1].swTracks.push_back(newTrack);
      }
    }
  }
  swTrackFile.close();

  if (debug) std::cout << "End reading SwTrack file" << std::endl;

  if (debug) std::cout << "Begin reading HwTrack file" << std::endl;

  // step 3: read the Hw tracks
  std::ifstream hwTrackFile(hwTrack.c_str());
  
  if (!hwTrackFile) {
    std::cout << "File does not exist: " << hwTrack << std::endl;
    std::cout << "Exiting. " << std::endl;
    exit(0);
  }
  
  // open the file and put the truth data into a vector
  line = "";
  if (hwTrackFile.is_open()){
    
    std::string phisector;
    int eventNumber;
    int BX;
    while (std::getline(hwTrackFile, line)) {
      std::string newString(line);

      // create a new event
      if (newString.substr(0,2) == "BX"){
	std::vector<std::string> values;
	split(newString,' ',values);
	eventNumber = std::atoi( values.at(3).c_str() ) + (batchNumber * 100);
	if (eventNumber > events.size()) break;
	phisector = values.at(7);
      }
      // add attributes
      else{
	HwTrack newTrack;
	newTrack.hwBX = std::bitset<3>(eventNumber).to_ulong();
	decode_hw_track_data(newString + " " + phisector, newTrack);
	//if (newTrack.hwValid)
	  events[eventNumber-1].hwTracks.push_back(newTrack);
      }
    }
  }
  hwTrackFile.close();

  if (debug) std::cout << "End reading HwTrack file" << std::endl;

  if (debug) std::cout << "Begin reading SwMuon file" << std::endl;

  // step 4: read the Sw muons
  std::ifstream swMuonFile(swMuon.c_str());
  
  if (!swMuonFile) {
    std::cout << "File does not exist: " << swMuon << std::endl;
    std::cout << "Exiting. " << std::endl;
    exit(0);
  }
  
  // open the file and put the truth data into a vector
  line = "";
  if (swMuonFile.is_open()){
    
    int eventNumber;
    int BX;
    while (std::getline(swMuonFile, line)) {
      std::string newString(line);
      // create a new event
      if (newString.substr(0,5) == "Begin"){
	std::vector<std::string> values;
	split(newString,' ',values);
	eventNumber = std::atoi(keepOnlyDigits( values.at(2)).c_str() ) + (batchNumber * 100);
	if (eventNumber > events.size()) break;
      }

      if (newString.substr(0,5) == "MuonB" or
	  newString.substr(0,5) == "MuonO" or
	  newString.substr(0,5) == "MuonE" or
	  newString.substr(0,5) == "Empty"){
       	SwMuon newMuon;
	newMuon.BX = eventNumber;
	decode_sw_muon_data(newString, newMuon);
	if (newMuon.valid)
	  events[eventNumber-1].swMuons.push_back(newMuon);
      }
    }
  }
  swMuonFile.close();

  if (debug) std::cout << "End reading SwMuon file" << std::endl;

  if (debug) std::cout << "Begin reading HwMuon file" << std::endl;

  // step 5: read the Hw muons
  std::ifstream hwMuonFile(hwMuon.c_str());
  
  if (!hwMuonFile) {
    std::cout << "File does not exist: " << hwMuon << std::endl;
    std::cout << "Exiting. " << std::endl;
    exit(0);
  }
  
  // open the file and put the truth data into a vector
  line = "";
  if (hwMuonFile.is_open()){
    
    int eventNumber;
    int BX;
    while (std::getline(hwMuonFile, line)) {
      std::string newString(line);
      // create a new event
      if (newString.substr(0,5) == "Begin"){
	std::vector<std::string> values;
	split(newString,' ',values);
	eventNumber = std::atoi(keepOnlyDigits( values.at(2)).c_str() ) + (batchNumber * 100);
	if (eventNumber > events.size()) break;
      }

      // std::cout << "Checking substring " << newString.substr(0,5) << std::endl;
      if (newString.substr(0,5) == "MuonB" or
	  newString.substr(0,5) == "MuonO" or
	  newString.substr(0,5) == "MuonE" or
	  newString.substr(0,5) == "Empty"){
       	HwMuon newMuon;
	newMuon.hwBX = std::bitset<3>(eventNumber).to_ulong();
	decode_hw_muon_data(newString, newMuon);
	
	// if (newMuon.hwValid)
	events[eventNumber-1].hwMuons.push_back(newMuon);
      }
    }
  }
  hwMuonFile.close();

  if (debug) std::cout << "End reading HwMuon file" << std::endl;
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


float rinv2pt(const float& rinv)
{
  /* Convert rinv to pT 
     pt = (0.3*3.8/100.0)/irinv
  */
  float pt(-999.);
  float r = (rinv>0) ? rinv : -rinv;
  pt = 0.0114 / r;
  return pt;
}


float sinhEta2eta(const float& sinhEta)
{
  /* Convert sinhEta to eta */
  float eta(-999.);
  eta = log( sinhEta + sqrt(1+pow(sinhEta,2)) );
  return eta;
}


void isNegative(std::string& bit_value, bool& isNeg)
{
  /* Convert string of signed bit value to unsigned */
  isNeg = false;
  const char bit_value_0 = bit_value[0];
  if (bit_value_0 == '1'){
    bit_value = bit_value.replace(0,1,"0");
    isNeg = true;
  }
  return;
}

void decode_sw_track_data(const std::string &data_sw, SwTrack& in_track_sw)
{
  std::vector<std::string> values_sw;
  split(data_sw,' ',values_sw);
  
  // setup Rinv
  float rinv    = std::atof(values_sw.at(1).c_str());
  float sinhEta = std::atof(values_sw.at(3).c_str());

  in_track_sw.rinv = rinv;
  in_track_sw.pt  = rinv2pt(rinv);           // 1.360636778;
  in_track_sw.sinhEta = sinhEta;
  in_track_sw.eta = sinhEta2eta(sinhEta);    //-2.265;
  in_track_sw.phi = std::atof(values_sw.at(2).c_str()); // 1.26735;
  in_track_sw.z0  = std::atof(values_sw.at(4).c_str()); //-4.72;
  in_track_sw.q   = (rinv>0) ? 1 : -1;       //-1;
  in_track_sw.valid = in_track_sw.pt > 0;
  in_track_sw.sector = std::atoi(values_sw.at(11).c_str());
}

void decode_hw_track_data(const std::string &data_fw, HwTrack& in_track_hw)
{
  bool debug_hw_track(false);

  std::vector<std::string> values_fw;
  split(data_fw,' ',values_fw);
  // for (unsigned int iData = 0; iData < values_fw.size(); iData++){
  //   std::cout << "dump data " << iData << " " << values_fw[iData] << std::endl;
  // }

  // setup the charge
  in_track_hw.hwQ = values_fw.at(1)[0];
  if (debug_hw_track) std::cout << " Looping over data - hwQ = " << in_track_hw.hwQ << std::endl;
  
  // setup Rinv (signed)
  std::string rinv_str = "0" + values_fw.at(1).substr(1,14);
  in_track_hw.hwRinv = std::bitset<15>(rinv_str).to_ulong();   
  if (debug_hw_track) std::cout << " Looping over data - hwRinv = " << rinv_str << " " <<in_track_hw.hwRinv << std::endl;

  // setup sinhEta
  bool isNegativeEta(false);
  std::string eta_str = values_fw.at(3);
  isNegative(eta_str, isNegativeEta);
  in_track_hw.hwSinhEta = std::bitset<14>(eta_str).to_ulong();   //std::stoi(values_fw.at(3).c_str(),NULL,2);
  if (isNegativeEta) in_track_hw.hwSinhEta *= -1;
  
  if (debug_hw_track) std::cout << " Looping over data - hwSinhEta = " << in_track_hw.hwSinhEta << std::endl;
  
  // setup phi0
  bool isNegativePhi(false);
  std::string phi_str = values_fw.at(2);
  isNegative(phi_str, isNegativePhi);
  in_track_hw.hwPhi = std::bitset<19>(phi_str).to_ulong();   //std::stoi(values_fw.at(2).c_str(),NULL,2);
  if (isNegativePhi) in_track_hw.hwPhi *= -1;
  
  if (debug_hw_track) std::cout << " Looping over data - hwPhi = " << in_track_hw.hwPhi << std::endl;
  
  // setup z0
  bool isNegativeZ0(false);
  std::string z0_str = values_fw.at(4);
  isNegative(z0_str, isNegativeZ0);
  in_track_hw.hwZ0 = std::bitset<12>(z0_str).to_ulong();   //std::stoi(values_fw.at(4).c_str(),NULL,2);
  if (isNegativeZ0) in_track_hw.hwZ0 *= -1;
  
  if (debug_hw_track) std::cout << " Looping over data - hwZ0 = " << in_track_hw.hwZ0 << std::endl;

  // sector and valid 
  in_track_hw.hwSector = std::atoi(values_fw.at(11).c_str());
  in_track_hw.hwValid = std::bitset<1>(rinv_str != "000000000000000").to_ulong();
}

void decode_sw_muon_data(const std::string &data_sw, SwMuon& in_muon_sw)
{
  std::vector<std::string> values_sw;
  split(data_sw,' ',values_sw);

  // note that even empty muons must have some kind of data in them, i.e. 
  // all members set to 0!
  in_muon_sw.pt  = std::atof(values_sw.at(1).c_str());
  in_muon_sw.eta = std::atof(values_sw.at(2).c_str());
  // keep in mind that muon phi is from 0 to 2pi
  in_muon_sw.phi = normalizePhi(std::atof(values_sw.at(3).c_str()));
  in_muon_sw.q   = std::atoi(values_sw.at(4).c_str());
  in_muon_sw.valid = int(in_muon_sw.pt > 0);
}

void decode_hw_muon_data(const std::string &data_fw, HwMuon& in_muon_hw)
{
  std::vector<std::string> values_fw;
  split(data_fw,' ',values_fw);

  // muon 1 or muon 2?
  std::string muonword = values_fw.at(0);
  int iMuon = std::atoi( &muonword.at(5) );

  std::string dataword = values_fw.at(1);

  // split up in 3 frames 
  std::string frame3 = dataword.substr(0,32);
  std::string frame2 = dataword.substr(32,32);
  std::string frame1 = dataword.substr(64,32);

  // note that here, you must be careful with how the information is encoded
  /* now insert the bits into the datawords

   96-bit words look like
   frame3-frame2-frame1
   
   // first muon
   first frame:
   BX0 phi H/F eta qual pT
   31  30  22  21  12   8  0
   
   second frame:
   SE track addresses VCH CH
   31 30               1  0

   third frame:
   B0  Empty
   31   0                                                                                                                                                                                                   

   // seccond muon
   fourth frame:                                                                                                                                              
   B1 phi H/F eta qual pT                                                                                                                                     
   31  30  22  21  12   8  0                                                                                                                                                                                

   
   fifth frame:                                                                                                                                             
   B2 track addresses VCH CH                                                                                                                          
   31 30               1  0                                                                                                                                                                                
   
   sixth frame:                                                                                                                               
   Empty                                                                                                                                                    
   31   0                    
  */
  
  // it is slightly difference for the first muon than for the second muon
  // int B0, B1, B2, BX0, SE;
  std::string pt_str, eta_str, phi_str, q_str;
  pt_str = frame1.substr(23,9);
  eta_str = frame1.substr(10,10);
  phi_str = frame1.substr(1,9);
  q_str = frame2.substr(0,1);

  in_muon_hw.hwPt = std::bitset<9>(pt_str).to_ulong();
  in_muon_hw.hwEta = std::bitset<10>(eta_str).to_ulong();
  in_muon_hw.hwPhi = std::bitset<9>(phi_str).to_ulong();
  in_muon_hw.hwQ = std::bitset<1>(q_str).to_ulong();
  //in_muon_hw.hwValid = in_muon_hw.hwEta != 0 and in_muon_hw.hwPhi != 0 and in_muon_hw.hwQ != 0;

  if (false) {
    std::cout << "data_fw "  << data_fw << std::endl;
    std::cout << "dataword " << dataword << std::endl;
    std::cout << "frame 1: " << frame1 << std::endl;
    std::cout << "frame 2: " << frame2 << std::endl;
    std::cout << "frame 3: " << frame3 << std::endl;
    std::cout << "check muon data " 
	      << " pt "      << pt_str << " " 
	      << " eta "     << eta_str << " "
	      << " phi "     << phi_str << " "
	      << " q "       << q_str << std::endl;
  }
}


template <class T> 
T matchingTrack(const SimTrack& simTrack, const std::vector<T> collection)
{
  T matchingT;
  // find the best matching T
  for (unsigned iT = 0; iT < collection.size(); iT++){
    // relatively loose cut
    if (deltaR(collection[iT].eta, collection[iT].phi, simTrack.eta, simTrack.phi) < 0.2) {
      matchingT = collection[iT];
      break;
    }
  }
  return matchingT;
}

template <class T> 
T matchingPropTrack(const SimTrack& simTrack, const std::vector<T> collection)
{
  T matchingT;
  // find the best matching T
  for (unsigned iT = 0; iT < collection.size(); iT++){
    // relatively loose cut
    if (deltaR(collection[iT].propEta, collection[iT].propPhi, simTrack.eta, simTrack.phi) < 0.2) {
      matchingT = collection[iT];
      break;
    }
  }
  return matchingT;
}

void writeOutput(std::ofstream& output,		   
		   const Event& event)
{
  for (unsigned iSimTrack = 0; iSimTrack < event.simTracks.size(); iSimTrack++){
    output << "Event: " << event.eventNumber << ","
	   << " BX: " << event.BX << ","
	   << " pT: " << event.simTracks[iSimTrack].pt << "," 
	   << " eta: " << event.simTracks[iSimTrack].eta << ","
	   << " phi: " << event.simTracks[iSimTrack].phi << "," 
	   << " Q: " << event.simTracks[iSimTrack].q << ",";
    const SwTrack&     matchingSwTrack =         matchingTrack(    event.simTracks[iSimTrack], event.swTracks);
    const SwPropTrack& matchingSwPropTrack =     matchingPropTrack(event.simTracks[iSimTrack], event.swPropTracks);
    const SwMuon&      matchingSwMuon =          matchingTrack(    event.simTracks[iSimTrack], event.swMuons);
    const SwTrackMuon& matchingSwTrackMuon =     matchingTrack(    event.simTracks[iSimTrack], event.swTrackMuons);
    const SwTrackMuon& matchingSwPropTrackMuon = matchingTrack(    event.simTracks[iSimTrack], event.swPropTrackMuons);

    // base tracks
    output << matchingSwTrack << ",";
    output << matchingSwPropTrack << ",";
    // base muon
    output << matchingSwMuon << ",";
    // track-muons
    output << matchingSwTrackMuon << ",";
    output << matchingSwPropTrackMuon << ",";
    output << std::endl;

    // now print out the match information
    std::cout << "Event: " << event.eventNumber << ","
	      << " BX: " << event.BX << ","
	      << " pT: " << event.simTracks[iSimTrack].pt << "," 
	      << " eta: " << event.simTracks[iSimTrack].eta << ","
	      << " phi: " << event.simTracks[iSimTrack].phi << "," 
	      << " Q: " << event.simTracks[iSimTrack].q << std::endl;
    std::cout << "Matched SW Track " << matchingSwTrack << std::endl;
    std::cout << "Matched SW PropTrack " << matchingSwPropTrack << std::endl;
    std::cout << "Matched SW Muon " << matchingSwMuon << std::endl;
    std::cout << "Matched SW TrackMuon " << matchingSwTrackMuon << std::endl;
    std::cout << "Matched SW PropTrackMuon " << matchingSwPropTrackMuon << std::endl;
  }
}

float getPhiOffset(int sector, float offset)
{
  // calculate the global phi value
  // 0.23271056693 = 2. * M_PI / 27.
  return offset + (sector - 1 ) * 0.23271056693;
}

fphi_t getPhiOffsetBinary(int sector, float offset)
{
  return fphi_t(getPhiOffset(sector, offset));
}

// THE END
