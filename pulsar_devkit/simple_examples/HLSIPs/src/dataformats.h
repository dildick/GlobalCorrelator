#ifndef DATAFORMATS_H
#define DATAFORMATS_H

#include "ap_fixed.h"
#include "ap_int.h"
#include <stdlib.h>
#include <vector>
#include <sstream>
#include <bitset>

const int N_BINS_TRACK_INVPT = 15;
const int N_BINS_TRACK_PT = 15;
const int N_BINS_TRACK_ETA = 15;
const int N_BINS_TRACK_PHI = 19;
const int N_BINS_TRACK_X2 = 10;

typedef ap_int<15> invpt_t;  // inverse pt [1% at 100 GeV]
typedef ap_int<12> pt_t;     // convert from RINV
typedef ap_int<14> eta_t;    // eta [sinh(eta) measure to 0.005]
typedef ap_int<19> phi_t;    // phi (50 micro-rad)
typedef ap_int<10> chisq_t;  // chi^2 (0 - 100; 0.1 steps)
typedef ap_int<1> q_t;       // charge
typedef ap_int<11> z0_t;     // z0  (1 mm over +/-14.9 cm)
typedef ap_int<3> bx_t;     // z0  (1 mm over +/-14.9 cm)
typedef ap_int<5> sector_t;

// before the decimal point, after the decimal point
typedef ap_fixed<15,2> finvpt_t;  // inverse pt [1% at 100 GeV]
typedef ap_fixed<12,9> fpt_t;     // 1/Rinv
typedef ap_fixed<14,4> feta_t;    // eta [sinh(eta) measure to 0.005]
typedef ap_fixed<19,3> fphi_t;    // phi (50 micro-rad)
typedef ap_fixed<10,7> fchisq_t;  // chi^2 (0 - 100; 0.1 steps) 
typedef ap_fixed<11,5> fz0_t;     // z0  (1 mm over +/-14.9 cm) 

typedef ap_fixed<10,4> feta_m;    // eta [sinh(eta) measure to 0.005]
typedef ap_fixed<9,3> fphi_m;    // phi (50 micro-rad)

// muon data
typedef ap_int<9> pt_m;
typedef ap_int<10> eta_m;
typedef ap_int<9> phi_m;
typedef ap_int<4> quality_m;

// size of the LUTs
#define ETA_TABLE_SIZE 8192  // 13 unsigned bits
#define Z0_TABLE_SIZE 1024   // 10 unsigned bits

// range for LUTs
#define SINHETA_RANGE 6
#define ETA_RANGE 3
#define COSH_RANGE 3
#define Z0_RANGE 15
#define INV_SINHETA_RANGE 1/SINHETA_RANGE
#define INV_ETA_RANGE 1/ETA_RANGE
#define INV_COSH_RANGE 1/COSH_RANGE
#define INV_Z0_RANGE 1/Z0_RANGE

// Conversions between binary and floating point (using example file to derive)
#define RINV_CONVERSION 1314233             // 1/(76090E-11)
#define PT_CONVERSION 87719298E-6           // 1/(0.01*0.3*3.8); 87719298E-6
#define ETA_CONVERSION 855                  // 1/0.0011698 = 854.84698
#define PHI_CONVERSION 219037
#define Z_CONVERSION 18                     // 1/0.05615 = 17.81
#define INVRINV_CONVERSION 76090E-11
#define INVETA_CONVERSION 11698E-7
#define INVPHI_CONVERSION 456544E-11        // compare floating point and bit values from example file
#define INVZ_CONVERSION 5615E-5             // 0.05615 -- shift of 1024 for negative values!


// -- Define structs for physics objects in software
struct SimTrack {
  int index;
  float pt;
  float eta;
  float phi;
  int q;
  // constructor
  SimTrack() :
    index(0),
    pt(0),
    eta(0),
    phi(0),
    q(0)
  {
  }
};

struct SwTrack {
  int index;
  float rinv;
  float pt;
  float sinheta;
  float eta;
  float phi;
  float z0;
  int q;
  int valid;
  int BX;
  int sector;
  // constructor
  SwTrack() :
    index(0),
    rinv(0),
    pt(0),
    sinheta(0),
    eta(0),
    phi(0),
    z0(0),
    q(0),
    valid(0),
    BX(0),
    sector(0)
  {
  }
};

struct SwPropTrack : public SwTrack {
  float propEta;
  float propPhi;
  // constructor
  SwPropTrack() : 
    SwTrack(),
    propEta(0),
    propPhi(0)
  {
  }
  // copy constructor
  SwPropTrack(const SwTrack& ref)
    {
      index = ref.index;
      rinv = ref.rinv;
      pt = ref.pt;
      sinheta = ref.sinheta;
      eta = ref.eta;
      phi = ref.phi;
      z0 = ref.z0;
      q = ref.q;
      valid = ref.valid;
      BX = ref.BX;
      propEta = 0;
      propPhi = 0;
      sector = ref.sector;
    }
};

struct SwMuon {
  int index;
  float pt;
  float eta;
  float phi;
  int q;
  int valid;
  int BX;
  // constructor
  SwMuon() : 
    index(0),
    pt(0),
    eta(0),
    phi(0),
    q(0),
    valid(0),
    BX(0)
  {
  }
};

struct SwTrackMuon 
{
  int index;
  float pt;
  float eta;
  float phi;
  int q;
  int valid;   // valid bit
  int BX;    // bunch crossing
  // constructor
  SwTrackMuon() : 
    index(0),
    pt(0),
    eta(0),
    phi(0),
    q(0),
    valid(0),
    BX(0)
  {
  }
};


// -- Define structs for physics objects in hardware
struct HwTrack 
{
  invpt_t hwRinv;
  pt_t hwPt;
  eta_t hwSinhEta;
  eta_t hwEta;
  phi_t hwPhi;
  z0_t hwZ0;  // same precision at eta_t (Accoring to Dan: z0 precision needed to get precision on eta, which derives from z0)
  sector_t hwSector;
  // test precision of z0 11 to 14 
  q_t hwQ;
  chisq_t hwX2;
  q_t hwValid;   // valid bit
  bx_t hwBX;    // bunch crossing 3-bit counter
  bx_t hwBX2;    // bunch crossing 3-bit counter */
  bx_t hwBX3;    // bunch crossing 3-bit counter */
  bx_t hwBX4;    // bunch crossing 3-bit counter */
  // constructor
  HwTrack() : 
    hwRinv(0),
    hwPt(0),
    hwSinhEta(0),  
    hwEta(0),
    hwPhi(0),
    hwZ0(0),
    hwSector(0),
    hwQ(0),
    hwX2(0),
    hwValid(0),
      hwBX(0)
      , hwBX2(0)
      , hwBX3(0)
      , hwBX4(0) 
  {
  }
};

struct HwPropTrack : public HwTrack 
{
  eta_t hwPropEta;
  phi_t hwPropPhi;
  // constructor
 HwPropTrack() : 
  HwTrack(),
    hwPropEta(0),
    hwPropPhi(0)
      {
      }
  // copy constructor
  HwPropTrack(const HwTrack& ref)
    {
      hwRinv = ref.hwRinv;
      hwPt = ref.hwPt;
      hwSinhEta = ref.hwSinhEta;
      hwEta = ref.hwEta;
      hwPhi = ref.hwPhi;
      hwZ0 = ref.hwZ0;
      hwSector = ref.hwSector;
      hwQ = ref.hwQ;
      hwX2 = ref.hwX2;
      hwValid = ref.hwValid;
      hwBX = ref.hwBX;
      hwPropEta = 0;
      hwPropPhi = 0;
    }
};

struct HwMuon {
    pt_t hwPt;
    eta_t hwEta;
    phi_t hwPhi;
    q_t hwQ;
    q_t hwValid;   // valid bit
    bx_t hwBX;    // bunch crossing
  // constructor
  HwMuon() : 
    hwPt(0),
    hwEta(0),
    hwPhi(0),
    hwQ(0),
    hwValid(0),
    hwBX(0)
  {
  }
};

struct HwTrackMuon {
    pt_t hwPt;
    eta_m hwEta;
    phi_m hwPhi;
    q_t hwQ;
    q_t hwValid;   // valid bit
    bx_t hwBX;    // bunch crossing
  // constructor
  HwTrackMuon() : 
    hwPt(0),
    hwEta(0),
    hwPhi(0),
    hwQ(0),
    hwValid(0),
    hwBX(0)
  {
  }
};

struct Event 
{
  int eventNumber;
  int BX;
  std::vector<SimTrack> simTracks;

  std::vector<SwTrack> swTracks;
  std::vector<SwPropTrack> swPropTracks;
  std::vector<SwMuon> swMuons;
  std::vector<SwTrackMuon> swTrackMuons;

  std::vector<HwTrack> hwTracks;
  std::vector<HwPropTrack> hwPropTracks;
  std::vector<HwMuon> hwMuons;
  std::vector<HwTrackMuon> hwTrackMuons;

  Event(){
    simTracks.clear();

    swTracks.clear();
    swPropTracks.clear();
    swMuons.clear();
    swTrackMuons.clear();

    hwTracks.clear();
    hwPropTracks.clear();
    hwMuons.clear();
    hwTrackMuons.clear();
  }
};

namespace {

std::ostream& operator << (std::ostream& os, const SimTrack& rhs)
{
  os << "pT: " << rhs.pt << ", " 
     << "eta: " << rhs.eta << ", "
     << "phi: " << rhs.phi << ", " 
     << "Q: " << rhs.q;
  return os;
}

std::ostream& operator << (std::ostream& os, const SwTrack& rhs)
{
  os << "pT: " << rhs.pt << ", " 
     << "eta: " << rhs.eta << ", "
     << "phi: " << rhs.phi << ", " 
     << "sector: " << rhs.sector << ","
     << "Q: " << rhs.q;
  return os;
}

std::ostream& operator << (std::ostream& os, const SwPropTrack& rhs)
{
  os << "pT: " << rhs.pt << ", " 
     << "eta: " << rhs.eta << ", "
     << "phi: " << rhs.phi << ", " 
     << "eta_prop: " << rhs.propEta << ", " 
     << "phi_prop: " << rhs.propPhi << ", "
     << "sector: " << rhs.sector << ","
     << "Q: " << rhs.q;
  return os;
}

std::ostream& operator << (std::ostream& os, const SwMuon& rhs)
{
  os << "pT: " << rhs.pt << ", " 
     << "eta: " << rhs.eta << ", "
     << "phi: " << rhs.phi << ", " 
     << "Q: " << rhs.q;
  return os;
}

std::ostream& operator << (std::ostream& os, const SwTrackMuon& rhs)
{
  os << "pT: " << rhs.pt << ", " 
     << "eta: " << rhs.eta << ", "
     << "phi: " << rhs.phi << ", " 
     << "Q: " << rhs.q;
  return os;
}

std::ostream& operator << (std::ostream& os, const HwTrack& rhs)
{
  os << "Rinv: " << std::bitset<15>(rhs.hwRinv) << ", " 
     /* << "pT: " << std::bitset<12>(rhs.hwPt) << ", "  */
     << "sinhEta: " << std::bitset<14>(rhs.hwSinhEta) << ", "
     << "phi: " << std::bitset<19>(rhs.hwPhi) << ", " 
     << "Z0: " << std::bitset<11>(rhs.hwZ0) << ", " 
     << "Q: " << std::bitset<1>(rhs.hwQ) << ", "
     /* << "X2: " << std::bitset<10>(rhs.hwX2) << ", "  */
     << "HwValid: " << std::bitset<1>(rhs.hwValid) << ", "
     << "BX: " << std::bitset<3>(rhs.hwBX);
   return os;
}

std::ostream& operator << (std::ostream& os, const HwPropTrack& rhs)
{
  os << "Rinv: " << std::bitset<15>(rhs.hwRinv) << ", " 
     /* << "pT: " << std::bitset<12>(rhs.hwPt) << ", "  */
     << "sinhEta: " << std::bitset<14>(rhs.hwSinhEta) << ", "
     << "phi: " << std::bitset<19>(rhs.hwPhi) << ", " 
     << "eta_prop: " << std::bitset<14>(rhs.hwPropEta) << ", " 
     << "phi_prop: " << std::bitset<19>(rhs.hwPropPhi) << ", "
     << "Z0: " << std::bitset<11>(rhs.hwZ0) << ", " 
     << "Q: " << std::bitset<1>(rhs.hwQ) << ", "
     /* << "X2: " << std::bitset<10>(rhs.hwX2) << ", "  */
     << "HwValid: " << std::bitset<1>(rhs.hwValid) << ", "
     << "BX: " << std::bitset<3>(rhs.hwBX);
  return os;
}

std::ostream& operator << (std::ostream& os, const HwMuon& rhs)
{
  os << "pT: " << std::bitset<9>(rhs.hwPt) << ", " 
     << "eta: " << std::bitset<10>(rhs.hwEta) << ", "
     << "phi: " << std::bitset<9>(rhs.hwPhi) << ", " 
     << "Q: " << std::bitset<1>(rhs.hwQ) << ", "
     << "HwValid: " << std::bitset<1>(rhs.hwValid) << ", "
     << "BX: " << std::bitset<3>(rhs.hwBX);
   return os;
}

std::ostream& operator << (std::ostream& os, const HwTrackMuon& rhs)
{
  os << "pT: " << std::bitset<12>(rhs.hwPt) << ", " 
     << "eta: " << std::bitset<10>(rhs.hwEta) << ", "
     << "phi: " << std::bitset<9>(rhs.hwPhi) << ", " 
     << "Q: " << std::bitset<1>(rhs.hwQ) << ", "
     << "HwValid: " << std::bitset<1>(rhs.hwValid) << ", "
     << "BX: " << std::bitset<3>(rhs.hwBX);
   return os;
}

std::ostream& operator << (std::ostream& os, const Event& rhs)
{
  os << "Event: " << rhs.eventNumber << ", " 
     << "BX: " << rhs.BX << ", " << std::endl
     << "SimTracks: " << rhs.simTracks.size() << std::endl;
  for (unsigned i=0; i<rhs.simTracks.size(); ++i)
    os << "  " << rhs.simTracks[i] << std::endl;

  os << "SwTracks: " << rhs.swTracks.size() << std::endl;
  for (unsigned i=0; i<rhs.swTracks.size(); ++i){
    os << "  " << rhs.swTracks[i] << std::endl;
  }  
  os << "SwPropTracks: " << rhs.swPropTracks.size() << std::endl;
  for (unsigned i=0; i<rhs.swPropTracks.size(); ++i) {
    os << "  " << rhs.swPropTracks[i] << std::endl;
  }
  os << "SwMuons: " << rhs.swMuons.size() << std::endl; 
  for (unsigned i=0; i<rhs.swMuons.size(); ++i) { 
    os << "  " << rhs.swMuons[i] << std::endl;
  }
  os << "SwTrackMuons: " << rhs.swTrackMuons.size() << std::endl; 
  for (unsigned i=0; i<rhs.swTrackMuons.size(); ++i) { 
    os << "  " << rhs.swTrackMuons[i] << std::endl;
  } 
    
  os << "HwTracks: " << rhs.hwTracks.size() << std::endl;
  for (unsigned i=0; i<rhs.hwTracks.size(); ++i) {
    os << "  " << rhs.hwTracks[i] << std::endl;
  }
  os << "HwPropTracks: " << rhs.hwPropTracks.size() << std::endl;
  for (unsigned i=0; i<rhs.hwPropTracks.size(); ++i) {
    os << "  " << rhs.hwPropTracks[i] << std::endl;
  }
  os << "HwMuons: " << rhs.hwMuons.size() << std::endl; 
  for (unsigned i=0; i<rhs.hwMuons.size(); ++i) { 
    os << "  " << rhs.hwMuons[i] << std::endl;
  }
  os << "HwTrackMuons: " << rhs.hwTrackMuons.size() << std::endl; 
  for (unsigned i=0; i<rhs.hwTrackMuons.size(); ++i) { 
    os << "  " << rhs.hwTrackMuons[i] << std::endl;
  } 
  return os;  
}

}

#endif
