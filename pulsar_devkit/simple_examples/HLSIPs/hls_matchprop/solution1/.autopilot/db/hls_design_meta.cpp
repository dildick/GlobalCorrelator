#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("inTrack_hwRinv_V", 15, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwPt_V", 14, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwSinhEta_V", 14, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwEta_V", 14, hls_in, 3, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwPhi_V", 19, hls_in, 4, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwPhiGlobal_V", 23, hls_in, 5, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwZ0_V", 11, hls_in, 6, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwSector_V", 5, hls_in, 7, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwQ_V", 1, hls_in, 8, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwX2_V", 10, hls_in, 9, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwValid_V", 1, hls_in, 10, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwBX_V", 3, hls_in, 11, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwPropEta_V", 14, hls_in, 12, "ap_none", "in_data", 1),
	Port_Property("inTrack_hwPropPhi_V", 23, hls_in, 13, "ap_none", "in_data", 1),
	Port_Property("inMuon_hwPt_V", 9, hls_in, 14, "ap_none", "in_data", 1),
	Port_Property("inMuon_hwEta_V", 9, hls_in, 15, "ap_none", "in_data", 1),
	Port_Property("inMuon_hwPhi_V", 10, hls_in, 16, "ap_none", "in_data", 1),
	Port_Property("inMuon_hwQ_V", 1, hls_in, 17, "ap_none", "in_data", 1),
	Port_Property("inMuon_hwValid_V", 1, hls_in, 18, "ap_none", "in_data", 1),
	Port_Property("inMuon_hwBX_V", 3, hls_in, 19, "ap_none", "in_data", 1),
	Port_Property("inMuon_hwQuality_V", 4, hls_in, 20, "ap_none", "in_data", 1),
	Port_Property("outTrackMuon_hwPt_V", 14, hls_out, 21, "ap_vld", "out_data", 1),
	Port_Property("outTrackMuon_hwPt_V_ap_vld", 1, hls_out, 21, "ap_vld", "out_vld", 1),
	Port_Property("outTrackMuon_hwEta_V", 9, hls_out, 22, "ap_vld", "out_data", 1),
	Port_Property("outTrackMuon_hwEta_V_ap_vld", 1, hls_out, 22, "ap_vld", "out_vld", 1),
	Port_Property("outTrackMuon_hwPhi_V", 10, hls_out, 23, "ap_vld", "out_data", 1),
	Port_Property("outTrackMuon_hwPhi_V_ap_vld", 1, hls_out, 23, "ap_vld", "out_vld", 1),
	Port_Property("outTrackMuon_hwQ_V", 1, hls_out, 24, "ap_vld", "out_data", 1),
	Port_Property("outTrackMuon_hwQ_V_ap_vld", 1, hls_out, 24, "ap_vld", "out_vld", 1),
	Port_Property("outTrackMuon_hwValid_V", 1, hls_out, 25, "ap_vld", "out_data", 1),
	Port_Property("outTrackMuon_hwValid_V_ap_vld", 1, hls_out, 25, "ap_vld", "out_vld", 1),
	Port_Property("outTrackMuon_hwBX_V", 3, hls_out, 26, "ap_vld", "out_data", 1),
	Port_Property("outTrackMuon_hwBX_V_ap_vld", 1, hls_out, 26, "ap_vld", "out_vld", 1),
	Port_Property("outTrackMuon_hwQuality_V", 4, hls_in, 27, "ap_none", "in_data", 1),
};
const char* HLS_Design_Meta::dut_name = "match_prop_hw";
