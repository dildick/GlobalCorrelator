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
const sc_lv<32> delta_LUT::ap_const_lv32_A = "1010";
const sc_lv<32> delta_LUT::ap_const_lv32_F = "1111";
const sc_lv<32> delta_LUT::ap_const_lv32_17 = "10111";
const sc_lv<23> delta_LUT::ap_const_lv23_0 = "00000000000000000000000";
const sc_lv<32> delta_LUT::ap_const_lv32_16 = "10110";
const sc_lv<9> delta_LUT::ap_const_lv9_0 = "000000000";
const sc_lv<9> delta_LUT::ap_const_lv9_40 = "1000000";
const sc_lv<32> delta_LUT::ap_const_lv32_8 = "1000";
const sc_lv<32> delta_LUT::ap_const_lv32_6 = "110";
const sc_lv<4> delta_LUT::ap_const_lv4_0 = "0000";
const sc_lv<3> delta_LUT::ap_const_lv3_0 = "000";
const sc_lv<11> delta_LUT::ap_const_lv11_0 = "00000000000";
const sc_lv<11> delta_LUT::ap_const_lv11_483 = "10010000011";
const sc_lv<24> delta_LUT::ap_const_lv24_889 = "100010001001";

delta_LUT::delta_LUT(sc_module_name name) : sc_module(name), mVcdFile(0) {
    delta_table1_U = new delta_LUT_delta_tbkb("delta_table1_U");
    delta_table1_U->clk(ap_clk);
    delta_table1_U->reset(ap_rst);
    delta_table1_U->address0(delta_table1_address0);
    delta_table1_U->ce0(delta_table1_ce0);
    delta_table1_U->q0(delta_table1_q0);
    delta_LUT_mul_mulcud_U1 = new delta_LUT_mul_mulcud<1,3,13,11,24>("delta_LUT_mul_mulcud_U1");
    delta_LUT_mul_mulcud_U1->clk(ap_clk);
    delta_LUT_mul_mulcud_U1->reset(ap_rst);
    delta_LUT_mul_mulcud_U1->din0(grp_fu_249_p0);
    delta_LUT_mul_mulcud_U1->din1(data_V);
    delta_LUT_mul_mulcud_U1->ce(ap_var_for_const0);
    delta_LUT_mul_mulcud_U1->dout(grp_fu_249_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter6 );

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

    SC_METHOD(thread_ap_pipeline_idle_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( ap_enable_reg_pp0_iter4 );
    sensitive << ( ap_enable_reg_pp0_iter5 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_delta_table1_address0);
    sensitive << ( ap_enable_reg_pp0_iter5 );
    sensitive << ( tmp_3_fu_208_p1 );

    SC_METHOD(thread_delta_table1_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter5 );

    SC_METHOD(thread_grp_fu_249_p0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_icmp_fu_203_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter5 );
    sensitive << ( tmp_13_reg_294 );

    SC_METHOD(thread_index_fu_199_p1);
    sensitive << ( tmp_2_fu_192_p3 );

    SC_METHOD(thread_neg_mul_fu_119_p2);
    sensitive << ( tmp_1_reg_268 );

    SC_METHOD(thread_neg_ti_fu_151_p2);
    sensitive << ( tmp_10_fu_147_p1 );

    SC_METHOD(thread_p_v_fu_140_p3);
    sensitive << ( ap_pipeline_reg_pp0_iter3_tmp_6_reg_262 );
    sensitive << ( tmp_fu_134_p1 );
    sensitive << ( tmp_5_fu_137_p1 );

    SC_METHOD(thread_r_V_fu_168_p2);
    sensitive << ( tmp_9_fu_161_p3 );

    SC_METHOD(thread_res_V);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter6 );
    sensitive << ( storemerge1_fu_236_p3 );

    SC_METHOD(thread_res_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter6 );

    SC_METHOD(thread_sel_tmp1_fu_213_p2);
    sensitive << ( ap_pipeline_reg_pp0_iter5_tmp_12_reg_288 );

    SC_METHOD(thread_sel_tmp2_fu_218_p2);
    sensitive << ( icmp_reg_299 );
    sensitive << ( sel_tmp1_fu_213_p2 );

    SC_METHOD(thread_sel_tmp_fu_223_p3);
    sensitive << ( sel_tmp2_fu_218_p2 );

    SC_METHOD(thread_storemerge1_fu_236_p3);
    sensitive << ( delta_table1_q0 );
    sensitive << ( tmp_4_fu_231_p2 );
    sensitive << ( sel_tmp_fu_223_p3 );

    SC_METHOD(thread_tmp_10_fu_147_p1);
    sensitive << ( p_v_fu_140_p3 );

    SC_METHOD(thread_tmp_11_fu_157_p1);
    sensitive << ( p_v_fu_140_p3 );

    SC_METHOD(thread_tmp_1_fu_107_p1);
    sensitive << ( grp_fu_249_p2 );

    SC_METHOD(thread_tmp_2_fu_192_p3);
    sensitive << ( r_V_reg_283 );

    SC_METHOD(thread_tmp_3_fu_208_p1);
    sensitive << ( index_fu_199_p1 );

    SC_METHOD(thread_tmp_4_fu_231_p2);
    sensitive << ( ap_pipeline_reg_pp0_iter5_tmp_12_reg_288 );
    sensitive << ( sel_tmp2_fu_218_p2 );

    SC_METHOD(thread_tmp_5_fu_137_p1);
    sensitive << ( ap_pipeline_reg_pp0_iter3_tmp_8_reg_273 );

    SC_METHOD(thread_tmp_9_fu_161_p3);
    sensitive << ( ap_pipeline_reg_pp0_iter3_tmp_6_reg_262 );
    sensitive << ( neg_ti_fu_151_p2 );
    sensitive << ( tmp_11_fu_157_p1 );

    SC_METHOD(thread_tmp_fu_134_p1);
    sensitive << ( tmp_7_reg_278 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_pipeline_idle_pp0 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "1";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter2 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter3 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter4 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter5 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter6 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "delta_LUT_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, data_V, "(port)data_V");
    sc_trace(mVcdFile, res_V, "(port)res_V");
    sc_trace(mVcdFile, res_V_ap_vld, "(port)res_V_ap_vld");
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
    sc_trace(mVcdFile, delta_table1_address0, "delta_table1_address0");
    sc_trace(mVcdFile, delta_table1_ce0, "delta_table1_ce0");
    sc_trace(mVcdFile, delta_table1_q0, "delta_table1_q0");
    sc_trace(mVcdFile, tmp_6_reg_262, "tmp_6_reg_262");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter1_tmp_6_reg_262, "ap_pipeline_reg_pp0_iter1_tmp_6_reg_262");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter2_tmp_6_reg_262, "ap_pipeline_reg_pp0_iter2_tmp_6_reg_262");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter3_tmp_6_reg_262, "ap_pipeline_reg_pp0_iter3_tmp_6_reg_262");
    sc_trace(mVcdFile, tmp_1_fu_107_p1, "tmp_1_fu_107_p1");
    sc_trace(mVcdFile, tmp_1_reg_268, "tmp_1_reg_268");
    sc_trace(mVcdFile, tmp_8_reg_273, "tmp_8_reg_273");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter3_tmp_8_reg_273, "ap_pipeline_reg_pp0_iter3_tmp_8_reg_273");
    sc_trace(mVcdFile, tmp_7_reg_278, "tmp_7_reg_278");
    sc_trace(mVcdFile, r_V_fu_168_p2, "r_V_fu_168_p2");
    sc_trace(mVcdFile, r_V_reg_283, "r_V_reg_283");
    sc_trace(mVcdFile, tmp_12_reg_288, "tmp_12_reg_288");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter5_tmp_12_reg_288, "ap_pipeline_reg_pp0_iter5_tmp_12_reg_288");
    sc_trace(mVcdFile, tmp_13_reg_294, "tmp_13_reg_294");
    sc_trace(mVcdFile, icmp_fu_203_p2, "icmp_fu_203_p2");
    sc_trace(mVcdFile, icmp_reg_299, "icmp_reg_299");
    sc_trace(mVcdFile, tmp_3_fu_208_p1, "tmp_3_fu_208_p1");
    sc_trace(mVcdFile, grp_fu_249_p2, "grp_fu_249_p2");
    sc_trace(mVcdFile, neg_mul_fu_119_p2, "neg_mul_fu_119_p2");
    sc_trace(mVcdFile, tmp_fu_134_p1, "tmp_fu_134_p1");
    sc_trace(mVcdFile, tmp_5_fu_137_p1, "tmp_5_fu_137_p1");
    sc_trace(mVcdFile, p_v_fu_140_p3, "p_v_fu_140_p3");
    sc_trace(mVcdFile, tmp_10_fu_147_p1, "tmp_10_fu_147_p1");
    sc_trace(mVcdFile, neg_ti_fu_151_p2, "neg_ti_fu_151_p2");
    sc_trace(mVcdFile, tmp_11_fu_157_p1, "tmp_11_fu_157_p1");
    sc_trace(mVcdFile, tmp_9_fu_161_p3, "tmp_9_fu_161_p3");
    sc_trace(mVcdFile, tmp_2_fu_192_p3, "tmp_2_fu_192_p3");
    sc_trace(mVcdFile, index_fu_199_p1, "index_fu_199_p1");
    sc_trace(mVcdFile, sel_tmp1_fu_213_p2, "sel_tmp1_fu_213_p2");
    sc_trace(mVcdFile, sel_tmp2_fu_218_p2, "sel_tmp2_fu_218_p2");
    sc_trace(mVcdFile, tmp_4_fu_231_p2, "tmp_4_fu_231_p2");
    sc_trace(mVcdFile, sel_tmp_fu_223_p3, "sel_tmp_fu_223_p3");
    sc_trace(mVcdFile, storemerge1_fu_236_p3, "storemerge1_fu_236_p3");
    sc_trace(mVcdFile, grp_fu_249_p0, "grp_fu_249_p0");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_pipeline_idle_pp0, "ap_pipeline_idle_pp0");
#endif

    }
    mHdltvinHandle.open("delta_LUT.hdltvin.dat");
    mHdltvoutHandle.open("delta_LUT.hdltvout.dat");
}

delta_LUT::~delta_LUT() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete delta_table1_U;
    delete delta_LUT_mul_mulcud_U1;
}

void delta_LUT::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
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
             !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
            ap_enable_reg_pp0_iter1 = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        ap_pipeline_reg_pp0_iter1_tmp_6_reg_262 = tmp_6_reg_262.read();
        tmp_6_reg_262 = data_V.read().range(10, 10);
    }
    if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        ap_pipeline_reg_pp0_iter2_tmp_6_reg_262 = ap_pipeline_reg_pp0_iter1_tmp_6_reg_262.read();
        ap_pipeline_reg_pp0_iter3_tmp_6_reg_262 = ap_pipeline_reg_pp0_iter2_tmp_6_reg_262.read();
        ap_pipeline_reg_pp0_iter3_tmp_8_reg_273 = tmp_8_reg_273.read();
        ap_pipeline_reg_pp0_iter5_tmp_12_reg_288 = tmp_12_reg_288.read();
        icmp_reg_299 = icmp_fu_203_p2.read();
        r_V_reg_283 = r_V_fu_168_p2.read();
        tmp_12_reg_288 = r_V_fu_168_p2.read().range(8, 8);
        tmp_13_reg_294 = r_V_fu_168_p2.read().range(8, 6);
    }
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && !esl_seteq<1,1,1>(ap_pipeline_reg_pp0_iter1_tmp_6_reg_262.read(), ap_const_lv1_0))) {
        tmp_1_reg_268 = tmp_1_fu_107_p1.read();
    }
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && !esl_seteq<1,1,1>(ap_pipeline_reg_pp0_iter2_tmp_6_reg_262.read(), ap_const_lv1_0))) {
        tmp_7_reg_278 = neg_mul_fu_119_p2.read().range(22, 15);
    }
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_pipeline_reg_pp0_iter1_tmp_6_reg_262.read(), ap_const_lv1_0))) {
        tmp_8_reg_273 = grp_fu_249_p2.read().range(23, 15);
    }
}

void delta_LUT::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read().range(0, 0);
}

void delta_LUT::thread_ap_done() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()))) {
        ap_pipeline_idle_pp0 = ap_const_logic_1;
    } else {
        ap_pipeline_idle_pp0 = ap_const_logic_0;
    }
}

void delta_LUT::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void delta_LUT::thread_delta_table1_address0() {
    delta_table1_address0 =  (sc_lv<10>) (tmp_3_fu_208_p1.read());
}

void delta_LUT::thread_delta_table1_ce0() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        delta_table1_ce0 = ap_const_logic_1;
    } else {
        delta_table1_ce0 = ap_const_logic_0;
    }
}

void delta_LUT::thread_grp_fu_249_p0() {
    grp_fu_249_p0 =  (sc_lv<13>) (ap_const_lv24_889);
}

void delta_LUT::thread_icmp_fu_203_p2() {
    icmp_fu_203_p2 = (!tmp_13_reg_294.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_13_reg_294.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void delta_LUT::thread_index_fu_199_p1() {
    index_fu_199_p1 = esl_sext<32,13>(tmp_2_fu_192_p3.read());
}

void delta_LUT::thread_neg_mul_fu_119_p2() {
    neg_mul_fu_119_p2 = (!ap_const_lv23_0.is_01() || !tmp_1_reg_268.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_0) - sc_biguint<23>(tmp_1_reg_268.read()));
}

void delta_LUT::thread_neg_ti_fu_151_p2() {
    neg_ti_fu_151_p2 = (!ap_const_lv9_0.is_01() || !tmp_10_fu_147_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_0) - sc_biguint<9>(tmp_10_fu_147_p1.read()));
}

void delta_LUT::thread_p_v_fu_140_p3() {
    p_v_fu_140_p3 = (!ap_pipeline_reg_pp0_iter3_tmp_6_reg_262.read()[0].is_01())? sc_lv<12>(): ((ap_pipeline_reg_pp0_iter3_tmp_6_reg_262.read()[0].to_bool())? tmp_fu_134_p1.read(): tmp_5_fu_137_p1.read());
}

void delta_LUT::thread_r_V_fu_168_p2() {
    r_V_fu_168_p2 = (!ap_const_lv9_40.is_01() || !tmp_9_fu_161_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_40) - sc_biguint<9>(tmp_9_fu_161_p3.read()));
}

void delta_LUT::thread_res_V() {
    res_V = esl_zext<19,11>(storemerge1_fu_236_p3.read());
}

void delta_LUT::thread_res_V_ap_vld() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        res_V_ap_vld = ap_const_logic_1;
    } else {
        res_V_ap_vld = ap_const_logic_0;
    }
}

void delta_LUT::thread_sel_tmp1_fu_213_p2() {
    sel_tmp1_fu_213_p2 = (ap_pipeline_reg_pp0_iter5_tmp_12_reg_288.read() ^ ap_const_lv1_1);
}

void delta_LUT::thread_sel_tmp2_fu_218_p2() {
    sel_tmp2_fu_218_p2 = (icmp_reg_299.read() & sel_tmp1_fu_213_p2.read());
}

void delta_LUT::thread_sel_tmp_fu_223_p3() {
    sel_tmp_fu_223_p3 = (!sel_tmp2_fu_218_p2.read()[0].is_01())? sc_lv<11>(): ((sel_tmp2_fu_218_p2.read()[0].to_bool())? ap_const_lv11_0: ap_const_lv11_483);
}

void delta_LUT::thread_storemerge1_fu_236_p3() {
    storemerge1_fu_236_p3 = (!tmp_4_fu_231_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_4_fu_231_p2.read()[0].to_bool())? sel_tmp_fu_223_p3.read(): delta_table1_q0.read());
}

void delta_LUT::thread_tmp_10_fu_147_p1() {
    tmp_10_fu_147_p1 = p_v_fu_140_p3.read().range(9-1, 0);
}

void delta_LUT::thread_tmp_11_fu_157_p1() {
    tmp_11_fu_157_p1 = p_v_fu_140_p3.read().range(9-1, 0);
}

void delta_LUT::thread_tmp_1_fu_107_p1() {
    tmp_1_fu_107_p1 = grp_fu_249_p2.read().range(23-1, 0);
}

void delta_LUT::thread_tmp_2_fu_192_p3() {
    tmp_2_fu_192_p3 = esl_concat<9,4>(r_V_reg_283.read(), ap_const_lv4_0);
}

void delta_LUT::thread_tmp_3_fu_208_p1() {
    tmp_3_fu_208_p1 = esl_zext<64,32>(index_fu_199_p1.read());
}

void delta_LUT::thread_tmp_4_fu_231_p2() {
    tmp_4_fu_231_p2 = (sel_tmp2_fu_218_p2.read() | ap_pipeline_reg_pp0_iter5_tmp_12_reg_288.read());
}

void delta_LUT::thread_tmp_5_fu_137_p1() {
    tmp_5_fu_137_p1 = esl_sext<12,9>(ap_pipeline_reg_pp0_iter3_tmp_8_reg_273.read());
}

void delta_LUT::thread_tmp_9_fu_161_p3() {
    tmp_9_fu_161_p3 = (!ap_pipeline_reg_pp0_iter3_tmp_6_reg_262.read()[0].is_01())? sc_lv<9>(): ((ap_pipeline_reg_pp0_iter3_tmp_6_reg_262.read()[0].to_bool())? neg_ti_fu_151_p2.read(): tmp_11_fu_157_p1.read());
}

void delta_LUT::thread_tmp_fu_134_p1() {
    tmp_fu_134_p1 = esl_sext<12,8>(tmp_7_reg_278.read());
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

void delta_LUT::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"data_V\" :  \"" << data_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_V\" :  \"" << res_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_V_ap_vld\" :  \"" << res_V_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

