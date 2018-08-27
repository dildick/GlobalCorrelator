./runMainHLS.sh

#LUTs
vivado_hls run_hls_deta_LUT.tcl 
vivado_hls run_hls_delta_minus_LUT.tcl 
vivado_hls run_hls_delta_plus_LUT.tcl 

vivado_hls run_hls_delta_LUT.tcl 
vivado_hls run_hls_rinvToInvPt.tcl 
vivado_hls run_hls_rinvToPt.tcl 

vivado_hls run_hls_tanh.tcl 
vivado_hls run_hls_invCosh.tcl 
vivado_hls run_hls_arcsinh.tcl 

vivado_hls run_hls_phioffset.tcl 
