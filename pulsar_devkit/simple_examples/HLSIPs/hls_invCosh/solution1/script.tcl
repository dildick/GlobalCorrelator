############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_invCosh
set_top invCosh
add_files src/dataformats.h
add_files src/tk-mu_simple.cpp
add_files -tb src/dataformatsExtended.h
add_files -tb tk-mu_simple_ref.h
add_files -tb tk-mu_simple_test.cpp
open_solution "solution1"
set_part {xc7vx690tffg1927-2}
create_clock -period 5 -name default
#source "./hls_invCosh/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog -vendor "cern-cms"
