############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_calc_eta_hw
set_top calc_eta_hw
add_files src/dataformats.h
add_files src/tk-mu_simple.cpp
add_files -tb src/dataformatsExtended.h
add_files -tb tk-mu_simple_ref.h
add_files -tb tk-mu_simple_test.cpp
open_solution "solution1"
set_part {xc7vx690tffg1927-2}
create_clock -period 4.115 -name default
#source "./hls_calc_eta_hw/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog -vendor "cern-cms"