set C_TypeInfoList {{ 
"calc_phi_hw" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"hwPhi": [[],"0"] }, {"hwSector": [[],"1"] }, {"hwPhiGlobal": [[], {"reference": "2"}] }],[],""], 
"0": [ "phi_t", {"typedef": [[[],"3"],""]}], 
"3": [ "ap_int<19>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 19}}]],""]}}], 
"2": [ "phiglobal_t", {"typedef": [[[],"4"],""]}], 
"4": [ "ap_int<23>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 23}}]],""]}}], 
"1": [ "sector_t", {"typedef": [[[],"5"],""]}], 
"5": [ "ap_uint<5>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 5}}]],""]}}]
}}
set moduleName calc_phi_hw
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {calc_phi_hw}
set C_modelType { void 0 }
set C_modelArgList {
	{ hwPhi_V int 19 regular  }
	{ hwSector_V int 5 regular  }
	{ hwPhiGlobal_V int 23 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "hwPhi_V", "interface" : "wire", "bitwidth" : 19, "direction" : "READONLY", "bitSlice":[{"low":0,"up":18,"cElement": [{"cName": "hwPhi.V","cData": "int19","bit_use": { "low": 0,"up": 18},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "hwSector_V", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY", "bitSlice":[{"low":0,"up":4,"cElement": [{"cName": "hwSector.V","cData": "uint5","bit_use": { "low": 0,"up": 4},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "hwPhiGlobal_V", "interface" : "wire", "bitwidth" : 23, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":22,"cElement": [{"cName": "hwPhiGlobal.V","cData": "int23","bit_use": { "low": 0,"up": 22},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 10
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ hwPhi_V sc_in sc_lv 19 signal 0 } 
	{ hwSector_V sc_in sc_lv 5 signal 1 } 
	{ hwPhiGlobal_V sc_out sc_lv 23 signal 2 } 
	{ hwPhiGlobal_V_ap_vld sc_out sc_logic 1 outvld 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "hwPhi_V", "direction": "in", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "hwPhi_V", "role": "default" }} , 
 	{ "name": "hwSector_V", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "hwSector_V", "role": "default" }} , 
 	{ "name": "hwPhiGlobal_V", "direction": "out", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "hwPhiGlobal_V", "role": "default" }} , 
 	{ "name": "hwPhiGlobal_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "hwPhiGlobal_V", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "6", "7", "8"],
		"CDFG" : "calc_phi_hw",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "hwPhi_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "hwSector_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "hwPhiGlobal_V", "Type" : "Vld", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_phiOffSet_fu_150", "Parent" : "0", "Child" : ["2", "3", "4", "5"],
		"CDFG" : "phiOffSet",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "sector_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_phiOffSet_fu_150.phiOffSetValues_V_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_phiOffSet_fu_150.calc_phi_hw_dadd_cud_U1", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_phiOffSet_fu_150.calc_phi_hw_dmul_dEe_U2", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_phiOffSet_fu_150.calc_phi_hw_sitodeOg_U3", "Parent" : "1"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.calc_phi_hw_dmul_dEe_x_U6", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.calc_phi_hw_sitodeOg_x_U7", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.calc_phi_hw_am_adfYi_U8", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "46", "Max" : "46"}
	, {"Name" : "Interval", "Min" : "15", "Max" : "15"}
]}

set Spec2ImplPortList { 
	hwPhi_V { ap_none {  { hwPhi_V in_data 0 19 } } }
	hwSector_V { ap_none {  { hwSector_V in_data 0 5 } } }
	hwPhiGlobal_V { ap_vld {  { hwPhiGlobal_V out_data 1 23 }  { hwPhiGlobal_V_ap_vld out_vld 1 1 } } }
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
