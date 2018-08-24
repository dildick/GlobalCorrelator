set clock_constraint { \
    name clk \
    module rinvToInvPt<ap_fixed<24, 2, (ap_q_mode)5, (ap_o_mode)3, 0>, ap_fixed<24, 2, (ap_q_mode)5, (ap_o_mode)3, 0>, 16384> \
    port ap_clk \
    period 4.115 \
    uncertainty 0.514375 \
}

set all_path {}

set false_path {}

