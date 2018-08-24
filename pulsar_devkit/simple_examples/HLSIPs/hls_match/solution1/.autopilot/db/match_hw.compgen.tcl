# This script segment is generated automatically by AutoPilot

set id 1
set name match_hw_dmul_64nbkb
set corename simcore_dmul
set op dmul
set stage_num 10
set max_latency -1
set registered_input 1
set impl_style max_dsp
set in0_width 64
set in0_signed 0
set in1_width 64
set in1_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_dmul] == "ap_gen_simcore_dmul"} {
eval "ap_gen_simcore_dmul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_dmul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op dmul
set corename DMul
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 3
set name match_hw_sitodp_3cud
set corename simcore_sitodp
set op sitodp
set stage_num 6
set max_latency -1
set registered_input 1
set in0_width 32
set in0_signed 1
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_sitodp] == "ap_gen_simcore_sitodp"} {
eval "ap_gen_simcore_sitodp { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_sitodp, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op sitodp
set corename Int2Double
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 5
set name match_hw_mul_10s_dEe
set corename simcore_mul
set op mul
set stage_num 3
set max_latency -1
set registered_input 1
set in0_width 10
set in0_signed 1
set in1_width 2
set in1_signed 1
set out_width 12
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name inTrack_hwRinv_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwRinv_V \
    op interface \
    ports { inTrack_hwRinv_V { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 7 \
    name inTrack_hwPt_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwPt_V \
    op interface \
    ports { inTrack_hwPt_V { I 14 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8 \
    name inTrack_hwSinhEta_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwSinhEta_V \
    op interface \
    ports { inTrack_hwSinhEta_V { I 14 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name inTrack_hwEta_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwEta_V \
    op interface \
    ports { inTrack_hwEta_V { I 14 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name inTrack_hwPhi_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwPhi_V \
    op interface \
    ports { inTrack_hwPhi_V { I 19 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
    name inTrack_hwPhiGlobal_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwPhiGlobal_V \
    op interface \
    ports { inTrack_hwPhiGlobal_V { I 23 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 12 \
    name inTrack_hwZ0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwZ0_V \
    op interface \
    ports { inTrack_hwZ0_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 13 \
    name inTrack_hwSector_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwSector_V \
    op interface \
    ports { inTrack_hwSector_V { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name inTrack_hwQ_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwQ_V \
    op interface \
    ports { inTrack_hwQ_V { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name inTrack_hwX2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwX2_V \
    op interface \
    ports { inTrack_hwX2_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 16 \
    name inTrack_hwValid_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwValid_V \
    op interface \
    ports { inTrack_hwValid_V { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 17 \
    name inTrack_hwBX_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inTrack_hwBX_V \
    op interface \
    ports { inTrack_hwBX_V { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name inMuon_hwPt_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inMuon_hwPt_V \
    op interface \
    ports { inMuon_hwPt_V { I 9 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name inMuon_hwEta_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inMuon_hwEta_V \
    op interface \
    ports { inMuon_hwEta_V { I 9 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name inMuon_hwPhi_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inMuon_hwPhi_V \
    op interface \
    ports { inMuon_hwPhi_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name inMuon_hwQ_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inMuon_hwQ_V \
    op interface \
    ports { inMuon_hwQ_V { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name inMuon_hwValid_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inMuon_hwValid_V \
    op interface \
    ports { inMuon_hwValid_V { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 23 \
    name inMuon_hwBX_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inMuon_hwBX_V \
    op interface \
    ports { inMuon_hwBX_V { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name inMuon_hwQuality_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_inMuon_hwQuality_V \
    op interface \
    ports { inMuon_hwQuality_V { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 25 \
    name outTrackMuon_hwPt_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_outTrackMuon_hwPt_V \
    op interface \
    ports { outTrackMuon_hwPt_V { O 14 vector } outTrackMuon_hwPt_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 26 \
    name outTrackMuon_hwEta_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_outTrackMuon_hwEta_V \
    op interface \
    ports { outTrackMuon_hwEta_V { O 9 vector } outTrackMuon_hwEta_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name outTrackMuon_hwPhi_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_outTrackMuon_hwPhi_V \
    op interface \
    ports { outTrackMuon_hwPhi_V { O 10 vector } outTrackMuon_hwPhi_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 28 \
    name outTrackMuon_hwQ_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_outTrackMuon_hwQ_V \
    op interface \
    ports { outTrackMuon_hwQ_V { O 1 vector } outTrackMuon_hwQ_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 29 \
    name outTrackMuon_hwValid_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_outTrackMuon_hwValid_V \
    op interface \
    ports { outTrackMuon_hwValid_V { O 1 vector } outTrackMuon_hwValid_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name outTrackMuon_hwBX_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_outTrackMuon_hwBX_V \
    op interface \
    ports { outTrackMuon_hwBX_V { O 3 vector } outTrackMuon_hwBX_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name outTrackMuon_hwQuality_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_outTrackMuon_hwQuality_V \
    op interface \
    ports { outTrackMuon_hwQuality_V { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


