#include "prop_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void prop_hw::thread_F2_1_fu_973_p2() {
    F2_1_fu_973_p2 = (!ap_const_lv12_433.is_01() || !tmp_6_fu_933_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_6_fu_933_p1.read()));
}

void prop_hw::thread_F2_2_fu_1546_p2() {
    F2_2_fu_1546_p2 = (!ap_const_lv12_433.is_01() || !tmp_35_fu_1506_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_35_fu_1506_p1.read()));
}

void prop_hw::thread_F2_3_fu_1076_p2() {
    F2_3_fu_1076_p2 = (!ap_const_lv12_433.is_01() || !tmp_41_fu_1036_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_41_fu_1036_p1.read()));
}

void prop_hw::thread_F2_4_fu_1653_p2() {
    F2_4_fu_1653_p2 = (!ap_const_lv12_433.is_01() || !tmp_66_fu_1613_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_66_fu_1613_p1.read()));
}

void prop_hw::thread_F2_5_fu_1118_p2() {
    F2_5_fu_1118_p2 = (!ap_const_lv12_433.is_01() || !tmp_41_fu_1036_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_41_fu_1036_p1.read()));
}

void prop_hw::thread_F2_6_fu_1801_p2() {
    F2_6_fu_1801_p2 = (!ap_const_lv12_433.is_01() || !tmp_100_fu_1761_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_100_fu_1761_p1.read()));
}

void prop_hw::thread_F2_7_fu_1225_p2() {
    F2_7_fu_1225_p2 = (!ap_const_lv12_433.is_01() || !tmp_104_fu_1185_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_104_fu_1185_p1.read()));
}

void prop_hw::thread_F2_8_fu_2245_p2() {
    F2_8_fu_2245_p2 = (!ap_const_lv12_433.is_01() || !tmp_138_fu_2231_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_138_fu_2231_p1.read()));
}

void prop_hw::thread_F2_9_fu_2742_p2() {
    F2_9_fu_2742_p2 = (!ap_const_lv12_433.is_01() || !tmp_169_fu_2728_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_169_fu_2728_p1.read()));
}

void prop_hw::thread_F2_fu_1369_p2() {
    F2_fu_1369_p2 = (!ap_const_lv12_433.is_01() || !tmp_1_fu_1329_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_433) - sc_biguint<12>(tmp_1_fu_1329_p1.read()));
}

void prop_hw::thread_absInvRinv_V_2_fu_880_p3() {
    absInvRinv_V_2_fu_880_p3 = (!tmp_209_fu_866_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_209_fu_866_p3.read()[0].to_bool())? absInvRinv_V_fu_874_p2.read(): in_hwRinv_V.read());
}

void prop_hw::thread_absInvRinv_V_fu_874_p2() {
    absInvRinv_V_fu_874_p2 = (in_hwRinv_V.read() ^ ap_const_lv15_4000);
}

void prop_hw::thread_absSinhEta_V_phi_fu_366_p24() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_reg_3070.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_4_reg_3387.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_12_reg_3403.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_8_reg_3391.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_18_reg_3598.read()))) {
        absSinhEta_V_phi_fu_366_p24 = tmp_59_reg_3607.read();
    } else {
        absSinhEta_V_phi_fu_366_p24 = ap_phi_precharge_reg_pp0_iter19_absSinhEta_V_reg_362.read();
    }
}

void prop_hw::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read().range(0, 0);
}

void prop_hw::thread_ap_condition_1122() {
    ap_condition_1122 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_reg_3070.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_9_reg_3220.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_16_reg_3236.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_13_reg_3224.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_21_reg_3361.read()));
}

void prop_hw::thread_ap_condition_1136() {
    ap_condition_1136 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_reg_3070.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_reg_3387.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_3403.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_reg_3391.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_19_fu_1864_p2.read()));
}

void prop_hw::thread_ap_condition_1146() {
    ap_condition_1146 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_reg_3070.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_reg_3387.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_3403.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_reg_3391.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_18_fu_1875_p2.read()));
}

void prop_hw::thread_ap_condition_1156() {
    ap_condition_1156 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_reg_3070.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_reg_3387.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_3403.read()));
}

void prop_hw::thread_ap_condition_1169() {
    ap_condition_1169 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_88_reg_3085.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_43_reg_3261.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_51_reg_3281.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_48_reg_3265.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_57_reg_3416.read()));
}

void prop_hw::thread_ap_condition_1291() {
    ap_condition_1291 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_88_reg_3085.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_38_reg_3465.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_47_reg_3485.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_44_reg_3469.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_52_reg_3631.read()));
}

void prop_hw::thread_ap_condition_1304() {
    ap_condition_1304 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_194_reg_3104.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_106_reg_3327.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_114_reg_3343.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_111_reg_3331.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_119_reg_3534.read()));
}

void prop_hw::thread_ap_condition_1317() {
    ap_condition_1317 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_194_reg_3104.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_101_reg_3560.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_110_reg_3576.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_107_reg_3564.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_116_reg_3677.read()));
}

void prop_hw::thread_ap_condition_1545() {
    ap_condition_1545 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_154_reg_3791.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_156_reg_3799.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_217_reg_3795.read()));
}

void prop_hw::thread_ap_condition_1551() {
    ap_condition_1551 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_154_reg_3791.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_156_reg_3799.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_217_reg_3795.read()));
}

void prop_hw::thread_ap_condition_1560() {
    ap_condition_1560 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_154_reg_3791.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_217_reg_3795.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_156_reg_3799.read()));
}

void prop_hw::thread_ap_condition_1564() {
    ap_condition_1564 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_154_reg_3791.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_217_reg_3795.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter34_tmp_156_reg_3799.read()));
}

void prop_hw::thread_ap_condition_1805() {
    ap_condition_1805 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()));
}

void prop_hw::thread_ap_condition_1808() {
    ap_condition_1808 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()));
}

void prop_hw::thread_ap_condition_1810() {
    ap_condition_1810 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter19.read()));
}

void prop_hw::thread_ap_condition_1834() {
    ap_condition_1834 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_reg_3070.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_reg_3387.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_reg_3403.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_reg_3391.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_19_fu_1864_p2.read()));
}

void prop_hw::thread_ap_condition_1839() {
    ap_condition_1839 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()));
}

void prop_hw::thread_ap_condition_1844() {
    ap_condition_1844 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_reg_3070.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_9_reg_3220.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_16_reg_3236.read()));
}

void prop_hw::thread_ap_condition_1847() {
    ap_condition_1847 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_reg_3070.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_9_reg_3220.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_16_reg_3236.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_13_reg_3224.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_21_reg_3361.read()));
}

void prop_hw::thread_ap_condition_1852() {
    ap_condition_1852 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_reg_3070.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_9_reg_3220.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_16_reg_3236.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_13_reg_3224.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_22_reg_3352.read()));
}

void prop_hw::thread_ap_condition_1869() {
    ap_condition_1869 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_88_reg_3085.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_43_reg_3261.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_51_reg_3281.read()));
}

void prop_hw::thread_ap_condition_1872() {
    ap_condition_1872 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_88_reg_3085.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_43_reg_3261.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_51_reg_3281.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_48_reg_3265.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_57_reg_3416.read()));
}

void prop_hw::thread_ap_condition_1877() {
    ap_condition_1877 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_88_reg_3085.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_43_reg_3261.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_51_reg_3281.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_48_reg_3265.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_58_reg_3407.read()));
}

void prop_hw::thread_ap_condition_1883() {
    ap_condition_1883 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter16_tmp_88_reg_3085.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_43_reg_3261.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_51_reg_3281.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_48_reg_3265.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_58_fu_1413_p2.read()));
}

void prop_hw::thread_ap_condition_1897() {
    ap_condition_1897 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_88_reg_3085.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_38_reg_3465.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_47_reg_3485.read()));
}

void prop_hw::thread_ap_condition_1900() {
    ap_condition_1900 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_88_reg_3085.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_38_reg_3465.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_47_reg_3485.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_44_reg_3469.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_52_reg_3631.read()));
}

void prop_hw::thread_ap_condition_1905() {
    ap_condition_1905 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_88_reg_3085.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_38_reg_3465.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_47_reg_3485.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_44_reg_3469.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_55_reg_3622.read()));
}

void prop_hw::thread_ap_condition_1910() {
    ap_condition_1910 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_88_reg_3085.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_38_reg_3465.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_47_reg_3485.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_44_reg_3469.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_55_fu_1916_p2.read()));
}

void prop_hw::thread_ap_condition_1923() {
    ap_condition_1923 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_194_reg_3104.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_101_reg_3560.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_110_reg_3576.read()));
}

void prop_hw::thread_ap_condition_1926() {
    ap_condition_1926 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_194_reg_3104.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_101_reg_3560.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_110_reg_3576.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_107_reg_3564.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_116_reg_3677.read()));
}

void prop_hw::thread_ap_condition_1931() {
    ap_condition_1931 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_194_reg_3104.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_101_reg_3560.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_110_reg_3576.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_107_reg_3564.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_117_reg_3668.read()));
}

void prop_hw::thread_ap_condition_1936() {
    ap_condition_1936 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter17_tmp_194_reg_3104.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_101_reg_3560.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_110_reg_3576.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_107_reg_3564.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_117_fu_1993_p2.read()));
}

void prop_hw::thread_ap_condition_1944() {
    ap_condition_1944 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_194_reg_3104.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_106_reg_3327.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_114_reg_3343.read()));
}

void prop_hw::thread_ap_condition_1947() {
    ap_condition_1947 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_194_reg_3104.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_106_reg_3327.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_114_reg_3343.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_111_reg_3331.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_119_reg_3534.read()));
}

void prop_hw::thread_ap_condition_1952() {
    ap_condition_1952 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_194_reg_3104.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_106_reg_3327.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_114_reg_3343.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_111_reg_3331.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter18_tmp_120_reg_3525.read()));
}

void prop_hw::thread_ap_condition_2028() {
    ap_condition_2028 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter23.read()));
}

void prop_hw::thread_ap_condition_2035() {
    ap_condition_2035 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter22.read()));
}

void prop_hw::thread_ap_condition_2040() {
    ap_condition_2040 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()));
}

void prop_hw::thread_ap_condition_2048() {
    ap_condition_2048 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter26.read()));
}

void prop_hw::thread_ap_condition_2053() {
    ap_condition_2053 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter35.read()));
}

void prop_hw::thread_ap_condition_2075() {
    ap_condition_2075 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read()));
}

void prop_hw::thread_ap_condition_371() {
    ap_condition_371 = (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter34.read()));
}

void prop_hw::thread_ap_done() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void prop_hw::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void prop_hw::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter57.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter16_absSinhEta_V_reg_362() {
    ap_phi_precharge_reg_pp0_iter16_absSinhEta_V_reg_362 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter16_p_Val2_9_reg_439() {
    ap_phi_precharge_reg_pp0_iter16_p_Val2_9_reg_439 =  (sc_lv<19>) ("XXXXXXXXXXXXXXXXXXX");
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter17_inhwZ0_V_1_reg_397() {
    ap_phi_precharge_reg_pp0_iter17_inhwZ0_V_1_reg_397 = "XXXXXXXXXXX";
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter17_inhwZ0_V_reg_418() {
    ap_phi_precharge_reg_pp0_iter17_inhwZ0_V_reg_418 = "XXXXXXXXXXX";
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter19_absInhwZ0_V_reg_515() {
    ap_phi_precharge_reg_pp0_iter19_absInhwZ0_V_reg_515 = "XXXXXXXXXXX";
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter19_data_V_read_assign_4_reg_473() {
    ap_phi_precharge_reg_pp0_iter19_data_V_read_assign_4_reg_473 = "XXXXXXXXXXX";
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter22_p_4_reg_550() {
    ap_phi_precharge_reg_pp0_iter22_p_4_reg_550 =  (sc_lv<23>) ("XXXXXXXXXXXXXXXXXXXXXXX");
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter26_p_3_reg_561() {
    ap_phi_precharge_reg_pp0_iter26_p_3_reg_561 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter34_p_Val2_5_reg_572() {
    ap_phi_precharge_reg_pp0_iter34_p_Val2_5_reg_572 =  (sc_lv<12>) ("XXXXXXXXXXXX");
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter35_deta_V_3_reg_581() {
    ap_phi_precharge_reg_pp0_iter35_deta_V_3_reg_581 =  (sc_lv<6>) ("XXXXXX");
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter35_tmp_157_reg_594() {
    ap_phi_precharge_reg_pp0_iter35_tmp_157_reg_594 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter39_data_V_read_assign_reg_608() {
    ap_phi_precharge_reg_pp0_iter39_data_V_read_assign_reg_608 =  (sc_lv<12>) ("XXXXXXXXXXXX");
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter39_p_Val2_38_in_in_reg_620() {
    ap_phi_precharge_reg_pp0_iter39_p_Val2_38_in_in_reg_620 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
}

void prop_hw::thread_ap_phi_precharge_reg_pp0_iter39_tmp_158_reg_629() {
    ap_phi_precharge_reg_pp0_iter39_tmp_158_reg_629 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
}

void prop_hw::thread_ap_pipeline_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter56.read()))) {
        ap_pipeline_idle_pp0 = ap_const_logic_1;
    } else {
        ap_pipeline_idle_pp0 = ap_const_logic_0;
    }
}

void prop_hw::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void prop_hw::thread_delta_V_1_fu_2469_p2() {
    delta_V_1_fu_2469_p2 = (!ap_const_lv12_0.is_01() || !delta_V_1_trunc_ext_s_fu_2465_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_0) - sc_biguint<12>(delta_V_1_trunc_ext_s_fu_2465_p1.read()));
}

void prop_hw::thread_delta_V_1_trunc_ext_s_fu_2465_p1() {
    delta_V_1_trunc_ext_s_fu_2465_p1 = esl_zext<12,11>(reg_785.read());
}

void prop_hw::thread_deta_V_1_fu_2522_p2() {
    deta_V_1_fu_2522_p2 = (!ap_const_lv6_0.is_01() || !deta_V_9_cast_fu_2519_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_0) - sc_biguint<6>(deta_V_9_cast_fu_2519_p1.read()));
}

void prop_hw::thread_deta_V_3_trunc72_ext_fu_2485_p1() {
    deta_V_3_trunc72_ext_fu_2485_p1 = esl_zext<6,5>(reg_789.read());
}

void prop_hw::thread_deta_V_3_trunc_ext_c_fu_2505_p1() {
    deta_V_3_trunc_ext_c_fu_2505_p1 = esl_zext<6,5>(reg_793.read());
}

void prop_hw::thread_deta_V_4_fu_2513_p2() {
    deta_V_4_fu_2513_p2 = (!ap_const_lv6_0.is_01() || !deta_V_4_trunc_ext_c_fu_2509_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_0) - sc_biguint<6>(deta_V_4_trunc_ext_c_fu_2509_p1.read()));
}

void prop_hw::thread_deta_V_4_trunc_ext_c_fu_2509_p1() {
    deta_V_4_trunc_ext_c_fu_2509_p1 = esl_zext<6,5>(reg_789.read());
}

void prop_hw::thread_deta_V_7_fu_2493_p2() {
    deta_V_7_fu_2493_p2 = (!ap_const_lv6_0.is_01() || !deta_V_7_trunc_ext_c_fu_2489_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_0) - sc_biguint<6>(deta_V_7_trunc_ext_c_fu_2489_p1.read()));
}

void prop_hw::thread_deta_V_7_trunc_ext_c_fu_2489_p1() {
    deta_V_7_trunc_ext_c_fu_2489_p1 = esl_zext<6,5>(reg_793.read());
}

void prop_hw::thread_deta_V_9_cast_fu_2519_p1() {
    deta_V_9_cast_fu_2519_p1 = esl_zext<6,5>(deta_V_reg_3922.read());
}

void prop_hw::thread_exp_tmp_V_1_fu_923_p4() {
    exp_tmp_V_1_fu_923_p4 = ireg_V_1_fu_908_p1.read().range(62, 52);
}

void prop_hw::thread_exp_tmp_V_2_fu_1496_p4() {
    exp_tmp_V_2_fu_1496_p4 = ireg_V_2_fu_1481_p1.read().range(62, 52);
}

void prop_hw::thread_exp_tmp_V_3_fu_1026_p4() {
    exp_tmp_V_3_fu_1026_p4 = ireg_V_4_fu_1011_p1.read().range(62, 52);
}

void prop_hw::thread_exp_tmp_V_4_fu_1603_p4() {
    exp_tmp_V_4_fu_1603_p4 = ireg_V_3_fu_1588_p1.read().range(62, 52);
}

void prop_hw::thread_exp_tmp_V_5_fu_1751_p4() {
    exp_tmp_V_5_fu_1751_p4 = ireg_V_5_fu_1736_p1.read().range(62, 52);
}

void prop_hw::thread_exp_tmp_V_6_fu_1175_p4() {
    exp_tmp_V_6_fu_1175_p4 = ireg_V_6_fu_1160_p1.read().range(62, 52);
}

void prop_hw::thread_exp_tmp_V_7_fu_2221_p4() {
    exp_tmp_V_7_fu_2221_p4 = ireg_V_7_fu_2206_p1.read().range(62, 52);
}

void prop_hw::thread_exp_tmp_V_8_fu_2718_p4() {
    exp_tmp_V_8_fu_2718_p4 = ireg_V_8_fu_2703_p1.read().range(62, 52);
}

void prop_hw::thread_exp_tmp_V_fu_1319_p4() {
    exp_tmp_V_fu_1319_p4 = ireg_V_fu_1304_p1.read().range(62, 52);
}

void prop_hw::thread_grp_arcsinh_fu_648_ap_start() {
    grp_arcsinh_fu_648_ap_start = ap_reg_grp_arcsinh_fu_648_ap_start.read();
}

void prop_hw::thread_grp_delta_LUT_fu_663_ap_start() {
    grp_delta_LUT_fu_663_ap_start = ap_reg_grp_delta_LUT_fu_663_ap_start.read();
}

void prop_hw::thread_grp_delta_LUT_fu_663_data_V_read() {
    if ((esl_seteq<1,1,1>(tmp_154_reg_3791.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()))) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_217_reg_3795.read())) {
            grp_delta_LUT_fu_663_data_V_read = ap_pipeline_reg_pp0_iter26_absInhwZ0_V_reg_515.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_217_reg_3795.read())) {
            grp_delta_LUT_fu_663_data_V_read = ap_pipeline_reg_pp0_iter26_data_V_read_assign_4_reg_473.read();
        } else {
            grp_delta_LUT_fu_663_data_V_read = "XXXXXXXXXXX";
        }
    } else {
        grp_delta_LUT_fu_663_data_V_read = "XXXXXXXXXXX";
    }
}

void prop_hw::thread_grp_delta_minus_LUT_fu_681_ap_start() {
    grp_delta_minus_LUT_fu_681_ap_start = ap_reg_grp_delta_minus_LUT_fu_681_ap_start.read();
}

void prop_hw::thread_grp_delta_minus_LUT_fu_681_data_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter27_tmp_154_reg_3791.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter28.read()))) {
        if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter27_tmp_217_reg_3795.read()) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_156_reg_3799.read()))) {
            grp_delta_minus_LUT_fu_681_data_V_read = ap_pipeline_reg_pp0_iter27_data_V_read_assign_4_reg_473.read();
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_156_reg_3799.read()) && 
                    !esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter27_tmp_217_reg_3795.read()))) {
            grp_delta_minus_LUT_fu_681_data_V_read = ap_pipeline_reg_pp0_iter27_absInhwZ0_V_reg_515.read();
        } else {
            grp_delta_minus_LUT_fu_681_data_V_read = "XXXXXXXXXXX";
        }
    } else {
        grp_delta_minus_LUT_fu_681_data_V_read = "XXXXXXXXXXX";
    }
}

void prop_hw::thread_grp_delta_plus_LUT_fu_672_ap_start() {
    grp_delta_plus_LUT_fu_672_ap_start = ap_reg_grp_delta_plus_LUT_fu_672_ap_start.read();
}

void prop_hw::thread_grp_delta_plus_LUT_fu_672_data_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter27_tmp_154_reg_3791.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter28.read()))) {
        if ((!esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter27_tmp_217_reg_3795.read()) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_156_reg_3799.read()))) {
            grp_delta_plus_LUT_fu_672_data_V_read = ap_pipeline_reg_pp0_iter27_absInhwZ0_V_reg_515.read();
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_pipeline_reg_pp0_iter27_tmp_217_reg_3795.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, tmp_156_reg_3799.read()))) {
            grp_delta_plus_LUT_fu_672_data_V_read = ap_pipeline_reg_pp0_iter27_data_V_read_assign_4_reg_473.read();
        } else {
            grp_delta_plus_LUT_fu_672_data_V_read = "XXXXXXXXXXX";
        }
    } else {
        grp_delta_plus_LUT_fu_672_data_V_read = "XXXXXXXXXXX";
    }
}

void prop_hw::thread_grp_deta_LUT_fu_690_ap_start() {
    grp_deta_LUT_fu_690_ap_start = ap_reg_grp_deta_LUT_fu_690_ap_start.read();
}

void prop_hw::thread_grp_fu_2542_p1() {
    grp_fu_2542_p1 =  (sc_lv<10>) (grp_fu_2542_p10.read());
}

void prop_hw::thread_grp_fu_2542_p10() {
    grp_fu_2542_p10 = esl_zext<17,10>(tanhEta_V_reg_3959.read());
}

void prop_hw::thread_grp_fu_2697_p0() {
    grp_fu_2697_p0 =  (sc_lv<17>) (grp_fu_2697_p00.read());
}

void prop_hw::thread_grp_fu_2697_p00() {
    grp_fu_2697_p00 = esl_zext<51,17>(invCoshEta_Phi_V_reg_4054.read());
}

void prop_hw::thread_grp_fu_2697_p1() {
    grp_fu_2697_p1 =  (sc_lv<37>) (r_V_7_reg_4059.read());
}

void prop_hw::thread_grp_fu_2975_p0() {
    grp_fu_2975_p0 =  (sc_lv<19>) (ap_const_lv42_33910);
}

void prop_hw::thread_grp_fu_3033_p2() {
    grp_fu_3033_p2 =  (sc_lv<19>) (ap_const_lv39_33910);
}

void prop_hw::thread_grp_fu_3044_p1() {
    grp_fu_3044_p1 =  (sc_lv<11>) (grp_fu_3044_p10.read());
}

void prop_hw::thread_grp_fu_3044_p10() {
    grp_fu_3044_p10 = esl_zext<17,11>(invCoshEta_EtaBarrel_reg_3969.read());
}

void prop_hw::thread_grp_fu_3050_p0() {
    grp_fu_3050_p0 =  (sc_lv<18>) (ap_const_lv40_176C8);
}

void prop_hw::thread_grp_fu_3057_p0() {
    grp_fu_3057_p0 =  (sc_lv<19>) (ap_const_lv35_2D40C);
}

void prop_hw::thread_grp_fu_3057_p1() {
    grp_fu_3057_p1 =  (sc_lv<17>) (grp_fu_3057_p10.read());
}

void prop_hw::thread_grp_fu_3057_p10() {
    grp_fu_3057_p10 = esl_zext<35,17>(ap_phi_precharge_reg_pp0_iter40_tmp_158_reg_629.read());
}

void prop_hw::thread_grp_fu_3064_p1() {
    grp_fu_3064_p1 =  (sc_lv<19>) (grp_fu_3064_p10.read());
}

void prop_hw::thread_grp_fu_3064_p10() {
    grp_fu_3064_p10 = esl_zext<38,19>(tmp_165_reg_4039.read());
}

void prop_hw::thread_grp_fu_758_p0() {
    grp_fu_758_p0 = esl_sext<32,14>(in_hwSinhEta_V.read());
}

void prop_hw::thread_grp_fu_761_p0() {
    grp_fu_761_p0 = esl_sext<32,11>(in_hwZ0_V.read());
}

void prop_hw::thread_grp_fu_764_p0() {
    grp_fu_764_p0 = esl_sext<32,19>(in_hwPhi_V.read());
}

void prop_hw::thread_grp_fu_767_p0() {
    grp_fu_767_p0 = esl_zext<64,14>(r_V_reg_3080.read());
}

void prop_hw::thread_grp_fu_770_p0() {
    grp_fu_770_p0 = esl_sext<32,11>(op2_reg_3099.read());
}

void prop_hw::thread_grp_fu_773_p0() {
    grp_fu_773_p0 = esl_zext<64,11>(r_V_1_reg_3094.read());
}

void prop_hw::thread_grp_fu_776_p0() {
    grp_fu_776_p0 = esl_sext<32,19>(op2_1_reg_3113.read());
}

void prop_hw::thread_grp_fu_779_p0() {
    grp_fu_779_p0 = esl_sext<32,15>(ap_pipeline_reg_pp0_iter13_absInvRinv_V_2_reg_3123.read());
}

void prop_hw::thread_grp_fu_782_p0() {
    grp_fu_782_p0 = esl_sext<32,23>(ap_pipeline_reg_pp0_iter30_p_4_reg_550.read());
}

void prop_hw::thread_grp_invCosh_1_fu_706_ap_start() {
    grp_invCosh_1_fu_706_ap_start = ap_reg_grp_invCosh_1_fu_706_ap_start.read();
}

void prop_hw::thread_grp_invCosh_fu_698_ap_start() {
    grp_invCosh_fu_698_ap_start = ap_reg_grp_invCosh_fu_698_ap_start.read();
}

void prop_hw::thread_grp_rinvToInvPt_fu_641_ap_start() {
    grp_rinvToInvPt_fu_641_ap_start = ap_reg_grp_rinvToInvPt_fu_641_ap_start.read();
}

void prop_hw::thread_grp_rinvToInvPt_fu_641_data_V_read() {
    grp_rinvToInvPt_fu_641_data_V_read = (!or_cond2_reg_3907.read()[0].is_01())? sc_lv<24>(): ((or_cond2_reg_3907.read()[0].to_bool())? newSel2_fu_2447_p3.read(): ap_const_lv24_0);
}

void prop_hw::thread_grp_tanh_LUT_fu_656_ap_start() {
    grp_tanh_LUT_fu_656_ap_start = ap_reg_grp_tanh_LUT_fu_656_ap_start.read();
}

void prop_hw::thread_in_hwEta_V() {
    in_hwEta_V = ap_pipeline_reg_pp0_iter56_p_3_reg_561.read();
}

void prop_hw::thread_in_hwEta_V_ap_vld() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()))) {
        in_hwEta_V_ap_vld = ap_const_logic_1;
    } else {
        in_hwEta_V_ap_vld = ap_const_logic_0;
    }
}

void prop_hw::thread_in_hwPhiGlobal_V() {
    in_hwPhiGlobal_V = ap_pipeline_reg_pp0_iter56_p_4_reg_550.read();
}

void prop_hw::thread_in_hwPhiGlobal_V_ap_vld() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()))) {
        in_hwPhiGlobal_V_ap_vld = ap_const_logic_1;
    } else {
        in_hwPhiGlobal_V_ap_vld = ap_const_logic_0;
    }
}

void prop_hw::thread_inhwEta_V_3_cast_fu_2107_p1() {
    inhwEta_V_3_cast_fu_2107_p1 = esl_zext<13,12>(inhwEta_V_2_reg_3752.read());
}

void prop_hw::thread_inhwEta_V_fu_2110_p2() {
    inhwEta_V_fu_2110_p2 = (!ap_const_lv13_0.is_01() || !inhwEta_V_3_cast_fu_2107_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_0) - sc_biguint<13>(inhwEta_V_3_cast_fu_2107_p1.read()));
}

void prop_hw::thread_inhwInvPt_V_fu_2557_p2() {
    inhwInvPt_V_fu_2557_p2 = (!ap_const_lv22_0.is_01() || !p_Val2_28_cast_fu_2554_p1.read().is_01())? sc_lv<22>(): (sc_biguint<22>(ap_const_lv22_0) - sc_biguint<22>(p_Val2_28_cast_fu_2554_p1.read()));
}

void prop_hw::thread_ireg_V_1_fu_908_p1() {
    ireg_V_1_fu_908_p1 = v_assign_1_reg_3193.read();
}

void prop_hw::thread_ireg_V_2_fu_1481_p1() {
    ireg_V_2_fu_1481_p1 = v_assign_2_reg_3305.read();
}

void prop_hw::thread_ireg_V_3_fu_1588_p1() {
    ireg_V_3_fu_1588_p1 = v_assign_3_reg_3310.read();
}

void prop_hw::thread_ireg_V_4_fu_1011_p1() {
    ireg_V_4_fu_1011_p1 = v_assign_4_reg_3198.read();
}

void prop_hw::thread_ireg_V_5_fu_1736_p1() {
    ireg_V_5_fu_1736_p1 = v_assign_5_reg_3347.read();
}

void prop_hw::thread_ireg_V_6_fu_1160_p1() {
    ireg_V_6_fu_1160_p1 = v_assign_6_reg_3203.read();
}

void prop_hw::thread_ireg_V_7_fu_2206_p1() {
    ireg_V_7_fu_2206_p1 = v_assign_7_reg_3808.read();
}

void prop_hw::thread_ireg_V_8_fu_2703_p1() {
    ireg_V_8_fu_2703_p1 = v_assign_8_reg_4074.read();
}

void prop_hw::thread_ireg_V_fu_1304_p1() {
    ireg_V_fu_1304_p1 = v_assign_reg_3240.read();
}

void prop_hw::thread_isneg_1_fu_915_p3() {
    isneg_1_fu_915_p3 = ireg_V_1_fu_908_p1.read().range(63, 63);
}

void prop_hw::thread_isneg_2_fu_1488_p3() {
    isneg_2_fu_1488_p3 = ireg_V_2_fu_1481_p1.read().range(63, 63);
}

void prop_hw::thread_isneg_3_fu_1018_p3() {
    isneg_3_fu_1018_p3 = ireg_V_4_fu_1011_p1.read().range(63, 63);
}

void prop_hw::thread_isneg_4_fu_1595_p3() {
    isneg_4_fu_1595_p3 = ireg_V_3_fu_1588_p1.read().range(63, 63);
}

void prop_hw::thread_isneg_5_fu_1743_p3() {
    isneg_5_fu_1743_p3 = ireg_V_5_fu_1736_p1.read().range(63, 63);
}

void prop_hw::thread_isneg_6_fu_1167_p3() {
    isneg_6_fu_1167_p3 = ireg_V_6_fu_1160_p1.read().range(63, 63);
}

void prop_hw::thread_isneg_fu_1311_p3() {
    isneg_fu_1311_p3 = ireg_V_fu_1304_p1.read().range(63, 63);
}

void prop_hw::thread_lhs_V_3_cast_fu_1839_p1() {
    lhs_V_3_cast_fu_1839_p1 = esl_zext<6,5>(ap_pipeline_reg_pp0_iter16_in_hwSector_V_read_reg_3118.read());
}

void prop_hw::thread_man_V_10_fu_1056_p2() {
    man_V_10_fu_1056_p2 = (!ap_const_lv54_0.is_01() || !p_Result_5_fu_1052_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_5_fu_1052_p1.read()));
}

void prop_hw::thread_man_V_11_fu_1062_p3() {
    man_V_11_fu_1062_p3 = (!isneg_3_fu_1018_p3.read()[0].is_01())? sc_lv<54>(): ((isneg_3_fu_1018_p3.read()[0].to_bool())? man_V_10_fu_1056_p2.read(): p_Result_5_fu_1052_p1.read());
}

void prop_hw::thread_man_V_13_fu_1633_p2() {
    man_V_13_fu_1633_p2 = (!ap_const_lv54_0.is_01() || !p_Result_3_fu_1629_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_3_fu_1629_p1.read()));
}

void prop_hw::thread_man_V_14_fu_1639_p3() {
    man_V_14_fu_1639_p3 = (!isneg_4_fu_1595_p3.read()[0].is_01())? sc_lv<54>(): ((isneg_4_fu_1595_p3.read()[0].to_bool())? man_V_13_fu_1633_p2.read(): p_Result_3_fu_1629_p1.read());
}

void prop_hw::thread_man_V_17_fu_1781_p2() {
    man_V_17_fu_1781_p2 = (!ap_const_lv54_0.is_01() || !p_Result_6_fu_1777_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_6_fu_1777_p1.read()));
}

void prop_hw::thread_man_V_18_fu_1787_p3() {
    man_V_18_fu_1787_p3 = (!isneg_5_fu_1743_p3.read()[0].is_01())? sc_lv<54>(): ((isneg_5_fu_1743_p3.read()[0].to_bool())? man_V_17_fu_1781_p2.read(): p_Result_6_fu_1777_p1.read());
}

void prop_hw::thread_man_V_1_fu_1349_p2() {
    man_V_1_fu_1349_p2 = (!ap_const_lv54_0.is_01() || !p_Result_s_fu_1345_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_s_fu_1345_p1.read()));
}

void prop_hw::thread_man_V_20_fu_1205_p2() {
    man_V_20_fu_1205_p2 = (!ap_const_lv54_0.is_01() || !p_Result_7_fu_1201_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_7_fu_1201_p1.read()));
}

void prop_hw::thread_man_V_21_fu_1211_p3() {
    man_V_21_fu_1211_p3 = (!isneg_6_fu_1167_p3.read()[0].is_01())? sc_lv<54>(): ((isneg_6_fu_1167_p3.read()[0].to_bool())? man_V_20_fu_1205_p2.read(): p_Result_7_fu_1201_p1.read());
}

void prop_hw::thread_man_V_23_fu_2262_p2() {
    man_V_23_fu_2262_p2 = (!ap_const_lv54_0.is_01() || !p_Result_8_fu_2258_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_8_fu_2258_p1.read()));
}

void prop_hw::thread_man_V_24_fu_2268_p3() {
    man_V_24_fu_2268_p3 = (!isneg_7_reg_3813.read()[0].is_01())? sc_lv<54>(): ((isneg_7_reg_3813.read()[0].to_bool())? man_V_23_fu_2262_p2.read(): p_Result_8_fu_2258_p1.read());
}

void prop_hw::thread_man_V_26_fu_2759_p2() {
    man_V_26_fu_2759_p2 = (!ap_const_lv54_0.is_01() || !p_Result_9_fu_2755_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_9_fu_2755_p1.read()));
}

void prop_hw::thread_man_V_27_fu_2765_p3() {
    man_V_27_fu_2765_p3 = (!isneg_8_reg_4079.read()[0].is_01())? sc_lv<54>(): ((isneg_8_reg_4079.read()[0].to_bool())? man_V_26_fu_2759_p2.read(): p_Result_9_fu_2755_p1.read());
}

void prop_hw::thread_man_V_2_fu_1355_p3() {
    man_V_2_fu_1355_p3 = (!isneg_fu_1311_p3.read()[0].is_01())? sc_lv<54>(): ((isneg_fu_1311_p3.read()[0].to_bool())? man_V_1_fu_1349_p2.read(): p_Result_s_fu_1345_p1.read());
}

void prop_hw::thread_man_V_4_fu_953_p2() {
    man_V_4_fu_953_p2 = (!ap_const_lv54_0.is_01() || !p_Result_1_fu_949_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_1_fu_949_p1.read()));
}

void prop_hw::thread_man_V_5_fu_959_p3() {
    man_V_5_fu_959_p3 = (!isneg_1_fu_915_p3.read()[0].is_01())? sc_lv<54>(): ((isneg_1_fu_915_p3.read()[0].to_bool())? man_V_4_fu_953_p2.read(): p_Result_1_fu_949_p1.read());
}

void prop_hw::thread_man_V_7_fu_1526_p2() {
    man_V_7_fu_1526_p2 = (!ap_const_lv54_0.is_01() || !p_Result_2_fu_1522_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_2_fu_1522_p1.read()));
}

void prop_hw::thread_man_V_8_fu_1532_p3() {
    man_V_8_fu_1532_p3 = (!isneg_2_fu_1488_p3.read()[0].is_01())? sc_lv<54>(): ((isneg_2_fu_1488_p3.read()[0].to_bool())? man_V_7_fu_1526_p2.read(): p_Result_2_fu_1522_p1.read());
}

void prop_hw::thread_newSel1_fu_2402_p3() {
    newSel1_fu_2402_p3 = (!sel_tmp8_fu_2366_p2.read()[0].is_01())? sc_lv<24>(): ((sel_tmp8_fu_2366_p2.read()[0].to_bool())? tmp_214_fu_2352_p1.read(): tmp_213_reg_3859.read());
}

void prop_hw::thread_newSel2_fu_2447_p3() {
    newSel2_fu_2447_p3 = (!or_cond_reg_3897.read()[0].is_01())? sc_lv<24>(): ((or_cond_reg_3897.read()[0].to_bool())? newSel_fu_2440_p3.read(): newSel1_reg_3902.read());
}

void prop_hw::thread_newSel4_fu_2942_p3() {
    newSel4_fu_2942_p3 = (!sel_tmp17_reg_4153.read()[0].is_01())? sc_lv<23>(): ((sel_tmp17_reg_4153.read()[0].to_bool())? p_15_fu_2923_p3.read(): tmp_227_fu_2938_p1.read());
}

void prop_hw::thread_newSel5_fu_2894_p3() {
    newSel5_fu_2894_p3 = (!sel_tmp13_fu_2858_p2.read()[0].is_01())? sc_lv<23>(): ((sel_tmp13_fu_2858_p2.read()[0].to_bool())? tmp_226_fu_2844_p1.read(): tmp_225_reg_4125.read());
}

void prop_hw::thread_newSel6_fu_2949_p3() {
    newSel6_fu_2949_p3 = (!or_cond3_reg_4158.read()[0].is_01())? sc_lv<23>(): ((or_cond3_reg_4158.read()[0].to_bool())? newSel4_fu_2942_p3.read(): newSel5_reg_4163.read());
}

void prop_hw::thread_newSel_fu_2440_p3() {
    newSel_fu_2440_p3 = (!sel_tmp5_reg_3892.read()[0].is_01())? sc_lv<24>(): ((sel_tmp5_reg_3892.read()[0].to_bool())? p_14_fu_2421_p3.read(): tmp_215_fu_2436_p1.read());
}

void prop_hw::thread_op2_1_fu_860_p2() {
    op2_1_fu_860_p2 = (!ap_const_lv19_0.is_01() || !r_V_2_fu_854_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_0) - sc_biguint<19>(r_V_2_fu_854_p2.read()));
}

void prop_hw::thread_op2_fu_835_p2() {
    op2_fu_835_p2 = (!ap_const_lv11_0.is_01() || !r_V_1_fu_829_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_0) - sc_biguint<11>(r_V_1_fu_829_p2.read()));
}

void prop_hw::thread_or_cond1_fu_2409_p2() {
    or_cond1_fu_2409_p2 = (sel_tmp8_fu_2366_p2.read() | sel_tmp2_fu_2361_p2.read());
}

void prop_hw::thread_or_cond2_fu_2415_p2() {
    or_cond2_fu_2415_p2 = (or_cond_fu_2396_p2.read() | or_cond1_fu_2409_p2.read());
}

void prop_hw::thread_or_cond3_fu_2888_p2() {
    or_cond3_fu_2888_p2 = (sel_tmp17_fu_2883_p2.read() | sel_tmp15_fu_2872_p2.read());
}

void prop_hw::thread_or_cond4_fu_2901_p2() {
    or_cond4_fu_2901_p2 = (sel_tmp13_fu_2858_p2.read() | sel_tmp10_fu_2853_p2.read());
}

void prop_hw::thread_or_cond5_fu_2907_p2() {
    or_cond5_fu_2907_p2 = (or_cond3_fu_2888_p2.read() | or_cond4_fu_2901_p2.read());
}

void prop_hw::thread_or_cond_fu_2396_p2() {
    or_cond_fu_2396_p2 = (sel_tmp5_fu_2391_p2.read() | sel_tmp3_fu_2380_p2.read());
}

void prop_hw::thread_outEtaPhi_first_V() {
    outEtaPhi_first_V = ap_pipeline_reg_pp0_iter56_p_7_reg_4019.read();
}

void prop_hw::thread_outEtaPhi_first_V_ap_vld() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()))) {
        outEtaPhi_first_V_ap_vld = ap_const_logic_1;
    } else {
        outEtaPhi_first_V_ap_vld = ap_const_logic_0;
    }
}

void prop_hw::thread_outEtaPhi_second_V() {
    outEtaPhi_second_V = (!tmp_228_fu_3004_p3.read()[0].is_01())? sc_lv<23>(): ((tmp_228_fu_3004_p3.read()[0].to_bool())? tmp_190_fu_3017_p3.read(): ret_V_1_cast_fu_3001_p1.read());
}

void prop_hw::thread_outEtaPhi_second_V_ap_vld() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()))) {
        outEtaPhi_second_V_ap_vld = ap_const_logic_1;
    } else {
        outEtaPhi_second_V_ap_vld = ap_const_logic_0;
    }
}

void prop_hw::thread_p_10_fu_2057_p3() {
    p_10_fu_2057_p3 = (!ap_pipeline_reg_pp0_iter19_isneg_4_reg_3489.read()[0].is_01())? sc_lv<11>(): ((ap_pipeline_reg_pp0_iter19_isneg_4_reg_3489.read()[0].to_bool())? ap_const_lv11_7FF: ap_const_lv11_0);
}

void prop_hw::thread_p_11_fu_2050_p3() {
    p_11_fu_2050_p3 = (!ap_pipeline_reg_pp0_iter19_isneg_3_reg_3245.read()[0].is_01())? sc_lv<11>(): ((ap_pipeline_reg_pp0_iter19_isneg_3_reg_3245.read()[0].to_bool())? ap_const_lv11_7FF: ap_const_lv11_0);
}

void prop_hw::thread_p_12_fu_2043_p3() {
    p_12_fu_2043_p3 = (!ap_pipeline_reg_pp0_iter18_isneg_5_reg_3548.read()[0].is_01())? sc_lv<19>(): ((ap_pipeline_reg_pp0_iter18_isneg_5_reg_3548.read()[0].to_bool())? ap_const_lv19_7FFFF: ap_const_lv19_0);
}

void prop_hw::thread_p_13_fu_2036_p3() {
    p_13_fu_2036_p3 = (!ap_pipeline_reg_pp0_iter18_isneg_6_reg_3315.read()[0].is_01())? sc_lv<19>(): ((ap_pipeline_reg_pp0_iter18_isneg_6_reg_3315.read()[0].to_bool())? ap_const_lv19_7FFFF: ap_const_lv19_0);
}

void prop_hw::thread_p_14_fu_2421_p3() {
    p_14_fu_2421_p3 = (!ap_pipeline_reg_pp0_iter32_isneg_7_reg_3813.read()[0].is_01())? sc_lv<24>(): ((ap_pipeline_reg_pp0_iter32_isneg_7_reg_3813.read()[0].to_bool())? ap_const_lv24_FFFFFF: ap_const_lv24_0);
}

void prop_hw::thread_p_15_fu_2923_p3() {
    p_15_fu_2923_p3 = (!ap_pipeline_reg_pp0_iter49_isneg_8_reg_4079.read()[0].is_01())? sc_lv<23>(): ((ap_pipeline_reg_pp0_iter49_isneg_8_reg_4079.read()[0].to_bool())? ap_const_lv23_7FFFFF: ap_const_lv23_0);
}

void prop_hw::thread_p_1_fu_1848_p3() {
    p_1_fu_1848_p3 = (!ap_pipeline_reg_pp0_iter17_isneg_1_reg_3208.read()[0].is_01())? sc_lv<14>(): ((ap_pipeline_reg_pp0_iter17_isneg_1_reg_3208.read()[0].to_bool())? ap_const_lv14_3FFF: ap_const_lv14_0);
}

void prop_hw::thread_p_2_fu_1880_p3() {
    p_2_fu_1880_p3 = (!isneg_reg_3375.read()[0].is_01())? sc_lv<14>(): ((isneg_reg_3375.read()[0].to_bool())? ap_const_lv14_3FFF: ap_const_lv14_0);
}

void prop_hw::thread_p_3_phi_fu_565_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_83_reg_3777.read()))) {
        p_3_phi_fu_565_p4 = p_s_fu_2186_p3.read();
    } else {
        p_3_phi_fu_565_p4 = ap_phi_precharge_reg_pp0_iter27_p_3_reg_561.read();
    }
}

void prop_hw::thread_p_5_fu_2029_p3() {
    p_5_fu_2029_p3 = (!ap_pipeline_reg_pp0_iter18_isneg_2_reg_3453.read()[0].is_01())? sc_lv<11>(): ((ap_pipeline_reg_pp0_iter18_isneg_2_reg_3453.read()[0].to_bool())? ap_const_lv11_7FF: ap_const_lv11_0);
}

void prop_hw::thread_p_6_fu_2644_p3() {
    p_6_fu_2644_p3 = (!tmp_163_fu_2632_p2.read()[0].is_01())? sc_lv<14>(): ((tmp_163_fu_2632_p2.read()[0].to_bool())? tmp_162_fu_2606_p4.read(): ret_V_7_fu_2638_p2.read());
}

void prop_hw::thread_p_7_fu_2652_p3() {
    p_7_fu_2652_p3 = (!tmp_220_fu_2616_p3.read()[0].is_01())? sc_lv<14>(): ((tmp_220_fu_2616_p3.read()[0].to_bool())? p_6_fu_2644_p3.read(): tmp_162_fu_2606_p4.read());
}

void prop_hw::thread_p_8_fu_2101_p3() {
    p_8_fu_2101_p3 = (!tmp_134_reg_3742.read()[0].is_01())? sc_lv<23>(): ((tmp_134_reg_3742.read()[0].to_bool())? tmp_133_reg_3731.read(): ret_V_4_fu_2096_p2.read());
}

void prop_hw::thread_p_9_fu_1903_p3() {
    p_9_fu_1903_p3 = (!ap_pipeline_reg_pp0_iter17_isneg_3_reg_3245.read()[0].is_01())? sc_lv<11>(): ((ap_pipeline_reg_pp0_iter17_isneg_3_reg_3245.read()[0].to_bool())? ap_const_lv11_7FF: ap_const_lv11_0);
}

void prop_hw::thread_p_Result_1_fu_949_p1() {
    p_Result_1_fu_949_p1 = esl_zext<54,53>(tmp_7_fu_941_p3.read());
}

void prop_hw::thread_p_Result_2_fu_1522_p1() {
    p_Result_2_fu_1522_p1 = esl_zext<54,53>(tmp_37_fu_1514_p3.read());
}

void prop_hw::thread_p_Result_3_fu_1629_p1() {
    p_Result_3_fu_1629_p1 = esl_zext<54,53>(tmp_67_fu_1621_p3.read());
}

void prop_hw::thread_p_Result_4_fu_2153_p3() {
    p_Result_4_fu_2153_p3 = esl_concat<1,9>(tmp_85_fu_2149_p1.read(), ap_const_lv9_0);
}

void prop_hw::thread_p_Result_5_fu_1052_p1() {
    p_Result_5_fu_1052_p1 = esl_zext<54,53>(tmp_42_fu_1044_p3.read());
}

void prop_hw::thread_p_Result_6_fu_1777_p1() {
    p_Result_6_fu_1777_p1 = esl_zext<54,53>(tmp_91_fu_1769_p3.read());
}

void prop_hw::thread_p_Result_7_fu_1201_p1() {
    p_Result_7_fu_1201_p1 = esl_zext<54,53>(tmp_105_fu_1193_p3.read());
}

void prop_hw::thread_p_Result_8_fu_2258_p1() {
    p_Result_8_fu_2258_p1 = esl_zext<54,53>(tmp_139_fu_2251_p3.read());
}

void prop_hw::thread_p_Result_9_fu_2755_p1() {
    p_Result_9_fu_2755_p1 = esl_zext<54,53>(tmp_170_fu_2748_p3.read());
}

void prop_hw::thread_p_Result_s_41_fu_2624_p3() {
    p_Result_s_41_fu_2624_p3 = esl_concat<1,9>(tmp_161_fu_2595_p2.read(), ap_const_lv9_0);
}

void prop_hw::thread_p_Result_s_fu_1345_p1() {
    p_Result_s_fu_1345_p1 = esl_zext<54,53>(tmp_3_fu_1337_p3.read());
}

void prop_hw::thread_p_Val2_10_cast_cas_fu_2475_p1() {
    p_Val2_10_cast_cas_fu_2475_p1 = esl_sext<17,12>(ap_phi_precharge_reg_pp0_iter35_p_Val2_5_reg_572.read());
}

void prop_hw::thread_p_Val2_10_trunc_ex_fu_2461_p1() {
    p_Val2_10_trunc_ex_fu_2461_p1 = esl_zext<12,11>(reg_785.read());
}

void prop_hw::thread_p_Val2_16_fu_2955_p3() {
    p_Val2_16_fu_2955_p3 = (!or_cond5_reg_4168.read()[0].is_01())? sc_lv<23>(): ((or_cond5_reg_4168.read()[0].to_bool())? newSel6_fu_2949_p3.read(): ap_const_lv23_0);
}

void prop_hw::thread_p_Val2_18_fu_2962_p2() {
    p_Val2_18_fu_2962_p2 = (!p_Val2_16_reg_4178.read().is_01() || !p_Val2_15_reg_4173.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_Val2_16_reg_4178.read()) - sc_biguint<23>(p_Val2_15_reg_4173.read()));
}

void prop_hw::thread_p_Val2_19_fu_2966_p2() {
    p_Val2_19_fu_2966_p2 = (!ap_const_lv23_7FA6C0.is_01() || !p_Val2_18_fu_2962_p2.read().is_01())? sc_lv<23>(): (sc_bigint<23>(ap_const_lv23_7FA6C0) + sc_biguint<23>(p_Val2_18_fu_2962_p2.read()));
}

void prop_hw::thread_p_Val2_26_call_ret_fu_2563_p3() {
    p_Val2_26_call_ret_fu_2563_p3 = (!ap_pipeline_reg_pp0_iter38_in_hwQ_V_read_reg_3128.read()[0].is_01())? sc_lv<22>(): ((ap_pipeline_reg_pp0_iter38_in_hwQ_V_read_reg_3128.read()[0].to_bool())? inhwInvPt_V_fu_2557_p2.read(): p_Val2_28_cast_fu_2554_p1.read());
}

void prop_hw::thread_p_Val2_27_call_ret_fu_2528_p3() {
    p_Val2_27_call_ret_fu_2528_p3 = (!ap_pipeline_reg_pp0_iter34_tmp_216_reg_3803.read()[0].is_01())? sc_lv<6>(): ((ap_pipeline_reg_pp0_iter34_tmp_216_reg_3803.read()[0].to_bool())? deta_V_1_fu_2522_p2.read(): deta_V_9_cast_fu_2519_p1.read());
}

void prop_hw::thread_p_Val2_28_cast_fu_2554_p1() {
    p_Val2_28_cast_fu_2554_p1 = esl_zext<22,21>(p_Val2_s_reg_3999.read());
}

void prop_hw::thread_p_Val2_3_fu_2116_p3() {
    p_Val2_3_fu_2116_p3 = (!ap_pipeline_reg_pp0_iter25_tmp_reg_3070.read()[0].is_01())? sc_lv<13>(): ((ap_pipeline_reg_pp0_iter25_tmp_reg_3070.read()[0].to_bool())? inhwEta_V_fu_2110_p2.read(): inhwEta_V_3_cast_fu_2107_p1.read());
}

void prop_hw::thread_p_Val2_4_fu_2479_p2() {
    p_Val2_4_fu_2479_p2 = (p_Val2_10_cast_cas_fu_2475_p1.read() ^ ap_const_lv17_10000);
}

void prop_hw::thread_p_Val2_s_40_fu_2499_p2() {
    p_Val2_s_40_fu_2499_p2 = (!ap_const_lv17_10000.is_01() || !p_Val2_10_cast_cas_fu_2475_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(ap_const_lv17_10000) - sc_bigint<17>(p_Val2_10_cast_cas_fu_2475_p1.read()));
}

void prop_hw::thread_p_anonymous_namespace_address0() {
    p_anonymous_namespace_address0 =  (sc_lv<5>) (tmp_130_fu_2025_p1.read());
}

void prop_hw::thread_p_anonymous_namespace_ce0() {
    if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()))) {
        p_anonymous_namespace_ce0 = ap_const_logic_1;
    } else {
        p_anonymous_namespace_ce0 = ap_const_logic_0;
    }
}

void prop_hw::thread_p_s_fu_2186_p3() {
    p_s_fu_2186_p3 = (!tmp_30_reg_3781.read()[0].is_01())? sc_lv<14>(): ((tmp_30_reg_3781.read()[0].to_bool())? ret_V_cast_reg_3771.read(): ret_V_reg_3786.read());
}

void prop_hw::thread_r_V_1_fu_829_p2() {
    r_V_1_fu_829_p2 = (in_hwZ0_V.read() ^ ap_const_lv11_400);
}

void prop_hw::thread_r_V_2_fu_854_p2() {
    r_V_2_fu_854_p2 = (in_hwPhi_V.read() ^ ap_const_lv19_40000);
}

void prop_hw::thread_r_V_3_fu_1842_p2() {
    r_V_3_fu_1842_p2 = (!lhs_V_3_cast_fu_1839_p1.read().is_01() || !ap_const_lv6_3F.is_01())? sc_lv<6>(): (sc_biguint<6>(lhs_V_3_cast_fu_1839_p1.read()) + sc_bigint<6>(ap_const_lv6_3F));
}

void prop_hw::thread_r_V_6_fu_2600_p2() {
    r_V_6_fu_2600_p2 = (!tmp_159_fu_2588_p1.read().is_01() || !tmp_160_fu_2591_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_159_fu_2588_p1.read()) + sc_bigint<15>(tmp_160_fu_2591_p1.read()));
}

void prop_hw::thread_r_V_fu_810_p2() {
    r_V_fu_810_p2 = (in_hwSinhEta_V.read() ^ ap_const_lv14_2000);
}

void prop_hw::thread_ret_V_1_cast_fu_3001_p1() {
    ret_V_1_cast_fu_3001_p1 = esl_sext<23,22>(tmp_185_reg_4198.read());
}

void prop_hw::thread_ret_V_1_fu_3011_p2() {
    ret_V_1_fu_3011_p2 = (!ap_const_lv23_1.is_01() || !ret_V_1_cast_fu_3001_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_1) + sc_bigint<23>(ret_V_1_cast_fu_3001_p1.read()));
}

void prop_hw::thread_ret_V_4_fu_2096_p2() {
    ret_V_4_fu_2096_p2 = (!ap_const_lv23_1.is_01() || !tmp_133_reg_3731.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_1) + sc_biguint<23>(tmp_133_reg_3731.read()));
}

void prop_hw::thread_ret_V_7_fu_2638_p2() {
    ret_V_7_fu_2638_p2 = (!ap_const_lv14_1.is_01() || !tmp_162_fu_2606_p4.read().is_01())? sc_lv<14>(): (sc_biguint<14>(ap_const_lv14_1) + sc_biguint<14>(tmp_162_fu_2606_p4.read()));
}

void prop_hw::thread_ret_V_cast_fu_2137_p1() {
    ret_V_cast_fu_2137_p1 = esl_sext<14,12>(tmp_82_fu_2127_p4.read());
}

void prop_hw::thread_ret_V_fu_2167_p2() {
    ret_V_fu_2167_p2 = (!ap_const_lv14_1.is_01() || !ret_V_cast_fu_2137_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(ap_const_lv14_1) + sc_bigint<14>(ret_V_cast_fu_2137_p1.read()));
}

void prop_hw::thread_sel_tmp10_fu_2853_p2() {
    sel_tmp10_fu_2853_p2 = (tmp_175_reg_4120.read() & sel_tmp9_fu_2848_p2.read());
}

void prop_hw::thread_sel_tmp11_fu_2815_p2() {
    sel_tmp11_fu_2815_p2 = (sel_tmp31_demorgan_fu_2810_p2.read() ^ ap_const_lv1_1);
}

void prop_hw::thread_sel_tmp12_fu_2821_p2() {
    sel_tmp12_fu_2821_p2 = (tmp_172_fu_2772_p2.read() & sel_tmp11_fu_2815_p2.read());
}

void prop_hw::thread_sel_tmp13_fu_2858_p2() {
    sel_tmp13_fu_2858_p2 = (sel_tmp12_reg_4142.read() & tmp_177_reg_4131.read());
}

void prop_hw::thread_sel_tmp14_demorgan_fu_2370_p2() {
    sel_tmp14_demorgan_fu_2370_p2 = (sel_tmp6_demorgan_reg_3871.read() | tmp_141_reg_3843.read());
}

void prop_hw::thread_sel_tmp14_fu_2866_p2() {
    sel_tmp14_fu_2866_p2 = (sel_tmp39_demorgan_fu_2862_p2.read() ^ ap_const_lv1_1);
}

void prop_hw::thread_sel_tmp15_fu_2872_p2() {
    sel_tmp15_fu_2872_p2 = (tmp_178_fu_2830_p2.read() & sel_tmp14_fu_2866_p2.read());
}

void prop_hw::thread_sel_tmp16_fu_2878_p2() {
    sel_tmp16_fu_2878_p2 = (tmp_177_reg_4131.read() ^ ap_const_lv1_1);
}

void prop_hw::thread_sel_tmp17_fu_2883_p2() {
    sel_tmp17_fu_2883_p2 = (sel_tmp12_reg_4142.read() & sel_tmp16_fu_2878_p2.read());
}

void prop_hw::thread_sel_tmp1_fu_2356_p2() {
    sel_tmp1_fu_2356_p2 = (ap_pipeline_reg_pp0_iter31_tmp_140_reg_3824.read() ^ ap_const_lv1_1);
}

void prop_hw::thread_sel_tmp2_fu_2361_p2() {
    sel_tmp2_fu_2361_p2 = (tmp_144_reg_3854.read() & sel_tmp1_fu_2356_p2.read());
}

void prop_hw::thread_sel_tmp31_demorgan_fu_2810_p2() {
    sel_tmp31_demorgan_fu_2810_p2 = (tmp_171_reg_4090.read() | tmp_175_fu_2795_p2.read());
}

void prop_hw::thread_sel_tmp39_demorgan_fu_2862_p2() {
    sel_tmp39_demorgan_fu_2862_p2 = (sel_tmp31_demorgan_reg_4137.read() | tmp_172_reg_4109.read());
}

void prop_hw::thread_sel_tmp3_fu_2380_p2() {
    sel_tmp3_fu_2380_p2 = (tmp_147_fu_2338_p2.read() & sel_tmp_fu_2374_p2.read());
}

void prop_hw::thread_sel_tmp4_fu_2386_p2() {
    sel_tmp4_fu_2386_p2 = (tmp_146_reg_3865.read() ^ ap_const_lv1_1);
}

void prop_hw::thread_sel_tmp5_fu_2391_p2() {
    sel_tmp5_fu_2391_p2 = (sel_tmp7_reg_3876.read() & sel_tmp4_fu_2386_p2.read());
}

void prop_hw::thread_sel_tmp6_demorgan_fu_2313_p2() {
    sel_tmp6_demorgan_fu_2313_p2 = (tmp_140_reg_3824.read() | tmp_144_fu_2298_p2.read());
}

void prop_hw::thread_sel_tmp6_fu_2318_p2() {
    sel_tmp6_fu_2318_p2 = (sel_tmp6_demorgan_fu_2313_p2.read() ^ ap_const_lv1_1);
}

void prop_hw::thread_sel_tmp7_fu_2324_p2() {
    sel_tmp7_fu_2324_p2 = (tmp_141_fu_2275_p2.read() & sel_tmp6_fu_2318_p2.read());
}

void prop_hw::thread_sel_tmp8_fu_2366_p2() {
    sel_tmp8_fu_2366_p2 = (sel_tmp7_reg_3876.read() & tmp_146_reg_3865.read());
}

void prop_hw::thread_sel_tmp9_fu_2848_p2() {
    sel_tmp9_fu_2848_p2 = (ap_pipeline_reg_pp0_iter48_tmp_171_reg_4090.read() ^ ap_const_lv1_1);
}

void prop_hw::thread_sel_tmp_fu_2374_p2() {
    sel_tmp_fu_2374_p2 = (sel_tmp14_demorgan_fu_2370_p2.read() ^ ap_const_lv1_1);
}

void prop_hw::thread_sh_amt_1_cast1_fu_1263_p1() {
    sh_amt_1_cast1_fu_1263_p1 = esl_sext<14,12>(sh_amt_1_reg_3228.read());
}

void prop_hw::thread_sh_amt_1_cast_fu_1266_p1() {
    sh_amt_1_cast_fu_1266_p1 = esl_sext<32,12>(sh_amt_1_reg_3228.read());
}

void prop_hw::thread_sh_amt_1_fu_997_p3() {
    sh_amt_1_fu_997_p3 = (!tmp_13_fu_979_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_13_fu_979_p2.read()[0].to_bool())? tmp_14_fu_985_p2.read(): tmp_15_fu_991_p2.read());
}

void prop_hw::thread_sh_amt_2_cast_fu_1910_p1() {
    sh_amt_2_cast_fu_1910_p1 = esl_sext<32,12>(sh_amt_2_reg_3473.read());
}

void prop_hw::thread_sh_amt_2_fu_1570_p3() {
    sh_amt_2_fu_1570_p3 = (!tmp_44_fu_1552_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_44_fu_1552_p2.read()[0].to_bool())? tmp_45_fu_1558_p2.read(): tmp_46_fu_1564_p2.read());
}

void prop_hw::thread_sh_amt_3_cast_fu_1407_p1() {
    sh_amt_3_cast_fu_1407_p1 = esl_sext<32,12>(sh_amt_3_reg_3269.read());
}

void prop_hw::thread_sh_amt_3_fu_1100_p3() {
    sh_amt_3_fu_1100_p3 = (!tmp_48_fu_1082_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_48_fu_1082_p2.read()[0].to_bool())? tmp_49_fu_1088_p2.read(): tmp_50_fu_1094_p2.read());
}

void prop_hw::thread_sh_amt_4_cast_fu_1947_p1() {
    sh_amt_4_cast_fu_1947_p1 = esl_sext<32,12>(sh_amt_4_reg_3509.read());
}

void prop_hw::thread_sh_amt_4_fu_1677_p3() {
    sh_amt_4_fu_1677_p3 = (!tmp_73_fu_1659_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_73_fu_1659_p2.read()[0].to_bool())? tmp_74_fu_1665_p2.read(): tmp_75_fu_1671_p2.read());
}

void prop_hw::thread_sh_amt_5_cast_fu_1444_p1() {
    sh_amt_5_cast_fu_1444_p1 = esl_sext<32,12>(sh_amt_5_reg_3289.read());
}

void prop_hw::thread_sh_amt_5_fu_1142_p3() {
    sh_amt_5_fu_1142_p3 = (!tmp_77_fu_1124_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_77_fu_1124_p2.read()[0].to_bool())? tmp_78_fu_1130_p2.read(): tmp_79_fu_1136_p2.read());
}

void prop_hw::thread_sh_amt_6_cast1_fu_1984_p1() {
    sh_amt_6_cast1_fu_1984_p1 = esl_sext<19,12>(sh_amt_6_reg_3568.read());
}

void prop_hw::thread_sh_amt_6_cast_fu_1987_p1() {
    sh_amt_6_cast_fu_1987_p1 = esl_sext<32,12>(sh_amt_6_reg_3568.read());
}

void prop_hw::thread_sh_amt_6_fu_1825_p3() {
    sh_amt_6_fu_1825_p3 = (!tmp_107_fu_1807_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_107_fu_1807_p2.read()[0].to_bool())? tmp_108_fu_1813_p2.read(): tmp_109_fu_1819_p2.read());
}

void prop_hw::thread_sh_amt_7_cast1_fu_1695_p1() {
    sh_amt_7_cast1_fu_1695_p1 = esl_sext<19,12>(sh_amt_7_reg_3335.read());
}

void prop_hw::thread_sh_amt_7_cast_fu_1698_p1() {
    sh_amt_7_cast_fu_1698_p1 = esl_sext<32,12>(sh_amt_7_reg_3335.read());
}

void prop_hw::thread_sh_amt_7_fu_1249_p3() {
    sh_amt_7_fu_1249_p3 = (!tmp_111_fu_1231_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_111_fu_1231_p2.read()[0].to_bool())? tmp_112_fu_1237_p2.read(): tmp_113_fu_1243_p2.read());
}

void prop_hw::thread_sh_amt_8_cast_fu_2335_p1() {
    sh_amt_8_cast_fu_2335_p1 = esl_sext<32,12>(sh_amt_8_reg_3848.read());
}

void prop_hw::thread_sh_amt_8_fu_2290_p3() {
    sh_amt_8_fu_2290_p3 = (!tmp_141_fu_2275_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_141_fu_2275_p2.read()[0].to_bool())? tmp_142_fu_2280_p2.read(): tmp_143_fu_2285_p2.read());
}

void prop_hw::thread_sh_amt_9_cast_fu_2827_p1() {
    sh_amt_9_cast_fu_2827_p1 = esl_sext<32,12>(sh_amt_9_reg_4114.read());
}

void prop_hw::thread_sh_amt_9_fu_2787_p3() {
    sh_amt_9_fu_2787_p3 = (!tmp_172_fu_2772_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_172_fu_2772_p2.read()[0].to_bool())? tmp_173_fu_2777_p2.read(): tmp_174_fu_2782_p2.read());
}

void prop_hw::thread_sh_amt_cast1_fu_1855_p1() {
    sh_amt_cast1_fu_1855_p1 = esl_sext<14,12>(sh_amt_reg_3395.read());
}

void prop_hw::thread_sh_amt_cast_fu_1858_p1() {
    sh_amt_cast_fu_1858_p1 = esl_sext<32,12>(sh_amt_reg_3395.read());
}

void prop_hw::thread_sh_amt_fu_1393_p3() {
    sh_amt_fu_1393_p3 = (!tmp_8_fu_1375_p2.read()[0].is_01())? sc_lv<12>(): ((tmp_8_fu_1375_p2.read()[0].to_bool())? tmp_10_fu_1381_p2.read(): tmp_11_fu_1387_p2.read());
}

void prop_hw::thread_tmp_100_fu_1761_p1() {
    tmp_100_fu_1761_p1 = esl_zext<12,11>(exp_tmp_V_5_fu_1751_p4.read());
}

void prop_hw::thread_tmp_101_fu_1795_p2() {
    tmp_101_fu_1795_p2 = (!tmp_195_fu_1739_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_195_fu_1739_p1.read() == ap_const_lv63_0);
}

void prop_hw::thread_tmp_104_fu_1185_p1() {
    tmp_104_fu_1185_p1 = esl_zext<12,11>(exp_tmp_V_6_fu_1175_p4.read());
}

void prop_hw::thread_tmp_105_fu_1193_p3() {
    tmp_105_fu_1193_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_200_fu_1189_p1.read());
}

void prop_hw::thread_tmp_106_fu_1219_p2() {
    tmp_106_fu_1219_p2 = (!tmp_198_fu_1163_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_198_fu_1163_p1.read() == ap_const_lv63_0);
}

void prop_hw::thread_tmp_107_fu_1807_p2() {
    tmp_107_fu_1807_p2 = (!F2_6_fu_1801_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_6_fu_1801_p2.read()) > sc_bigint<12>(ap_const_lv12_10));
}

void prop_hw::thread_tmp_108_fu_1813_p2() {
    tmp_108_fu_1813_p2 = (!F2_6_fu_1801_p2.read().is_01() || !ap_const_lv12_FF0.is_01())? sc_lv<12>(): (sc_biguint<12>(F2_6_fu_1801_p2.read()) + sc_bigint<12>(ap_const_lv12_FF0));
}

void prop_hw::thread_tmp_109_fu_1819_p2() {
    tmp_109_fu_1819_p2 = (!ap_const_lv12_10.is_01() || !F2_6_fu_1801_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_10) - sc_biguint<12>(F2_6_fu_1801_p2.read()));
}

void prop_hw::thread_tmp_10_fu_1381_p2() {
    tmp_10_fu_1381_p2 = (!F2_fu_1369_p2.read().is_01() || !ap_const_lv12_FF6.is_01())? sc_lv<12>(): (sc_biguint<12>(F2_fu_1369_p2.read()) + sc_bigint<12>(ap_const_lv12_FF6));
}

void prop_hw::thread_tmp_110_fu_1833_p2() {
    tmp_110_fu_1833_p2 = (!F2_6_fu_1801_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): sc_lv<1>(F2_6_fu_1801_p2.read() == ap_const_lv12_10);
}

void prop_hw::thread_tmp_111_fu_1231_p2() {
    tmp_111_fu_1231_p2 = (!F2_7_fu_1225_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_7_fu_1225_p2.read()) > sc_bigint<12>(ap_const_lv12_10));
}

void prop_hw::thread_tmp_112_fu_1237_p2() {
    tmp_112_fu_1237_p2 = (!F2_7_fu_1225_p2.read().is_01() || !ap_const_lv12_FF0.is_01())? sc_lv<12>(): (sc_biguint<12>(F2_7_fu_1225_p2.read()) + sc_bigint<12>(ap_const_lv12_FF0));
}

void prop_hw::thread_tmp_113_fu_1243_p2() {
    tmp_113_fu_1243_p2 = (!ap_const_lv12_10.is_01() || !F2_7_fu_1225_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_10) - sc_biguint<12>(F2_7_fu_1225_p2.read()));
}

void prop_hw::thread_tmp_114_fu_1257_p2() {
    tmp_114_fu_1257_p2 = (!F2_7_fu_1225_p2.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<1>(): sc_lv<1>(F2_7_fu_1225_p2.read() == ap_const_lv12_10);
}

void prop_hw::thread_tmp_115_fu_1014_p1() {
    tmp_115_fu_1014_p1 = ireg_V_4_fu_1011_p1.read().range(63-1, 0);
}

void prop_hw::thread_tmp_116_fu_2004_p2() {
    tmp_116_fu_2004_p2 = (!sh_amt_6_reg_3568.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_6_reg_3568.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void prop_hw::thread_tmp_117_fu_1993_p2() {
    tmp_117_fu_1993_p2 = (!sh_amt_6_reg_3568.read().is_01() || !ap_const_lv12_13.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_6_reg_3568.read()) < sc_biguint<12>(ap_const_lv12_13));
}

void prop_hw::thread_tmp_118_fu_1040_p1() {
    tmp_118_fu_1040_p1 = ireg_V_4_fu_1011_p1.read().range(52-1, 0);
}

void prop_hw::thread_tmp_119_fu_1715_p2() {
    tmp_119_fu_1715_p2 = (!sh_amt_7_reg_3335.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_7_reg_3335.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void prop_hw::thread_tmp_11_fu_1387_p2() {
    tmp_11_fu_1387_p2 = (!ap_const_lv12_A.is_01() || !F2_fu_1369_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_A) - sc_biguint<12>(F2_fu_1369_p2.read()));
}

void prop_hw::thread_tmp_120_fu_1704_p2() {
    tmp_120_fu_1704_p2 = (!sh_amt_7_reg_3335.read().is_01() || !ap_const_lv12_13.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_7_reg_3335.read()) < sc_biguint<12>(ap_const_lv12_13));
}

void prop_hw::thread_tmp_121_fu_1578_p1() {
    tmp_121_fu_1578_p1 = sh_amt_2_fu_1570_p3.read().range(11-1, 0);
}

void prop_hw::thread_tmp_122_fu_2009_p1() {
    tmp_122_fu_2009_p1 = esl_zext<54,32>(sh_amt_6_cast_fu_1987_p1.read());
}

void prop_hw::thread_tmp_123_fu_2013_p2() {
    tmp_123_fu_2013_p2 = (!man_V_18_reg_3553.read().is_01() || !tmp_122_fu_2009_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_18_reg_3553.read()) >> (unsigned short)tmp_122_fu_2009_p1.read().to_uint();
}

void prop_hw::thread_tmp_124_fu_1998_p2() {
    tmp_124_fu_1998_p2 = (!sh_amt_6_cast1_fu_1984_p1.read().is_01())? sc_lv<19>(): tmp_203_fu_1990_p1.read() << (unsigned short)sh_amt_6_cast1_fu_1984_p1.read().to_uint();
}

void prop_hw::thread_tmp_125_fu_1108_p1() {
    tmp_125_fu_1108_p1 = sh_amt_3_fu_1100_p3.read().range(11-1, 0);
}

void prop_hw::thread_tmp_126_fu_1720_p1() {
    tmp_126_fu_1720_p1 = esl_zext<54,32>(sh_amt_7_cast_fu_1698_p1.read());
}

void prop_hw::thread_tmp_127_fu_1724_p2() {
    tmp_127_fu_1724_p2 = (!man_V_21_reg_3320.read().is_01() || !tmp_126_fu_1720_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_21_reg_3320.read()) >> (unsigned short)tmp_126_fu_1720_p1.read().to_uint();
}

void prop_hw::thread_tmp_128_fu_1709_p2() {
    tmp_128_fu_1709_p2 = (!sh_amt_7_cast1_fu_1695_p1.read().is_01())? sc_lv<19>(): tmp_204_fu_1701_p1.read() << (unsigned short)sh_amt_7_cast1_fu_1695_p1.read().to_uint();
}

void prop_hw::thread_tmp_129_fu_1944_p1() {
    tmp_129_fu_1944_p1 = man_V_8_reg_3458.read().range(11-1, 0);
}

void prop_hw::thread_tmp_12_fu_1401_p2() {
    tmp_12_fu_1401_p2 = (!F2_fu_1369_p2.read().is_01() || !ap_const_lv12_A.is_01())? sc_lv<1>(): sc_lv<1>(F2_fu_1369_p2.read() == ap_const_lv12_A);
}

void prop_hw::thread_tmp_130_fu_2025_p1() {
    tmp_130_fu_2025_p1 = esl_sext<64,6>(r_V_3_reg_3580.read());
}

void prop_hw::thread_tmp_134_fu_2090_p2() {
    tmp_134_fu_2090_p2 = (!tmp_208_fu_2087_p1.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_208_fu_2087_p1.read() == ap_const_lv16_0);
}

void prop_hw::thread_tmp_136_fu_1441_p1() {
    tmp_136_fu_1441_p1 = man_V_11_reg_3251.read().range(11-1, 0);
}

void prop_hw::thread_tmp_138_fu_2231_p1() {
    tmp_138_fu_2231_p1 = esl_zext<12,11>(exp_tmp_V_7_fu_2221_p4.read());
}

void prop_hw::thread_tmp_139_fu_2251_p3() {
    tmp_139_fu_2251_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_212_reg_3819.read());
}

void prop_hw::thread_tmp_13_fu_979_p2() {
    tmp_13_fu_979_p2 = (!F2_1_fu_973_p2.read().is_01() || !ap_const_lv12_A.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_1_fu_973_p2.read()) > sc_bigint<12>(ap_const_lv12_A));
}

void prop_hw::thread_tmp_140_fu_2239_p2() {
    tmp_140_fu_2239_p2 = (!tmp_210_fu_2209_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_210_fu_2209_p1.read() == ap_const_lv63_0);
}

void prop_hw::thread_tmp_141_fu_2275_p2() {
    tmp_141_fu_2275_p2 = (!F2_8_reg_3830.read().is_01() || !ap_const_lv12_16.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_8_reg_3830.read()) > sc_bigint<12>(ap_const_lv12_16));
}

void prop_hw::thread_tmp_142_fu_2280_p2() {
    tmp_142_fu_2280_p2 = (!ap_const_lv12_FEA.is_01() || !F2_8_reg_3830.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FEA) + sc_biguint<12>(F2_8_reg_3830.read()));
}

void prop_hw::thread_tmp_143_fu_2285_p2() {
    tmp_143_fu_2285_p2 = (!ap_const_lv12_16.is_01() || !F2_8_reg_3830.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_16) - sc_biguint<12>(F2_8_reg_3830.read()));
}

void prop_hw::thread_tmp_144_fu_2298_p2() {
    tmp_144_fu_2298_p2 = (!F2_8_reg_3830.read().is_01() || !ap_const_lv12_16.is_01())? sc_lv<1>(): sc_lv<1>(F2_8_reg_3830.read() == ap_const_lv12_16);
}

void prop_hw::thread_tmp_145_fu_1913_p1() {
    tmp_145_fu_1913_p1 = man_V_8_reg_3458.read().range(11-1, 0);
}

void prop_hw::thread_tmp_146_fu_2307_p2() {
    tmp_146_fu_2307_p2 = (!sh_amt_8_fu_2290_p3.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_8_fu_2290_p3.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void prop_hw::thread_tmp_147_fu_2338_p2() {
    tmp_147_fu_2338_p2 = (!sh_amt_8_reg_3848.read().is_01() || !ap_const_lv12_18.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_8_reg_3848.read()) < sc_biguint<12>(ap_const_lv12_18));
}

void prop_hw::thread_tmp_148_fu_2343_p1() {
    tmp_148_fu_2343_p1 = esl_zext<54,32>(sh_amt_8_cast_fu_2335_p1.read());
}

void prop_hw::thread_tmp_149_fu_2347_p2() {
    tmp_149_fu_2347_p2 = (!man_V_24_reg_3838.read().is_01() || !tmp_148_fu_2343_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_24_reg_3838.read()) >> (unsigned short)tmp_148_fu_2343_p1.read().to_uint();
}

void prop_hw::thread_tmp_14_fu_985_p2() {
    tmp_14_fu_985_p2 = (!F2_1_fu_973_p2.read().is_01() || !ap_const_lv12_FF6.is_01())? sc_lv<12>(): (sc_biguint<12>(F2_1_fu_973_p2.read()) + sc_bigint<12>(ap_const_lv12_FF6));
}

void prop_hw::thread_tmp_150_fu_1410_p1() {
    tmp_150_fu_1410_p1 = man_V_11_reg_3251.read().range(11-1, 0);
}

void prop_hw::thread_tmp_151_fu_2428_p1() {
    tmp_151_fu_2428_p1 = esl_sext<32,24>(ap_pipeline_reg_pp0_iter32_tmp_213_reg_3859.read());
}

void prop_hw::thread_tmp_152_fu_2431_p2() {
    tmp_152_fu_2431_p2 = (!sh_amt_8_cast_reg_3887.read().is_01())? sc_lv<32>(): tmp_151_fu_2428_p1.read() << (unsigned short)sh_amt_8_cast_reg_3887.read().to_uint();
}

void prop_hw::thread_tmp_153_fu_1940_p1() {
    tmp_153_fu_1940_p1 = tmp_61_fu_1935_p2.read().range(11-1, 0);
}

void prop_hw::thread_tmp_154_fu_2173_p2() {
    tmp_154_fu_2173_p2 = (!inhwEta_V_2_reg_3752.read().is_01() || !ap_const_lv12_466.is_01())? sc_lv<1>(): (sc_biguint<12>(inhwEta_V_2_reg_3752.read()) < sc_biguint<12>(ap_const_lv12_466));
}

void prop_hw::thread_tmp_155_fu_1591_p1() {
    tmp_155_fu_1591_p1 = ireg_V_3_fu_1588_p1.read().range(63-1, 0);
}

void prop_hw::thread_tmp_156_fu_2192_p2() {
    tmp_156_fu_2192_p2 = (!p_3_phi_fu_565_p4.read().is_01() || !ap_const_lv14_0.is_01())? sc_lv<1>(): (sc_bigint<14>(p_3_phi_fu_565_p4.read()) > sc_bigint<14>(ap_const_lv14_0));
}

void prop_hw::thread_tmp_159_fu_2588_p1() {
    tmp_159_fu_2588_p1 = esl_sext<15,13>(ap_pipeline_reg_pp0_iter39_p_Val2_3_reg_3760.read());
}

void prop_hw::thread_tmp_15_fu_991_p2() {
    tmp_15_fu_991_p2 = (!ap_const_lv12_A.is_01() || !F2_1_fu_973_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_A) - sc_biguint<12>(F2_1_fu_973_p2.read()));
}

void prop_hw::thread_tmp_160_fu_2591_p1() {
    tmp_160_fu_2591_p1 = esl_sext<15,7>(tmp_218_fu_2570_p4.read());
}

void prop_hw::thread_tmp_161_fu_2595_p2() {
    tmp_161_fu_2595_p2 = (tmp_219_fu_2580_p3.read() ^ ap_pipeline_reg_pp0_iter39_tmp_72_reg_3766.read());
}

void prop_hw::thread_tmp_162_fu_2606_p4() {
    tmp_162_fu_2606_p4 = r_V_6_fu_2600_p2.read().range(14, 1);
}

void prop_hw::thread_tmp_163_fu_2632_p2() {
    tmp_163_fu_2632_p2 = (!p_Result_s_41_fu_2624_p3.read().is_01() || !ap_const_lv10_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_s_41_fu_2624_p3.read() == ap_const_lv10_0);
}

void prop_hw::thread_tmp_164_fu_1617_p1() {
    tmp_164_fu_1617_p1 = ireg_V_3_fu_1588_p1.read().range(52-1, 0);
}

void prop_hw::thread_tmp_166_fu_1437_p1() {
    tmp_166_fu_1437_p1 = tmp_70_fu_1432_p2.read().range(11-1, 0);
}

void prop_hw::thread_tmp_169_fu_2728_p1() {
    tmp_169_fu_2728_p1 = esl_zext<12,11>(exp_tmp_V_8_fu_2718_p4.read());
}

void prop_hw::thread_tmp_16_fu_1005_p2() {
    tmp_16_fu_1005_p2 = (!F2_1_fu_973_p2.read().is_01() || !ap_const_lv12_A.is_01())? sc_lv<1>(): sc_lv<1>(F2_1_fu_973_p2.read() == ap_const_lv12_A);
}

void prop_hw::thread_tmp_170_fu_2748_p3() {
    tmp_170_fu_2748_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_224_reg_4085.read());
}

void prop_hw::thread_tmp_171_fu_2736_p2() {
    tmp_171_fu_2736_p2 = (!tmp_222_fu_2706_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_222_fu_2706_p1.read() == ap_const_lv63_0);
}

void prop_hw::thread_tmp_172_fu_2772_p2() {
    tmp_172_fu_2772_p2 = (!F2_9_reg_4096.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_9_reg_4096.read()) > sc_bigint<12>(ap_const_lv12_14));
}

void prop_hw::thread_tmp_173_fu_2777_p2() {
    tmp_173_fu_2777_p2 = (!ap_const_lv12_FEC.is_01() || !F2_9_reg_4096.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FEC) + sc_biguint<12>(F2_9_reg_4096.read()));
}

void prop_hw::thread_tmp_174_fu_2782_p2() {
    tmp_174_fu_2782_p2 = (!ap_const_lv12_14.is_01() || !F2_9_reg_4096.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_14) - sc_biguint<12>(F2_9_reg_4096.read()));
}

void prop_hw::thread_tmp_175_fu_2795_p2() {
    tmp_175_fu_2795_p2 = (!F2_9_reg_4096.read().is_01() || !ap_const_lv12_14.is_01())? sc_lv<1>(): sc_lv<1>(F2_9_reg_4096.read() == ap_const_lv12_14);
}

void prop_hw::thread_tmp_176_fu_1685_p1() {
    tmp_176_fu_1685_p1 = sh_amt_4_fu_1677_p3.read().range(11-1, 0);
}

void prop_hw::thread_tmp_177_fu_2804_p2() {
    tmp_177_fu_2804_p2 = (!sh_amt_9_fu_2787_p3.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_9_fu_2787_p3.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void prop_hw::thread_tmp_178_fu_2830_p2() {
    tmp_178_fu_2830_p2 = (!sh_amt_9_reg_4114.read().is_01() || !ap_const_lv12_17.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_9_reg_4114.read()) < sc_biguint<12>(ap_const_lv12_17));
}

void prop_hw::thread_tmp_179_fu_2835_p1() {
    tmp_179_fu_2835_p1 = esl_zext<54,32>(sh_amt_9_cast_fu_2827_p1.read());
}

void prop_hw::thread_tmp_180_fu_2839_p2() {
    tmp_180_fu_2839_p2 = (!man_V_27_reg_4104.read().is_01() || !tmp_179_fu_2835_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_27_reg_4104.read()) >> (unsigned short)tmp_179_fu_2835_p1.read().to_uint();
}

void prop_hw::thread_tmp_181_fu_1150_p1() {
    tmp_181_fu_1150_p1 = sh_amt_5_fu_1142_p3.read().range(11-1, 0);
}

void prop_hw::thread_tmp_182_fu_2930_p1() {
    tmp_182_fu_2930_p1 = esl_sext<32,23>(ap_pipeline_reg_pp0_iter49_tmp_225_reg_4125.read());
}

void prop_hw::thread_tmp_183_fu_2933_p2() {
    tmp_183_fu_2933_p2 = (!sh_amt_9_cast_reg_4148.read().is_01())? sc_lv<32>(): tmp_182_fu_2930_p1.read() << (unsigned short)sh_amt_9_cast_reg_4148.read().to_uint();
}

void prop_hw::thread_tmp_184_fu_1981_p1() {
    tmp_184_fu_1981_p1 = man_V_14_reg_3494.read().range(11-1, 0);
}

void prop_hw::thread_tmp_186_fu_2995_p2() {
    tmp_186_fu_2995_p2 = (!tmp_229_fu_2991_p1.read().is_01() || !ap_const_lv20_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_229_fu_2991_p1.read() == ap_const_lv20_0);
}

void prop_hw::thread_tmp_187_fu_1478_p1() {
    tmp_187_fu_1478_p1 = man_V_11_reg_3251.read().range(11-1, 0);
}

void prop_hw::thread_tmp_188_fu_1950_p1() {
    tmp_188_fu_1950_p1 = man_V_14_reg_3494.read().range(11-1, 0);
}

void prop_hw::thread_tmp_189_fu_1447_p1() {
    tmp_189_fu_1447_p1 = man_V_11_reg_3251.read().range(11-1, 0);
}

void prop_hw::thread_tmp_18_fu_1875_p2() {
    tmp_18_fu_1875_p2 = (!sh_amt_reg_3395.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_3395.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void prop_hw::thread_tmp_190_fu_3017_p3() {
    tmp_190_fu_3017_p3 = (!tmp_186_reg_4203.read()[0].is_01())? sc_lv<23>(): ((tmp_186_reg_4203.read()[0].to_bool())? ret_V_1_cast_fu_3001_p1.read(): ret_V_1_fu_3011_p2.read());
}

void prop_hw::thread_tmp_191_fu_1977_p1() {
    tmp_191_fu_1977_p1 = tmp_90_fu_1972_p2.read().range(11-1, 0);
}

void prop_hw::thread_tmp_193_fu_1474_p1() {
    tmp_193_fu_1474_p1 = tmp_95_fu_1469_p2.read().range(11-1, 0);
}

void prop_hw::thread_tmp_194_fu_841_p3() {
    tmp_194_fu_841_p3 = in_hwPhi_V.read().range(18, 18);
}

void prop_hw::thread_tmp_195_fu_1739_p1() {
    tmp_195_fu_1739_p1 = ireg_V_5_fu_1736_p1.read().range(63-1, 0);
}

void prop_hw::thread_tmp_197_fu_1765_p1() {
    tmp_197_fu_1765_p1 = ireg_V_5_fu_1736_p1.read().range(52-1, 0);
}

void prop_hw::thread_tmp_198_fu_1163_p1() {
    tmp_198_fu_1163_p1 = ireg_V_6_fu_1160_p1.read().range(63-1, 0);
}

void prop_hw::thread_tmp_19_fu_1864_p2() {
    tmp_19_fu_1864_p2 = (!sh_amt_reg_3395.read().is_01() || !ap_const_lv12_E.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_3395.read()) < sc_biguint<12>(ap_const_lv12_E));
}

void prop_hw::thread_tmp_1_fu_1329_p1() {
    tmp_1_fu_1329_p1 = esl_zext<12,11>(exp_tmp_V_fu_1319_p4.read());
}

void prop_hw::thread_tmp_200_fu_1189_p1() {
    tmp_200_fu_1189_p1 = ireg_V_6_fu_1160_p1.read().range(52-1, 0);
}

void prop_hw::thread_tmp_201_fu_2022_p1() {
    tmp_201_fu_2022_p1 = man_V_18_reg_3553.read().range(19-1, 0);
}

void prop_hw::thread_tmp_202_fu_1733_p1() {
    tmp_202_fu_1733_p1 = man_V_21_reg_3320.read().range(19-1, 0);
}

void prop_hw::thread_tmp_203_fu_1990_p1() {
    tmp_203_fu_1990_p1 = man_V_18_reg_3553.read().range(19-1, 0);
}

void prop_hw::thread_tmp_204_fu_1701_p1() {
    tmp_204_fu_1701_p1 = man_V_21_reg_3320.read().range(19-1, 0);
}

void prop_hw::thread_tmp_205_fu_2018_p1() {
    tmp_205_fu_2018_p1 = tmp_123_fu_2013_p2.read().range(19-1, 0);
}

void prop_hw::thread_tmp_206_fu_1729_p1() {
    tmp_206_fu_1729_p1 = tmp_127_fu_1724_p2.read().range(19-1, 0);
}

void prop_hw::thread_tmp_207_fu_2080_p3() {
    tmp_207_fu_2080_p3 = grp_fu_3033_p3.read().range(38, 38);
}

void prop_hw::thread_tmp_208_fu_2087_p1() {
    tmp_208_fu_2087_p1 = grp_fu_3033_p3.read().range(16-1, 0);
}

void prop_hw::thread_tmp_209_fu_866_p3() {
    tmp_209_fu_866_p3 = in_hwRinv_V.read().range(14, 14);
}

void prop_hw::thread_tmp_20_fu_1307_p1() {
    tmp_20_fu_1307_p1 = ireg_V_fu_1304_p1.read().range(63-1, 0);
}

void prop_hw::thread_tmp_210_fu_2209_p1() {
    tmp_210_fu_2209_p1 = ireg_V_7_fu_2206_p1.read().range(63-1, 0);
}

void prop_hw::thread_tmp_212_fu_2235_p1() {
    tmp_212_fu_2235_p1 = ireg_V_7_fu_2206_p1.read().range(52-1, 0);
}

void prop_hw::thread_tmp_213_fu_2303_p1() {
    tmp_213_fu_2303_p1 = man_V_24_fu_2268_p3.read().range(24-1, 0);
}

void prop_hw::thread_tmp_214_fu_2352_p1() {
    tmp_214_fu_2352_p1 = tmp_149_fu_2347_p2.read().range(24-1, 0);
}

void prop_hw::thread_tmp_215_fu_2436_p1() {
    tmp_215_fu_2436_p1 = tmp_152_fu_2431_p2.read().range(24-1, 0);
}

void prop_hw::thread_tmp_217_fu_2178_p3() {
    tmp_217_fu_2178_p3 = ap_pipeline_reg_pp0_iter25_data_V_read_assign_4_reg_473.read().range(10, 10);
}

void prop_hw::thread_tmp_218_fu_2570_p4() {
    tmp_218_fu_2570_p4 = ap_phi_precharge_reg_pp0_iter40_p_Val2_38_in_in_reg_620.read().range(16, 10);
}

void prop_hw::thread_tmp_219_fu_2580_p3() {
    tmp_219_fu_2580_p3 = ap_phi_precharge_reg_pp0_iter40_p_Val2_38_in_in_reg_620.read().range(10, 10);
}

void prop_hw::thread_tmp_21_fu_1283_p2() {
    tmp_21_fu_1283_p2 = (!sh_amt_1_reg_3228.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_1_reg_3228.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void prop_hw::thread_tmp_220_fu_2616_p3() {
    tmp_220_fu_2616_p3 = r_V_6_fu_2600_p2.read().range(14, 14);
}

void prop_hw::thread_tmp_222_fu_2706_p1() {
    tmp_222_fu_2706_p1 = ireg_V_8_fu_2703_p1.read().range(63-1, 0);
}

void prop_hw::thread_tmp_224_fu_2732_p1() {
    tmp_224_fu_2732_p1 = ireg_V_8_fu_2703_p1.read().range(52-1, 0);
}

void prop_hw::thread_tmp_225_fu_2800_p1() {
    tmp_225_fu_2800_p1 = man_V_27_fu_2765_p3.read().range(23-1, 0);
}

void prop_hw::thread_tmp_226_fu_2844_p1() {
    tmp_226_fu_2844_p1 = tmp_180_fu_2839_p2.read().range(23-1, 0);
}

void prop_hw::thread_tmp_227_fu_2938_p1() {
    tmp_227_fu_2938_p1 = tmp_183_fu_2933_p2.read().range(23-1, 0);
}

void prop_hw::thread_tmp_228_fu_3004_p3() {
    tmp_228_fu_3004_p3 = r_V_10_reg_4193.read().range(41, 41);
}

void prop_hw::thread_tmp_229_fu_2991_p1() {
    tmp_229_fu_2991_p1 = grp_fu_2975_p2.read().range(20-1, 0);
}

void prop_hw::thread_tmp_22_fu_1272_p2() {
    tmp_22_fu_1272_p2 = (!sh_amt_1_reg_3228.read().is_01() || !ap_const_lv12_E.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_1_reg_3228.read()) < sc_biguint<12>(ap_const_lv12_E));
}

void prop_hw::thread_tmp_23_fu_1887_p1() {
    tmp_23_fu_1887_p1 = esl_zext<54,32>(sh_amt_cast_fu_1858_p1.read());
}

void prop_hw::thread_tmp_24_fu_1891_p2() {
    tmp_24_fu_1891_p2 = (!man_V_2_reg_3380.read().is_01() || !tmp_23_fu_1887_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_2_reg_3380.read()) >> (unsigned short)tmp_23_fu_1887_p1.read().to_uint();
}

void prop_hw::thread_tmp_25_fu_1869_p2() {
    tmp_25_fu_1869_p2 = (!sh_amt_cast1_fu_1855_p1.read().is_01())? sc_lv<14>(): tmp_54_fu_1861_p1.read() << (unsigned short)sh_amt_cast1_fu_1855_p1.read().to_uint();
}

void prop_hw::thread_tmp_26_fu_1288_p1() {
    tmp_26_fu_1288_p1 = esl_zext<54,32>(sh_amt_1_cast_fu_1266_p1.read());
}

void prop_hw::thread_tmp_27_fu_1333_p1() {
    tmp_27_fu_1333_p1 = ireg_V_fu_1304_p1.read().range(52-1, 0);
}

void prop_hw::thread_tmp_28_fu_1292_p2() {
    tmp_28_fu_1292_p2 = (!man_V_5_reg_3213.read().is_01() || !tmp_26_fu_1288_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_5_reg_3213.read()) >> (unsigned short)tmp_26_fu_1288_p1.read().to_uint();
}

void prop_hw::thread_tmp_29_fu_1277_p2() {
    tmp_29_fu_1277_p2 = (!sh_amt_1_cast1_fu_1263_p1.read().is_01())? sc_lv<14>(): tmp_56_fu_1269_p1.read() << (unsigned short)sh_amt_1_cast1_fu_1263_p1.read().to_uint();
}

void prop_hw::thread_tmp_30_fu_2161_p2() {
    tmp_30_fu_2161_p2 = (!p_Result_4_fu_2153_p3.read().is_01() || !ap_const_lv10_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_4_fu_2153_p3.read() == ap_const_lv10_0);
}

void prop_hw::thread_tmp_31_fu_911_p1() {
    tmp_31_fu_911_p1 = ireg_V_1_fu_908_p1.read().range(63-1, 0);
}

void prop_hw::thread_tmp_34_fu_937_p1() {
    tmp_34_fu_937_p1 = ireg_V_1_fu_908_p1.read().range(52-1, 0);
}

void prop_hw::thread_tmp_35_fu_1506_p1() {
    tmp_35_fu_1506_p1 = esl_zext<12,11>(exp_tmp_V_2_fu_1496_p4.read());
}

void prop_hw::thread_tmp_36_fu_1900_p1() {
    tmp_36_fu_1900_p1 = man_V_2_reg_3380.read().range(14-1, 0);
}

void prop_hw::thread_tmp_37_fu_1514_p3() {
    tmp_37_fu_1514_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_99_fu_1510_p1.read());
}

void prop_hw::thread_tmp_38_fu_1540_p2() {
    tmp_38_fu_1540_p2 = (!tmp_93_fu_1484_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_93_fu_1484_p1.read() == ap_const_lv63_0);
}

void prop_hw::thread_tmp_3_fu_1337_p3() {
    tmp_3_fu_1337_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_27_fu_1333_p1.read());
}

void prop_hw::thread_tmp_41_fu_1036_p1() {
    tmp_41_fu_1036_p1 = esl_zext<12,11>(exp_tmp_V_3_fu_1026_p4.read());
}

void prop_hw::thread_tmp_42_fu_1044_p3() {
    tmp_42_fu_1044_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_118_fu_1040_p1.read());
}

void prop_hw::thread_tmp_43_fu_1070_p2() {
    tmp_43_fu_1070_p2 = (!tmp_115_fu_1014_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_115_fu_1014_p1.read() == ap_const_lv63_0);
}

void prop_hw::thread_tmp_44_fu_1552_p2() {
    tmp_44_fu_1552_p2 = (!F2_2_fu_1546_p2.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_2_fu_1546_p2.read()) > sc_bigint<12>(ap_const_lv12_6));
}

void prop_hw::thread_tmp_45_fu_1558_p2() {
    tmp_45_fu_1558_p2 = (!ap_const_lv12_FFA.is_01() || !F2_2_fu_1546_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFA) + sc_biguint<12>(F2_2_fu_1546_p2.read()));
}

void prop_hw::thread_tmp_46_fu_1564_p2() {
    tmp_46_fu_1564_p2 = (!ap_const_lv12_6.is_01() || !F2_2_fu_1546_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_6) - sc_biguint<12>(F2_2_fu_1546_p2.read()));
}

void prop_hw::thread_tmp_47_fu_1582_p2() {
    tmp_47_fu_1582_p2 = (!F2_2_fu_1546_p2.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<1>(): sc_lv<1>(F2_2_fu_1546_p2.read() == ap_const_lv12_6);
}

void prop_hw::thread_tmp_48_fu_1082_p2() {
    tmp_48_fu_1082_p2 = (!F2_3_fu_1076_p2.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_3_fu_1076_p2.read()) > sc_bigint<12>(ap_const_lv12_6));
}

void prop_hw::thread_tmp_49_fu_1088_p2() {
    tmp_49_fu_1088_p2 = (!ap_const_lv12_FFA.is_01() || !F2_3_fu_1076_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFA) + sc_biguint<12>(F2_3_fu_1076_p2.read()));
}

void prop_hw::thread_tmp_4_fu_1363_p2() {
    tmp_4_fu_1363_p2 = (!tmp_20_fu_1307_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_20_fu_1307_p1.read() == ap_const_lv63_0);
}

void prop_hw::thread_tmp_50_fu_1094_p2() {
    tmp_50_fu_1094_p2 = (!ap_const_lv12_6.is_01() || !F2_3_fu_1076_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_6) - sc_biguint<12>(F2_3_fu_1076_p2.read()));
}

void prop_hw::thread_tmp_51_fu_1112_p2() {
    tmp_51_fu_1112_p2 = (!F2_3_fu_1076_p2.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<1>(): sc_lv<1>(F2_3_fu_1076_p2.read() == ap_const_lv12_6);
}

void prop_hw::thread_tmp_52_fu_1926_p2() {
    tmp_52_fu_1926_p2 = (!sh_amt_2_reg_3473.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_reg_3473.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void prop_hw::thread_tmp_53_fu_1301_p1() {
    tmp_53_fu_1301_p1 = man_V_5_reg_3213.read().range(14-1, 0);
}

void prop_hw::thread_tmp_54_fu_1861_p1() {
    tmp_54_fu_1861_p1 = man_V_2_reg_3380.read().range(14-1, 0);
}

void prop_hw::thread_tmp_55_fu_1916_p2() {
    tmp_55_fu_1916_p2 = (!sh_amt_2_reg_3473.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_reg_3473.read()) < sc_biguint<12>(ap_const_lv12_B));
}

void prop_hw::thread_tmp_56_fu_1269_p1() {
    tmp_56_fu_1269_p1 = man_V_5_reg_3213.read().range(14-1, 0);
}

void prop_hw::thread_tmp_57_fu_1423_p2() {
    tmp_57_fu_1423_p2 = (!sh_amt_3_reg_3269.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_3_reg_3269.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void prop_hw::thread_tmp_58_fu_1413_p2() {
    tmp_58_fu_1413_p2 = (!sh_amt_3_reg_3269.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_3_reg_3269.read()) < sc_biguint<12>(ap_const_lv12_B));
}

void prop_hw::thread_tmp_59_fu_1896_p1() {
    tmp_59_fu_1896_p1 = tmp_24_fu_1891_p2.read().range(14-1, 0);
}

void prop_hw::thread_tmp_60_fu_1931_p1() {
    tmp_60_fu_1931_p1 = esl_zext<54,32>(sh_amt_2_cast_fu_1910_p1.read());
}

void prop_hw::thread_tmp_61_fu_1935_p2() {
    tmp_61_fu_1935_p2 = (!man_V_8_reg_3458.read().is_01() || !tmp_60_fu_1931_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_8_reg_3458.read()) >> (unsigned short)tmp_60_fu_1931_p1.read().to_uint();
}

void prop_hw::thread_tmp_62_fu_1921_p2() {
    tmp_62_fu_1921_p2 = (!tmp_121_reg_3480.read().is_01())? sc_lv<11>(): tmp_145_fu_1913_p1.read() << (unsigned short)tmp_121_reg_3480.read().to_uint();
}

void prop_hw::thread_tmp_63_fu_1297_p1() {
    tmp_63_fu_1297_p1 = tmp_28_fu_1292_p2.read().range(14-1, 0);
}

void prop_hw::thread_tmp_66_fu_1613_p1() {
    tmp_66_fu_1613_p1 = esl_zext<12,11>(exp_tmp_V_4_fu_1603_p4.read());
}

void prop_hw::thread_tmp_67_fu_1621_p3() {
    tmp_67_fu_1621_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_164_fu_1617_p1.read());
}

void prop_hw::thread_tmp_68_fu_1647_p2() {
    tmp_68_fu_1647_p2 = (!tmp_155_fu_1591_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_fu_1591_p1.read() == ap_const_lv63_0);
}

void prop_hw::thread_tmp_69_fu_1428_p1() {
    tmp_69_fu_1428_p1 = esl_zext<54,32>(sh_amt_3_cast_fu_1407_p1.read());
}

void prop_hw::thread_tmp_6_fu_933_p1() {
    tmp_6_fu_933_p1 = esl_zext<12,11>(exp_tmp_V_1_fu_923_p4.read());
}

void prop_hw::thread_tmp_70_fu_1432_p2() {
    tmp_70_fu_1432_p2 = (!man_V_11_reg_3251.read().is_01() || !tmp_69_fu_1428_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_11_reg_3251.read()) >> (unsigned short)tmp_69_fu_1428_p1.read().to_uint();
}

void prop_hw::thread_tmp_71_fu_1418_p2() {
    tmp_71_fu_1418_p2 = (!tmp_125_reg_3276.read().is_01())? sc_lv<11>(): tmp_150_fu_1410_p1.read() << (unsigned short)tmp_125_reg_3276.read().to_uint();
}

void prop_hw::thread_tmp_72_fu_2123_p1() {
    tmp_72_fu_2123_p1 = p_Val2_3_fu_2116_p3.read().range(1-1, 0);
}

void prop_hw::thread_tmp_73_fu_1659_p2() {
    tmp_73_fu_1659_p2 = (!F2_4_fu_1653_p2.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_4_fu_1653_p2.read()) > sc_bigint<12>(ap_const_lv12_6));
}

void prop_hw::thread_tmp_74_fu_1665_p2() {
    tmp_74_fu_1665_p2 = (!ap_const_lv12_FFA.is_01() || !F2_4_fu_1653_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFA) + sc_biguint<12>(F2_4_fu_1653_p2.read()));
}

void prop_hw::thread_tmp_75_fu_1671_p2() {
    tmp_75_fu_1671_p2 = (!ap_const_lv12_6.is_01() || !F2_4_fu_1653_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_6) - sc_biguint<12>(F2_4_fu_1653_p2.read()));
}

void prop_hw::thread_tmp_76_fu_1689_p2() {
    tmp_76_fu_1689_p2 = (!F2_4_fu_1653_p2.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<1>(): sc_lv<1>(F2_4_fu_1653_p2.read() == ap_const_lv12_6);
}

void prop_hw::thread_tmp_77_fu_1124_p2() {
    tmp_77_fu_1124_p2 = (!F2_5_fu_1118_p2.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_5_fu_1118_p2.read()) > sc_bigint<12>(ap_const_lv12_6));
}

void prop_hw::thread_tmp_78_fu_1130_p2() {
    tmp_78_fu_1130_p2 = (!ap_const_lv12_FFA.is_01() || !F2_5_fu_1118_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FFA) + sc_biguint<12>(F2_5_fu_1118_p2.read()));
}

void prop_hw::thread_tmp_79_fu_1136_p2() {
    tmp_79_fu_1136_p2 = (!ap_const_lv12_6.is_01() || !F2_5_fu_1118_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_6) - sc_biguint<12>(F2_5_fu_1118_p2.read()));
}

void prop_hw::thread_tmp_7_fu_941_p3() {
    tmp_7_fu_941_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_34_fu_937_p1.read());
}

void prop_hw::thread_tmp_80_fu_1154_p2() {
    tmp_80_fu_1154_p2 = (!F2_5_fu_1118_p2.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<1>(): sc_lv<1>(F2_5_fu_1118_p2.read() == ap_const_lv12_6);
}

void prop_hw::thread_tmp_81_fu_1963_p2() {
    tmp_81_fu_1963_p2 = (!sh_amt_4_reg_3509.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_4_reg_3509.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void prop_hw::thread_tmp_82_fu_2127_p4() {
    tmp_82_fu_2127_p4 = p_Val2_3_fu_2116_p3.read().range(12, 1);
}

void prop_hw::thread_tmp_83_fu_2141_p3() {
    tmp_83_fu_2141_p3 = p_Val2_3_fu_2116_p3.read().range(12, 12);
}

void prop_hw::thread_tmp_84_fu_1953_p2() {
    tmp_84_fu_1953_p2 = (!sh_amt_4_reg_3509.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_4_reg_3509.read()) < sc_biguint<12>(ap_const_lv12_B));
}

void prop_hw::thread_tmp_85_fu_2149_p1() {
    tmp_85_fu_2149_p1 = p_Val2_3_fu_2116_p3.read().range(1-1, 0);
}

void prop_hw::thread_tmp_86_fu_1460_p2() {
    tmp_86_fu_1460_p2 = (!sh_amt_5_reg_3289.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_5_reg_3289.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void prop_hw::thread_tmp_87_fu_1450_p2() {
    tmp_87_fu_1450_p2 = (!sh_amt_5_reg_3289.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_5_reg_3289.read()) < sc_biguint<12>(ap_const_lv12_B));
}

void prop_hw::thread_tmp_88_fu_816_p3() {
    tmp_88_fu_816_p3 = in_hwZ0_V.read().range(10, 10);
}

void prop_hw::thread_tmp_89_fu_1968_p1() {
    tmp_89_fu_1968_p1 = esl_zext<54,32>(sh_amt_4_cast_fu_1947_p1.read());
}

void prop_hw::thread_tmp_8_fu_1375_p2() {
    tmp_8_fu_1375_p2 = (!F2_fu_1369_p2.read().is_01() || !ap_const_lv12_A.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_fu_1369_p2.read()) > sc_bigint<12>(ap_const_lv12_A));
}

void prop_hw::thread_tmp_90_fu_1972_p2() {
    tmp_90_fu_1972_p2 = (!man_V_14_reg_3494.read().is_01() || !tmp_89_fu_1968_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_14_reg_3494.read()) >> (unsigned short)tmp_89_fu_1968_p1.read().to_uint();
}

void prop_hw::thread_tmp_91_fu_1769_p3() {
    tmp_91_fu_1769_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_197_fu_1765_p1.read());
}

void prop_hw::thread_tmp_92_fu_1958_p2() {
    tmp_92_fu_1958_p2 = (!tmp_176_reg_3516.read().is_01())? sc_lv<11>(): tmp_188_fu_1950_p1.read() << (unsigned short)tmp_176_reg_3516.read().to_uint();
}

void prop_hw::thread_tmp_93_fu_1484_p1() {
    tmp_93_fu_1484_p1 = ireg_V_2_fu_1481_p1.read().range(63-1, 0);
}

void prop_hw::thread_tmp_94_fu_1465_p1() {
    tmp_94_fu_1465_p1 = esl_zext<54,32>(sh_amt_5_cast_fu_1444_p1.read());
}

void prop_hw::thread_tmp_95_fu_1469_p2() {
    tmp_95_fu_1469_p2 = (!man_V_11_reg_3251.read().is_01() || !tmp_94_fu_1465_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_11_reg_3251.read()) >> (unsigned short)tmp_94_fu_1465_p1.read().to_uint();
}

void prop_hw::thread_tmp_96_fu_1455_p2() {
    tmp_96_fu_1455_p2 = (!tmp_181_reg_3296.read().is_01())? sc_lv<11>(): tmp_189_fu_1447_p1.read() << (unsigned short)tmp_181_reg_3296.read().to_uint();
}

void prop_hw::thread_tmp_99_fu_1510_p1() {
    tmp_99_fu_1510_p1 = ireg_V_2_fu_1481_p1.read().range(52-1, 0);
}

void prop_hw::thread_tmp_9_fu_967_p2() {
    tmp_9_fu_967_p2 = (!tmp_31_fu_911_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_31_fu_911_p1.read() == ap_const_lv63_0);
}

void prop_hw::thread_tmp_fu_797_p3() {
    tmp_fu_797_p3 = in_hwSinhEta_V.read().range(13, 13);
}

}

