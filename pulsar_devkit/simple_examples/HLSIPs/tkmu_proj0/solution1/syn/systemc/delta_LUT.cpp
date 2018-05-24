// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "delta_LUT.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic delta_LUT::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic delta_LUT::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> delta_LUT::ap_ST_fsm_pp0_stage0 = "1";
const sc_lv<32> delta_LUT::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> delta_LUT::ap_const_lv1_1 = "1";
const sc_lv<1> delta_LUT::ap_const_lv1_0 = "0";
const sc_lv<10> delta_LUT::ap_const_lv10_0 = "0000000000";
const sc_lv<44> delta_LUT::ap_const_lv44_222223 = "1000100010001000100011";
const sc_lv<32> delta_LUT::ap_const_lv32_A = "1010";
const sc_lv<43> delta_LUT::ap_const_lv43_0 = "0000000000000000000000000000000000000000000";
const sc_lv<32> delta_LUT::ap_const_lv32_19 = "11001";
const sc_lv<32> delta_LUT::ap_const_lv32_2A = "101010";
const sc_lv<32> delta_LUT::ap_const_lv32_2B = "101011";
const sc_lv<19> delta_LUT::ap_const_lv19_0 = "0000000000000000000";
const sc_lv<19> delta_LUT::ap_const_lv19_10000 = "10000000000000000";
const sc_lv<32> delta_LUT::ap_const_lv32_6 = "110";
const sc_lv<32> delta_LUT::ap_const_lv32_12 = "10010";
const sc_lv<6> delta_LUT::ap_const_lv6_0 = "000000";
const sc_lv<14> delta_LUT::ap_const_lv14_1 = "1";
const sc_lv<32> delta_LUT::ap_const_lv32_1F = "11111";
const sc_lv<22> delta_LUT::ap_const_lv22_0 = "0000000000000000000000";
const sc_lv<11> delta_LUT::ap_const_lv11_0 = "00000000000";
const sc_lv<11> delta_LUT::ap_const_lv11_483 = "10010000011";

delta_LUT::delta_LUT(sc_module_name name) : sc_module(name), mVcdFile(0) {
    delta_table5_U = new delta_LUT_delta_tdEe("delta_table5_U");
    delta_table5_U->clk(ap_clk);
    delta_table5_U->reset(ap_rst);
    delta_table5_U->address0(delta_table5_address0);
    delta_table5_U->ce0(delta_table5_ce0);
    delta_table5_U->q0(delta_table5_q0);
    tkmu_simple_hw_mueOg_U4 = new tkmu_simple_hw_mueOg<1,5,23,21,44>("tkmu_simple_hw_mueOg_U4");
    tkmu_simple_hw_mueOg_U4->clk(ap_clk);
    tkmu_simple_hw_mueOg_U4->reset(ap_rst);
    tkmu_simple_hw_mueOg_U4->din0(grp_fu_100_p0);
    tkmu_simple_hw_mueOg_U4->din1(r_V_fu_88_p3);
    tkmu_simple_hw_mueOg_U4->ce(grp_fu_100_ce);
    tkmu_simple_hw_mueOg_U4->dout(grp_fu_100_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter7 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_enable_reg_pp0_iter0);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( ap_enable_reg_pp0_iter4 );
    sensitive << ( ap_enable_reg_pp0_iter5 );
    sensitive << ( ap_enable_reg_pp0_iter6 );
    sensitive << ( ap_enable_reg_pp0_iter7 );

    SC_METHOD(thread_ap_pipeline_idle_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( ap_enable_reg_pp0_iter4 );
    sensitive << ( ap_enable_reg_pp0_iter5 );
    sensitive << ( ap_enable_reg_pp0_iter6 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter7 );
    sensitive << ( ap_ce );
    sensitive << ( delta_table5_q0 );
    sensitive << ( tmp_212_fu_289_p2 );
    sensitive << ( sel_tmp_fu_281_p3 );

    SC_METHOD(thread_delta_table5_address0);
    sensitive << ( ap_enable_reg_pp0_iter6 );
    sensitive << ( tmp_208_fu_266_p1 );

    SC_METHOD(thread_delta_table5_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter6 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_grp_fu_100_ce);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_grp_fu_100_p0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_icmp_fu_260_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter6 );
    sensitive << ( ap_ce );
    sensitive << ( tmp_278_fu_250_p4 );

    SC_METHOD(thread_index_fu_234_p3);
    sensitive << ( tmp_221_fu_221_p1 );
    sensitive << ( tmp_275_fu_214_p3 );
    sensitive << ( tmp_223_fu_227_p3 );

    SC_METHOD(thread_neg_mul_fu_118_p2);
    sensitive << ( tmp_269_fu_114_p1 );

    SC_METHOD(thread_neg_ti_fu_163_p2);
    sensitive << ( tmp_273_reg_318 );

    SC_METHOD(thread_p_v_fu_152_p3);
    sensitive << ( ap_pipeline_reg_pp0_iter3_tmp_270_reg_307 );
    sensitive << ( tmp_fu_134_p1 );
    sensitive << ( tmp_219_fu_148_p1 );

    SC_METHOD(thread_r_V_19_fu_178_p2);
    sensitive << ( tmp_220_fu_171_p3 );

    SC_METHOD(thread_r_V_fu_88_p3);
    sensitive << ( data_V_read );

    SC_METHOD(thread_ret_V_cast_fu_194_p1);
    sensitive << ( tmp_210_fu_184_p4 );

    SC_METHOD(thread_ret_V_fu_208_p2);
    sensitive << ( ret_V_cast_fu_194_p1 );

    SC_METHOD(thread_sel_tmp1_fu_271_p2);
    sensitive << ( tmp_277_reg_343 );

    SC_METHOD(thread_sel_tmp2_fu_276_p2);
    sensitive << ( icmp_reg_349 );
    sensitive << ( sel_tmp1_fu_271_p2 );

    SC_METHOD(thread_sel_tmp_fu_281_p3);
    sensitive << ( sel_tmp2_fu_276_p2 );

    SC_METHOD(thread_tmp_208_fu_266_p1);
    sensitive << ( index_fu_234_p3 );

    SC_METHOD(thread_tmp_210_fu_184_p4);
    sensitive << ( r_V_19_fu_178_p2 );

    SC_METHOD(thread_tmp_212_fu_289_p2);
    sensitive << ( tmp_277_reg_343 );
    sensitive << ( sel_tmp2_fu_276_p2 );

    SC_METHOD(thread_tmp_219_fu_148_p1);
    sensitive << ( tmp_272_fu_138_p4 );

    SC_METHOD(thread_tmp_220_fu_171_p3);
    sensitive << ( ap_pipeline_reg_pp0_iter4_tmp_270_reg_307 );
    sensitive << ( neg_ti_fu_163_p2 );
    sensitive << ( tmp_274_fu_168_p1 );

    SC_METHOD(thread_tmp_221_fu_221_p1);
    sensitive << ( tmp_210_reg_328 );

    SC_METHOD(thread_tmp_222_fu_224_p1);
    sensitive << ( ret_V_reg_338 );

    SC_METHOD(thread_tmp_223_fu_227_p3);
    sensitive << ( tmp_s_reg_333 );
    sensitive << ( tmp_221_fu_221_p1 );
    sensitive << ( tmp_222_fu_224_p1 );

    SC_METHOD(thread_tmp_269_fu_114_p1);
    sensitive << ( grp_fu_100_p2 );

    SC_METHOD(thread_tmp_271_fu_124_p4);
    sensitive << ( neg_mul_fu_118_p2 );

    SC_METHOD(thread_tmp_272_fu_138_p4);
    sensitive << ( grp_fu_100_p2 );

    SC_METHOD(thread_tmp_273_fu_159_p1);
    sensitive << ( p_v_fu_152_p3 );

    SC_METHOD(thread_tmp_274_fu_168_p1);
    sensitive << ( p_v_reg_313 );

    SC_METHOD(thread_tmp_275_fu_214_p3);
    sensitive << ( r_V_19_reg_323 );

    SC_METHOD(thread_tmp_276_fu_198_p1);
    sensitive << ( r_V_19_fu_178_p2 );

    SC_METHOD(thread_tmp_278_fu_250_p4);
    sensitive << ( index_fu_234_p3 );

    SC_METHOD(thread_tmp_fu_134_p1);
    sensitive << ( tmp_271_fu_124_p4 );

    SC_METHOD(thread_tmp_s_fu_202_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter5 );
    sensitive << ( ap_ce );
    sensitive << ( tmp_276_fu_198_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( ap_pipeline_idle_pp0 );

    ap_CS_fsm = "1";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter2 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter3 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter4 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter5 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter6 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter7 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "delta_LUT_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_ce, "(port)ap_ce");
    sc_trace(mVcdFile, data_V_read, "(port)data_V_read");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter2, "ap_enable_reg_pp0_iter2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter3, "ap_enable_reg_pp0_iter3");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter4, "ap_enable_reg_pp0_iter4");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter5, "ap_enable_reg_pp0_iter5");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter6, "ap_enable_reg_pp0_iter6");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter7, "ap_enable_reg_pp0_iter7");
    sc_trace(mVcdFile, delta_table5_address0, "delta_table5_address0");
    sc_trace(mVcdFile, delta_table5_ce0, "delta_table5_ce0");
    sc_trace(mVcdFile, delta_table5_q0, "delta_table5_q0");
    sc_trace(mVcdFile, tmp_270_reg_307, "tmp_270_reg_307");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter1_tmp_270_reg_307, "ap_pipeline_reg_pp0_iter1_tmp_270_reg_307");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter2_tmp_270_reg_307, "ap_pipeline_reg_pp0_iter2_tmp_270_reg_307");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter3_tmp_270_reg_307, "ap_pipeline_reg_pp0_iter3_tmp_270_reg_307");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter4_tmp_270_reg_307, "ap_pipeline_reg_pp0_iter4_tmp_270_reg_307");
    sc_trace(mVcdFile, p_v_fu_152_p3, "p_v_fu_152_p3");
    sc_trace(mVcdFile, p_v_reg_313, "p_v_reg_313");
    sc_trace(mVcdFile, tmp_273_fu_159_p1, "tmp_273_fu_159_p1");
    sc_trace(mVcdFile, tmp_273_reg_318, "tmp_273_reg_318");
    sc_trace(mVcdFile, r_V_19_fu_178_p2, "r_V_19_fu_178_p2");
    sc_trace(mVcdFile, r_V_19_reg_323, "r_V_19_reg_323");
    sc_trace(mVcdFile, tmp_210_fu_184_p4, "tmp_210_fu_184_p4");
    sc_trace(mVcdFile, tmp_210_reg_328, "tmp_210_reg_328");
    sc_trace(mVcdFile, tmp_s_fu_202_p2, "tmp_s_fu_202_p2");
    sc_trace(mVcdFile, tmp_s_reg_333, "tmp_s_reg_333");
    sc_trace(mVcdFile, ret_V_fu_208_p2, "ret_V_fu_208_p2");
    sc_trace(mVcdFile, ret_V_reg_338, "ret_V_reg_338");
    sc_trace(mVcdFile, tmp_277_reg_343, "tmp_277_reg_343");
    sc_trace(mVcdFile, icmp_fu_260_p2, "icmp_fu_260_p2");
    sc_trace(mVcdFile, icmp_reg_349, "icmp_reg_349");
    sc_trace(mVcdFile, tmp_208_fu_266_p1, "tmp_208_fu_266_p1");
    sc_trace(mVcdFile, r_V_fu_88_p3, "r_V_fu_88_p3");
    sc_trace(mVcdFile, grp_fu_100_p0, "grp_fu_100_p0");
    sc_trace(mVcdFile, grp_fu_100_p2, "grp_fu_100_p2");
    sc_trace(mVcdFile, tmp_269_fu_114_p1, "tmp_269_fu_114_p1");
    sc_trace(mVcdFile, neg_mul_fu_118_p2, "neg_mul_fu_118_p2");
    sc_trace(mVcdFile, tmp_271_fu_124_p4, "tmp_271_fu_124_p4");
    sc_trace(mVcdFile, tmp_272_fu_138_p4, "tmp_272_fu_138_p4");
    sc_trace(mVcdFile, tmp_fu_134_p1, "tmp_fu_134_p1");
    sc_trace(mVcdFile, tmp_219_fu_148_p1, "tmp_219_fu_148_p1");
    sc_trace(mVcdFile, neg_ti_fu_163_p2, "neg_ti_fu_163_p2");
    sc_trace(mVcdFile, tmp_274_fu_168_p1, "tmp_274_fu_168_p1");
    sc_trace(mVcdFile, tmp_220_fu_171_p3, "tmp_220_fu_171_p3");
    sc_trace(mVcdFile, tmp_276_fu_198_p1, "tmp_276_fu_198_p1");
    sc_trace(mVcdFile, ret_V_cast_fu_194_p1, "ret_V_cast_fu_194_p1");
    sc_trace(mVcdFile, tmp_221_fu_221_p1, "tmp_221_fu_221_p1");
    sc_trace(mVcdFile, tmp_222_fu_224_p1, "tmp_222_fu_224_p1");
    sc_trace(mVcdFile, tmp_275_fu_214_p3, "tmp_275_fu_214_p3");
    sc_trace(mVcdFile, tmp_223_fu_227_p3, "tmp_223_fu_227_p3");
    sc_trace(mVcdFile, index_fu_234_p3, "index_fu_234_p3");
    sc_trace(mVcdFile, tmp_278_fu_250_p4, "tmp_278_fu_250_p4");
    sc_trace(mVcdFile, sel_tmp1_fu_271_p2, "sel_tmp1_fu_271_p2");
    sc_trace(mVcdFile, sel_tmp2_fu_276_p2, "sel_tmp2_fu_276_p2");
    sc_trace(mVcdFile, tmp_212_fu_289_p2, "tmp_212_fu_289_p2");
    sc_trace(mVcdFile, sel_tmp_fu_281_p3, "sel_tmp_fu_281_p3");
    sc_trace(mVcdFile, grp_fu_100_ce, "grp_fu_100_ce");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_pipeline_idle_pp0, "ap_pipeline_idle_pp0");
#endif

    }
}

delta_LUT::~delta_LUT() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete delta_table5_U;
    delete tkmu_simple_hw_mueOg_U4;
}

void delta_LUT::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
             !((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || !esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())))) {
            ap_enable_reg_pp0_iter1 = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || !esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || !esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || !esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || !esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || !esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter7 = ap_const_logic_0;
    } else {
        if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || !esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
            ap_enable_reg_pp0_iter7 = ap_enable_reg_pp0_iter6.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
        ap_pipeline_reg_pp0_iter1_tmp_270_reg_307 = tmp_270_reg_307.read();
        tmp_270_reg_307 = data_V_read.read().range(10, 10);
    }
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
        ap_pipeline_reg_pp0_iter2_tmp_270_reg_307 = ap_pipeline_reg_pp0_iter1_tmp_270_reg_307.read();
        ap_pipeline_reg_pp0_iter3_tmp_270_reg_307 = ap_pipeline_reg_pp0_iter2_tmp_270_reg_307.read();
        ap_pipeline_reg_pp0_iter4_tmp_270_reg_307 = ap_pipeline_reg_pp0_iter3_tmp_270_reg_307.read();
        icmp_reg_349 = icmp_fu_260_p2.read();
        p_v_reg_313 = p_v_fu_152_p3.read();
        r_V_19_reg_323 = r_V_19_fu_178_p2.read();
        ret_V_reg_338 = ret_V_fu_208_p2.read();
        tmp_210_reg_328 = r_V_19_fu_178_p2.read().range(18, 6);
        tmp_277_reg_343 = index_fu_234_p3.read().range(31, 31);
        tmp_s_reg_333 = tmp_s_fu_202_p2.read();
    }
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && !esl_seteq<1,1,1>(ap_pipeline_reg_pp0_iter3_tmp_270_reg_307.read(), ap_const_lv1_0))) {
        tmp_273_reg_318 = tmp_273_fu_159_p1.read();
    }
}

void delta_LUT::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read().range(0, 0);
}

void delta_LUT::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void delta_LUT::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void delta_LUT::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void delta_LUT::thread_ap_pipeline_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()))) {
        ap_pipeline_idle_pp0 = ap_const_logic_1;
    } else {
        ap_pipeline_idle_pp0 = ap_const_logic_0;
    }
}

void delta_LUT::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void delta_LUT::thread_ap_return() {
    ap_return = (!tmp_212_fu_289_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_212_fu_289_p2.read()[0].to_bool())? sel_tmp_fu_281_p3.read(): delta_table5_q0.read());
}

void delta_LUT::thread_delta_table5_address0() {
    delta_table5_address0 =  (sc_lv<10>) (tmp_208_fu_266_p1.read());
}

void delta_LUT::thread_delta_table5_ce0() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        delta_table5_ce0 = ap_const_logic_1;
    } else {
        delta_table5_ce0 = ap_const_logic_0;
    }
}

void delta_LUT::thread_grp_fu_100_ce() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
        grp_fu_100_ce = ap_const_logic_1;
    } else {
        grp_fu_100_ce = ap_const_logic_0;
    }
}

void delta_LUT::thread_grp_fu_100_p0() {
    grp_fu_100_p0 =  (sc_lv<23>) (ap_const_lv44_222223);
}

void delta_LUT::thread_icmp_fu_260_p2() {
    icmp_fu_260_p2 = (!tmp_278_fu_250_p4.read().is_01() || !ap_const_lv22_0.is_01())? sc_lv<1>(): (sc_bigint<22>(tmp_278_fu_250_p4.read()) > sc_bigint<22>(ap_const_lv22_0));
}

void delta_LUT::thread_index_fu_234_p3() {
    index_fu_234_p3 = (!tmp_275_fu_214_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_275_fu_214_p3.read()[0].to_bool())? tmp_223_fu_227_p3.read(): tmp_221_fu_221_p1.read());
}

void delta_LUT::thread_neg_mul_fu_118_p2() {
    neg_mul_fu_118_p2 = (!ap_const_lv43_0.is_01() || !tmp_269_fu_114_p1.read().is_01())? sc_lv<43>(): (sc_biguint<43>(ap_const_lv43_0) - sc_biguint<43>(tmp_269_fu_114_p1.read()));
}

void delta_LUT::thread_neg_ti_fu_163_p2() {
    neg_ti_fu_163_p2 = (!ap_const_lv19_0.is_01() || !tmp_273_reg_318.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_0) - sc_biguint<19>(tmp_273_reg_318.read()));
}

void delta_LUT::thread_p_v_fu_152_p3() {
    p_v_fu_152_p3 = (!ap_pipeline_reg_pp0_iter3_tmp_270_reg_307.read()[0].is_01())? sc_lv<22>(): ((ap_pipeline_reg_pp0_iter3_tmp_270_reg_307.read()[0].to_bool())? tmp_fu_134_p1.read(): tmp_219_fu_148_p1.read());
}

void delta_LUT::thread_r_V_19_fu_178_p2() {
    r_V_19_fu_178_p2 = (!ap_const_lv19_10000.is_01() || !tmp_220_fu_171_p3.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_10000) - sc_biguint<19>(tmp_220_fu_171_p3.read()));
}

void delta_LUT::thread_r_V_fu_88_p3() {
    r_V_fu_88_p3 = esl_concat<11,10>(data_V_read.read(), ap_const_lv10_0);
}

void delta_LUT::thread_ret_V_cast_fu_194_p1() {
    ret_V_cast_fu_194_p1 = esl_sext<14,13>(tmp_210_fu_184_p4.read());
}

void delta_LUT::thread_ret_V_fu_208_p2() {
    ret_V_fu_208_p2 = (!ap_const_lv14_1.is_01() || !ret_V_cast_fu_194_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(ap_const_lv14_1) + sc_bigint<14>(ret_V_cast_fu_194_p1.read()));
}

void delta_LUT::thread_sel_tmp1_fu_271_p2() {
    sel_tmp1_fu_271_p2 = (tmp_277_reg_343.read() ^ ap_const_lv1_1);
}

void delta_LUT::thread_sel_tmp2_fu_276_p2() {
    sel_tmp2_fu_276_p2 = (icmp_reg_349.read() & sel_tmp1_fu_271_p2.read());
}

void delta_LUT::thread_sel_tmp_fu_281_p3() {
    sel_tmp_fu_281_p3 = (!sel_tmp2_fu_276_p2.read()[0].is_01())? sc_lv<11>(): ((sel_tmp2_fu_276_p2.read()[0].to_bool())? ap_const_lv11_0: ap_const_lv11_483);
}

void delta_LUT::thread_tmp_208_fu_266_p1() {
    tmp_208_fu_266_p1 = esl_zext<64,32>(index_fu_234_p3.read());
}

void delta_LUT::thread_tmp_210_fu_184_p4() {
    tmp_210_fu_184_p4 = r_V_19_fu_178_p2.read().range(18, 6);
}

void delta_LUT::thread_tmp_212_fu_289_p2() {
    tmp_212_fu_289_p2 = (sel_tmp2_fu_276_p2.read() | tmp_277_reg_343.read());
}

void delta_LUT::thread_tmp_219_fu_148_p1() {
    tmp_219_fu_148_p1 = esl_sext<22,19>(tmp_272_fu_138_p4.read());
}

void delta_LUT::thread_tmp_220_fu_171_p3() {
    tmp_220_fu_171_p3 = (!ap_pipeline_reg_pp0_iter4_tmp_270_reg_307.read()[0].is_01())? sc_lv<19>(): ((ap_pipeline_reg_pp0_iter4_tmp_270_reg_307.read()[0].to_bool())? neg_ti_fu_163_p2.read(): tmp_274_fu_168_p1.read());
}

void delta_LUT::thread_tmp_221_fu_221_p1() {
    tmp_221_fu_221_p1 = esl_sext<32,13>(tmp_210_reg_328.read());
}

void delta_LUT::thread_tmp_222_fu_224_p1() {
    tmp_222_fu_224_p1 = esl_sext<32,14>(ret_V_reg_338.read());
}

void delta_LUT::thread_tmp_223_fu_227_p3() {
    tmp_223_fu_227_p3 = (!tmp_s_reg_333.read()[0].is_01())? sc_lv<32>(): ((tmp_s_reg_333.read()[0].to_bool())? tmp_221_fu_221_p1.read(): tmp_222_fu_224_p1.read());
}

void delta_LUT::thread_tmp_269_fu_114_p1() {
    tmp_269_fu_114_p1 = grp_fu_100_p2.read().range(43-1, 0);
}

void delta_LUT::thread_tmp_271_fu_124_p4() {
    tmp_271_fu_124_p4 = neg_mul_fu_118_p2.read().range(42, 25);
}

void delta_LUT::thread_tmp_272_fu_138_p4() {
    tmp_272_fu_138_p4 = grp_fu_100_p2.read().range(43, 25);
}

void delta_LUT::thread_tmp_273_fu_159_p1() {
    tmp_273_fu_159_p1 = p_v_fu_152_p3.read().range(19-1, 0);
}

void delta_LUT::thread_tmp_274_fu_168_p1() {
    tmp_274_fu_168_p1 = p_v_reg_313.read().range(19-1, 0);
}

void delta_LUT::thread_tmp_275_fu_214_p3() {
    tmp_275_fu_214_p3 = r_V_19_reg_323.read().range(18, 18);
}

void delta_LUT::thread_tmp_276_fu_198_p1() {
    tmp_276_fu_198_p1 = r_V_19_fu_178_p2.read().range(6-1, 0);
}

void delta_LUT::thread_tmp_278_fu_250_p4() {
    tmp_278_fu_250_p4 = index_fu_234_p3.read().range(31, 10);
}

void delta_LUT::thread_tmp_fu_134_p1() {
    tmp_fu_134_p1 = esl_sext<22,18>(tmp_271_fu_124_p4.read());
}

void delta_LUT::thread_tmp_s_fu_202_p2() {
    tmp_s_fu_202_p2 = (!tmp_276_fu_198_p1.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_276_fu_198_p1.read() == ap_const_lv6_0);
}

void delta_LUT::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}
