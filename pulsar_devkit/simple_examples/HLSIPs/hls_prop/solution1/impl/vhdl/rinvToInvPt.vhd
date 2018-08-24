-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.4
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity rinvToInvPt is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    data_V_read : IN STD_LOGIC_VECTOR (23 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (20 downto 0) );
end;


architecture behav of rinvToInvPt is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv14_0 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000000";
    constant ap_const_lv22_0 : STD_LOGIC_VECTOR (21 downto 0) := "0000000000000000000000";
    constant ap_const_lv25_1 : STD_LOGIC_VECTOR (24 downto 0) := "0000000000000000000000001";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv18_0 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    constant ap_const_lv21_0 : STD_LOGIC_VECTOR (20 downto 0) := "000000000000000000000";
    constant ap_const_lv21_1FFF80 : STD_LOGIC_VECTOR (20 downto 0) := "111111111111110000000";
    constant ap_const_lv32_FFFFFF51 : STD_LOGIC_VECTOR (31 downto 0) := "11111111111111111111111101010001";
    constant ap_const_lv32_400000 : STD_LOGIC_VECTOR (31 downto 0) := "00000000010000000000000000000000";

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
    signal rinvToInvPt_table9_address0 : STD_LOGIC_VECTOR (13 downto 0);
    signal rinvToInvPt_table9_ce0 : STD_LOGIC;
    signal rinvToInvPt_table9_q0 : STD_LOGIC_VECTOR (20 downto 0);
    signal grp_fu_195_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal r_V_reg_210 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_9_reg_215 : STD_LOGIC_VECTOR (23 downto 0);
    signal tmp_17_fu_81_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_17_reg_221 : STD_LOGIC_VECTOR (7 downto 0);
    signal index_fu_128_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal index_reg_226 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_18_reg_231 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_reg_pp0_iter4_tmp_18_reg_231 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_fu_154_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_reg_237 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_reg_pp0_iter4_icmp_reg_237 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_8_fu_160_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal p_Result_4_fu_94_p3 : STD_LOGIC_VECTOR (21 downto 0);
    signal ret_V_cast_cast_fu_84_p1 : STD_LOGIC_VECTOR (24 downto 0);
    signal ret_V_fu_107_p2 : STD_LOGIC_VECTOR (24 downto 0);
    signal tmp_5_fu_101_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_s_fu_113_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_2_fu_116_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_16_fu_87_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_3_fu_120_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_19_fu_144_p4 : STD_LOGIC_VECTOR (17 downto 0);
    signal sel_tmp1_fu_164_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp2_fu_169_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_1_fu_182_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp_cast_fu_174_p3 : STD_LOGIC_VECTOR (20 downto 0);
    signal grp_fu_195_p0 : STD_LOGIC_VECTOR (8 downto 0);
    signal grp_fu_195_p2 : STD_LOGIC_VECTOR (23 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_idle_pp0 : STD_LOGIC;

    component prop_hw_mac_muladeOg IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (8 downto 0);
        din1 : IN STD_LOGIC_VECTOR (23 downto 0);
        din2 : IN STD_LOGIC_VECTOR (23 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component rinvToInvPt_rinvTdEe IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (13 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (20 downto 0) );
    end component;



begin
    rinvToInvPt_table9_U : component rinvToInvPt_rinvTdEe
    generic map (
        DataWidth => 21,
        AddressRange => 16384,
        AddressWidth => 14)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => rinvToInvPt_table9_address0,
        ce0 => rinvToInvPt_table9_ce0,
        q0 => rinvToInvPt_table9_q0);

    prop_hw_mac_muladeOg_U4 : component prop_hw_mac_muladeOg
    generic map (
        ID => 1,
        NUM_STAGE => 3,
        din0_WIDTH => 9,
        din1_WIDTH => 24,
        din2_WIDTH => 24,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_195_p0,
        din1 => data_V_read,
        din2 => grp_fu_195_p2,
        ce => ap_const_logic_1,
        dout => grp_fu_195_p3);





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

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)))) then
                ap_pipeline_reg_pp0_iter4_icmp_reg_237 <= icmp_reg_237;
                ap_pipeline_reg_pp0_iter4_tmp_18_reg_231 <= tmp_18_reg_231;
                icmp_reg_237 <= icmp_fu_154_p2;
                index_reg_226 <= index_fu_128_p3;
                tmp_17_reg_221 <= tmp_17_fu_81_p1;
                tmp_18_reg_231 <= index_fu_128_p3(31 downto 31);
                tmp_9_reg_215 <= grp_fu_195_p3(31 downto 8);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_enable_reg_pp0_iter2))) then
                r_V_reg_210 <= grp_fu_195_p3;
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

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter5)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and (ap_const_logic_1 = ap_enable_reg_pp0_iter0)) or (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_enable_reg_pp0_iter5)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_reg_pp0_iter0 <= ap_start;

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter4, ap_enable_reg_pp0_iter5)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and (ap_const_logic_0 = ap_enable_reg_pp0_iter0) and (ap_const_logic_0 = ap_enable_reg_pp0_iter1) and (ap_const_logic_0 = ap_enable_reg_pp0_iter2) and (ap_const_logic_0 = ap_enable_reg_pp0_iter3) and (ap_const_logic_0 = ap_enable_reg_pp0_iter4) and (ap_const_logic_0 = ap_enable_reg_pp0_iter5))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_pipeline_idle_pp0_assign_proc : process(ap_start, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter4)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_const_logic_0 = ap_enable_reg_pp0_iter0) and (ap_const_logic_0 = ap_enable_reg_pp0_iter1) and (ap_const_logic_0 = ap_enable_reg_pp0_iter2) and (ap_const_logic_0 = ap_enable_reg_pp0_iter3) and (ap_const_logic_0 = ap_enable_reg_pp0_iter4))) then 
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

    ap_return <= 
        sel_tmp_cast_fu_174_p3 when (tmp_1_fu_182_p2(0) = '1') else 
        rinvToInvPt_table9_q0;
    grp_fu_195_p0 <= ap_const_lv32_FFFFFF51(9 - 1 downto 0);
    grp_fu_195_p2 <= ap_const_lv32_400000(24 - 1 downto 0);
    icmp_fu_154_p2 <= "1" when (signed(tmp_19_fu_144_p4) > signed(ap_const_lv18_0)) else "0";
    index_fu_128_p3 <= 
        tmp_3_fu_120_p3 when (tmp_16_fu_87_p3(0) = '1') else 
        tmp_s_fu_113_p1;
    p_Result_4_fu_94_p3 <= (tmp_17_reg_221 & ap_const_lv14_0);
        ret_V_cast_cast_fu_84_p1 <= std_logic_vector(resize(signed(tmp_9_reg_215),25));

    ret_V_fu_107_p2 <= std_logic_vector(unsigned(ap_const_lv25_1) + unsigned(ret_V_cast_cast_fu_84_p1));
    rinvToInvPt_table9_address0 <= tmp_8_fu_160_p1(14 - 1 downto 0);

    rinvToInvPt_table9_ce0_assign_proc : process(ap_start, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter4)
    begin
        if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_enable_reg_pp0_iter4))) then 
            rinvToInvPt_table9_ce0 <= ap_const_logic_1;
        else 
            rinvToInvPt_table9_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    sel_tmp1_fu_164_p2 <= (ap_pipeline_reg_pp0_iter4_tmp_18_reg_231 xor ap_const_lv1_1);
    sel_tmp2_fu_169_p2 <= (ap_pipeline_reg_pp0_iter4_icmp_reg_237 and sel_tmp1_fu_164_p2);
    sel_tmp_cast_fu_174_p3 <= 
        ap_const_lv21_0 when (sel_tmp2_fu_169_p2(0) = '1') else 
        ap_const_lv21_1FFF80;
    tmp_16_fu_87_p3 <= r_V_reg_210(31 downto 31);
    tmp_17_fu_81_p1 <= grp_fu_195_p3(8 - 1 downto 0);
    tmp_19_fu_144_p4 <= index_fu_128_p3(31 downto 14);
    tmp_1_fu_182_p2 <= (sel_tmp2_fu_169_p2 or ap_pipeline_reg_pp0_iter4_tmp_18_reg_231);
        tmp_2_fu_116_p1 <= std_logic_vector(resize(signed(ret_V_fu_107_p2),32));

    tmp_3_fu_120_p3 <= 
        tmp_s_fu_113_p1 when (tmp_5_fu_101_p2(0) = '1') else 
        tmp_2_fu_116_p1;
    tmp_5_fu_101_p2 <= "1" when (p_Result_4_fu_94_p3 = ap_const_lv22_0) else "0";
    tmp_8_fu_160_p1 <= std_logic_vector(resize(unsigned(index_reg_226),64));
        tmp_s_fu_113_p1 <= std_logic_vector(resize(signed(tmp_9_reg_215),32));

end behav;
