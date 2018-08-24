set C_TypeInfoList {{ 
"phiOffSet<ap_int_base<33, true, true>, ap_fixed<19, 3, (ap_q_mode)5, (ap_o_mode)3, 0> >" : [[{"data_T":[[],"0"]},{"res_T":[[],"1"]}], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"sector": [[],"0"] }, {"result": [[], {"reference": "1"}] }],[],""], 
"0": [ "ap_int_base<33, true, true>", {"struct": [[{"pack": 0}],[{"_AP_W":[[], {"scalar": { "int": 33}}]},{"_AP_S":[[], {"scalar": { "bool": 1}}]},{"_AP_C":[[], {"scalar": { "bool": 1}}]}],[{ "": [[], "2"]}],""]}], 
"1": [ "ap_fixed<19, 3, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 19}}],[[], {"scalar": { "int": 3}}],[[], {"scalar": { "3": 5}}],[[], {"scalar": { "4": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"3": [ "ap_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"4": [ "ap_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}], 
"2": [ "ssdm_int<33 + 1024 * 0, true>", {"struct": [[],[{"_AP_N":[[], {"scalar": { "int": 33}}]},{"_AP_S":[[], {"scalar": { "bool": 1}}]}],[{ "V": [[],  {"scalar": "int33"}]}],""]}]
}}
set moduleName phiOffSet
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {phiOffSet<ap_int_base<33, true, true>, ap_fixed<19, 3, (ap_q_mode)5, (ap_o_mode)3, 0> >}
set C_modelType { void 0 }
set C_modelArgList {
	{ sector_V int 33 regular  }
	{ result_V int 19 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "sector_V", "interface" : "wire", "bitwidth" : 33, "direction" : "READONLY", "bitSlice":[{"low":0,"up":32,"cElement": [{"cName": "sector.V","cData": "int33","bit_use": { "low": 0,"up": 32},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "result_V", "interface" : "wire", "bitwidth" : 19, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":18,"cElement": [{"cName": "result.V","cData": "int19","bit_use": { "low": 0,"up": 18},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 9
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ sector_V sc_in sc_lv 33 signal 0 } 
	{ result_V sc_out sc_lv 19 signal 1 } 
	{ result_V_ap_vld sc_out sc_logic 1 outvld 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "sector_V", "direction": "in", "datatype": "sc_lv", "bitwidth":33, "type": "signal", "bundle":{"name": "sector_V", "role": "default" }} , 
 	{ "name": "result_V", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "result_V", "role": "default" }} , 
 	{ "name": "result_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "result_V", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "phiOffSet",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "sector_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "result_V", "Type" : "Vld", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.phiOffSetValues_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.phiOffSet_dadd_64cud_U1", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.phiOffSet_dmul_64dEe_U2", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.phiOffSet_sitodp_eOg_U3", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "42", "Max" : "42"}
	, {"Name" : "Interval", "Min" : "15", "Max" : "15"}
]}

set Spec2ImplPortList { 
	sector_V { ap_none {  { sector_V in_data 0 33 } } }
	result_V { ap_vld {  { result_V out_data 1 19 }  { result_V_ap_vld out_vld 1 1 } } }
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
