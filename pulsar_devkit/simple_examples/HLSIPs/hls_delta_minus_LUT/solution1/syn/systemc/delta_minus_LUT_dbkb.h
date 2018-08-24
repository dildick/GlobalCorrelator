// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __delta_minus_LUT_dbkb_H__
#define __delta_minus_LUT_dbkb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct delta_minus_LUT_dbkb_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 5;
  static const unsigned AddressRange = 1024;
  static const unsigned AddressWidth = 10;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(delta_minus_LUT_dbkb_ram) {
        for (unsigned i = 0; i < 21 ; i = i + 1) {
            ram[i] = "0b10010";
        }
        for (unsigned i = 21; i < 76 ; i = i + 1) {
            ram[i] = "0b10001";
        }
        for (unsigned i = 76; i < 131 ; i = i + 1) {
            ram[i] = "0b10000";
        }
        for (unsigned i = 131; i < 186 ; i = i + 1) {
            ram[i] = "0b01111";
        }
        for (unsigned i = 186; i < 241 ; i = i + 1) {
            ram[i] = "0b01110";
        }
        for (unsigned i = 241; i < 296 ; i = i + 1) {
            ram[i] = "0b01101";
        }
        for (unsigned i = 296; i < 351 ; i = i + 1) {
            ram[i] = "0b01100";
        }
        for (unsigned i = 351; i < 407 ; i = i + 1) {
            ram[i] = "0b01011";
        }
        for (unsigned i = 407; i < 462 ; i = i + 1) {
            ram[i] = "0b01010";
        }
        for (unsigned i = 462; i < 518 ; i = i + 1) {
            ram[i] = "0b01001";
        }
        for (unsigned i = 518; i < 574 ; i = i + 1) {
            ram[i] = "0b01000";
        }
        for (unsigned i = 574; i < 630 ; i = i + 1) {
            ram[i] = "0b00111";
        }
        for (unsigned i = 630; i < 685 ; i = i + 1) {
            ram[i] = "0b00110";
        }
        for (unsigned i = 685; i < 742 ; i = i + 1) {
            ram[i] = "0b00101";
        }
        for (unsigned i = 742; i < 798 ; i = i + 1) {
            ram[i] = "0b00100";
        }
        for (unsigned i = 798; i < 854 ; i = i + 1) {
            ram[i] = "0b00011";
        }
        for (unsigned i = 854; i < 910 ; i = i + 1) {
            ram[i] = "0b00010";
        }
        for (unsigned i = 910; i < 967 ; i = i + 1) {
            ram[i] = "0b00001";
        }
        for (unsigned i = 967; i < 1024 ; i = i + 1) {
            ram[i] = "0b00000";
        }


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(delta_minus_LUT_dbkb) {


static const unsigned DataWidth = 5;
static const unsigned AddressRange = 1024;
static const unsigned AddressWidth = 10;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


delta_minus_LUT_dbkb_ram* meminst;


SC_CTOR(delta_minus_LUT_dbkb) {
meminst = new delta_minus_LUT_dbkb_ram("delta_minus_LUT_dbkb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~delta_minus_LUT_dbkb() {
    delete meminst;
}


};//endmodule
#endif
