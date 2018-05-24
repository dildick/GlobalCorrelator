set C_TypeInfoList {{ 
"tkmu_simple_hw" : [[], {"return": [[],"0"] }, [{"ExternC" : 0}], [ {"in": [[], {"reference": "1"}] }],[],""], 
"1": [ "TkObj_tkmu", {"struct": [[{"pack": 0}],[],[{ "hwRinv": [[16], "2"]},{ "hwPt": [[16], "3"]},{ "hwSinhEta": [[16], "4"]},{ "hwEta": [[16], "4"]},{ "hwPhi": [[32], "5"]},{ "hwZ0": [[16], "6"]},{ "hwQ": [[8], "7"]},{ "hwX2": [[16], "8"]},{ "VALID": [[8], "7"]},{ "hwBX": [[8], "9"]}],""]}], 
"9": [ "bx_t", {"typedef": [[[],"10"],""]}], 
"8": [ "chisq_t", {"typedef": [[[],"11"],""]}], 
"10": [ "ap_int<3>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 3}}]],""]}}], 
"6": [ "z0_t", {"typedef": [[[],"12"],""]}], 
"5": [ "phi_t", {"typedef": [[[],"13"],""]}], 
"13": [ "ap_int<19>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 19}}]],""]}}], 
"2": [ "invpt_t", {"typedef": [[[],"14"],""]}], 
"0": [ "PropTkObj_tkmu", {"struct": [[{"pack": 0}],[],[{ "": [[], "1"]},{ "hwPropEta": [[16], "4"]},{ "hwPropPhi": [[32], "5"]}],""]}], 
"12": [ "ap_int<11>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 11}}]],""]}}], 
"7": [ "q_t", {"typedef": [[[],"15"],""]}], 
"15": [ "ap_int<1>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 1}}]],""]}}], 
"4": [ "eta_t", {"typedef": [[[],"16"],""]}], 
"14": [ "ap_int<15>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 15}}]],""]}}], 
"3": [ "pt_t", {"typedef": [[[],"17"],""]}], 
"17": [ "ap_int<12>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 12}}]],""]}}], 
"16": [ "ap_int<14>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 14}}]],""]}}], 
"11": [ "ap_int<10>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 10}}]],""]}}]
}}
set moduleName tkmu_simple_hw
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {tkmu_simple_hw}
set C_modelType { void 0 }
set C_modelArgList {
	{ agg_result_hwRinv_V int 15 regular {pointer 1}  }
	{ agg_result_hwPt_V int 12 regular {pointer 1}  }
	{ agg_result_hwSinhEta_V int 14 regular {pointer 1}  }
	{ agg_result_hwEta_V int 14 regular {pointer 1}  }
	{ agg_result_hwPhi_V int 19 regular {pointer 1}  }
	{ agg_result_hwZ0_V int 11 regular {pointer 1}  }
	{ agg_result_hwQ_V int 1 regular {pointer 1}  }
	{ agg_result_hwX2_V int 10 regular {pointer 1}  }
	{ agg_result_VALID_V int 1 regular {pointer 1}  }
	{ agg_result_hwBX_V int 3 regular {pointer 1}  }
	{ agg_result_hwPropEta_V int 14 regular {pointer 1}  }
	{ agg_result_hwPropPhi_V int 19 regular {pointer 1}  }
	{ in_hwRinv_V int 15 regular {pointer 0}  }
	{ in_hwPt_V int 12 unused {pointer 0}  }
	{ in_hwSinhEta_V int 14 regular {pointer 0}  }
	{ in_hwEta_V int 14 regular {pointer 1}  }
	{ in_hwPhi_V int 19 regular {pointer 0}  }
	{ in_hwZ0_V int 11 regular {pointer 0}  }
	{ in_hwQ_V int 1 regular {pointer 0}  }
	{ in_hwX2_V int 10 unused {pointer 0}  }
	{ in_VALID_V int 1 unused {pointer 0}  }
	{ in_hwBX_V int 3 unused {pointer 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "agg_result_hwRinv_V", "interface" : "wire", "bitwidth" : 15, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":14,"cElement": [{"cName": "agg.result.hwRinv.V","cData": "int15","bit_use": { "low": 0,"up": 14},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_hwPt_V", "interface" : "wire", "bitwidth" : 12, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":11,"cElement": [{"cName": "agg.result.hwPt.V","cData": "int12","bit_use": { "low": 0,"up": 11},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_hwSinhEta_V", "interface" : "wire", "bitwidth" : 14, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "agg.result.hwSinhEta.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_hwEta_V", "interface" : "wire", "bitwidth" : 14, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "agg.result.hwEta.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_hwPhi_V", "interface" : "wire", "bitwidth" : 19, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":18,"cElement": [{"cName": "agg.result.hwPhi.V","cData": "int19","bit_use": { "low": 0,"up": 18},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_hwZ0_V", "interface" : "wire", "bitwidth" : 11, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "agg.result.hwZ0.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_hwQ_V", "interface" : "wire", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "agg.result.hwQ.V","cData": "int1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_hwX2_V", "interface" : "wire", "bitwidth" : 10, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "agg.result.hwX2.V","cData": "int10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_VALID_V", "interface" : "wire", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "agg.result.VALID.V","cData": "int1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_hwBX_V", "interface" : "wire", "bitwidth" : 3, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "agg.result.hwBX.V","cData": "int3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_hwPropEta_V", "interface" : "wire", "bitwidth" : 14, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "agg.result.hwPropEta.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_hwPropPhi_V", "interface" : "wire", "bitwidth" : 19, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":18,"cElement": [{"cName": "agg.result.hwPropPhi.V","cData": "int19","bit_use": { "low": 0,"up": 18},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwRinv_V", "interface" : "wire", "bitwidth" : 15, "direction" : "READONLY", "bitSlice":[{"low":0,"up":14,"cElement": [{"cName": "in.hwRinv.V","cData": "int15","bit_use": { "low": 0,"up": 14},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwPt_V", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY", "bitSlice":[{"low":0,"up":11,"cElement": [{"cName": "in.hwPt.V","cData": "int12","bit_use": { "low": 0,"up": 11},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwSinhEta_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "in.hwSinhEta.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwEta_V", "interface" : "wire", "bitwidth" : 14, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "in.hwEta.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwPhi_V", "interface" : "wire", "bitwidth" : 19, "direction" : "READONLY", "bitSlice":[{"low":0,"up":18,"cElement": [{"cName": "in.hwPhi.V","cData": "int19","bit_use": { "low": 0,"up": 18},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwZ0_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "in.hwZ0.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwQ_V", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in.hwQ.V","cData": "int1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwX2_V", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "in.hwX2.V","cData": "int10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_VALID_V", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in.VALID.V","cData": "int1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwBX_V", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "in.hwBX.V","cData": "int3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 41
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ agg_result_hwRinv_V sc_out sc_lv 15 signal 0 } 
	{ agg_result_hwRinv_V_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ agg_result_hwPt_V sc_out sc_lv 12 signal 1 } 
	{ agg_result_hwPt_V_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ agg_result_hwSinhEta_V sc_out sc_lv 14 signal 2 } 
	{ agg_result_hwSinhEta_V_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ agg_result_hwEta_V sc_out sc_lv 14 signal 3 } 
	{ agg_result_hwEta_V_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ agg_result_hwPhi_V sc_out sc_lv 19 signal 4 } 
	{ agg_result_hwPhi_V_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ agg_result_hwZ0_V sc_out sc_lv 11 signal 5 } 
	{ agg_result_hwZ0_V_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ agg_result_hwQ_V sc_out sc_lv 1 signal 6 } 
	{ agg_result_hwQ_V_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ agg_result_hwX2_V sc_out sc_lv 10 signal 7 } 
	{ agg_result_hwX2_V_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ agg_result_VALID_V sc_out sc_lv 1 signal 8 } 
	{ agg_result_VALID_V_ap_vld sc_out sc_logic 1 outvld 8 } 
	{ agg_result_hwBX_V sc_out sc_lv 3 signal 9 } 
	{ agg_result_hwBX_V_ap_vld sc_out sc_logic 1 outvld 9 } 
	{ agg_result_hwPropEta_V sc_out sc_lv 14 signal 10 } 
	{ agg_result_hwPropEta_V_ap_vld sc_out sc_logic 1 outvld 10 } 
	{ agg_result_hwPropPhi_V sc_out sc_lv 19 signal 11 } 
	{ agg_result_hwPropPhi_V_ap_vld sc_out sc_logic 1 outvld 11 } 
	{ in_hwRinv_V sc_in sc_lv 15 signal 12 } 
	{ in_hwPt_V sc_in sc_lv 12 signal 13 } 
	{ in_hwSinhEta_V sc_in sc_lv 14 signal 14 } 
	{ in_hwEta_V sc_out sc_lv 14 signal 15 } 
	{ in_hwEta_V_ap_vld sc_out sc_logic 1 outvld 15 } 
	{ in_hwPhi_V sc_in sc_lv 19 signal 16 } 
	{ in_hwZ0_V sc_in sc_lv 11 signal 17 } 
	{ in_hwQ_V sc_in sc_lv 1 signal 18 } 
	{ in_hwX2_V sc_in sc_lv 10 signal 19 } 
	{ in_VALID_V sc_in sc_lv 1 signal 20 } 
	{ in_hwBX_V sc_in sc_lv 3 signal 21 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "agg_result_hwRinv_V", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "agg_result_hwRinv_V", "role": "default" }} , 
 	{ "name": "agg_result_hwRinv_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwRinv_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_hwPt_V", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "agg_result_hwPt_V", "role": "default" }} , 
 	{ "name": "agg_result_hwPt_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwPt_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_hwSinhEta_V", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "agg_result_hwSinhEta_V", "role": "default" }} , 
 	{ "name": "agg_result_hwSinhEta_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwSinhEta_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_hwEta_V", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "agg_result_hwEta_V", "role": "default" }} , 
 	{ "name": "agg_result_hwEta_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwEta_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_hwPhi_V", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "agg_result_hwPhi_V", "role": "default" }} , 
 	{ "name": "agg_result_hwPhi_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwPhi_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_hwZ0_V", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "agg_result_hwZ0_V", "role": "default" }} , 
 	{ "name": "agg_result_hwZ0_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwZ0_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_hwQ_V", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "agg_result_hwQ_V", "role": "default" }} , 
 	{ "name": "agg_result_hwQ_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwQ_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_hwX2_V", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "agg_result_hwX2_V", "role": "default" }} , 
 	{ "name": "agg_result_hwX2_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwX2_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_VALID_V", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "agg_result_VALID_V", "role": "default" }} , 
 	{ "name": "agg_result_VALID_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_VALID_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_hwBX_V", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "agg_result_hwBX_V", "role": "default" }} , 
 	{ "name": "agg_result_hwBX_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwBX_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_hwPropEta_V", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "agg_result_hwPropEta_V", "role": "default" }} , 
 	{ "name": "agg_result_hwPropEta_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwPropEta_V", "role": "ap_vld" }} , 
 	{ "name": "agg_result_hwPropPhi_V", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "agg_result_hwPropPhi_V", "role": "default" }} , 
 	{ "name": "agg_result_hwPropPhi_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_hwPropPhi_V", "role": "ap_vld" }} , 
 	{ "name": "in_hwRinv_V", "direction": "in", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "in_hwRinv_V", "role": "default" }} , 
 	{ "name": "in_hwPt_V", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "in_hwPt_V", "role": "default" }} , 
 	{ "name": "in_hwSinhEta_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_hwSinhEta_V", "role": "default" }} , 
 	{ "name": "in_hwEta_V", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_hwEta_V", "role": "default" }} , 
 	{ "name": "in_hwEta_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "in_hwEta_V", "role": "ap_vld" }} , 
 	{ "name": "in_hwPhi_V", "direction": "in", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "in_hwPhi_V", "role": "default" }} , 
 	{ "name": "in_hwZ0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "in_hwZ0_V", "role": "default" }} , 
 	{ "name": "in_hwQ_V", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_hwQ_V", "role": "default" }} , 
 	{ "name": "in_hwX2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "in_hwX2_V", "role": "default" }} , 
 	{ "name": "in_VALID_V", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_VALID_V", "role": "default" }} , 
 	{ "name": "in_hwBX_V", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in_hwBX_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "4", "7", "10", "13", "16", "19", "22", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37"],
		"CDFG" : "tkmu_simple_hw",
		"VariableLatency" : "1",
		"AlignedPipeline" : "0",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "agg_result_hwRinv_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_hwPt_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_hwSinhEta_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_hwEta_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_hwPhi_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_hwZ0_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_hwQ_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_hwX2_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_VALID_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_hwBX_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_hwPropEta_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "agg_result_hwPropPhi_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "in_hwRinv_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwPt_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwSinhEta_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwEta_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "in_hwPhi_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwZ0_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwQ_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwX2_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_VALID_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwBX_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "arcsinh_table9", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "4", "SubInstance" : "grp_arcsinh_fu_719", "Port" : "arcsinh_table9"}]},
		{"Name" : "deta_table8", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "16", "SubInstance" : "grp_deta_LUT_fu_754", "Port" : "deta_table8"}]},
		{"Name" : "cosh_table7", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "22", "SubInstance" : "grp_invCosh_1_fu_770", "Port" : "cosh_table7"}]},
		{"Name" : "delta_table5", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "7", "SubInstance" : "grp_delta_LUT_fu_727", "Port" : "delta_table5"}]},
		{"Name" : "delta_plus_table4", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "10", "SubInstance" : "grp_delta_plus_LUT_fu_736", "Port" : "delta_plus_table4"}]},
		{"Name" : "delta_minus_table3", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "13", "SubInstance" : "grp_delta_minus_LUT_fu_745", "Port" : "delta_minus_table3"}]},
		{"Name" : "tanh_table2", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "1", "SubInstance" : "grp_tanh_fu_712", "Port" : "tanh_table2"}]},
		{"Name" : "cosh_table1", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "19", "SubInstance" : "grp_invCosh_fu_762", "Port" : "cosh_table1"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_712", "Parent" : "0", "Child" : ["2", "3"],
		"CDFG" : "tanh",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "tanh_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_712.tanh_table2_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_712.tkmu_simple_hw_muhbi_U13", "Parent" : "1"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_arcsinh_fu_719", "Parent" : "0", "Child" : ["5", "6"],
		"CDFG" : "arcsinh",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "arcsinh_table9", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arcsinh_fu_719.arcsinh_table9_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arcsinh_fu_719.tkmu_simple_hw_mucud_U1", "Parent" : "4"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_delta_LUT_fu_727", "Parent" : "0", "Child" : ["8", "9"],
		"CDFG" : "delta_LUT",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "delta_table5", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_LUT_fu_727.delta_table5_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_LUT_fu_727.tkmu_simple_hw_mueOg_U4", "Parent" : "7"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_delta_plus_LUT_fu_736", "Parent" : "0", "Child" : ["11", "12"],
		"CDFG" : "delta_plus_LUT",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "delta_plus_table4", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_plus_LUT_fu_736.delta_plus_table4_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_plus_LUT_fu_736.tkmu_simple_hw_mueOg_x_U7", "Parent" : "10"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_delta_minus_LUT_fu_745", "Parent" : "0", "Child" : ["14", "15"],
		"CDFG" : "delta_minus_LUT",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "delta_minus_table3", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_minus_LUT_fu_745.delta_minus_table3_U", "Parent" : "13"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_minus_LUT_fu_745.tkmu_simple_hw_mueOg_x_U10", "Parent" : "13"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_deta_LUT_fu_754", "Parent" : "0", "Child" : ["17", "18"],
		"CDFG" : "deta_LUT",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "deta_table8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_deta_LUT_fu_754.deta_table8_U", "Parent" : "16"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_deta_LUT_fu_754.tkmu_simple_hw_mueOg_x_U16", "Parent" : "16"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_fu_762", "Parent" : "0", "Child" : ["20", "21"],
		"CDFG" : "invCosh",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "cosh_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_fu_762.cosh_table1_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_fu_762.tkmu_simple_hw_mulbW_U22", "Parent" : "19"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_1_fu_770", "Parent" : "0", "Child" : ["23", "24"],
		"CDFG" : "invCosh_1",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "cosh_table7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_1_fu_770.cosh_table7_U", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_1_fu_770.tkmu_simple_hw_mukbM_U19", "Parent" : "22"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_dmmb6_U25", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_sincg_U26", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_muocq_U27", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_mupcA_U28", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_muqcK_U29", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_mupcA_U30", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_murcU_U31", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_musc4_U32", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_matde_U33", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_muudo_U34", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_amvdy_U35", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_muwdI_U36", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tkmu_simple_hw_muxdS_U37", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "104", "Max" : "141"}
	, {"Name" : "Interval", "Min" : "105", "Max" : "142"}
]}

set Spec2ImplPortList { 
	agg_result_hwRinv_V { ap_vld {  { agg_result_hwRinv_V out_data 1 15 }  { agg_result_hwRinv_V_ap_vld out_vld 1 1 } } }
	agg_result_hwPt_V { ap_vld {  { agg_result_hwPt_V out_data 1 12 }  { agg_result_hwPt_V_ap_vld out_vld 1 1 } } }
	agg_result_hwSinhEta_V { ap_vld {  { agg_result_hwSinhEta_V out_data 1 14 }  { agg_result_hwSinhEta_V_ap_vld out_vld 1 1 } } }
	agg_result_hwEta_V { ap_vld {  { agg_result_hwEta_V out_data 1 14 }  { agg_result_hwEta_V_ap_vld out_vld 1 1 } } }
	agg_result_hwPhi_V { ap_vld {  { agg_result_hwPhi_V out_data 1 19 }  { agg_result_hwPhi_V_ap_vld out_vld 1 1 } } }
	agg_result_hwZ0_V { ap_vld {  { agg_result_hwZ0_V out_data 1 11 }  { agg_result_hwZ0_V_ap_vld out_vld 1 1 } } }
	agg_result_hwQ_V { ap_vld {  { agg_result_hwQ_V out_data 1 1 }  { agg_result_hwQ_V_ap_vld out_vld 1 1 } } }
	agg_result_hwX2_V { ap_vld {  { agg_result_hwX2_V out_data 1 10 }  { agg_result_hwX2_V_ap_vld out_vld 1 1 } } }
	agg_result_VALID_V { ap_vld {  { agg_result_VALID_V out_data 1 1 }  { agg_result_VALID_V_ap_vld out_vld 1 1 } } }
	agg_result_hwBX_V { ap_vld {  { agg_result_hwBX_V out_data 1 3 }  { agg_result_hwBX_V_ap_vld out_vld 1 1 } } }
	agg_result_hwPropEta_V { ap_vld {  { agg_result_hwPropEta_V out_data 1 14 }  { agg_result_hwPropEta_V_ap_vld out_vld 1 1 } } }
	agg_result_hwPropPhi_V { ap_vld {  { agg_result_hwPropPhi_V out_data 1 19 }  { agg_result_hwPropPhi_V_ap_vld out_vld 1 1 } } }
	in_hwRinv_V { ap_none {  { in_hwRinv_V in_data 0 15 } } }
	in_hwPt_V { ap_none {  { in_hwPt_V in_data 0 12 } } }
	in_hwSinhEta_V { ap_none {  { in_hwSinhEta_V in_data 0 14 } } }
	in_hwEta_V { ap_vld {  { in_hwEta_V out_data 1 14 }  { in_hwEta_V_ap_vld out_vld 1 1 } } }
	in_hwPhi_V { ap_none {  { in_hwPhi_V in_data 0 19 } } }
	in_hwZ0_V { ap_none {  { in_hwZ0_V in_data 0 11 } } }
	in_hwQ_V { ap_none {  { in_hwQ_V in_data 0 1 } } }
	in_hwX2_V { ap_none {  { in_hwX2_V in_data 0 10 } } }
	in_VALID_V { ap_none {  { in_VALID_V in_data 0 1 } } }
	in_hwBX_V { ap_none {  { in_hwBX_V in_data 0 3 } } }
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
