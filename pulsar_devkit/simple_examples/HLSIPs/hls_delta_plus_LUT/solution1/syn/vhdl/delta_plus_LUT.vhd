-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.4
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity delta_plus_LUT is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    data_V : IN STD_LOGIC_VECTOR (10 downto 0);
    res_V : OUT STD_LOGIC_VECTOR (13 downto 0);
    res_V_ap_vld : OUT STD_LOGIC );
end;


architecture behav of delta_plus_LUT is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "delta_plus_LUT,hls_ip_2016_4,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7vx690tffg1927-2,HLS_INPUT_CLOCK=4.115000,HLS_INPUT_ARCH=pipeline,HLS_SYN_CLOCK=3.370000,HLS_SYN_LAT=6,HLS_SYN_TPT=1,HLS_SYN_MEM=1,HLS_SYN_DSP=1,HLS_SYN_FF=72,HLS_SYN_LUT=79}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv23_0 : STD_LOGIC_VECTOR (22 downto 0) := "00000000000000000000000";
    constant ap_const_lv32_16 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010110";
    constant ap_const_lv9_0 : STD_LOGIC_VECTOR (8 downto 0) := "000000000";
    constant ap_const_lv9_40 : STD_LOGIC_VECTOR (8 downto 0) := "001000000";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv5_11 : STD_LOGIC_VECTOR (4 downto 0) := "10001";
    constant ap_const_lv24_889 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000100010001001";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0);
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter3 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter4 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter5 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter6 : STD_LOGIC := '0';
    signal delta_plus_table1_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal delta_plus_table1_ce0 : STD_LOGIC;
    signal delta_plus_table1_q0 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_6_reg_262 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_reg_pp0_iter1_tmp_6_reg_262 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_reg_pp0_iter2_tmp_6_reg_262 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_reg_pp0_iter3_tmp_6_reg_262 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_1_fu_107_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_1_reg_268 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_8_reg_273 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_pipeline_reg_pp0_iter3_tmp_8_reg_273 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_7_reg_278 : STD_LOGIC_VECTOR (7 downto 0);
    signal r_V_fu_168_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal r_V_reg_283 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_12_reg_288 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_reg_pp0_iter5_tmp_12_reg_288 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_13_reg_294 : STD_LOGIC_VECTOR (2 downto 0);
    signal icmp_fu_203_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_reg_299 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_3_fu_208_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_fu_249_p2 : STD_LOGIC_VECTOR (23 downto 0);
    signal neg_mul_fu_119_p2 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_fu_134_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_5_fu_137_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal p_v_fu_140_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_10_fu_147_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal neg_ti_fu_151_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_11_fu_157_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_9_fu_161_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_2_fu_192_p3 : STD_LOGIC_VECTOR (12 downto 0);
    signal index_fu_199_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal sel_tmp1_fu_213_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp2_fu_218_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_4_fu_231_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp_fu_223_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal storemerge1_fu_236_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_fu_249_p0 : STD_LOGIC_VECTOR (12 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_idle_pp0 : STD_LOGIC;

    component delta_plus_LUT_mucud IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (12 downto 0);
        din1 : IN STD_LOGIC_VECTOR (10 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (23 downto 0) );
    end component;


    component delta_plus_LUT_debkb IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (4 downto 0) );
    end component;



begin
    delta_plus_table1_U : component delta_plus_LUT_debkb
    generic map (
        DataWidth => 5,
        AddressRange => 1024,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => delta_plus_table1_address0,
        ce0 => delta_plus_table1_ce0,
        q0 => delta_plus_table1_q0);

    delta_plus_LUT_mucud_U1 : component delta_plus_LUT_mucud
    generic map (
        ID => 1,
        NUM_STAGE => 3,
        din0_WIDTH => 13,
        din1_WIDTH => 11,
        dout_WIDTH => 24)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_249_p0,
        din1 => data_V,
        ce => ap_const_logic_1,
        dout => grp_fu_249_p2);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))))) then 
                    ap_enable_reg_pp0_iter1 <= ap_start;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)))) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter3_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
            else
                if (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)))) then 
                    ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter4_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter4 <= ap_const_logic_0;
            else
                if (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)))) then 
                    ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter5_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter5 <= ap_const_logic_0;
            else
                if (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)))) then 
                    ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter6_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter6 <= ap_const_logic_0;
            else
                if (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)))) then 
                    ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
                end if; 
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))))) then
                ap_pipeline_reg_pp0_iter1_tmp_6_reg_262 <= tmp_6_reg_262;
                tmp_6_reg_262 <= data_V(10 downto 10);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)))) then
                ap_pipeline_reg_pp0_iter2_tmp_6_reg_262 <= ap_pipeline_reg_pp0_iter1_tmp_6_reg_262;
                ap_pipeline_reg_pp0_iter3_tmp_6_reg_262 <= ap_pipeline_reg_pp0_iter2_tmp_6_reg_262;
                ap_pipeline_reg_pp0_iter3_tmp_8_reg_273 <= tmp_8_reg_273;
                ap_pipeline_reg_pp0_iter5_tmp_12_reg_288 <= tmp_12_reg_288;
                icmp_reg_299 <= icmp_fu_203_p2;
                r_V_reg_283 <= r_V_fu_168_p2;
                tmp_12_reg_288 <= r_V_fu_168_p2(8 downto 8);
                tmp_13_reg_294 <= r_V_fu_168_p2(8 downto 6);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and not((ap_pipeline_reg_pp0_iter1_tmp_6_reg_262 = ap_const_lv1_0)))) then
                tmp_1_reg_268 <= tmp_1_fu_107_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and not((ap_pipeline_reg_pp0_iter2_tmp_6_reg_262 = ap_const_lv1_0)))) then
                tmp_7_reg_278 <= neg_mul_fu_119_p2(22 downto 15);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_pipeline_reg_pp0_iter1_tmp_6_reg_262 = ap_const_lv1_0))) then
                tmp_8_reg_273 <= grp_fu_249_p2(23 downto 15);
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_enable_reg_pp0_iter0, ap_pipeline_idle_pp0)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0 downto 0);

    ap_done_assign_proc : process(ap_start, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter6)
    begin
        if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_enable_reg_pp0_iter6))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_reg_pp0_iter0 <= ap_start;

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter4, ap_enable_reg_pp0_iter5, ap_enable_reg_pp0_iter6)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and (ap_const_logic_0 = ap_enable_reg_pp0_iter0) and (ap_const_logic_0 = ap_enable_reg_pp0_iter1) and (ap_const_logic_0 = ap_enable_reg_pp0_iter2) and (ap_const_logic_0 = ap_enable_reg_pp0_iter3) and (ap_const_logic_0 = ap_enable_reg_pp0_iter4) and (ap_const_logic_0 = ap_enable_reg_pp0_iter5) and (ap_const_logic_0 = ap_enable_reg_pp0_iter6))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_pipeline_idle_pp0_assign_proc : process(ap_start, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter4, ap_enable_reg_pp0_iter5)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_const_logic_0 = ap_enable_reg_pp0_iter0) and (ap_const_logic_0 = ap_enable_reg_pp0_iter1) and (ap_const_logic_0 = ap_enable_reg_pp0_iter2) and (ap_const_logic_0 = ap_enable_reg_pp0_iter3) and (ap_const_logic_0 = ap_enable_reg_pp0_iter4) and (ap_const_logic_0 = ap_enable_reg_pp0_iter5))) then 
            ap_pipeline_idle_pp0 <= ap_const_logic_1;
        else 
            ap_pipeline_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and (ap_const_logic_1 = ap_enable_reg_pp0_iter0) and not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    delta_plus_table1_address0 <= tmp_3_fu_208_p1(10 - 1 downto 0);

    delta_plus_table1_ce0_assign_proc : process(ap_start, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter5)
    begin
        if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_enable_reg_pp0_iter5))) then 
            delta_plus_table1_ce0 <= ap_const_logic_1;
        else 
            delta_plus_table1_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    grp_fu_249_p0 <= ap_const_lv24_889(13 - 1 downto 0);
    icmp_fu_203_p2 <= "1" when (signed(tmp_13_reg_294) > signed(ap_const_lv3_0)) else "0";
        index_fu_199_p1 <= std_logic_vector(resize(signed(tmp_2_fu_192_p3),32));

    neg_mul_fu_119_p2 <= std_logic_vector(unsigned(ap_const_lv23_0) - unsigned(tmp_1_reg_268));
    neg_ti_fu_151_p2 <= std_logic_vector(unsigned(ap_const_lv9_0) - unsigned(tmp_10_fu_147_p1));
    p_v_fu_140_p3 <= 
        tmp_fu_134_p1 when (ap_pipeline_reg_pp0_iter3_tmp_6_reg_262(0) = '1') else 
        tmp_5_fu_137_p1;
    r_V_fu_168_p2 <= std_logic_vector(unsigned(ap_const_lv9_40) - unsigned(tmp_9_fu_161_p3));
    res_V <= std_logic_vector(resize(unsigned(storemerge1_fu_236_p3),14));

    res_V_ap_vld_assign_proc : process(ap_start, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter6)
    begin
        if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_enable_reg_pp0_iter6))) then 
            res_V_ap_vld <= ap_const_logic_1;
        else 
            res_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;

    sel_tmp1_fu_213_p2 <= (ap_pipeline_reg_pp0_iter5_tmp_12_reg_288 xor ap_const_lv1_1);
    sel_tmp2_fu_218_p2 <= (icmp_reg_299 and sel_tmp1_fu_213_p2);
    sel_tmp_fu_223_p3 <= 
        ap_const_lv5_0 when (sel_tmp2_fu_218_p2(0) = '1') else 
        ap_const_lv5_11;
    storemerge1_fu_236_p3 <= 
        sel_tmp_fu_223_p3 when (tmp_4_fu_231_p2(0) = '1') else 
        delta_plus_table1_q0;
    tmp_10_fu_147_p1 <= p_v_fu_140_p3(9 - 1 downto 0);
    tmp_11_fu_157_p1 <= p_v_fu_140_p3(9 - 1 downto 0);
    tmp_1_fu_107_p1 <= grp_fu_249_p2(23 - 1 downto 0);
    tmp_2_fu_192_p3 <= (r_V_reg_283 & ap_const_lv4_0);
    tmp_3_fu_208_p1 <= std_logic_vector(resize(unsigned(index_fu_199_p1),64));
    tmp_4_fu_231_p2 <= (sel_tmp2_fu_218_p2 or ap_pipeline_reg_pp0_iter5_tmp_12_reg_288);
        tmp_5_fu_137_p1 <= std_logic_vector(resize(signed(ap_pipeline_reg_pp0_iter3_tmp_8_reg_273),12));

    tmp_9_fu_161_p3 <= 
        neg_ti_fu_151_p2 when (ap_pipeline_reg_pp0_iter3_tmp_6_reg_262(0) = '1') else 
        tmp_11_fu_157_p1;
        tmp_fu_134_p1 <= std_logic_vector(resize(signed(tmp_7_reg_278),12));

end behav;
