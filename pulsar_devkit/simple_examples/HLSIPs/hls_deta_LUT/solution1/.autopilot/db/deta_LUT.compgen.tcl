# This script segment is generated automatically by AutoPilot

set id 1
set name deta_LUT_mul_mul_cud
set corename simcore_mul
set op mul
set stage_num 3
set max_latency -1
set registered_input 1
set in0_width 13
set in0_signed 0
set in1_width 11
set in1_signed 1
set out_width 24
set exp i0*i1
set arg_lists {i0 {13 0 +} i1 {11 1 +} p {24 1 +} }
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
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
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
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 2
set MemName deta_LUT_deta_tabbkb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 1024
set AddrWd 10
set TrueReset 0
set IsROM 1
set ROMData { "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11011" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11010" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11001" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "11000" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10101" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10100" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10011" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10010" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10001" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "10000" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01111" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01110" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01101" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01100" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01011" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01010" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01001" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "01000" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00111" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00110" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00101" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00100" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00011" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00010" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00001" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" "00000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.39
set ClkPeriod 4.115
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
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
    id 3 \
    name data_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_V \
    op interface \
    ports { data_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name res_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_V \
    op interface \
    ports { res_V { O 14 vector } res_V_ap_vld { O 1 bit } } \
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


