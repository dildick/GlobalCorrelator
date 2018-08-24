set C_TypeInfoList {{ 
"match_prop_hw" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"inTrack": [[], {"reference": "0"}] }, {"inMuon": [[], {"reference": "1"}] }, {"outTrackMuon": [[], {"reference": "2"}] }],[],""], 
"2": [ "HwTrackMuon", {"struct": [[],[],[{ "hwPt": [[16], "3"]},{ "hwEta": [[16], "4"]},{ "hwPhi": [[16], "5"]},{ "hwQ": [[8], "6"]},{ "hwValid": [[8], "6"]},{ "hwBX": [[8], "7"]},{ "hwQuality": [[8], "8"]}],""]}], 
"5": [ "phi_m", {"typedef": [[[],"9"],""]}], 
"9": [ "ap_uint<10>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 10}}]],""]}}], 
"6": [ "q_t", {"typedef": [[[],"10"],""]}], 
"10": [ "ap_uint<1>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 1}}]],""]}}], 
"1": [ "HwMuon", {"struct": [[],[],[{ "hwPt": [[16], "11"]},{ "hwEta": [[16], "4"]},{ "hwPhi": [[16], "5"]},{ "hwQ": [[8], "6"]},{ "hwValid": [[8], "6"]},{ "hwBX": [[8], "7"]},{ "hwQuality": [[8], "8"]}],""]}], 
"7": [ "bx_t", {"typedef": [[[],"12"],""]}], 
"12": [ "ap_int<3>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 3}}]],""]}}], 
"3": [ "pt_t", {"typedef": [[[],"13"],""]}], 
"13": [ "ap_uint<14>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 14}}]],""]}}], 
"8": [ "quality_m", {"typedef": [[[],"14"],""]}], 
"14": [ "ap_uint<4>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 4}}]],""]}}], 
"0": [ "HwPropTrack", {"struct": [[],[],[{ "": [[], "15"]},{ "hwPropEta": [[16], "16"]},{ "hwPropPhi": [[32], "17"]}],""]}], 
"17": [ "phiglobal_t", {"typedef": [[[],"18"],""]}], 
"18": [ "ap_int<23>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 23}}]],""]}}], 
"16": [ "eta_t", {"typedef": [[[],"19"],""]}], 
"19": [ "ap_int<14>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 14}}]],""]}}], 
"11": [ "pt_m", {"typedef": [[[],"20"],""]}], 
"20": [ "ap_uint<9>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 9}}]],""]}}], 
"4": [ "eta_m", {"typedef": [[[],"21"],""]}], 
"21": [ "ap_int<9>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 9}}]],""]}}], 
"15": [ "HwTrack", {"struct": [[],[],[{ "hwRinv": [[16], "22"]},{ "hwPt": [[16], "3"]},{ "hwSinhEta": [[16], "16"]},{ "hwEta": [[16], "16"]},{ "hwPhi": [[32], "23"]},{ "hwPhiGlobal": [[32], "17"]},{ "hwZ0": [[16], "24"]},{ "hwSector": [[8], "25"]},{ "hwQ": [[8], "6"]},{ "hwX2": [[16], "26"]},{ "hwValid": [[8], "6"]},{ "hwBX": [[8], "7"]}],""]}], 
"23": [ "phi_t", {"typedef": [[[],"27"],""]}], 
"27": [ "ap_int<19>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 19}}]],""]}}], 
"26": [ "chisq_t", {"typedef": [[[],"28"],""]}], 
"24": [ "z0_t", {"typedef": [[[],"29"],""]}], 
"29": [ "ap_int<11>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 11}}]],""]}}], 
"25": [ "sector_t", {"typedef": [[[],"30"],""]}], 
"30": [ "ap_uint<5>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 5}}]],""]}}], 
"28": [ "ap_int<10>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 10}}]],""]}}], 
"22": [ "invpt_t", {"typedef": [[[],"31"],""]}], 
"31": [ "ap_int<15>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 15}}]],""]}}]
}}
set moduleName match_prop_hw
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {match_prop_hw}
set C_modelType { void 0 }
set C_modelArgList {
	{ inTrack_hwRinv_V int 15 unused {pointer 0}  }
	{ inTrack_hwPt_V int 14 regular {pointer 0}  }
	{ inTrack_hwSinhEta_V int 14 unused {pointer 0}  }
	{ inTrack_hwEta_V int 14 unused {pointer 0}  }
	{ inTrack_hwPhi_V int 19 unused {pointer 0}  }
	{ inTrack_hwPhiGlobal_V int 23 unused {pointer 0}  }
	{ inTrack_hwZ0_V int 11 unused {pointer 0}  }
	{ inTrack_hwSector_V int 5 unused {pointer 0}  }
	{ inTrack_hwQ_V int 1 regular {pointer 0}  }
	{ inTrack_hwX2_V int 10 unused {pointer 0}  }
	{ inTrack_hwValid_V int 1 unused {pointer 0}  }
	{ inTrack_hwBX_V int 3 regular {pointer 0}  }
	{ inTrack_hwPropEta_V int 14 regular {pointer 0}  }
	{ inTrack_hwPropPhi_V int 23 regular {pointer 0}  }
	{ inMuon_hwPt_V int 9 unused {pointer 0}  }
	{ inMuon_hwEta_V int 9 regular {pointer 0}  }
	{ inMuon_hwPhi_V int 10 regular {pointer 0}  }
	{ inMuon_hwQ_V int 1 unused {pointer 0}  }
	{ inMuon_hwValid_V int 1 unused {pointer 0}  }
	{ inMuon_hwBX_V int 3 unused {pointer 0}  }
	{ inMuon_hwQuality_V int 4 unused {pointer 0}  }
	{ outTrackMuon_hwPt_V int 14 regular {pointer 1}  }
	{ outTrackMuon_hwEta_V int 9 regular {pointer 1}  }
	{ outTrackMuon_hwPhi_V int 10 regular {pointer 1}  }
	{ outTrackMuon_hwQ_V int 1 regular {pointer 1}  }
	{ outTrackMuon_hwValid_V int 1 regular {pointer 1}  }
	{ outTrackMuon_hwBX_V int 3 regular {pointer 1}  }
	{ outTrackMuon_hwQuality_V int 4 unused {pointer 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "inTrack_hwRinv_V", "interface" : "wire", "bitwidth" : 15, "direction" : "READONLY", "bitSlice":[{"low":0,"up":14,"cElement": [{"cName": "inTrack.hwRinv.V","cData": "int15","bit_use": { "low": 0,"up": 14},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwPt_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "inTrack.hwPt.V","cData": "uint14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwSinhEta_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "inTrack.hwSinhEta.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwEta_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "inTrack.hwEta.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwPhi_V", "interface" : "wire", "bitwidth" : 19, "direction" : "READONLY", "bitSlice":[{"low":0,"up":18,"cElement": [{"cName": "inTrack.hwPhi.V","cData": "int19","bit_use": { "low": 0,"up": 18},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwPhiGlobal_V", "interface" : "wire", "bitwidth" : 23, "direction" : "READONLY", "bitSlice":[{"low":0,"up":22,"cElement": [{"cName": "inTrack.hwPhiGlobal.V","cData": "int23","bit_use": { "low": 0,"up": 22},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwZ0_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "inTrack.hwZ0.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwSector_V", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY", "bitSlice":[{"low":0,"up":4,"cElement": [{"cName": "inTrack.hwSector.V","cData": "uint5","bit_use": { "low": 0,"up": 4},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwQ_V", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "inTrack.hwQ.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwX2_V", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "inTrack.hwX2.V","cData": "int10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwValid_V", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "inTrack.hwValid.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwBX_V", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "inTrack.hwBX.V","cData": "int3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwPropEta_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "inTrack.hwPropEta.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inTrack_hwPropPhi_V", "interface" : "wire", "bitwidth" : 23, "direction" : "READONLY", "bitSlice":[{"low":0,"up":22,"cElement": [{"cName": "inTrack.hwPropPhi.V","cData": "int23","bit_use": { "low": 0,"up": 22},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inMuon_hwPt_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY", "bitSlice":[{"low":0,"up":8,"cElement": [{"cName": "inMuon.hwPt.V","cData": "uint9","bit_use": { "low": 0,"up": 8},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inMuon_hwEta_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY", "bitSlice":[{"low":0,"up":8,"cElement": [{"cName": "inMuon.hwEta.V","cData": "int9","bit_use": { "low": 0,"up": 8},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inMuon_hwPhi_V", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "inMuon.hwPhi.V","cData": "uint10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inMuon_hwQ_V", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "inMuon.hwQ.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inMuon_hwValid_V", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "inMuon.hwValid.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inMuon_hwBX_V", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "inMuon.hwBX.V","cData": "int3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inMuon_hwQuality_V", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "inMuon.hwQuality.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "outTrackMuon_hwPt_V", "interface" : "wire", "bitwidth" : 14, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "outTrackMuon.hwPt.V","cData": "uint14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "outTrackMuon_hwEta_V", "interface" : "wire", "bitwidth" : 9, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":8,"cElement": [{"cName": "outTrackMuon.hwEta.V","cData": "int9","bit_use": { "low": 0,"up": 8},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "outTrackMuon_hwPhi_V", "interface" : "wire", "bitwidth" : 10, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "outTrackMuon.hwPhi.V","cData": "uint10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "outTrackMuon_hwQ_V", "interface" : "wire", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "outTrackMuon.hwQ.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "outTrackMuon_hwValid_V", "interface" : "wire", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "outTrackMuon.hwValid.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "outTrackMuon_hwBX_V", "interface" : "wire", "bitwidth" : 3, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "outTrackMuon.hwBX.V","cData": "int3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "outTrackMuon_hwQuality_V", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "outTrackMuon.hwQuality.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 40
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ inTrack_hwRinv_V sc_in sc_lv 15 signal 0 } 
	{ inTrack_hwPt_V sc_in sc_lv 14 signal 1 } 
	{ inTrack_hwSinhEta_V sc_in sc_lv 14 signal 2 } 
	{ inTrack_hwEta_V sc_in sc_lv 14 signal 3 } 
	{ inTrack_hwPhi_V sc_in sc_lv 19 signal 4 } 
	{ inTrack_hwPhiGlobal_V sc_in sc_lv 23 signal 5 } 
	{ inTrack_hwZ0_V sc_in sc_lv 11 signal 6 } 
	{ inTrack_hwSector_V sc_in sc_lv 5 signal 7 } 
	{ inTrack_hwQ_V sc_in sc_lv 1 signal 8 } 
	{ inTrack_hwX2_V sc_in sc_lv 10 signal 9 } 
	{ inTrack_hwValid_V sc_in sc_lv 1 signal 10 } 
	{ inTrack_hwBX_V sc_in sc_lv 3 signal 11 } 
	{ inTrack_hwPropEta_V sc_in sc_lv 14 signal 12 } 
	{ inTrack_hwPropPhi_V sc_in sc_lv 23 signal 13 } 
	{ inMuon_hwPt_V sc_in sc_lv 9 signal 14 } 
	{ inMuon_hwEta_V sc_in sc_lv 9 signal 15 } 
	{ inMuon_hwPhi_V sc_in sc_lv 10 signal 16 } 
	{ inMuon_hwQ_V sc_in sc_lv 1 signal 17 } 
	{ inMuon_hwValid_V sc_in sc_lv 1 signal 18 } 
	{ inMuon_hwBX_V sc_in sc_lv 3 signal 19 } 
	{ inMuon_hwQuality_V sc_in sc_lv 4 signal 20 } 
	{ outTrackMuon_hwPt_V sc_out sc_lv 14 signal 21 } 
	{ outTrackMuon_hwPt_V_ap_vld sc_out sc_logic 1 outvld 21 } 
	{ outTrackMuon_hwEta_V sc_out sc_lv 9 signal 22 } 
	{ outTrackMuon_hwEta_V_ap_vld sc_out sc_logic 1 outvld 22 } 
	{ outTrackMuon_hwPhi_V sc_out sc_lv 10 signal 23 } 
	{ outTrackMuon_hwPhi_V_ap_vld sc_out sc_logic 1 outvld 23 } 
	{ outTrackMuon_hwQ_V sc_out sc_lv 1 signal 24 } 
	{ outTrackMuon_hwQ_V_ap_vld sc_out sc_logic 1 outvld 24 } 
	{ outTrackMuon_hwValid_V sc_out sc_lv 1 signal 25 } 
	{ outTrackMuon_hwValid_V_ap_vld sc_out sc_logic 1 outvld 25 } 
	{ outTrackMuon_hwBX_V sc_out sc_lv 3 signal 26 } 
	{ outTrackMuon_hwBX_V_ap_vld sc_out sc_logic 1 outvld 26 } 
	{ outTrackMuon_hwQuality_V sc_in sc_lv 4 signal 27 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "inTrack_hwRinv_V", "direction": "in", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "inTrack_hwRinv_V", "role": "default" }} , 
 	{ "name": "inTrack_hwPt_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "inTrack_hwPt_V", "role": "default" }} , 
 	{ "name": "inTrack_hwSinhEta_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "inTrack_hwSinhEta_V", "role": "default" }} , 
 	{ "name": "inTrack_hwEta_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "inTrack_hwEta_V", "role": "default" }} , 
 	{ "name": "inTrack_hwPhi_V", "direction": "in", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "inTrack_hwPhi_V", "role": "default" }} , 
 	{ "name": "inTrack_hwPhiGlobal_V", "direction": "in", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "inTrack_hwPhiGlobal_V", "role": "default" }} , 
 	{ "name": "inTrack_hwZ0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "inTrack_hwZ0_V", "role": "default" }} , 
 	{ "name": "inTrack_hwSector_V", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "inTrack_hwSector_V", "role": "default" }} , 
 	{ "name": "inTrack_hwQ_V", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inTrack_hwQ_V", "role": "default" }} , 
 	{ "name": "inTrack_hwX2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "inTrack_hwX2_V", "role": "default" }} , 
 	{ "name": "inTrack_hwValid_V", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inTrack_hwValid_V", "role": "default" }} , 
 	{ "name": "inTrack_hwBX_V", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "inTrack_hwBX_V", "role": "default" }} , 
 	{ "name": "inTrack_hwPropEta_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "inTrack_hwPropEta_V", "role": "default" }} , 
 	{ "name": "inTrack_hwPropPhi_V", "direction": "in", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "inTrack_hwPropPhi_V", "role": "default" }} , 
 	{ "name": "inMuon_hwPt_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "inMuon_hwPt_V", "role": "default" }} , 
 	{ "name": "inMuon_hwEta_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "inMuon_hwEta_V", "role": "default" }} , 
 	{ "name": "inMuon_hwPhi_V", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "inMuon_hwPhi_V", "role": "default" }} , 
 	{ "name": "inMuon_hwQ_V", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inMuon_hwQ_V", "role": "default" }} , 
 	{ "name": "inMuon_hwValid_V", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inMuon_hwValid_V", "role": "default" }} , 
 	{ "name": "inMuon_hwBX_V", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "inMuon_hwBX_V", "role": "default" }} , 
 	{ "name": "inMuon_hwQuality_V", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inMuon_hwQuality_V", "role": "default" }} , 
 	{ "name": "outTrackMuon_hwPt_V", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "outTrackMuon_hwPt_V", "role": "default" }} , 
 	{ "name": "outTrackMuon_hwPt_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "outTrackMuon_hwPt_V", "role": "ap_vld" }} , 
 	{ "name": "outTrackMuon_hwEta_V", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "outTrackMuon_hwEta_V", "role": "default" }} , 
 	{ "name": "outTrackMuon_hwEta_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "outTrackMuon_hwEta_V", "role": "ap_vld" }} , 
 	{ "name": "outTrackMuon_hwPhi_V", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "outTrackMuon_hwPhi_V", "role": "default" }} , 
 	{ "name": "outTrackMuon_hwPhi_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "outTrackMuon_hwPhi_V", "role": "ap_vld" }} , 
 	{ "name": "outTrackMuon_hwQ_V", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "outTrackMuon_hwQ_V", "role": "default" }} , 
 	{ "name": "outTrackMuon_hwQ_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "outTrackMuon_hwQ_V", "role": "ap_vld" }} , 
 	{ "name": "outTrackMuon_hwValid_V", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "outTrackMuon_hwValid_V", "role": "default" }} , 
 	{ "name": "outTrackMuon_hwValid_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "outTrackMuon_hwValid_V", "role": "ap_vld" }} , 
 	{ "name": "outTrackMuon_hwBX_V", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "outTrackMuon_hwBX_V", "role": "default" }} , 
 	{ "name": "outTrackMuon_hwBX_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "outTrackMuon_hwBX_V", "role": "ap_vld" }} , 
 	{ "name": "outTrackMuon_hwQuality_V", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "outTrackMuon_hwQuality_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19"],
		"CDFG" : "match_prop_hw",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "inTrack_hwRinv_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwPt_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwSinhEta_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwEta_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwPhi_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwPhiGlobal_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwZ0_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwSector_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwQ_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwX2_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwValid_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwBX_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwPropEta_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inTrack_hwPropPhi_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inMuon_hwPt_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inMuon_hwEta_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inMuon_hwPhi_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inMuon_hwQ_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inMuon_hwValid_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inMuon_hwBX_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "inMuon_hwQuality_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "outTrackMuon_hwPt_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "outTrackMuon_hwEta_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "outTrackMuon_hwPhi_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "outTrackMuon_hwQ_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "outTrackMuon_hwValid_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "outTrackMuon_hwBX_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "outTrackMuon_hwQuality_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dadbkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dadbkb_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dadbkb_U3", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dadbkb_U4", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dmucud_U5", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dmucud_U6", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dmucud_U7", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dmucud_U8", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dcmdEe_U9", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dcmdEe_U10", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dcmdEe_U11", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_dcmdEe_U12", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_siteOg_U13", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_sitfYi_U14", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_siteOg_U15", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_siteOg_U16", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_mulg8j_U17", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_mulhbi_U18", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.match_prop_hw_mulibs_U19", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "45", "Max" : "45"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set Spec2ImplPortList { 
	inTrack_hwRinv_V { ap_none {  { inTrack_hwRinv_V in_data 0 15 } } }
	inTrack_hwPt_V { ap_none {  { inTrack_hwPt_V in_data 0 14 } } }
	inTrack_hwSinhEta_V { ap_none {  { inTrack_hwSinhEta_V in_data 0 14 } } }
	inTrack_hwEta_V { ap_none {  { inTrack_hwEta_V in_data 0 14 } } }
	inTrack_hwPhi_V { ap_none {  { inTrack_hwPhi_V in_data 0 19 } } }
	inTrack_hwPhiGlobal_V { ap_none {  { inTrack_hwPhiGlobal_V in_data 0 23 } } }
	inTrack_hwZ0_V { ap_none {  { inTrack_hwZ0_V in_data 0 11 } } }
	inTrack_hwSector_V { ap_none {  { inTrack_hwSector_V in_data 0 5 } } }
	inTrack_hwQ_V { ap_none {  { inTrack_hwQ_V in_data 0 1 } } }
	inTrack_hwX2_V { ap_none {  { inTrack_hwX2_V in_data 0 10 } } }
	inTrack_hwValid_V { ap_none {  { inTrack_hwValid_V in_data 0 1 } } }
	inTrack_hwBX_V { ap_none {  { inTrack_hwBX_V in_data 0 3 } } }
	inTrack_hwPropEta_V { ap_none {  { inTrack_hwPropEta_V in_data 0 14 } } }
	inTrack_hwPropPhi_V { ap_none {  { inTrack_hwPropPhi_V in_data 0 23 } } }
	inMuon_hwPt_V { ap_none {  { inMuon_hwPt_V in_data 0 9 } } }
	inMuon_hwEta_V { ap_none {  { inMuon_hwEta_V in_data 0 9 } } }
	inMuon_hwPhi_V { ap_none {  { inMuon_hwPhi_V in_data 0 10 } } }
	inMuon_hwQ_V { ap_none {  { inMuon_hwQ_V in_data 0 1 } } }
	inMuon_hwValid_V { ap_none {  { inMuon_hwValid_V in_data 0 1 } } }
	inMuon_hwBX_V { ap_none {  { inMuon_hwBX_V in_data 0 3 } } }
	inMuon_hwQuality_V { ap_none {  { inMuon_hwQuality_V in_data 0 4 } } }
	outTrackMuon_hwPt_V { ap_vld {  { outTrackMuon_hwPt_V out_data 1 14 }  { outTrackMuon_hwPt_V_ap_vld out_vld 1 1 } } }
	outTrackMuon_hwEta_V { ap_vld {  { outTrackMuon_hwEta_V out_data 1 9 }  { outTrackMuon_hwEta_V_ap_vld out_vld 1 1 } } }
	outTrackMuon_hwPhi_V { ap_vld {  { outTrackMuon_hwPhi_V out_data 1 10 }  { outTrackMuon_hwPhi_V_ap_vld out_vld 1 1 } } }
	outTrackMuon_hwQ_V { ap_vld {  { outTrackMuon_hwQ_V out_data 1 1 }  { outTrackMuon_hwQ_V_ap_vld out_vld 1 1 } } }
	outTrackMuon_hwValid_V { ap_vld {  { outTrackMuon_hwValid_V out_data 1 1 }  { outTrackMuon_hwValid_V_ap_vld out_vld 1 1 } } }
	outTrackMuon_hwBX_V { ap_vld {  { outTrackMuon_hwBX_V out_data 1 3 }  { outTrackMuon_hwBX_V_ap_vld out_vld 1 1 } } }
	outTrackMuon_hwQuality_V { ap_none {  { outTrackMuon_hwQuality_V in_data 0 4 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
