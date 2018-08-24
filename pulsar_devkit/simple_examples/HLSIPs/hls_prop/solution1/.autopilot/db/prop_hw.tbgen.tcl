set C_TypeInfoList {{ 
"prop_hw" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"in": [[], {"reference": "0"}] }, {"outEtaPhi": [[], {"reference": "1"}] }],[],""], 
"0": [ "HwTrack", {"struct": [[],[],[{ "hwRinv": [[16], "2"]},{ "hwPt": [[16], "3"]},{ "hwSinhEta": [[16], "4"]},{ "hwEta": [[16], "4"]},{ "hwPhi": [[32], "5"]},{ "hwPhiGlobal": [[32], "6"]},{ "hwZ0": [[16], "7"]},{ "hwSector": [[8], "8"]},{ "hwQ": [[8], "9"]},{ "hwX2": [[16], "10"]},{ "hwValid": [[8], "9"]},{ "hwBX": [[8], "11"]}],""]}], 
"5": [ "phi_t", {"typedef": [[[],"12"],""]}], 
"11": [ "bx_t", {"typedef": [[[],"13"],""]}], 
"10": [ "chisq_t", {"typedef": [[[],"14"],""]}], 
"14": [ "ap_int<10>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 10}}]],""]}}], 
"7": [ "z0_t", {"typedef": [[[],"15"],""]}], 
"15": [ "ap_int<11>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 11}}]],""]}}], 
"13": [ "ap_int<3>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 3}}]],""]}}], 
"8": [ "sector_t", {"typedef": [[[],"16"],""]}], 
"16": [ "ap_uint<5>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 5}}]],""]}}], 
"1": [ "etaphiglobal_t", {"typedef": [[[],"17"],""]}], 
"12": [ "ap_int<19>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 19}}]],""]}}], 
"6": [ "phiglobal_t", {"typedef": [[[],"18"],""]}], 
"18": [ "ap_int<23>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 23}}]],""]}}], 
"3": [ "pt_t", {"typedef": [[[],"19"],""]}], 
"19": [ "ap_uint<14>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 14}}]],""]}}], 
"9": [ "q_t", {"typedef": [[[],"20"],""]}], 
"20": [ "ap_uint<1>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 1}}]],""]}}], 
"17": [ "pair<ap_int<14>, ap_int<23> >", {"struct": [[],[{"_T1":[[],"21"]},{"_T2":[[],"18"]}],[{ "first": [[], "21"]},{ "second": [[], "18"]}],"22"]}], 
"21": [ "ap_int<14>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 14}}]],""]}}], 
"4": [ "eta_t", {"typedef": [[[],"21"],""]}], 
"2": [ "invpt_t", {"typedef": [[[],"23"],""]}], 
"23": [ "ap_int<15>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 15}}]],""]}}],
"22": ["std", ""]
}}
set moduleName prop_hw
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {prop_hw}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_hwRinv_V int 15 regular {pointer 0}  }
	{ in_hwPt_V int 14 unused {pointer 0}  }
	{ in_hwSinhEta_V int 14 regular {pointer 0}  }
	{ in_hwEta_V int 14 regular {pointer 1}  }
	{ in_hwPhi_V int 19 regular {pointer 0}  }
	{ in_hwPhiGlobal_V int 23 regular {pointer 1}  }
	{ in_hwZ0_V int 11 regular {pointer 0}  }
	{ in_hwSector_V int 5 regular {pointer 0}  }
	{ in_hwQ_V int 1 regular {pointer 0}  }
	{ in_hwX2_V int 10 unused {pointer 0}  }
	{ in_hwValid_V int 1 unused {pointer 0}  }
	{ in_hwBX_V int 3 unused {pointer 0}  }
	{ outEtaPhi_first_V int 14 regular {pointer 1}  }
	{ outEtaPhi_second_V int 23 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_hwRinv_V", "interface" : "wire", "bitwidth" : 15, "direction" : "READONLY", "bitSlice":[{"low":0,"up":14,"cElement": [{"cName": "in.hwRinv.V","cData": "int15","bit_use": { "low": 0,"up": 14},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwPt_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "in.hwPt.V","cData": "uint14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwSinhEta_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "in.hwSinhEta.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwEta_V", "interface" : "wire", "bitwidth" : 14, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "in.hwEta.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwPhi_V", "interface" : "wire", "bitwidth" : 19, "direction" : "READONLY", "bitSlice":[{"low":0,"up":18,"cElement": [{"cName": "in.hwPhi.V","cData": "int19","bit_use": { "low": 0,"up": 18},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwPhiGlobal_V", "interface" : "wire", "bitwidth" : 23, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":22,"cElement": [{"cName": "in.hwPhiGlobal.V","cData": "int23","bit_use": { "low": 0,"up": 22},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwZ0_V", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY", "bitSlice":[{"low":0,"up":10,"cElement": [{"cName": "in.hwZ0.V","cData": "int11","bit_use": { "low": 0,"up": 10},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwSector_V", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY", "bitSlice":[{"low":0,"up":4,"cElement": [{"cName": "in.hwSector.V","cData": "uint5","bit_use": { "low": 0,"up": 4},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwQ_V", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in.hwQ.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwX2_V", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "in.hwX2.V","cData": "int10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwValid_V", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in.hwValid.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "in_hwBX_V", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "in.hwBX.V","cData": "int3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "outEtaPhi_first_V", "interface" : "wire", "bitwidth" : 14, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "outEtaPhi.first.V","cData": "int14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "outEtaPhi_second_V", "interface" : "wire", "bitwidth" : 23, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":22,"cElement": [{"cName": "outEtaPhi.second.V","cData": "int23","bit_use": { "low": 0,"up": 22},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_hwRinv_V sc_in sc_lv 15 signal 0 } 
	{ in_hwPt_V sc_in sc_lv 14 signal 1 } 
	{ in_hwSinhEta_V sc_in sc_lv 14 signal 2 } 
	{ in_hwEta_V sc_out sc_lv 14 signal 3 } 
	{ in_hwEta_V_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ in_hwPhi_V sc_in sc_lv 19 signal 4 } 
	{ in_hwPhiGlobal_V sc_out sc_lv 23 signal 5 } 
	{ in_hwPhiGlobal_V_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ in_hwZ0_V sc_in sc_lv 11 signal 6 } 
	{ in_hwSector_V sc_in sc_lv 5 signal 7 } 
	{ in_hwQ_V sc_in sc_lv 1 signal 8 } 
	{ in_hwX2_V sc_in sc_lv 10 signal 9 } 
	{ in_hwValid_V sc_in sc_lv 1 signal 10 } 
	{ in_hwBX_V sc_in sc_lv 3 signal 11 } 
	{ outEtaPhi_first_V sc_out sc_lv 14 signal 12 } 
	{ outEtaPhi_first_V_ap_vld sc_out sc_logic 1 outvld 12 } 
	{ outEtaPhi_second_V sc_out sc_lv 23 signal 13 } 
	{ outEtaPhi_second_V_ap_vld sc_out sc_logic 1 outvld 13 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_hwRinv_V", "direction": "in", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "in_hwRinv_V", "role": "default" }} , 
 	{ "name": "in_hwPt_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_hwPt_V", "role": "default" }} , 
 	{ "name": "in_hwSinhEta_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_hwSinhEta_V", "role": "default" }} , 
 	{ "name": "in_hwEta_V", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_hwEta_V", "role": "default" }} , 
 	{ "name": "in_hwEta_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "in_hwEta_V", "role": "ap_vld" }} , 
 	{ "name": "in_hwPhi_V", "direction": "in", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "in_hwPhi_V", "role": "default" }} , 
 	{ "name": "in_hwPhiGlobal_V", "direction": "out", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "in_hwPhiGlobal_V", "role": "default" }} , 
 	{ "name": "in_hwPhiGlobal_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "in_hwPhiGlobal_V", "role": "ap_vld" }} , 
 	{ "name": "in_hwZ0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "in_hwZ0_V", "role": "default" }} , 
 	{ "name": "in_hwSector_V", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "in_hwSector_V", "role": "default" }} , 
 	{ "name": "in_hwQ_V", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_hwQ_V", "role": "default" }} , 
 	{ "name": "in_hwX2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "in_hwX2_V", "role": "default" }} , 
 	{ "name": "in_hwValid_V", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_hwValid_V", "role": "default" }} , 
 	{ "name": "in_hwBX_V", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "in_hwBX_V", "role": "default" }} , 
 	{ "name": "outEtaPhi_first_V", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "outEtaPhi_first_V", "role": "default" }} , 
 	{ "name": "outEtaPhi_first_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "outEtaPhi_first_V", "role": "ap_vld" }} , 
 	{ "name": "outEtaPhi_second_V", "direction": "out", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "outEtaPhi_second_V", "role": "default" }} , 
 	{ "name": "outEtaPhi_second_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "outEtaPhi_second_V", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "5", "8", "11", "14", "17", "20", "23", "26", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54"],
		"CDFG" : "prop_hw",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "in_hwRinv_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwPt_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwSinhEta_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwEta_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "in_hwPhi_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwPhiGlobal_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "in_hwZ0_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwSector_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwQ_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwX2_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwValid_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_hwBX_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "outEtaPhi_first_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "outEtaPhi_second_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "arcsinh_table10", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "5", "SubInstance" : "grp_arcsinh_fu_648", "Port" : "arcsinh_table10"}]},
		{"Name" : "p_anonymous_namespace", "Type" : "Memory", "Direction" : "I"},
		{"Name" : "rinvToInvPt_table9", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "2", "SubInstance" : "grp_rinvToInvPt_fu_641", "Port" : "rinvToInvPt_table9"}]},
		{"Name" : "deta_table8", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "20", "SubInstance" : "grp_deta_LUT_fu_690", "Port" : "deta_table8"}]},
		{"Name" : "cosh_table7", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "26", "SubInstance" : "grp_invCosh_1_fu_706", "Port" : "cosh_table7"}]},
		{"Name" : "delta_table5", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "11", "SubInstance" : "grp_delta_LUT_fu_663", "Port" : "delta_table5"}]},
		{"Name" : "delta_plus_table4", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "14", "SubInstance" : "grp_delta_plus_LUT_fu_672", "Port" : "delta_plus_table4"}]},
		{"Name" : "delta_minus_table3", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "17", "SubInstance" : "grp_delta_minus_LUT_fu_681", "Port" : "delta_minus_table3"}]},
		{"Name" : "tanh_table2", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "8", "SubInstance" : "grp_tanh_LUT_fu_656", "Port" : "tanh_table2"}]},
		{"Name" : "cosh_table1", "Type" : "Memory", "Direction" : "I",
			"SubConnect" : [
			{"ID" : "23", "SubInstance" : "grp_invCosh_fu_698", "Port" : "cosh_table1"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p_anonymous_namespace_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rinvToInvPt_fu_641", "Parent" : "0", "Child" : ["3", "4"],
		"CDFG" : "rinvToInvPt",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "rinvToInvPt_table9", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rinvToInvPt_fu_641.rinvToInvPt_table9_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rinvToInvPt_fu_641.prop_hw_mac_muladeOg_U4", "Parent" : "2"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_arcsinh_fu_648", "Parent" : "0", "Child" : ["6", "7"],
		"CDFG" : "arcsinh",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "arcsinh_table10", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arcsinh_fu_648.arcsinh_table10_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_arcsinh_fu_648.prop_hw_mul_mul_1cud_U1", "Parent" : "5"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_tanh_LUT_fu_656", "Parent" : "0", "Child" : ["9", "10"],
		"CDFG" : "tanh_LUT",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "tanh_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_LUT_fu_656.tanh_table2_U", "Parent" : "8"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_LUT_fu_656.prop_hw_mul_mul_1kbM_U16", "Parent" : "8"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_delta_LUT_fu_663", "Parent" : "0", "Child" : ["12", "13"],
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
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_LUT_fu_663.delta_table5_U", "Parent" : "11"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_LUT_fu_663.prop_hw_mul_mul_1g8j_U7", "Parent" : "11"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_delta_plus_LUT_fu_672", "Parent" : "0", "Child" : ["15", "16"],
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
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_plus_LUT_fu_672.delta_plus_table4_U", "Parent" : "14"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_plus_LUT_fu_672.prop_hw_mul_mul_1g8j_x_U10", "Parent" : "14"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_delta_minus_LUT_fu_681", "Parent" : "0", "Child" : ["18", "19"],
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
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_minus_LUT_fu_681.delta_minus_table3_U", "Parent" : "17"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_delta_minus_LUT_fu_681.prop_hw_mul_mul_1g8j_x_U13", "Parent" : "17"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_deta_LUT_fu_690", "Parent" : "0", "Child" : ["21", "22"],
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
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_deta_LUT_fu_690.deta_table8_U", "Parent" : "20"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_deta_LUT_fu_690.prop_hw_mul_mul_1g8j_x_U19", "Parent" : "20"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_fu_698", "Parent" : "0", "Child" : ["24", "25"],
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
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_fu_698.cosh_table1_U", "Parent" : "23"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_fu_698.prop_hw_mul_mul_1ocq_U25", "Parent" : "23"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_1_fu_706", "Parent" : "0", "Child" : ["27", "28"],
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
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_1_fu_706.cosh_table7_U", "Parent" : "26"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invCosh_1_fu_706.prop_hw_mul_mul_1ncg_U22", "Parent" : "26"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_dmul_64nsqcK_U28", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_dmul_64nsqcK_U29", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_dmul_64nsqcK_U30", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_dmul_64nsqcK_U31", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_dmul_64nsqcK_U32", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_dmul_64nsqcK_U33", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_dmul_64nsqcK_U34", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_dmul_64nsqcK_U35", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_dmul_64nsqcK_U36", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_sitodp_32rcU_U37", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_sitodp_32rcU_U38", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_sitodp_32rcU_U39", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_sitodp_64sc4_U40", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_sitodp_32rcU_U41", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_sitodp_64sc4_U42", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_sitodp_32rcU_U43", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_sitodp_32rcU_U44", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_sitodp_32rcU_U45", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_mul_6s_10tde_U46", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_mul_17ns_udo_U47", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_mul_19ns_vdy_U48", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_am_addmulwdI_U49", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_mul_mul_6xdS_U50", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_mul_mul_1yd2_U51", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_mul_mul_1zec_U52", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.prop_hw_mul_mul_1Aem_U53", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "57", "Max" : "57"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set Spec2ImplPortList { 
	in_hwRinv_V { ap_none {  { in_hwRinv_V in_data 0 15 } } }
	in_hwPt_V { ap_none {  { in_hwPt_V in_data 0 14 } } }
	in_hwSinhEta_V { ap_none {  { in_hwSinhEta_V in_data 0 14 } } }
	in_hwEta_V { ap_vld {  { in_hwEta_V out_data 1 14 }  { in_hwEta_V_ap_vld out_vld 1 1 } } }
	in_hwPhi_V { ap_none {  { in_hwPhi_V in_data 0 19 } } }
	in_hwPhiGlobal_V { ap_vld {  { in_hwPhiGlobal_V out_data 1 23 }  { in_hwPhiGlobal_V_ap_vld out_vld 1 1 } } }
	in_hwZ0_V { ap_none {  { in_hwZ0_V in_data 0 11 } } }
	in_hwSector_V { ap_none {  { in_hwSector_V in_data 0 5 } } }
	in_hwQ_V { ap_none {  { in_hwQ_V in_data 0 1 } } }
	in_hwX2_V { ap_none {  { in_hwX2_V in_data 0 10 } } }
	in_hwValid_V { ap_none {  { in_hwValid_V in_data 0 1 } } }
	in_hwBX_V { ap_none {  { in_hwBX_V in_data 0 3 } } }
	outEtaPhi_first_V { ap_vld {  { outEtaPhi_first_V out_data 1 14 }  { outEtaPhi_first_V_ap_vld out_vld 1 1 } } }
	outEtaPhi_second_V { ap_vld {  { outEtaPhi_second_V out_data 1 23 }  { outEtaPhi_second_V_ap_vld out_vld 1 1 } } }
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
