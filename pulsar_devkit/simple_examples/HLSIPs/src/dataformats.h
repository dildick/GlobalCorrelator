#ifndef DATAFORMATS_H
#define DATAFORMATS_H

#include "ap_fixed.h"
#include "ap_int.h"
#include <stdlib.h>
#include <vector>
#include <sstream>
#include <bitset>

const int N_BINS_TRACK_INVPT = 15;
const int N_BINS_TRACK_PT = 12;
const int N_BINS_TRACK_ETA = 14;
const int N_BINS_TRACK_PHI = 19;
const int N_BINS_TRACK_Z0 = 11;

const int N_BINS_MUON_PT = 9;
const int N_BINS_MUON_ETA = 9;
const int N_BINS_MUON_PHI = 10;

typedef ap_int<15> invpt_t;  // inverse pt [1% at 100 GeV]
typedef ap_uint<15> pt_t;     // convert from RINV
typedef ap_int<14> eta_t;    // eta [sinh(eta) measure to 0.005]
typedef ap_int<19> phi_t;    // phi (50 micro-rad)
typedef ap_int<23> phiglobal_t;    // phi (50 micro-rad)
typedef ap_int<10> chisq_t;  // chi^2 (0 - 100; 0.1 steps)
typedef ap_uint<1> q_t;       // charge
typedef ap_int<11> z0_t;     // z0  (1 mm over +/-14.9 cm)
typedef ap_int<3> bx_t;     // z0  (1 mm over +/-14.9 cm)
typedef ap_uint<5> sector_t;

// before the decimal point, after the decimal point
typedef ap_fixed<24,2> finvpt_t;  // inverse pt [1% at 100 GeV]
typedef ap_fixed<12,9> fpt_t;     // 1/Rinv
typedef ap_fixed<14,4> feta_t;    // eta [sinh(eta) measure to 0.005]
typedef ap_fixed<19,3> fphi_t;    // phi (50 micro-rad)
typedef ap_fixed<23,3> fphiglobal_t;    // global phi (50 micro-rad)
typedef ap_fixed<10,7> fchisq_t;  // chi^2 (0 - 100; 0.1 steps) 
typedef ap_fixed<11,5> fz0_t;     // z0  (1 mm over +/-14.9 cm) 

typedef ap_fixed<10,4> feta_m;    // eta [sinh(eta) measure to 0.005]
typedef ap_fixed<9,3> fphi_m;    // phi (50 micro-rad)

// muon data
typedef ap_uint<9> pt_m;
typedef ap_int<9> eta_m; // muon eta goes from -2.4 to 2.4 
typedef ap_uint<10> phi_m; // muon phi goes from 0 to 2pi
typedef ap_uint<4> quality_m;

// dRcut
#define dRmax = 0.2

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
#define RINV_CONVERSION 792057              //1314229             // 1/0.000000760902077
#define INVRINV_CONVERSION 1262535E-12   //0.000001262538462  //original: 760902077E-15   

#define PT_CONVERSION 877192982456E-10  // 1/(0.01*0.3*3.8); 87719298E-6
#define INVPT_CONVERSION 114E-4
#define ETA_CONVERSION 512                  //855   // 1/0.0011698 = 854.84698
#define PHI_CONVERSION 211216               //original: 219037
#define Z_CONVERSION 17                     //original: 18 // 1/0.05615 = 17.81 -> 18
 // 0.000000760902077
#define INVETA_CONVERSION 19531261E-10      //original: 11698E-7
#define INVPHI_CONVERSION 47345E-10 // 4734119709E-15    //0.000004734119709  // original: 456544E-11
#define INVZ_CONVERSION 5859375E-8          //0.05859375 //original: 56152375E-9         //0.056152375

// Muon conversions
#define MUONPT_CONVERSION 0.5
#define MUONETA_CONVERSION 0.010875
#define MUONPHI_CONVERSION 0.010908

namespace{

fphi_t phiOffSetValues[27] = {
  -0.0387851, // 1
  0.193925, // 2
  0.426636, // 3
  0.659347, // 4
  0.892057, // 5
  1.124768, // 6
  1.357478, // 7
  1.590189, // 8
  1.822899, // 9
  2.055610, // 10
  2.288321, // 11
  2.521031, // 12
  2.753742, // 13
  2.986452, // 14
  -3.064022, // 15
  -2.831312, // 16
  -2.598601, // 17
  -2.365891, // 18
  -2.133180, // 19
  -1.900470, // 20
  -1.667759, // 21
  -1.435049, // 22
  -1.202338, // 23
  -0.969627, // 24
  -0.736917, // 25
  -0.504206, // 26
  -0.271496  // 27
};

float normalizePhi(float outPhi)
{
  float returnValue = outPhi;
  if (returnValue <= -M_PI)
    returnValue += 2*M_PI;
  if (returnValue > M_PI)
    returnValue -= 2*M_PI;
  return returnValue;
}

template<int N>
int from_twos_complement(int x) {
  return (x & (1<<(N-1))) ? (~(x-1) & ((1<<N)-1)) : x;
}

float getMuonPtFloat(int hwPt)
{
  return hwPt * MUONPT_CONVERSION;
}

float getMuonEtaFloat(int hwEta)
{
  return (1- 2*std::bitset<9>(hwEta)[8]) * from_twos_complement<9>(hwEta) * MUONETA_CONVERSION;
}

float getMuonPhiFloat(int hwPhi)
{
  return normalizePhi(hwPhi * MUONPHI_CONVERSION);
}
 
float getTrackPtFloat(int hwPt)
{
  return hwPt * INVPT_CONVERSION;
}

float getTrackEtaFloat(int hwEta)
{
  return hwEta * INVETA_CONVERSION;
}

float getTrackPhiFloat(int hwPhi)
{
  return normalizePhi(hwPhi * INVPHI_CONVERSION);
}

float getTrackEtaFloatFromSinhEta(eta_t hwSinhEta)
{
  feta_t absSinhEta;
  if (hwSinhEta<0){
    absSinhEta = (hwSinhEta+8192)*INVETA_CONVERSION;
  }
  else{
    absSinhEta = hwSinhEta*INVETA_CONVERSION;
  }
  feta_t inhwEta = asinh(absSinhEta);
  if (hwSinhEta<0) inhwEta*=-1;

  return inhwEta;
}

float getTrackPhiFloatFromLocalPhi(phi_t hwPhi, sector_t hwSector)
{
  fphi_t inhwPhi;
  if (hwPhi<0)
    inhwPhi = -1*(hwPhi+262144)*INVPHI_CONVERSION;
  else
    inhwPhi = hwPhi*INVPHI_CONVERSION;
  
  // convert to a global phi value
  fphi_t hwPhiGlobal = inhwPhi + phiOffSetValues[hwSector-1];
  return hwPhiGlobal;
}

}
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
  float sinhEta;
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
    sinhEta(0),
    eta(0),
    phi(0),
    z0(0),
    q(0),
    valid(0),
    BX(0),
    sector(0)
  {
  }
  bool operator==(const SwTrack& rhs) const
  {
    return (eta - rhs.eta)*(eta - rhs.eta) + normalizePhi(phi - rhs.phi)*normalizePhi(phi - rhs.phi) < 0.3*0.3;
  }
  bool operator<(const SwTrack& rhs) const
  {
    return eta<rhs.eta;
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
      sinhEta = ref.sinhEta;
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
  bool operator==(const SwMuon& rhs) const
  {
    return (eta - rhs.eta)*(eta - rhs.eta) + normalizePhi(phi - rhs.phi)*normalizePhi(phi - rhs.phi) < 0.3*0.3;
  }
  bool operator<(const SwMuon& rhs) const
  {
    return eta < rhs.eta;
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
  phiglobal_t hwPhiGlobal;
  z0_t hwZ0;  // same precision at eta_t (Accoring to Dan: z0 precision needed to get precision on eta, which derives from z0)
  sector_t hwSector;
  // test precision of z0 11 to 14 
  q_t hwQ;
  chisq_t hwX2;
  q_t hwValid;   // valid bit
  bx_t hwBX;    // bunch crossing 3-bit counter
  // constructor
  HwTrack() : 
    hwRinv(0),
    hwPt(0),
    hwSinhEta(0),  
    hwEta(0),
    hwPhi(0),
    hwPhiGlobal(0),
    hwZ0(0),
    hwSector(0),
    hwQ(0),
    hwX2(0),
    hwValid(0),
      hwBX(0)
  {
  }
  bool operator==(const HwTrack& rhs) const
  {
    float eta1 = getTrackEtaFloatFromSinhEta(hwSinhEta);
    float eta2 = getTrackEtaFloatFromSinhEta(rhs.hwSinhEta);
    float phi1 = getTrackPhiFloatFromLocalPhi(hwPhi, hwSector);
    float phi2 = getTrackPhiFloatFromLocalPhi(rhs.hwPhi, rhs.hwSector);
    float dR2 = (eta1 - eta2)*(eta1 - eta2) + normalizePhi(phi1 - phi2)*normalizePhi(phi1 - phi2);
    /*
    std::cout << "eta1 " << eta1 << std::endl;
    std::cout << "eta2 " << eta2 << std::endl;
    std::cout << "phi1 " << phi1 << std::endl;
    std::cout << "phi2 " << phi2 << std::endl;
    std::cout << "dR2 " << dR2 << std::endl << std::endl;
    */
    return dR2 < 0.3*0.3;
  }

  bool operator<(const HwTrack& rhs) const
  {
    return hwSinhEta < rhs.hwSinhEta;
  }
};

struct HwPropTrack : public HwTrack 
{
  eta_t hwPropEta;
  phiglobal_t hwPropPhi;
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
      hwPhiGlobal = ref.hwPhiGlobal;
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
    pt_m hwPt;
    eta_m hwEta;
    phi_m hwPhi;
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
  bool operator==(const HwMuon& rhs) const
  {
    float eta1 = getMuonEtaFloat(hwEta);
    float eta2 = getMuonEtaFloat(rhs.hwEta);
    float phi1 = getMuonPhiFloat(hwPhi);
    float phi2 = getMuonPhiFloat(rhs.hwPhi);
    return (eta1 - eta2)*(eta1 - eta2) + normalizePhi(phi1 - phi2)*normalizePhi(phi1 - phi2) < 0.3*0.3;
  }
  bool operator<(const HwMuon& rhs) const
  {
    float eta1 = getMuonEtaFloat(hwEta);
    float eta2 = getMuonEtaFloat(rhs.hwEta);
    return eta1 < eta2;
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
  // non-propagated track and muons
  std::vector<SwTrackMuon> swTrackMuons;
  // propagated track and muons
  std::vector<SwTrackMuon> swPropTrackMuons;

  std::vector<HwTrack> hwTracks;
  std::vector<HwPropTrack> hwPropTracks;
  std::vector<HwMuon> hwMuons;
  // non-propagated track and muons
  std::vector<HwTrackMuon> hwTrackMuons;
  // propagated track and muons
  std::vector<HwTrackMuon> hwPropTrackMuons;

  Event(){
    simTracks.clear();

    swTracks.clear();
    swPropTracks.clear();
    swMuons.clear();
    swTrackMuons.clear();
    swPropTrackMuons.clear();

    hwTracks.clear();
    hwPropTracks.clear();
    hwMuons.clear();
    hwTrackMuons.clear();
    hwPropTrackMuons.clear();
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
     /* << "rinv: " << rhs.rinv << ", " */
     /* << "sinhEta: " << rhs.sinhEta << ", " */
     << "eta: " << rhs.eta << ", "
     << "phi: " << rhs.phi << ", " 
     << "sector: " << rhs.sector << ","
     << "Q: " << rhs.q;
  return os;
}

std::ostream& operator << (std::ostream& os, const SwPropTrack& rhs)
{
  os << "pT: " << rhs.pt << ", " 
     /* << "sinhEta: " << rhs.sinhEta << ", " */
     /* << "eta: " << rhs.eta << ", " */
     /* << "phi: " << rhs.phi << ", "  */
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
  os << "pT: " << getTrackPtFloat(rhs.hwPt) << ", "
     << "eta: " << getTrackEtaFloat(rhs.hwEta) << ", "
     << "phi: " << getTrackPhiFloat(rhs.hwPhiGlobal) << ", "
     << "Z0: " << rhs.hwZ0*INVZ_CONVERSION << ", " 
     << "Q: " << 1- 2*rhs.hwQ << ", "
     << "HwValid: " << std::bitset<1>(rhs.hwValid) << ", "
     << "BX: " << std::bitset<3>(rhs.hwBX);
   return os;
}

std::ostream& operator << (std::ostream& os, const HwPropTrack& rhs)
{
  os << "pT: " << getTrackPtFloat(rhs.hwPt) << ", "
     << "eta: " << getTrackEtaFloat(rhs.hwPropEta) << ", "
     << "phi: " << getTrackPhiFloat(rhs.hwPropPhi) << ", "
     << "Z0: " << rhs.hwZ0*INVZ_CONVERSION << ", " 
     << "Q: " << 1- 2*rhs.hwQ << ", "
     << "HwValid: " << std::bitset<1>(rhs.hwValid) << ", "
     << "BX: " << std::bitset<3>(rhs.hwBX);
  return os;
}

std::ostream& operator << (std::ostream& os, const HwMuon& rhs)
{
  os << "pT: " << getMuonPtFloat(rhs.hwPt) << ", " 
     << "eta: " << getMuonEtaFloat(rhs.hwEta) << ", "
     << "phi: " << getMuonPhiFloat(rhs.hwPhi) << ", "
     << "Q: " << 1- 2*rhs.hwQ << ", "
     << "HwValid: " << std::bitset<1>(rhs.hwValid) << ", "
     << "BX: " << std::bitset<3>(rhs.hwBX);
   return os;
}

std::ostream& operator << (std::ostream& os, const HwTrackMuon& rhs)
{
  os << "pT: " << getTrackPtFloat(rhs.hwPt) << ", "
     << "eta: " << getMuonEtaFloat(rhs.hwEta) << ", "
     << "phi: " << getMuonPhiFloat(rhs.hwPhi) << ", "
     << "Q: " << 1- 2*rhs.hwQ << ", "
     << "HwValid: " << std::bitset<1>(rhs.hwValid) << ", "
     << "BX: " << std::bitset<3>(rhs.hwBX);
   return os;
}

std::ostream& operator << (std::ostream& os, const Event& rhs)
{
  os << "Event: " << rhs.eventNumber << ", " 
     << "BX: " << rhs.BX << ", " << std::endl
     << "SimTracks: " << rhs.simTracks.size() << std::endl;

  for (unsigned i=0; i<rhs.simTracks.size(); ++i){
    os << "  " << rhs.simTracks[i] << std::endl;
  }
  os << "SwTracks: " << rhs.swTracks.size() << std::endl;
  for (unsigned i=0; i<rhs.swTracks.size(); ++i){
    os << "  " << rhs.swTracks[i] << std::endl;
  }
  os << "HwTracks: " << rhs.hwTracks.size() << std::endl;
  for (unsigned i=0; i<rhs.hwTracks.size(); ++i) {
    os << "  " << rhs.hwTracks[i] << std::endl;
  }
  os << "SwPropTracks: " << rhs.swPropTracks.size() << std::endl;
  for (unsigned i=0; i<rhs.swPropTracks.size(); ++i) {
    os << "  " << rhs.swPropTracks[i] << std::endl;
  }
  os << "HwPropTracks: " << rhs.hwPropTracks.size() << std::endl;
  for (unsigned i=0; i<rhs.hwPropTracks.size(); ++i) {
    os << "  " << rhs.hwPropTracks[i] << std::endl;
  }
  os << "SwMuons: " << rhs.swMuons.size() << std::endl; 
  for (unsigned i=0; i<rhs.swMuons.size(); ++i) { 
    os << "  " << rhs.swMuons[i] << std::endl;
  }
  os << "HwMuons: " << rhs.hwMuons.size() << std::endl; 
  for (unsigned i=0; i<rhs.hwMuons.size(); ++i) { 
    os << "  " << rhs.hwMuons[i] << std::endl;
  }
  os << "SwTrackMuons: " << rhs.swTrackMuons.size() << std::endl; 
  for (unsigned i=0; i<rhs.swTrackMuons.size(); ++i) { 
    os << "  " << rhs.swTrackMuons[i] << std::endl;
  }
  os << "HwTrackMuons: " << rhs.hwTrackMuons.size() << std::endl; 
  for (unsigned i=0; i<rhs.hwTrackMuons.size(); ++i) { 
    os << "  " << rhs.hwTrackMuons[i] << std::endl;
  } 
  os << "SwPropTrackMuons: " << rhs.swPropTrackMuons.size() << std::endl; 
  for (unsigned i=0; i<rhs.swPropTrackMuons.size(); ++i) { 
    os << "  " << rhs.swPropTrackMuons[i] << std::endl;
  }
  os << "HwPropTrackMuons: " << rhs.hwPropTrackMuons.size() << std::endl; 
  for (unsigned i=0; i<rhs.hwPropTrackMuons.size(); ++i) { 
    os << "  " << rhs.hwPropTrackMuons[i] << std::endl;
  } 
  return os;  
}

}

#endif
