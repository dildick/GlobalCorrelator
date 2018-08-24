-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.4
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity prop_hw_am_addmulwdI_DSP48_6 is
port (
    clk: in  std_logic;
    rst: in  std_logic;
    ce:  in  std_logic;
    in0:  in  std_logic_vector(19 - 1 downto 0);
    in1:  in  std_logic_vector(19 - 1 downto 0);
    in2:  in  std_logic_vector(19 - 1 downto 0);
    dout: out std_logic_vector(39 - 1 downto 0));

end entity;

architecture behav of prop_hw_am_addmulwdI_DSP48_6 is
    signal b       : signed(18-1 downto 0);
    signal a       : signed(25-1 downto 0);
    signal d       : signed(25-1 downto 0);
    signal m       : signed(43-1 downto 0);
    signal ad      : signed(25-1 downto 0);
    signal m_reg   : signed(43-1 downto 0);
    signal ad_reg  : signed(25-1 downto 0);
    signal b_reg   : signed(18-1 downto 0);
begin
a <= signed(resize(signed(in0), 25));
d <= signed(resize(signed(in1), 25));
b <= signed(resize(unsigned(in2), 18));

ad <= a + d;
m  <= ad_reg * b_reg;

process (clk) begin
    if (clk'event and clk = '1') then
        if (rst = '1') then
            m_reg <= (others => '0');
            ad_reg <= (others => '0');
            b_reg  <= (others => '0');
        elsif (ce = '1') then
            m_reg <= m;
            ad_reg <= ad;
            b_reg  <= b;
        end if;
    end if;
end process;

dout <= std_logic_vector(resize(unsigned(m_reg), 39));

end architecture;

Library IEEE;
use IEEE.std_logic_1164.all;

entity prop_hw_am_addmulwdI is
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER);
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        ce : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR(din0_WIDTH - 1 DOWNTO 0);
        din1 : IN STD_LOGIC_VECTOR(din1_WIDTH - 1 DOWNTO 0);
        din2 : IN STD_LOGIC_VECTOR(din2_WIDTH - 1 DOWNTO 0);
        dout : OUT STD_LOGIC_VECTOR(dout_WIDTH - 1 DOWNTO 0));
end entity;

architecture arch of prop_hw_am_addmulwdI is
    component prop_hw_am_addmulwdI_DSP48_6 is
        port (
            clk : IN STD_LOGIC;
            rst : IN STD_LOGIC;
            ce : IN STD_LOGIC;
            in0 : IN STD_LOGIC_VECTOR;
            in1 : IN STD_LOGIC_VECTOR;
            in2 : IN STD_LOGIC_VECTOR;
            dout : OUT STD_LOGIC_VECTOR);
    end component;



begin
    prop_hw_am_addmulwdI_DSP48_6_U :  component prop_hw_am_addmulwdI_DSP48_6
    port map (
        clk => clk,
        rst => reset,
        ce => ce,
        in0 => din0,
        in1 => din1,
        in2 => din2,
        dout => dout);

end architecture;


