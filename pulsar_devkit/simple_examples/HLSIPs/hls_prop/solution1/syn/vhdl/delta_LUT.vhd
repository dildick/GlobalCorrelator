-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.4
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity delta_LUT is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    ap_ce : IN STD_LOGIC;
    data_V_read : IN STD_LOGIC_VECTOR (10 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (10 downto 0) );
end;


architecture behav of delta_LUT is 
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
    constant ap_const_lv11_0 : STD_LOGIC_VECTOR (10 downto 0) := "00000000000";
    constant ap_const_lv11_483 : STD_LOGIC_VECTOR (10 downto 0) := "10010000011";
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
    signal delta_table5_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal delta_table5_ce0 : STD_LOGIC;
    signal delta_table5_q0 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_260_reg_240 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_reg_pp0_iter1_tmp_260_reg_240 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_reg_pp0_iter2_tmp_260_reg_240 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_reg_pp0_iter3_tmp_260_reg_240 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_259_fu_90_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_259_reg_246 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_262_reg_251 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_pipeline_reg_pp0_iter3_tmp_262_reg_251 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_261_reg_256 : STD_LOGIC_VECTOR (7 downto 0);
    signal r_V_fu_151_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal r_V_reg_261 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_265_reg_266 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_reg_pp0_iter5_tmp_265_reg_266 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_266_reg_272 : STD_LOGIC_VECTOR (2 downto 0);
    signal icmp_fu_186_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_reg_277 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_200_fu_191_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_fu_227_p2 : STD_LOGIC_VECTOR (23 downto 0);
    signal neg_mul_fu_102_p2 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_fu_117_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_s_fu_120_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal p_v_fu_123_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_263_fu_130_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal neg_ti_fu_134_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_264_fu_140_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_204_fu_144_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_202_fu_175_p3 : STD_LOGIC_VECTOR (12 downto 0);
    signal index_fu_182_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal sel_tmp1_fu_196_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp2_fu_201_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_203_fu_214_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp_fu_206_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal grp_fu_227_p0 : STD_LOGIC_VECTOR (12 downto 0);
    signal grp_fu_227_ce : STD_LOGIC;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_idle_pp0 : STD_LOGIC;

    component prop_hw_mul_mul_1g8j IS
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


    component delta_LUT_delta_tfYi IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (10 downto 0) );
    end component;



begin
    delta_table5_U : component delta_LUT_delta_tfYi
    generic map (
        DataWidth => 11,
        AddressRange => 1024,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => delta_table5_address0,
        ce0 => delta_table5_ce0,
        q0 => delta_table5_q0);

    prop_hw_mul_mul_1g8j_U7 : component prop_hw_mul_mul_1g8j
    generic map (
        ID => 1,
        NUM_STAGE => 3,
        din0_WIDTH => 13,
        din1_WIDTH => 11,
        dout_WIDTH => 24)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_227_p0,
        din1 => data_V_read,
        ce => grp_fu_227_ce,
        dout => grp_fu_227_p2);





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
                if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and not((((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)) or not((ap_const_logic_1 = ap_ce)))))) then 
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
                if (not((((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)) or not((ap_const_logic_1 = ap_ce))))) then 
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
                if (not((((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)) or not((ap_const_logic_1 = ap_ce))))) then 
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
                if (not((((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)) or not((ap_const_logic_1 = ap_ce))))) then 
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
                if (not((((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)) or not((ap_const_logic_1 = ap_ce))))) then 
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
                if (not((((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)) or not((ap_const_logic_1 = ap_ce))))) then 
                    ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
                end if; 
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce))) then
                ap_pipeline_reg_pp0_iter1_tmp_260_reg_240 <= tmp_260_reg_240;
                tmp_260_reg_240 <= data_V_read(10 downto 10);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce))) then
                ap_pipeline_reg_pp0_iter2_tmp_260_reg_240 <= ap_pipeline_reg_pp0_iter1_tmp_260_reg_240;
                ap_pipeline_reg_pp0_iter3_tmp_260_reg_240 <= ap_pipeline_reg_pp0_iter2_tmp_260_reg_240;
                ap_pipeline_reg_pp0_iter3_tmp_262_reg_251 <= tmp_262_reg_251;
                ap_pipeline_reg_pp0_iter5_tmp_265_reg_266 <= tmp_265_reg_266;
                icmp_reg_277 <= icmp_fu_186_p2;
                r_V_reg_261 <= r_V_fu_151_p2;
                tmp_265_reg_266 <= r_V_fu_151_p2(8 downto 8);
                tmp_266_reg_272 <= r_V_fu_151_p2(8 downto 6);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and not((ap_pipeline_reg_pp0_iter1_tmp_260_reg_240 = ap_const_lv1_0)))) then
                tmp_259_reg_246 <= tmp_259_fu_90_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and not((ap_pipeline_reg_pp0_iter2_tmp_260_reg_240 = ap_const_lv1_0)))) then
                tmp_261_reg_256 <= neg_mul_fu_102_p2(22 downto 15);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_pipeline_reg_pp0_iter1_tmp_260_reg_240 = ap_const_lv1_0))) then
                tmp_262_reg_251 <= grp_fu_227_p2(23 downto 15);
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_enable_reg_pp0_iter0, ap_ce, ap_pipeline_idle_pp0)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0 downto 0);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter6, ap_ce)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and (ap_const_logic_1 = ap_enable_reg_pp0_iter0)) or (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_enable_reg_pp0_iter6)))) then 
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


    ap_ready_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_ce)
    begin
        if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and (ap_const_logic_1 = ap_enable_reg_pp0_iter0) and not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= 
        sel_tmp_fu_206_p3 when (tmp_203_fu_214_p2(0) = '1') else 
        delta_table5_q0;
    delta_table5_address0 <= tmp_200_fu_191_p1(10 - 1 downto 0);

    delta_table5_ce0_assign_proc : process(ap_start, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter5, ap_ce)
    begin
        if ((not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_enable_reg_pp0_iter5))) then 
            delta_table5_ce0 <= ap_const_logic_1;
        else 
            delta_table5_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    grp_fu_227_ce_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_ce)
    begin
        if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce))) then 
            grp_fu_227_ce <= ap_const_logic_1;
        else 
            grp_fu_227_ce <= ap_const_logic_0;
        end if; 
    end process;

    grp_fu_227_p0 <= ap_const_lv24_889(13 - 1 downto 0);
    icmp_fu_186_p2 <= "1" when (signed(tmp_266_reg_272) > signed(ap_const_lv3_0)) else "0";
        index_fu_182_p1 <= std_logic_vector(resize(signed(tmp_202_fu_175_p3),32));

    neg_mul_fu_102_p2 <= std_logic_vector(unsigned(ap_const_lv23_0) - unsigned(tmp_259_reg_246));
    neg_ti_fu_134_p2 <= std_logic_vector(unsigned(ap_const_lv9_0) - unsigned(tmp_263_fu_130_p1));
    p_v_fu_123_p3 <= 
        tmp_fu_117_p1 when (ap_pipeline_reg_pp0_iter3_tmp_260_reg_240(0) = '1') else 
        tmp_s_fu_120_p1;
    r_V_fu_151_p2 <= std_logic_vector(unsigned(ap_const_lv9_40) - unsigned(tmp_204_fu_144_p3));
    sel_tmp1_fu_196_p2 <= (ap_pipeline_reg_pp0_iter5_tmp_265_reg_266 xor ap_const_lv1_1);
    sel_tmp2_fu_201_p2 <= (icmp_reg_277 and sel_tmp1_fu_196_p2);
    sel_tmp_fu_206_p3 <= 
        ap_const_lv11_0 when (sel_tmp2_fu_201_p2(0) = '1') else 
        ap_const_lv11_483;
    tmp_200_fu_191_p1 <= std_logic_vector(resize(unsigned(index_fu_182_p1),64));
    tmp_202_fu_175_p3 <= (r_V_reg_261 & ap_const_lv4_0);
    tmp_203_fu_214_p2 <= (sel_tmp2_fu_201_p2 or ap_pipeline_reg_pp0_iter5_tmp_265_reg_266);
    tmp_204_fu_144_p3 <= 
        neg_ti_fu_134_p2 when (ap_pipeline_reg_pp0_iter3_tmp_260_reg_240(0) = '1') else 
        tmp_264_fu_140_p1;
    tmp_259_fu_90_p1 <= grp_fu_227_p2(23 - 1 downto 0);
    tmp_263_fu_130_p1 <= p_v_fu_123_p3(9 - 1 downto 0);
    tmp_264_fu_140_p1 <= p_v_fu_123_p3(9 - 1 downto 0);
        tmp_fu_117_p1 <= std_logic_vector(resize(signed(tmp_261_reg_256),12));

        tmp_s_fu_120_p1 <= std_logic_vector(resize(signed(ap_pipeline_reg_pp0_iter3_tmp_262_reg_251),12));

end behav;
