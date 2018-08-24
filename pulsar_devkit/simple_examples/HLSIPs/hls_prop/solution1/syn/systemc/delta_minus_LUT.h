// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _delta_minus_LUT_HH_
#define _delta_minus_LUT_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "prop_hw_mul_mul_1g8j.h"
#include "delta_minus_LUT_dibs.h"

namespace ap_rtl {

struct delta_minus_LUT : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<11> > data_V_read;
    sc_out< sc_lv<5> > ap_return;


    // Module declarations
    delta_minus_LUT(sc_module_name name);
    SC_HAS_PROCESS(delta_minus_LUT);

    ~delta_minus_LUT();

    sc_trace_file* mVcdFile;

    delta_minus_LUT_dibs* delta_minus_table3_U;
    prop_hw_mul_mul_1g8j<1,3,13,11,24>* prop_hw_mul_mul_1g8j_x_U13;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_lv<10> > delta_minus_table3_address0;
    sc_signal< sc_logic > delta_minus_table3_ce0;
    sc_signal< sc_lv<5> > delta_minus_table3_q0;
    sc_signal< sc_lv<1> > tmp_252_reg_240;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_tmp_252_reg_240;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter2_tmp_252_reg_240;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter3_tmp_252_reg_240;
    sc_signal< sc_lv<23> > tmp_251_fu_90_p1;
    sc_signal< sc_lv<23> > tmp_251_reg_246;
    sc_signal< sc_lv<9> > tmp_254_reg_251;
    sc_signal< sc_lv<9> > ap_pipeline_reg_pp0_iter3_tmp_254_reg_251;
    sc_signal< sc_lv<8> > tmp_253_reg_256;
    sc_signal< sc_lv<9> > r_V_fu_151_p2;
    sc_signal< sc_lv<9> > r_V_reg_261;
    sc_signal< sc_lv<1> > tmp_257_reg_266;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter5_tmp_257_reg_266;
    sc_signal< sc_lv<3> > tmp_258_reg_272;
    sc_signal< sc_lv<1> > icmp_fu_186_p2;
    sc_signal< sc_lv<1> > icmp_reg_277;
    sc_signal< sc_lv<64> > tmp_198_fu_191_p1;
    sc_signal< sc_lv<24> > grp_fu_227_p2;
    sc_signal< sc_lv<23> > neg_mul_fu_102_p2;
    sc_signal< sc_lv<12> > tmp_fu_117_p1;
    sc_signal< sc_lv<12> > tmp_s_fu_120_p1;
    sc_signal< sc_lv<12> > p_v_fu_123_p3;
    sc_signal< sc_lv<9> > tmp_255_fu_130_p1;
    sc_signal< sc_lv<9> > neg_ti_fu_134_p2;
    sc_signal< sc_lv<9> > tmp_256_fu_140_p1;
    sc_signal< sc_lv<9> > tmp_202_fu_144_p3;
    sc_signal< sc_lv<13> > tmp_200_fu_175_p3;
    sc_signal< sc_lv<32> > index_fu_182_p1;
    sc_signal< sc_lv<1> > sel_tmp1_fu_196_p2;
    sc_signal< sc_lv<1> > sel_tmp2_fu_201_p2;
    sc_signal< sc_lv<1> > tmp_201_fu_214_p2;
    sc_signal< sc_lv<5> > sel_tmp_fu_206_p3;
    sc_signal< sc_lv<13> > grp_fu_227_p0;
    sc_signal< sc_logic > grp_fu_227_ce;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_pipeline_idle_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<9> ap_const_lv9_40;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<5> ap_const_lv5_12;
    static const sc_lv<24> ap_const_lv24_889;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_done();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_pipeline_idle_pp0();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_delta_minus_table3_address0();
    void thread_delta_minus_table3_ce0();
    void thread_grp_fu_227_ce();
    void thread_grp_fu_227_p0();
    void thread_icmp_fu_186_p2();
    void thread_index_fu_182_p1();
    void thread_neg_mul_fu_102_p2();
    void thread_neg_ti_fu_134_p2();
    void thread_p_v_fu_123_p3();
    void thread_r_V_fu_151_p2();
    void thread_sel_tmp1_fu_196_p2();
    void thread_sel_tmp2_fu_201_p2();
    void thread_sel_tmp_fu_206_p3();
    void thread_tmp_198_fu_191_p1();
    void thread_tmp_200_fu_175_p3();
    void thread_tmp_201_fu_214_p2();
    void thread_tmp_202_fu_144_p3();
    void thread_tmp_251_fu_90_p1();
    void thread_tmp_255_fu_130_p1();
    void thread_tmp_256_fu_140_p1();
    void thread_tmp_fu_117_p1();
    void thread_tmp_s_fu_120_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
