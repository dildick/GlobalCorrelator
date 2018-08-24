// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "rinvToPt.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic rinvToPt::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic rinvToPt::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> rinvToPt::ap_ST_fsm_pp0_stage0 = "1";
const sc_lv<32> rinvToPt::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> rinvToPt::ap_const_lv1_1 = "1";
const sc_lv<32> rinvToPt::ap_const_lv32_8 = "1000";
const sc_lv<32> rinvToPt::ap_const_lv32_1F = "11111";
const sc_lv<14> rinvToPt::ap_const_lv14_0 = "00000000000000";
const sc_lv<22> rinvToPt::ap_const_lv22_0 = "0000000000000000000000";
const sc_lv<25> rinvToPt::ap_const_lv25_1 = "1";
const sc_lv<32> rinvToPt::ap_const_lv32_E = "1110";
const sc_lv<18> rinvToPt::ap_const_lv18_0 = "000000000000000000";
const sc_lv<14> rinvToPt::ap_const_lv14_40 = "1000000";
const sc_lv<32> rinvToPt::ap_const_lv32_FFFFFF51 = "11111111111111111111111101010001";
const sc_lv<32> rinvToPt::ap_const_lv32_400000 = "10000000000000000000000";

rinvToPt::rinvToPt(sc_module_name name) : sc_module(name), mVcdFile(0) {
    rinvToPt_table1_U = new rinvToPt_rinvToPtbkb("rinvToPt_table1_U");
    rinvToPt_table1_U->clk(ap_clk);
    rinvToPt_table1_U->reset(ap_rst);
    rinvToPt_table1_U->address0(rinvToPt_table1_address0);
    rinvToPt_table1_U->ce0(rinvToPt_table1_ce0);
    rinvToPt_table1_U->q0(rinvToPt_table1_q0);
    rinvToPt_mac_mulacud_U1 = new rinvToPt_mac_mulacud<1,3,9,24,24,32>("rinvToPt_mac_mulacud_U1");
    rinvToPt_mac_mulacud_U1->clk(ap_clk);
    rinvToPt_mac_mulacud_U1->reset(ap_rst);
    rinvToPt_mac_mulacud_U1->din0(grp_fu_211_p0);
    rinvToPt_mac_mulacud_U1->din1(data_V);
    rinvToPt_mac_mulacud_U1->din2(grp_fu_211_p2);
    rinvToPt_mac_mulacud_U1->ce(ap_var_for_const0);
    rinvToPt_mac_mulacud_U1->dout(grp_fu_211_p3);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter5 );

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

    SC_METHOD(thread_ap_pipeline_idle_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( ap_enable_reg_pp0_iter4 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_grp_fu_211_p0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_grp_fu_211_p2);
    sensitive << ( ap_enable_reg_pp0_iter2 );

    SC_METHOD(thread_icmp_fu_169_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( tmp_10_fu_159_p4 );

    SC_METHOD(thread_index_fu_143_p3);
    sensitive << ( tmp_6_fu_128_p1 );
    sensitive << ( tmp_3_fu_102_p3 );
    sensitive << ( tmp_5_fu_135_p3 );

    SC_METHOD(thread_p_Result_2_fu_109_p3);
    sensitive << ( tmp_4_reg_237 );

    SC_METHOD(thread_res_V);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter5 );
    sensitive << ( rinvToPt_table1_q0 );
    sensitive << ( tmp_8_fu_197_p2 );
    sensitive << ( sel_tmp_cast_fu_189_p3 );

    SC_METHOD(thread_res_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter5 );

    SC_METHOD(thread_ret_V_cast_cast_fu_99_p1);
    sensitive << ( tmp_2_reg_231 );

    SC_METHOD(thread_ret_V_fu_122_p2);
    sensitive << ( ret_V_cast_cast_fu_99_p1 );

    SC_METHOD(thread_rinvToPt_table1_address0);
    sensitive << ( ap_enable_reg_pp0_iter4 );
    sensitive << ( tmp_1_fu_175_p1 );

    SC_METHOD(thread_rinvToPt_table1_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter4 );

    SC_METHOD(thread_sel_tmp1_fu_179_p2);
    sensitive << ( ap_pipeline_reg_pp0_iter4_tmp_9_reg_247 );

    SC_METHOD(thread_sel_tmp2_fu_184_p2);
    sensitive << ( ap_pipeline_reg_pp0_iter4_icmp_reg_253 );
    sensitive << ( sel_tmp1_fu_179_p2 );

    SC_METHOD(thread_sel_tmp_cast_fu_189_p3);
    sensitive << ( sel_tmp2_fu_184_p2 );

    SC_METHOD(thread_tmp_10_fu_159_p4);
    sensitive << ( index_fu_143_p3 );

    SC_METHOD(thread_tmp_1_fu_175_p1);
    sensitive << ( index_reg_242 );

    SC_METHOD(thread_tmp_3_fu_102_p3);
    sensitive << ( r_V_reg_226 );

    SC_METHOD(thread_tmp_4_fu_96_p1);
    sensitive << ( grp_fu_211_p3 );

    SC_METHOD(thread_tmp_5_fu_135_p3);
    sensitive << ( tmp_7_fu_116_p2 );
    sensitive << ( tmp_6_fu_128_p1 );
    sensitive << ( tmp_s_fu_131_p1 );

    SC_METHOD(thread_tmp_6_fu_128_p1);
    sensitive << ( tmp_2_reg_231 );

    SC_METHOD(thread_tmp_7_fu_116_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( p_Result_2_fu_109_p3 );

    SC_METHOD(thread_tmp_8_fu_197_p2);
    sensitive << ( ap_pipeline_reg_pp0_iter4_tmp_9_reg_247 );
    sensitive << ( sel_tmp2_fu_184_p2 );

    SC_METHOD(thread_tmp_s_fu_131_p1);
    sensitive << ( ret_V_fu_122_p2 );

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
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "rinvToPt_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, rinvToPt_table1_address0, "rinvToPt_table1_address0");
    sc_trace(mVcdFile, rinvToPt_table1_ce0, "rinvToPt_table1_ce0");
    sc_trace(mVcdFile, rinvToPt_table1_q0, "rinvToPt_table1_q0");
    sc_trace(mVcdFile, grp_fu_211_p3, "grp_fu_211_p3");
    sc_trace(mVcdFile, r_V_reg_226, "r_V_reg_226");
    sc_trace(mVcdFile, tmp_2_reg_231, "tmp_2_reg_231");
    sc_trace(mVcdFile, tmp_4_fu_96_p1, "tmp_4_fu_96_p1");
    sc_trace(mVcdFile, tmp_4_reg_237, "tmp_4_reg_237");
    sc_trace(mVcdFile, index_fu_143_p3, "index_fu_143_p3");
    sc_trace(mVcdFile, index_reg_242, "index_reg_242");
    sc_trace(mVcdFile, tmp_9_reg_247, "tmp_9_reg_247");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter4_tmp_9_reg_247, "ap_pipeline_reg_pp0_iter4_tmp_9_reg_247");
    sc_trace(mVcdFile, icmp_fu_169_p2, "icmp_fu_169_p2");
    sc_trace(mVcdFile, icmp_reg_253, "icmp_reg_253");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter4_icmp_reg_253, "ap_pipeline_reg_pp0_iter4_icmp_reg_253");
    sc_trace(mVcdFile, tmp_1_fu_175_p1, "tmp_1_fu_175_p1");
    sc_trace(mVcdFile, p_Result_2_fu_109_p3, "p_Result_2_fu_109_p3");
    sc_trace(mVcdFile, ret_V_cast_cast_fu_99_p1, "ret_V_cast_cast_fu_99_p1");
    sc_trace(mVcdFile, ret_V_fu_122_p2, "ret_V_fu_122_p2");
    sc_trace(mVcdFile, tmp_7_fu_116_p2, "tmp_7_fu_116_p2");
    sc_trace(mVcdFile, tmp_6_fu_128_p1, "tmp_6_fu_128_p1");
    sc_trace(mVcdFile, tmp_s_fu_131_p1, "tmp_s_fu_131_p1");
    sc_trace(mVcdFile, tmp_3_fu_102_p3, "tmp_3_fu_102_p3");
    sc_trace(mVcdFile, tmp_5_fu_135_p3, "tmp_5_fu_135_p3");
    sc_trace(mVcdFile, tmp_10_fu_159_p4, "tmp_10_fu_159_p4");
    sc_trace(mVcdFile, sel_tmp1_fu_179_p2, "sel_tmp1_fu_179_p2");
    sc_trace(mVcdFile, sel_tmp2_fu_184_p2, "sel_tmp2_fu_184_p2");
    sc_trace(mVcdFile, tmp_8_fu_197_p2, "tmp_8_fu_197_p2");
    sc_trace(mVcdFile, sel_tmp_cast_fu_189_p3, "sel_tmp_cast_fu_189_p3");
    sc_trace(mVcdFile, grp_fu_211_p0, "grp_fu_211_p0");
    sc_trace(mVcdFile, grp_fu_211_p2, "grp_fu_211_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_pipeline_idle_pp0, "ap_pipeline_idle_pp0");
#endif

    }
    mHdltvinHandle.open("rinvToPt.hdltvin.dat");
    mHdltvoutHandle.open("rinvToPt.hdltvout.dat");
}

rinvToPt::~rinvToPt() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete rinvToPt_table1_U;
    delete rinvToPt_mac_mulacud_U1;
}

void rinvToPt::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void rinvToPt::thread_ap_clk_no_reset_() {
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
    if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        ap_pipeline_reg_pp0_iter4_icmp_reg_253 = icmp_reg_253.read();
        ap_pipeline_reg_pp0_iter4_tmp_9_reg_247 = tmp_9_reg_247.read();
        icmp_reg_253 = icmp_fu_169_p2.read();
        index_reg_242 = index_fu_143_p3.read();
        tmp_2_reg_231 = grp_fu_211_p3.read().range(31, 8);
        tmp_4_reg_237 = tmp_4_fu_96_p1.read();
        tmp_9_reg_247 = index_fu_143_p3.read().range(31, 31);
    }
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        r_V_reg_226 = grp_fu_211_p3.read();
    }
}

void rinvToPt::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read().range(0, 0);
}

void rinvToPt::thread_ap_done() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void rinvToPt::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void rinvToPt::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void rinvToPt::thread_ap_pipeline_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()))) {
        ap_pipeline_idle_pp0 = ap_const_logic_1;
    } else {
        ap_pipeline_idle_pp0 = ap_const_logic_0;
    }
}

void rinvToPt::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void rinvToPt::thread_grp_fu_211_p0() {
    grp_fu_211_p0 =  (sc_lv<9>) (ap_const_lv32_FFFFFF51);
}

void rinvToPt::thread_grp_fu_211_p2() {
    grp_fu_211_p2 =  (sc_lv<24>) (ap_const_lv32_400000);
}

void rinvToPt::thread_icmp_fu_169_p2() {
    icmp_fu_169_p2 = (!tmp_10_fu_159_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): (sc_bigint<18>(tmp_10_fu_159_p4.read()) > sc_bigint<18>(ap_const_lv18_0));
}

void rinvToPt::thread_index_fu_143_p3() {
    index_fu_143_p3 = (!tmp_3_fu_102_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_3_fu_102_p3.read()[0].to_bool())? tmp_5_fu_135_p3.read(): tmp_6_fu_128_p1.read());
}

void rinvToPt::thread_p_Result_2_fu_109_p3() {
    p_Result_2_fu_109_p3 = esl_concat<8,14>(tmp_4_reg_237.read(), ap_const_lv14_0);
}

void rinvToPt::thread_res_V() {
    res_V = (!tmp_8_fu_197_p2.read()[0].is_01())? sc_lv<14>(): ((tmp_8_fu_197_p2.read()[0].to_bool())? sel_tmp_cast_fu_189_p3.read(): rinvToPt_table1_q0.read());
}

void rinvToPt::thread_res_V_ap_vld() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        res_V_ap_vld = ap_const_logic_1;
    } else {
        res_V_ap_vld = ap_const_logic_0;
    }
}

void rinvToPt::thread_ret_V_cast_cast_fu_99_p1() {
    ret_V_cast_cast_fu_99_p1 = esl_sext<25,24>(tmp_2_reg_231.read());
}

void rinvToPt::thread_ret_V_fu_122_p2() {
    ret_V_fu_122_p2 = (!ap_const_lv25_1.is_01() || !ret_V_cast_cast_fu_99_p1.read().is_01())? sc_lv<25>(): (sc_biguint<25>(ap_const_lv25_1) + sc_bigint<25>(ret_V_cast_cast_fu_99_p1.read()));
}

void rinvToPt::thread_rinvToPt_table1_address0() {
    rinvToPt_table1_address0 =  (sc_lv<14>) (tmp_1_fu_175_p1.read());
}

void rinvToPt::thread_rinvToPt_table1_ce0() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        rinvToPt_table1_ce0 = ap_const_logic_1;
    } else {
        rinvToPt_table1_ce0 = ap_const_logic_0;
    }
}

void rinvToPt::thread_sel_tmp1_fu_179_p2() {
    sel_tmp1_fu_179_p2 = (ap_pipeline_reg_pp0_iter4_tmp_9_reg_247.read() ^ ap_const_lv1_1);
}

void rinvToPt::thread_sel_tmp2_fu_184_p2() {
    sel_tmp2_fu_184_p2 = (ap_pipeline_reg_pp0_iter4_icmp_reg_253.read() & sel_tmp1_fu_179_p2.read());
}

void rinvToPt::thread_sel_tmp_cast_fu_189_p3() {
    sel_tmp_cast_fu_189_p3 = (!sel_tmp2_fu_184_p2.read()[0].is_01())? sc_lv<14>(): ((sel_tmp2_fu_184_p2.read()[0].to_bool())? ap_const_lv14_0: ap_const_lv14_40);
}

void rinvToPt::thread_tmp_10_fu_159_p4() {
    tmp_10_fu_159_p4 = index_fu_143_p3.read().range(31, 14);
}

void rinvToPt::thread_tmp_1_fu_175_p1() {
    tmp_1_fu_175_p1 = esl_zext<64,32>(index_reg_242.read());
}

void rinvToPt::thread_tmp_3_fu_102_p3() {
    tmp_3_fu_102_p3 = r_V_reg_226.read().range(31, 31);
}

void rinvToPt::thread_tmp_4_fu_96_p1() {
    tmp_4_fu_96_p1 = grp_fu_211_p3.read().range(8-1, 0);
}

void rinvToPt::thread_tmp_5_fu_135_p3() {
    tmp_5_fu_135_p3 = (!tmp_7_fu_116_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_7_fu_116_p2.read()[0].to_bool())? tmp_6_fu_128_p1.read(): tmp_s_fu_131_p1.read());
}

void rinvToPt::thread_tmp_6_fu_128_p1() {
    tmp_6_fu_128_p1 = esl_sext<32,24>(tmp_2_reg_231.read());
}

void rinvToPt::thread_tmp_7_fu_116_p2() {
    tmp_7_fu_116_p2 = (!p_Result_2_fu_109_p3.read().is_01() || !ap_const_lv22_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_2_fu_109_p3.read() == ap_const_lv22_0);
}

void rinvToPt::thread_tmp_8_fu_197_p2() {
    tmp_8_fu_197_p2 = (sel_tmp2_fu_184_p2.read() | ap_pipeline_reg_pp0_iter4_tmp_9_reg_247.read());
}

void rinvToPt::thread_tmp_s_fu_131_p1() {
    tmp_s_fu_131_p1 = esl_sext<32,25>(ret_V_fu_122_p2.read());
}

void rinvToPt::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

void rinvToPt::thread_hdltv_gen() {
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

