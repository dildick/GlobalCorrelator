// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "arcsinh.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic arcsinh::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic arcsinh::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> arcsinh::ap_ST_fsm_pp0_stage0 = "1";
const sc_lv<32> arcsinh::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> arcsinh::ap_const_lv1_1 = "1";
const sc_lv<1> arcsinh::ap_const_lv1_0 = "0";
const sc_lv<32> arcsinh::ap_const_lv32_D = "1101";
const sc_lv<32> arcsinh::ap_const_lv32_11 = "10001";
const sc_lv<32> arcsinh::ap_const_lv32_1D = "11101";
const sc_lv<29> arcsinh::ap_const_lv29_0 = "00000000000000000000000000000";
const sc_lv<32> arcsinh::ap_const_lv32_1C = "11100";
const sc_lv<13> arcsinh::ap_const_lv13_0 = "0000000000000";
const sc_lv<13> arcsinh::ap_const_lv13_400 = "10000000000";
const sc_lv<32> arcsinh::ap_const_lv32_C = "1100";
const sc_lv<32> arcsinh::ap_const_lv32_A = "1010";
const sc_lv<3> arcsinh::ap_const_lv3_0 = "000";
const sc_lv<12> arcsinh::ap_const_lv12_0 = "000000000000";
const sc_lv<12> arcsinh::ap_const_lv12_9F7 = "100111110111";
const sc_lv<30> arcsinh::ap_const_lv30_5556 = "101010101010110";

arcsinh::arcsinh(sc_module_name name) : sc_module(name), mVcdFile(0) {
    arcsinh_table10_U = new arcsinh_arcsinh_tbkb("arcsinh_table10_U");
    arcsinh_table10_U->clk(ap_clk);
    arcsinh_table10_U->reset(ap_rst);
    arcsinh_table10_U->address0(arcsinh_table10_address0);
    arcsinh_table10_U->ce0(arcsinh_table10_ce0);
    arcsinh_table10_U->q0(arcsinh_table10_q0);
    prop_hw_mul_mul_1cud_U1 = new prop_hw_mul_mul_1cud<1,3,16,14,30>("prop_hw_mul_mul_1cud_U1");
    prop_hw_mul_mul_1cud_U1->clk(ap_clk);
    prop_hw_mul_mul_1cud_U1->reset(ap_rst);
    prop_hw_mul_mul_1cud_U1->din0(grp_fu_225_p0);
    prop_hw_mul_mul_1cud_U1->din1(data_V_read);
    prop_hw_mul_mul_1cud_U1->ce(ap_var_for_const0);
    prop_hw_mul_mul_1cud_U1->dout(grp_fu_225_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
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

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter6 );
    sensitive << ( arcsinh_table10_q0 );
    sensitive << ( tmp_205_fu_212_p2 );
    sensitive << ( sel_tmp_fu_204_p3 );

    SC_METHOD(thread_arcsinh_table10_address0);
    sensitive << ( ap_enable_reg_pp0_iter5 );
    sensitive << ( tmp_202_fu_189_p1 );

    SC_METHOD(thread_arcsinh_table10_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter5 );

    SC_METHOD(thread_grp_fu_225_p0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_icmp_fu_184_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter5 );
    sensitive << ( tmp_274_reg_270 );

    SC_METHOD(thread_index_fu_180_p1);
    sensitive << ( tmp_204_fu_173_p3 );

    SC_METHOD(thread_neg_mul_fu_100_p2);
    sensitive << ( tmp_267_reg_244 );

    SC_METHOD(thread_neg_ti_fu_132_p2);
    sensitive << ( tmp_271_fu_128_p1 );

    SC_METHOD(thread_p_v_fu_121_p3);
    sensitive << ( ap_pipeline_reg_pp0_iter3_tmp_268_reg_238 );
    sensitive << ( tmp_fu_115_p1 );
    sensitive << ( tmp_s_fu_118_p1 );

    SC_METHOD(thread_r_V_fu_149_p2);
    sensitive << ( tmp_206_fu_142_p3 );

    SC_METHOD(thread_sel_tmp1_fu_194_p2);
    sensitive << ( ap_pipeline_reg_pp0_iter5_tmp_273_reg_264 );

    SC_METHOD(thread_sel_tmp2_fu_199_p2);
    sensitive << ( icmp_reg_275 );
    sensitive << ( sel_tmp1_fu_194_p2 );

    SC_METHOD(thread_sel_tmp_fu_204_p3);
    sensitive << ( sel_tmp2_fu_199_p2 );

    SC_METHOD(thread_tmp_202_fu_189_p1);
    sensitive << ( index_fu_180_p1 );

    SC_METHOD(thread_tmp_204_fu_173_p3);
    sensitive << ( r_V_reg_259 );

    SC_METHOD(thread_tmp_205_fu_212_p2);
    sensitive << ( ap_pipeline_reg_pp0_iter5_tmp_273_reg_264 );
    sensitive << ( sel_tmp2_fu_199_p2 );

    SC_METHOD(thread_tmp_206_fu_142_p3);
    sensitive << ( ap_pipeline_reg_pp0_iter3_tmp_268_reg_238 );
    sensitive << ( neg_ti_fu_132_p2 );
    sensitive << ( tmp_272_fu_138_p1 );

    SC_METHOD(thread_tmp_267_fu_88_p1);
    sensitive << ( grp_fu_225_p2 );

    SC_METHOD(thread_tmp_271_fu_128_p1);
    sensitive << ( p_v_fu_121_p3 );

    SC_METHOD(thread_tmp_272_fu_138_p1);
    sensitive << ( p_v_fu_121_p3 );

    SC_METHOD(thread_tmp_fu_115_p1);
    sensitive << ( tmp_269_reg_254 );

    SC_METHOD(thread_tmp_s_fu_118_p1);
    sensitive << ( ap_pipeline_reg_pp0_iter3_tmp_270_reg_249 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_pipeline_idle_pp0 );

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
    apTFilenSS << "arcsinh_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, arcsinh_table10_address0, "arcsinh_table10_address0");
    sc_trace(mVcdFile, arcsinh_table10_ce0, "arcsinh_table10_ce0");
    sc_trace(mVcdFile, arcsinh_table10_q0, "arcsinh_table10_q0");
    sc_trace(mVcdFile, tmp_268_reg_238, "tmp_268_reg_238");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter1_tmp_268_reg_238, "ap_pipeline_reg_pp0_iter1_tmp_268_reg_238");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter2_tmp_268_reg_238, "ap_pipeline_reg_pp0_iter2_tmp_268_reg_238");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter3_tmp_268_reg_238, "ap_pipeline_reg_pp0_iter3_tmp_268_reg_238");
    sc_trace(mVcdFile, tmp_267_fu_88_p1, "tmp_267_fu_88_p1");
    sc_trace(mVcdFile, tmp_267_reg_244, "tmp_267_reg_244");
    sc_trace(mVcdFile, tmp_270_reg_249, "tmp_270_reg_249");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter3_tmp_270_reg_249, "ap_pipeline_reg_pp0_iter3_tmp_270_reg_249");
    sc_trace(mVcdFile, tmp_269_reg_254, "tmp_269_reg_254");
    sc_trace(mVcdFile, r_V_fu_149_p2, "r_V_fu_149_p2");
    sc_trace(mVcdFile, r_V_reg_259, "r_V_reg_259");
    sc_trace(mVcdFile, tmp_273_reg_264, "tmp_273_reg_264");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter5_tmp_273_reg_264, "ap_pipeline_reg_pp0_iter5_tmp_273_reg_264");
    sc_trace(mVcdFile, tmp_274_reg_270, "tmp_274_reg_270");
    sc_trace(mVcdFile, icmp_fu_184_p2, "icmp_fu_184_p2");
    sc_trace(mVcdFile, icmp_reg_275, "icmp_reg_275");
    sc_trace(mVcdFile, tmp_202_fu_189_p1, "tmp_202_fu_189_p1");
    sc_trace(mVcdFile, grp_fu_225_p2, "grp_fu_225_p2");
    sc_trace(mVcdFile, neg_mul_fu_100_p2, "neg_mul_fu_100_p2");
    sc_trace(mVcdFile, tmp_fu_115_p1, "tmp_fu_115_p1");
    sc_trace(mVcdFile, tmp_s_fu_118_p1, "tmp_s_fu_118_p1");
    sc_trace(mVcdFile, p_v_fu_121_p3, "p_v_fu_121_p3");
    sc_trace(mVcdFile, tmp_271_fu_128_p1, "tmp_271_fu_128_p1");
    sc_trace(mVcdFile, neg_ti_fu_132_p2, "neg_ti_fu_132_p2");
    sc_trace(mVcdFile, tmp_272_fu_138_p1, "tmp_272_fu_138_p1");
    sc_trace(mVcdFile, tmp_206_fu_142_p3, "tmp_206_fu_142_p3");
    sc_trace(mVcdFile, tmp_204_fu_173_p3, "tmp_204_fu_173_p3");
    sc_trace(mVcdFile, index_fu_180_p1, "index_fu_180_p1");
    sc_trace(mVcdFile, sel_tmp1_fu_194_p2, "sel_tmp1_fu_194_p2");
    sc_trace(mVcdFile, sel_tmp2_fu_199_p2, "sel_tmp2_fu_199_p2");
    sc_trace(mVcdFile, tmp_205_fu_212_p2, "tmp_205_fu_212_p2");
    sc_trace(mVcdFile, sel_tmp_fu_204_p3, "sel_tmp_fu_204_p3");
    sc_trace(mVcdFile, grp_fu_225_p0, "grp_fu_225_p0");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_pipeline_idle_pp0, "ap_pipeline_idle_pp0");
#endif

    }
}

arcsinh::~arcsinh() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete arcsinh_table10_U;
    delete prop_hw_mul_mul_1cud_U1;
}

void arcsinh::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void arcsinh::thread_ap_clk_no_reset_() {
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
        ap_pipeline_reg_pp0_iter1_tmp_268_reg_238 = tmp_268_reg_238.read();
        tmp_268_reg_238 = data_V_read.read().range(13, 13);
    }
    if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        ap_pipeline_reg_pp0_iter2_tmp_268_reg_238 = ap_pipeline_reg_pp0_iter1_tmp_268_reg_238.read();
        ap_pipeline_reg_pp0_iter3_tmp_268_reg_238 = ap_pipeline_reg_pp0_iter2_tmp_268_reg_238.read();
        ap_pipeline_reg_pp0_iter3_tmp_270_reg_249 = tmp_270_reg_249.read();
        ap_pipeline_reg_pp0_iter5_tmp_273_reg_264 = tmp_273_reg_264.read();
        icmp_reg_275 = icmp_fu_184_p2.read();
        r_V_reg_259 = r_V_fu_149_p2.read();
        tmp_273_reg_264 = r_V_fu_149_p2.read().range(12, 12);
        tmp_274_reg_270 = r_V_fu_149_p2.read().range(12, 10);
    }
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && !esl_seteq<1,1,1>(ap_pipeline_reg_pp0_iter1_tmp_268_reg_238.read(), ap_const_lv1_0))) {
        tmp_267_reg_244 = tmp_267_fu_88_p1.read();
    }
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && !esl_seteq<1,1,1>(ap_pipeline_reg_pp0_iter2_tmp_268_reg_238.read(), ap_const_lv1_0))) {
        tmp_269_reg_254 = neg_mul_fu_100_p2.read().range(28, 17);
    }
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_pipeline_reg_pp0_iter1_tmp_268_reg_238.read(), ap_const_lv1_0))) {
        tmp_270_reg_249 = grp_fu_225_p2.read().range(29, 17);
    }
}

void arcsinh::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read().range(0, 0);
}

void arcsinh::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void arcsinh::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void arcsinh::thread_ap_idle() {
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

void arcsinh::thread_ap_pipeline_idle_pp0() {
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

void arcsinh::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void arcsinh::thread_ap_return() {
    ap_return = (!tmp_205_fu_212_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_205_fu_212_p2.read()[0].to_bool())? sel_tmp_fu_204_p3.read(): arcsinh_table10_q0.read());
}

void arcsinh::thread_arcsinh_table10_address0() {
    arcsinh_table10_address0 =  (sc_lv<13>) (tmp_202_fu_189_p1.read());
}

void arcsinh::thread_arcsinh_table10_ce0() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        arcsinh_table10_ce0 = ap_const_logic_1;
    } else {
        arcsinh_table10_ce0 = ap_const_logic_0;
    }
}

void arcsinh::thread_grp_fu_225_p0() {
    grp_fu_225_p0 =  (sc_lv<16>) (ap_const_lv30_5556);
}

void arcsinh::thread_icmp_fu_184_p2() {
    icmp_fu_184_p2 = (!tmp_274_reg_270.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_274_reg_270.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void arcsinh::thread_index_fu_180_p1() {
    index_fu_180_p1 = esl_sext<32,16>(tmp_204_fu_173_p3.read());
}

void arcsinh::thread_neg_mul_fu_100_p2() {
    neg_mul_fu_100_p2 = (!ap_const_lv29_0.is_01() || !tmp_267_reg_244.read().is_01())? sc_lv<29>(): (sc_biguint<29>(ap_const_lv29_0) - sc_biguint<29>(tmp_267_reg_244.read()));
}

void arcsinh::thread_neg_ti_fu_132_p2() {
    neg_ti_fu_132_p2 = (!ap_const_lv13_0.is_01() || !tmp_271_fu_128_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_0) - sc_biguint<13>(tmp_271_fu_128_p1.read()));
}

void arcsinh::thread_p_v_fu_121_p3() {
    p_v_fu_121_p3 = (!ap_pipeline_reg_pp0_iter3_tmp_268_reg_238.read()[0].is_01())? sc_lv<15>(): ((ap_pipeline_reg_pp0_iter3_tmp_268_reg_238.read()[0].to_bool())? tmp_fu_115_p1.read(): tmp_s_fu_118_p1.read());
}

void arcsinh::thread_r_V_fu_149_p2() {
    r_V_fu_149_p2 = (!ap_const_lv13_400.is_01() || !tmp_206_fu_142_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_400) - sc_biguint<13>(tmp_206_fu_142_p3.read()));
}

void arcsinh::thread_sel_tmp1_fu_194_p2() {
    sel_tmp1_fu_194_p2 = (ap_pipeline_reg_pp0_iter5_tmp_273_reg_264.read() ^ ap_const_lv1_1);
}

void arcsinh::thread_sel_tmp2_fu_199_p2() {
    sel_tmp2_fu_199_p2 = (icmp_reg_275.read() & sel_tmp1_fu_194_p2.read());
}

void arcsinh::thread_sel_tmp_fu_204_p3() {
    sel_tmp_fu_204_p3 = (!sel_tmp2_fu_199_p2.read()[0].is_01())? sc_lv<12>(): ((sel_tmp2_fu_199_p2.read()[0].to_bool())? ap_const_lv12_0: ap_const_lv12_9F7);
}

void arcsinh::thread_tmp_202_fu_189_p1() {
    tmp_202_fu_189_p1 = esl_zext<64,32>(index_fu_180_p1.read());
}

void arcsinh::thread_tmp_204_fu_173_p3() {
    tmp_204_fu_173_p3 = esl_concat<13,3>(r_V_reg_259.read(), ap_const_lv3_0);
}

void arcsinh::thread_tmp_205_fu_212_p2() {
    tmp_205_fu_212_p2 = (sel_tmp2_fu_199_p2.read() | ap_pipeline_reg_pp0_iter5_tmp_273_reg_264.read());
}

void arcsinh::thread_tmp_206_fu_142_p3() {
    tmp_206_fu_142_p3 = (!ap_pipeline_reg_pp0_iter3_tmp_268_reg_238.read()[0].is_01())? sc_lv<13>(): ((ap_pipeline_reg_pp0_iter3_tmp_268_reg_238.read()[0].to_bool())? neg_ti_fu_132_p2.read(): tmp_272_fu_138_p1.read());
}

void arcsinh::thread_tmp_267_fu_88_p1() {
    tmp_267_fu_88_p1 = grp_fu_225_p2.read().range(29-1, 0);
}

void arcsinh::thread_tmp_271_fu_128_p1() {
    tmp_271_fu_128_p1 = p_v_fu_121_p3.read().range(13-1, 0);
}

void arcsinh::thread_tmp_272_fu_138_p1() {
    tmp_272_fu_138_p1 = p_v_fu_121_p3.read().range(13-1, 0);
}

void arcsinh::thread_tmp_fu_115_p1() {
    tmp_fu_115_p1 = esl_sext<15,12>(tmp_269_reg_254.read());
}

void arcsinh::thread_tmp_s_fu_118_p1() {
    tmp_s_fu_118_p1 = esl_sext<15,13>(ap_pipeline_reg_pp0_iter3_tmp_270_reg_249.read());
}

void arcsinh::thread_ap_NS_fsm() {
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
