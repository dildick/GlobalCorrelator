#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("data_V", 11, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("res_V", 14, hls_out, 1, "ap_vld", "out_data", 1),
	Port_Property("res_V_ap_vld", 1, hls_out, 1, "ap_vld", "out_vld", 1),
};
const char* HLS_Design_Meta::dut_name = "deta_LUT<ap_fixed<11, 5, (ap_q_mode)5, (ap_o_mode)3, 0>, ap_fixed<14, 4, (ap_q_mode)5, (ap_o_mode)3, 0>, 1024>";
