set clock_constraint { \
    name clk \
    module deta_LUT<ap_fixed<11, 5, (ap_q_mode)5, (ap_o_mode)3, 0>, ap_fixed<14, 4, (ap_q_mode)5, (ap_o_mode)3, 0>, 1024> \
    port ap_clk \
    period 4.115 \
    uncertainty 0.514375 \
}

set all_path {}

set false_path {}

