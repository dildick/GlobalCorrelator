// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _delta_LUT_HH_
#define _delta_LUT_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "tkmu_simple_hw_mueOg.h"
#include "delta_LUT_delta_tdEe.h"

namespace ap_rtl {

struct delta_LUT : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<11> > data_V_read;
    sc_out< sc_lv<11> > ap_return;


    // Module declarations
    delta_LUT(sc_module_name name);
    SC_HAS_PROCESS(delta_LUT);

    ~delta_LUT();

    sc_trace_file* mVcdFile;

    delta_LUT_delta_tdEe* delta_table5_U;
    tkmu_simple_hw_mueOg<1,5,23,21,44>* tkmu_simple_hw_mueOg_U4;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_lv<10> > delta_table5_address0;
    sc_signal< sc_logic > delta_table5_ce0;
    sc_signal< sc_lv<11> > delta_table5_q0;
    sc_signal< sc_lv<1> > tmp_270_reg_307;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_tmp_270_reg_307;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter2_tmp_270_reg_307;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter3_tmp_270_reg_307;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter4_tmp_270_reg_307;
    sc_signal< sc_lv<22> > p_v_fu_152_p3;
    sc_signal< sc_lv<22> > p_v_reg_313;
    sc_signal< sc_lv<19> > tmp_273_fu_159_p1;
    sc_signal< sc_lv<19> > tmp_273_reg_318;
    sc_signal< sc_lv<19> > r_V_19_fu_178_p2;
    sc_signal< sc_lv<19> > r_V_19_reg_323;
    sc_signal< sc_lv<13> > tmp_210_fu_184_p4;
    sc_signal< sc_lv<13> > tmp_210_reg_328;
    sc_signal< sc_lv<1> > tmp_s_fu_202_p2;
    sc_signal< sc_lv<1> > tmp_s_reg_333;
    sc_signal< sc_lv<14> > ret_V_fu_208_p2;
    sc_signal< sc_lv<14> > ret_V_reg_338;
    sc_signal< sc_lv<1> > tmp_277_reg_343;
    sc_signal< sc_lv<1> > icmp_fu_260_p2;
    sc_signal< sc_lv<1> > icmp_reg_349;
    sc_signal< sc_lv<64> > tmp_208_fu_266_p1;
    sc_signal< sc_lv<21> > r_V_fu_88_p3;
    sc_signal< sc_lv<23> > grp_fu_100_p0;
    sc_signal< sc_lv<44> > grp_fu_100_p2;
    sc_signal< sc_lv<43> > tmp_269_fu_114_p1;
    sc_signal< sc_lv<43> > neg_mul_fu_118_p2;
    sc_signal< sc_lv<18> > tmp_271_fu_124_p4;
    sc_signal< sc_lv<19> > tmp_272_fu_138_p4;
    sc_signal< sc_lv<22> > tmp_fu_134_p1;
    sc_signal< sc_lv<22> > tmp_219_fu_148_p1;
    sc_signal< sc_lv<19> > neg_ti_fu_163_p2;
    sc_signal< sc_lv<19> > tmp_274_fu_168_p1;
    sc_signal< sc_lv<19> > tmp_220_fu_171_p3;
    sc_signal< sc_lv<6> > tmp_276_fu_198_p1;
    sc_signal< sc_lv<14> > ret_V_cast_fu_194_p1;
    sc_signal< sc_lv<32> > tmp_221_fu_221_p1;
    sc_signal< sc_lv<32> > tmp_222_fu_224_p1;
    sc_signal< sc_lv<1> > tmp_275_fu_214_p3;
    sc_signal< sc_lv<32> > tmp_223_fu_227_p3;
    sc_signal< sc_lv<32> > index_fu_234_p3;
    sc_signal< sc_lv<22> > tmp_278_fu_250_p4;
    sc_signal< sc_lv<1> > sel_tmp1_fu_271_p2;
    sc_signal< sc_lv<1> > sel_tmp2_fu_276_p2;
    sc_signal< sc_lv<1> > tmp_212_fu_289_p2;
    sc_signal< sc_lv<11> > sel_tmp_fu_281_p3;
    sc_signal< sc_logic > grp_fu_100_ce;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_pipeline_idle_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<44> ap_const_lv44_222223;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<43> ap_const_lv43_0;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<19> ap_const_lv19_0;
    static const sc_lv<19> ap_const_lv19_10000;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<22> ap_const_lv22_0;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<11> ap_const_lv11_483;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_done();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_pipeline_idle_pp0();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_delta_table5_address0();
    void thread_delta_table5_ce0();
    void thread_grp_fu_100_ce();
    void thread_grp_fu_100_p0();
    void thread_icmp_fu_260_p2();
    void thread_index_fu_234_p3();
    void thread_neg_mul_fu_118_p2();
    void thread_neg_ti_fu_163_p2();
    void thread_p_v_fu_152_p3();
    void thread_r_V_19_fu_178_p2();
    void thread_r_V_fu_88_p3();
    void thread_ret_V_cast_fu_194_p1();
    void thread_ret_V_fu_208_p2();
    void thread_sel_tmp1_fu_271_p2();
    void thread_sel_tmp2_fu_276_p2();
    void thread_sel_tmp_fu_281_p3();
    void thread_tmp_208_fu_266_p1();
    void thread_tmp_210_fu_184_p4();
    void thread_tmp_212_fu_289_p2();
    void thread_tmp_219_fu_148_p1();
    void thread_tmp_220_fu_171_p3();
    void thread_tmp_221_fu_221_p1();
    void thread_tmp_222_fu_224_p1();
    void thread_tmp_223_fu_227_p3();
    void thread_tmp_269_fu_114_p1();
    void thread_tmp_271_fu_124_p4();
    void thread_tmp_272_fu_138_p4();
    void thread_tmp_273_fu_159_p1();
    void thread_tmp_274_fu_168_p1();
    void thread_tmp_275_fu_214_p3();
    void thread_tmp_276_fu_198_p1();
    void thread_tmp_278_fu_250_p4();
    void thread_tmp_fu_134_p1();
    void thread_tmp_s_fu_202_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif