; ModuleID = '/data/dildick/GlobalCorrelator/pulsar_devkit/simple_examples/HLSIPs/hls_matchprop/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@match_prop_hw_str = internal unnamed_addr constant [14 x i8] c"match_prop_hw\00"
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1

define void @match_prop_hw(i15* %inTrack_hwRinv_V, i14* %inTrack_hwPt_V, i14* %inTrack_hwSinhEta_V, i14* %inTrack_hwEta_V, i19* %inTrack_hwPhi_V, i23* %inTrack_hwPhiGlobal_V, i11* %inTrack_hwZ0_V, i5* %inTrack_hwSector_V, i1* %inTrack_hwQ_V, i10* %inTrack_hwX2_V, i1* %inTrack_hwValid_V, i3* %inTrack_hwBX_V, i14* %inTrack_hwPropEta_V, i23* %inTrack_hwPropPhi_V, i9* %inMuon_hwPt_V, i9* %inMuon_hwEta_V, i10* %inMuon_hwPhi_V, i1* %inMuon_hwQ_V, i1* %inMuon_hwValid_V, i3* %inMuon_hwBX_V, i4* %inMuon_hwQuality_V, i14* %outTrackMuon_hwPt_V, i9* %outTrackMuon_hwEta_V, i10* %outTrackMuon_hwPhi_V, i1* %outTrackMuon_hwQ_V, i1* %outTrackMuon_hwValid_V, i3* %outTrackMuon_hwBX_V, i4* %outTrackMuon_hwQuality_V) {
_ifconv:
  call void (...)* @_ssdm_op_SpecBitsMap(i15* %inTrack_hwRinv_V), !map !383
  call void (...)* @_ssdm_op_SpecBitsMap(i14* %inTrack_hwPt_V), !map !387
  call void (...)* @_ssdm_op_SpecBitsMap(i14* %inTrack_hwSinhEta_V), !map !391
  call void (...)* @_ssdm_op_SpecBitsMap(i14* %inTrack_hwEta_V), !map !395
  call void (...)* @_ssdm_op_SpecBitsMap(i19* %inTrack_hwPhi_V), !map !399
  call void (...)* @_ssdm_op_SpecBitsMap(i23* %inTrack_hwPhiGlobal_V), !map !403
  call void (...)* @_ssdm_op_SpecBitsMap(i11* %inTrack_hwZ0_V), !map !407
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %inTrack_hwSector_V), !map !411
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %inTrack_hwQ_V), !map !415
  call void (...)* @_ssdm_op_SpecBitsMap(i10* %inTrack_hwX2_V), !map !419
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %inTrack_hwValid_V), !map !423
  call void (...)* @_ssdm_op_SpecBitsMap(i3* %inTrack_hwBX_V), !map !427
  call void (...)* @_ssdm_op_SpecBitsMap(i14* %inTrack_hwPropEta_V), !map !431
  call void (...)* @_ssdm_op_SpecBitsMap(i23* %inTrack_hwPropPhi_V), !map !435
  call void (...)* @_ssdm_op_SpecBitsMap(i9* %inMuon_hwPt_V), !map !439
  call void (...)* @_ssdm_op_SpecBitsMap(i9* %inMuon_hwEta_V), !map !443
  call void (...)* @_ssdm_op_SpecBitsMap(i10* %inMuon_hwPhi_V), !map !447
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %inMuon_hwQ_V), !map !451
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %inMuon_hwValid_V), !map !455
  call void (...)* @_ssdm_op_SpecBitsMap(i3* %inMuon_hwBX_V), !map !459
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %inMuon_hwQuality_V), !map !463
  call void (...)* @_ssdm_op_SpecBitsMap(i14* %outTrackMuon_hwPt_V), !map !467
  call void (...)* @_ssdm_op_SpecBitsMap(i9* %outTrackMuon_hwEta_V), !map !471
  call void (...)* @_ssdm_op_SpecBitsMap(i10* %outTrackMuon_hwPhi_V), !map !475
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %outTrackMuon_hwQ_V), !map !479
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %outTrackMuon_hwValid_V), !map !483
  call void (...)* @_ssdm_op_SpecBitsMap(i3* %outTrackMuon_hwBX_V), !map !487
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %outTrackMuon_hwQuality_V), !map !491
  call void (...)* @_ssdm_op_SpecTopModule([14 x i8]* @match_prop_hw_str) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind
  %inTrack_hwPropEta_V_s = call i14 @_ssdm_op_Read.ap_auto.i14P(i14* %inTrack_hwPropEta_V)
  %tmp5 = sext i14 %inTrack_hwPropEta_V_s to i32
  %tmp = sitofp i32 %tmp5 to double
  %v_assign = fmul double %tmp, 0x3F600000972ECF2E
  %ireg_V = bitcast double %v_assign to i64
  %tmp_9 = trunc i64 %ireg_V to i63
  %isneg = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %ireg_V, i32 63)
  %exp_tmp_V = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %ireg_V, i32 52, i32 62)
  %tmp_6 = zext i11 %exp_tmp_V to i12
  %tmp_15 = trunc i64 %ireg_V to i52
  %tmp_4 = call i53 @_ssdm_op_BitConcatenate.i53.i1.i52(i1 true, i52 %tmp_15)
  %p_Result_s = zext i53 %tmp_4 to i54
  %man_V_1 = sub i54 0, %p_Result_s
  %man_V_2 = select i1 %isneg, i54 %man_V_1, i54 %p_Result_s
  %tmp_1 = icmp eq i63 %tmp_9, 0
  %F2 = sub i12 1075, %tmp_6
  %tmp_3 = icmp sgt i12 %F2, 10
  %tmp_5 = add i12 -10, %F2
  %tmp_7 = sub i12 10, %F2
  %sh_amt = select i1 %tmp_3, i12 %tmp_5, i12 %tmp_7
  %sh_amt_cast = sext i12 %sh_amt to i32
  %tmp_8 = icmp eq i12 %F2, 10
  %tmp_18 = trunc i54 %man_V_2 to i14
  %tmp_s = icmp ult i12 %sh_amt, 54
  %tmp_2 = icmp ult i12 %sh_amt, 14
  %tmp_10 = zext i32 %sh_amt_cast to i54
  %tmp_11 = ashr i54 %man_V_2, %tmp_10
  %tmp_30 = trunc i54 %tmp_11 to i14
  %p_2 = select i1 %isneg, i14 -1, i14 0
  %tmp_12 = sext i14 %tmp_18 to i32
  %tmp_13 = shl i32 %tmp_12, %sh_amt_cast
  %tmp_32 = trunc i32 %tmp_13 to i14
  %sel_tmp1 = xor i1 %tmp_1, true
  %sel_tmp2 = and i1 %tmp_8, %sel_tmp1
  %sel_tmp6_demorgan = or i1 %tmp_1, %tmp_8
  %sel_tmp6 = xor i1 %sel_tmp6_demorgan, true
  %sel_tmp7 = and i1 %tmp_3, %sel_tmp6
  %sel_tmp8 = and i1 %sel_tmp7, %tmp_s
  %sel_tmp14_demorgan = or i1 %sel_tmp6_demorgan, %tmp_3
  %sel_tmp = xor i1 %sel_tmp14_demorgan, true
  %sel_tmp3 = and i1 %tmp_2, %sel_tmp
  %sel_tmp4 = xor i1 %tmp_s, true
  %sel_tmp5 = and i1 %sel_tmp7, %sel_tmp4
  %newSel = select i1 %sel_tmp5, i14 %p_2, i14 %tmp_32
  %or_cond = or i1 %sel_tmp5, %sel_tmp3
  %newSel1 = select i1 %sel_tmp8, i14 %tmp_30, i14 %tmp_18
  %or_cond1 = or i1 %sel_tmp8, %sel_tmp2
  %newSel2 = select i1 %or_cond, i14 %newSel, i14 %newSel1
  %or_cond2 = or i1 %or_cond, %or_cond1
  %p_Val2_4 = select i1 %or_cond2, i14 %newSel2, i14 0
  %inTrack_hwPropPhi_V_s = call i23 @_ssdm_op_Read.ap_auto.i23P(i23* %inTrack_hwPropPhi_V)
  %tmp_14 = sext i23 %inTrack_hwPropPhi_V_s to i32
  %tmp_16 = sitofp i32 %tmp_14 to double
  %returnValue_6 = fmul double %tmp_16, 4.734500e-06
  %outPhi_assign_to_int = bitcast double %returnValue_6 to i64
  %tmp_17 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %outPhi_assign_to_int, i32 52, i32 62)
  %tmp_36 = trunc i64 %outPhi_assign_to_int to i52
  %notlhs = icmp ne i11 %tmp_17, -1
  %notrhs = icmp eq i52 %tmp_36, 0
  %tmp_19 = or i1 %notrhs, %notlhs
  %tmp_20 = fcmp ole double %returnValue_6, 0xC00921FB54442D18
  %tmp_23 = and i1 %tmp_19, %tmp_20
  %returnValue_1 = fadd double %returnValue_6, 0x401921FB54442D18
  %returnValue_3 = select i1 %tmp_23, double %returnValue_1, double %returnValue_6
  %returnValue1_i_to_in = bitcast double %returnValue_3 to i64
  %tmp_25 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %returnValue1_i_to_in, i32 52, i32 62)
  %tmp_39 = trunc i64 %returnValue1_i_to_in to i52
  %notlhs1 = icmp ne i11 %tmp_25, -1
  %notrhs1 = icmp eq i52 %tmp_39, 0
  %tmp_42 = or i1 %notrhs1, %notlhs1
  %tmp_47 = fcmp ogt double %returnValue_3, 0x400921FB54442D18
  %tmp_49 = and i1 %tmp_42, %tmp_47
  %returnValue_2 = fadd double %returnValue_3, 0xC01921FB54442D18
  %returnValue = select i1 %tmp_49, double %returnValue_2, double %returnValue_3
  %ireg_V_1 = bitcast double %returnValue to i64
  %tmp_54 = trunc i64 %ireg_V_1 to i63
  %isneg_1 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %ireg_V_1, i32 63)
  %exp_tmp_V_1 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %ireg_V_1, i32 52, i32 62)
  %tmp_21 = zext i11 %exp_tmp_V_1 to i12
  %tmp_60 = trunc i64 %ireg_V_1 to i52
  %tmp_22 = call i53 @_ssdm_op_BitConcatenate.i53.i1.i52(i1 true, i52 %tmp_60)
  %p_Result_2 = zext i53 %tmp_22 to i54
  %man_V_4 = sub i54 0, %p_Result_2
  %man_V_5 = select i1 %isneg_1, i54 %man_V_4, i54 %p_Result_2
  %tmp_24 = icmp eq i63 %tmp_54, 0
  %F2_1 = sub i12 1075, %tmp_21
  %tmp_26 = icmp sgt i12 %F2_1, 20
  %tmp_27 = add i12 -20, %F2_1
  %tmp_28 = sub i12 20, %F2_1
  %sh_amt_1 = select i1 %tmp_26, i12 %tmp_27, i12 %tmp_28
  %sh_amt_1_cast = sext i12 %sh_amt_1 to i32
  %tmp_29 = icmp eq i12 %F2_1, 20
  %tmp_63 = trunc i54 %man_V_5 to i23
  %tmp_31 = icmp ult i12 %sh_amt_1, 54
  %tmp_33 = icmp ult i12 %sh_amt_1, 23
  %tmp_34 = zext i32 %sh_amt_1_cast to i54
  %tmp_35 = ashr i54 %man_V_5, %tmp_34
  %tmp_69 = trunc i54 %tmp_35 to i23
  %p_3 = select i1 %isneg_1, i23 -1, i23 0
  %tmp_37 = sext i23 %tmp_63 to i32
  %tmp_38 = shl i32 %tmp_37, %sh_amt_1_cast
  %tmp_76 = trunc i32 %tmp_38 to i23
  %sel_tmp9 = xor i1 %tmp_24, true
  %sel_tmp10 = and i1 %tmp_29, %sel_tmp9
  %sel_tmp32_demorgan = or i1 %tmp_24, %tmp_29
  %sel_tmp11 = xor i1 %sel_tmp32_demorgan, true
  %sel_tmp12 = and i1 %tmp_26, %sel_tmp11
  %sel_tmp13 = and i1 %sel_tmp12, %tmp_31
  %sel_tmp40_demorgan = or i1 %sel_tmp32_demorgan, %tmp_26
  %sel_tmp14 = xor i1 %sel_tmp40_demorgan, true
  %sel_tmp15 = and i1 %tmp_33, %sel_tmp14
  %sel_tmp16 = xor i1 %tmp_31, true
  %sel_tmp17 = and i1 %sel_tmp12, %sel_tmp16
  %newSel4 = select i1 %sel_tmp17, i23 %p_3, i23 %tmp_76
  %or_cond3 = or i1 %sel_tmp17, %sel_tmp15
  %newSel5 = select i1 %sel_tmp13, i23 %tmp_69, i23 %tmp_63
  %or_cond4 = or i1 %sel_tmp13, %sel_tmp10
  %newSel6 = select i1 %or_cond3, i23 %newSel4, i23 %newSel5
  %or_cond5 = or i1 %or_cond3, %or_cond4
  %p_Val2_5 = select i1 %or_cond5, i23 %newSel6, i23 0
  %inMuon_hwEta_V_read = call i9 @_ssdm_op_Read.ap_auto.i9P(i9* %inMuon_hwEta_V)
  %tmp_82 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %inMuon_hwEta_V_read, i32 8)
  %tmp_40 = call i2 @_ssdm_op_BitConcatenate.i2.i1.i1(i1 %tmp_82, i1 false)
  %tmp_41 = sub i2 1, %tmp_40
  %tmp_41_cast_cast = sext i2 %tmp_41 to i12
  %x_assign_cast = sext i9 %inMuon_hwEta_V_read to i10
  %tmp_85 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %inMuon_hwEta_V_read, i32 8)
  %tmp_92_i = sub i9 0, %inMuon_hwEta_V_read
  %tmp_93_i_cast = zext i9 %tmp_92_i to i10
  %tmp_94_i = select i1 %tmp_85, i10 %tmp_93_i_cast, i10 %x_assign_cast
  %tmp_94_i_cast_cast = sext i10 %tmp_94_i to i12
  %tmp_43 = mul i12 %tmp_94_i_cast_cast, %tmp_41_cast_cast
  %tmp_56 = sext i12 %tmp_43 to i32
  %tmp_44 = sitofp i32 %tmp_56 to double
  %v_assign_1 = fmul double %tmp_44, 1.087500e-02
  %ireg_V_2 = bitcast double %v_assign_1 to i64
  %tmp_90 = trunc i64 %ireg_V_2 to i63
  %isneg_2 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %ireg_V_2, i32 63)
  %exp_tmp_V_2 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %ireg_V_2, i32 52, i32 62)
  %tmp_45 = zext i11 %exp_tmp_V_2 to i12
  %tmp_99 = trunc i64 %ireg_V_2 to i52
  %tmp_46 = call i53 @_ssdm_op_BitConcatenate.i53.i1.i52(i1 true, i52 %tmp_99)
  %p_Result_3 = zext i53 %tmp_46 to i54
  %man_V_7 = sub i54 0, %p_Result_3
  %man_V_8 = select i1 %isneg_2, i54 %man_V_7, i54 %p_Result_3
  %tmp_48 = icmp eq i63 %tmp_90, 0
  %F2_2 = sub i12 1075, %tmp_45
  %tmp_50 = icmp sgt i12 %F2_2, 6
  %tmp_51 = add i12 -6, %F2_2
  %tmp_52 = sub i12 6, %F2_2
  %sh_amt_2 = select i1 %tmp_50, i12 %tmp_51, i12 %tmp_52
  %sh_amt_2_cast = sext i12 %sh_amt_2 to i32
  %tmp_53 = icmp eq i12 %F2_2, 6
  %tmp_100 = trunc i54 %man_V_8 to i10
  %tmp_55 = icmp ult i12 %sh_amt_2, 54
  %tmp_57 = icmp ult i12 %sh_amt_2, 10
  %tmp_58 = zext i32 %sh_amt_2_cast to i54
  %tmp_59 = ashr i54 %man_V_8, %tmp_58
  %tmp_101 = trunc i54 %tmp_59 to i10
  %p_4 = select i1 %isneg_2, i10 -1, i10 0
  %tmp_61 = sext i10 %tmp_100 to i32
  %tmp_62 = shl i32 %tmp_61, %sh_amt_2_cast
  %tmp_102 = trunc i32 %tmp_62 to i10
  %sel_tmp18 = xor i1 %tmp_48, true
  %sel_tmp19 = and i1 %tmp_53, %sel_tmp18
  %sel_tmp57_demorgan = or i1 %tmp_48, %tmp_53
  %sel_tmp20 = xor i1 %sel_tmp57_demorgan, true
  %sel_tmp21 = and i1 %tmp_50, %sel_tmp20
  %sel_tmp22 = and i1 %sel_tmp21, %tmp_55
  %sel_tmp65_demorgan = or i1 %sel_tmp57_demorgan, %tmp_50
  %sel_tmp23 = xor i1 %sel_tmp65_demorgan, true
  %sel_tmp24 = and i1 %tmp_57, %sel_tmp23
  %sel_tmp25 = xor i1 %tmp_55, true
  %sel_tmp26 = and i1 %sel_tmp21, %sel_tmp25
  %newSel8 = select i1 %sel_tmp26, i10 %p_4, i10 %tmp_102
  %or_cond6 = or i1 %sel_tmp26, %sel_tmp24
  %newSel9 = select i1 %sel_tmp22, i10 %tmp_101, i10 %tmp_100
  %or_cond7 = or i1 %sel_tmp22, %sel_tmp19
  %newSel3 = select i1 %or_cond6, i10 %newSel8, i10 %newSel9
  %or_cond8 = or i1 %or_cond6, %or_cond7
  %inMuon_hwPhi_V_read = call i10 @_ssdm_op_Read.ap_auto.i10P(i10* %inMuon_hwPhi_V)
  %tmp_64 = zext i10 %inMuon_hwPhi_V_read to i32
  %tmp_65 = sitofp i32 %tmp_64 to double
  %returnValue_7 = fmul double %tmp_65, 1.090800e-02
  %outPhi_assign_1_to_i = bitcast double %returnValue_7 to i64
  %tmp_66 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %outPhi_assign_1_to_i, i32 52, i32 62)
  %tmp_103 = trunc i64 %outPhi_assign_1_to_i to i52
  %notlhs2 = icmp ne i11 %tmp_66, -1
  %notrhs2 = icmp eq i52 %tmp_103, 0
  %tmp_71 = or i1 %notrhs2, %notlhs2
  %tmp_78 = fcmp ole double %returnValue_7, 0xC00921FB54442D18
  %tmp_87 = and i1 %tmp_71, %tmp_78
  %returnValue_4 = fadd double %returnValue_7, 0x401921FB54442D18
  %returnValue_8 = select i1 %tmp_87, double %returnValue_4, double %returnValue_7
  %returnValue1_i1_to_i = bitcast double %returnValue_8 to i64
  %tmp_89 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %returnValue1_i1_to_i, i32 52, i32 62)
  %tmp_104 = trunc i64 %returnValue1_i1_to_i to i52
  %notlhs3 = icmp ne i11 %tmp_89, -1
  %notrhs3 = icmp eq i52 %tmp_104, 0
  %tmp_91 = or i1 %notrhs3, %notlhs3
  %tmp_92 = fcmp ogt double %returnValue_8, 0x400921FB54442D18
  %tmp_93 = and i1 %tmp_91, %tmp_92
  %returnValue_5 = fadd double %returnValue_8, 0xC01921FB54442D18
  %returnValue_9 = select i1 %tmp_93, double %returnValue_5, double %returnValue_8
  %ireg_V_3 = bitcast double %returnValue_9 to i64
  %tmp_105 = trunc i64 %ireg_V_3 to i63
  %isneg_3 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %ireg_V_3, i32 63)
  %exp_tmp_V_3 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %ireg_V_3, i32 52, i32 62)
  %tmp_67 = zext i11 %exp_tmp_V_3 to i12
  %tmp_107 = trunc i64 %ireg_V_3 to i52
  %tmp_68 = call i53 @_ssdm_op_BitConcatenate.i53.i1.i52(i1 true, i52 %tmp_107)
  %p_Result_4 = zext i53 %tmp_68 to i54
  %man_V_10 = sub i54 0, %p_Result_4
  %man_V_11 = select i1 %isneg_3, i54 %man_V_10, i54 %p_Result_4
  %tmp_70 = icmp eq i63 %tmp_105, 0
  %F2_3 = sub i12 1075, %tmp_67
  %tmp_72 = icmp sgt i12 %F2_3, 6
  %tmp_73 = add i12 -6, %F2_3
  %tmp_74 = sub i12 6, %F2_3
  %sh_amt_3 = select i1 %tmp_72, i12 %tmp_73, i12 %tmp_74
  %sh_amt_3_cast = sext i12 %sh_amt_3 to i32
  %tmp_75 = icmp eq i12 %F2_3, 6
  %tmp_108 = trunc i54 %man_V_11 to i9
  %tmp_77 = icmp ult i12 %sh_amt_3, 54
  %tmp_79 = icmp ult i12 %sh_amt_3, 9
  %tmp_80 = zext i32 %sh_amt_3_cast to i54
  %tmp_81 = ashr i54 %man_V_11, %tmp_80
  %tmp_109 = trunc i54 %tmp_81 to i9
  %p_5 = select i1 %isneg_3, i9 -1, i9 0
  %tmp_83 = sext i9 %tmp_108 to i32
  %tmp_84 = shl i32 %tmp_83, %sh_amt_3_cast
  %tmp_110 = trunc i32 %tmp_84 to i9
  %sel_tmp27 = xor i1 %tmp_70, true
  %sel_tmp28 = and i1 %tmp_75, %sel_tmp27
  %sel_tmp83_demorgan = or i1 %tmp_70, %tmp_75
  %sel_tmp29 = xor i1 %sel_tmp83_demorgan, true
  %sel_tmp30 = and i1 %tmp_72, %sel_tmp29
  %sel_tmp31 = and i1 %sel_tmp30, %tmp_77
  %sel_tmp91_demorgan = or i1 %sel_tmp83_demorgan, %tmp_72
  %sel_tmp32 = xor i1 %sel_tmp91_demorgan, true
  %sel_tmp33 = and i1 %tmp_79, %sel_tmp32
  %sel_tmp34 = xor i1 %tmp_77, true
  %sel_tmp35 = and i1 %sel_tmp30, %sel_tmp34
  %newSel7 = select i1 %sel_tmp35, i9 %p_5, i9 %tmp_110
  %or_cond9 = or i1 %sel_tmp35, %sel_tmp33
  %newSel10 = select i1 %sel_tmp31, i9 %tmp_109, i9 %tmp_108
  %or_cond10 = or i1 %sel_tmp31, %sel_tmp28
  %newSel11 = select i1 %or_cond9, i9 %newSel7, i9 %newSel10
  %or_cond11 = or i1 %or_cond9, %or_cond10
  %tmp_94 = select i1 %or_cond8, i10 %newSel3, i10 0
  %tmp_i3 = call i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10 %tmp_94, i4 0)
  %p_Val2_i = sub i14 %p_Val2_4, %tmp_i3
  %tmp_95_i = sext i23 %p_Val2_5 to i24
  %tmp_95 = select i1 %or_cond11, i9 %newSel11, i9 0
  %tmp_97_i = call i23 @_ssdm_op_BitConcatenate.i23.i9.i14(i9 %tmp_95, i14 0)
  %tmp_97_i_cast = sext i23 %tmp_97_i to i24
  %r_V = sub i24 %tmp_95_i, %tmp_97_i_cast
  %tmp_i_i = icmp sgt i24 %r_V, -3294198
  %returnValue_V_1 = add i24 6588397, %r_V
  %p_Val2_6 = select i1 %tmp_i_i, i24 %r_V, i24 %returnValue_V_1
  %tmp_103_i_i = icmp sgt i24 %p_Val2_6, 3294198
  %tmp_111 = trunc i24 %p_Val2_6 to i23
  %tmp_96 = add i23 1800211, %tmp_111
  %tmp_97 = select i1 %tmp_103_i_i, i23 %tmp_96, i23 %tmp_111
  %OP1_V = sext i14 %p_Val2_i to i28
  %p_Val2_7 = mul i28 %OP1_V, %OP1_V
  %OP1_V_1 = sext i23 %tmp_97 to i46
  %p_Val2_8 = mul nsw i46 %OP1_V_1, %OP1_V_1
  %tmp_100_i = call i48 @_ssdm_op_BitConcatenate.i48.i28.i20(i28 %p_Val2_7, i20 0)
  %tmp_101_i_cast = zext i46 %p_Val2_8 to i48
  %p_Val2_9 = add i48 %tmp_100_i, %tmp_101_i_cast
  %ret_V = call i3 @_ssdm_op_PartSelect.i3.i48.i32.i32(i48 %p_Val2_9, i32 40, i32 42)
  %tmp_112 = call i1 @_ssdm_op_BitSelect.i1.i48.i32(i48 %p_Val2_9, i32 42)
  %p_Result_1 = call i20 @_ssdm_op_PartSelect.i20.i48.i32.i32(i48 %p_Val2_9, i32 20, i32 39)
  %tmp_86 = icmp eq i20 %p_Result_1, 0
  %ret_V_1 = add i3 1, %ret_V
  %p_s = select i1 %tmp_86, i3 %ret_V, i3 %ret_V_1
  %p_1 = select i1 %tmp_112, i3 %p_s, i3 %ret_V
  %neg = sub i3 0, %p_1
  %abscond = icmp sgt i3 %p_1, 0
  %abs = select i1 %abscond, i3 %p_1, i3 %neg
  %tmp_88 = icmp eq i3 %abs, 0
  br i1 %tmp_88, label %1, label %0

; <label>:0                                       ; preds = %_ifconv
  %inTrack_hwPt_V_read = call i14 @_ssdm_op_Read.ap_auto.i14P(i14* %inTrack_hwPt_V)
  call void @_ssdm_op_Write.ap_auto.i14P(i14* %outTrackMuon_hwPt_V, i14 %inTrack_hwPt_V_read)
  call void @_ssdm_op_Write.ap_auto.i9P(i9* %outTrackMuon_hwEta_V, i9 %inMuon_hwEta_V_read)
  call void @_ssdm_op_Write.ap_auto.i10P(i10* %outTrackMuon_hwPhi_V, i10 %inMuon_hwPhi_V_read)
  %inTrack_hwQ_V_read = call i1 @_ssdm_op_Read.ap_auto.i1P(i1* %inTrack_hwQ_V)
  call void @_ssdm_op_Write.ap_auto.i1P(i1* %outTrackMuon_hwQ_V, i1 %inTrack_hwQ_V_read)
  call void @_ssdm_op_Write.ap_auto.i1P(i1* %outTrackMuon_hwValid_V, i1 true)
  %inTrack_hwBX_V_read = call i3 @_ssdm_op_Read.ap_auto.i3P(i3* %inTrack_hwBX_V)
  call void @_ssdm_op_Write.ap_auto.i3P(i3* %outTrackMuon_hwBX_V, i3 %inTrack_hwBX_V_read)
  br label %2

; <label>:1                                       ; preds = %_ifconv
  call void @_ssdm_op_Write.ap_auto.i1P(i1* %outTrackMuon_hwValid_V, i1 false)
  call void @_ssdm_op_Write.ap_auto.i14P(i14* %outTrackMuon_hwPt_V, i14 0)
  call void @_ssdm_op_Write.ap_auto.i9P(i9* %outTrackMuon_hwEta_V, i9 0)
  call void @_ssdm_op_Write.ap_auto.i10P(i10* %outTrackMuon_hwPhi_V, i10 0)
  call void @_ssdm_op_Write.ap_auto.i3P(i3* %outTrackMuon_hwBX_V, i3 0)
  call void @_ssdm_op_Write.ap_auto.i1P(i1* %outTrackMuon_hwQ_V, i1 false)
  br label %2

; <label>:2                                       ; preds = %1, %0
  ret void
}

declare i64 @llvm.part.select.i64(i64, i32, i32) nounwind readnone

declare i48 @llvm.part.select.i48(i48, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_Write.ap_auto.i9P(i9*, i9) {
entry:
  store i9 %1, i9* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_auto.i3P(i3*, i3) {
entry:
  store i3 %1, i3* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_auto.i1P(i1*, i1) {
entry:
  store i1 %1, i1* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_auto.i14P(i14*, i14) {
entry:
  store i14 %1, i14* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_auto.i10P(i10*, i10) {
entry:
  store i10 %1, i10* %0
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i9 @_ssdm_op_Read.ap_auto.i9P(i9*) {
entry:
  %empty = load i9* %0
  ret i9 %empty
}

define weak i3 @_ssdm_op_Read.ap_auto.i3P(i3*) {
entry:
  %empty = load i3* %0
  ret i3 %empty
}

define weak i23 @_ssdm_op_Read.ap_auto.i23P(i23*) {
entry:
  %empty = load i23* %0
  ret i23 %empty
}

define weak i1 @_ssdm_op_Read.ap_auto.i1P(i1*) {
entry:
  %empty = load i1* %0
  ret i1 %empty
}

define weak i14 @_ssdm_op_Read.ap_auto.i14P(i14*) {
entry:
  %empty = load i14* %0
  ret i14 %empty
}

define weak i10 @_ssdm_op_Read.ap_auto.i10P(i10*) {
entry:
  %empty = load i10* %0
  ret i10 %empty
}

declare i9 @_ssdm_op_PartSelect.i9.i54.i32.i32(i54, i32, i32) nounwind readnone

declare i9 @_ssdm_op_PartSelect.i9.i32.i32.i32(i32, i32, i32) nounwind readnone

declare i63 @_ssdm_op_PartSelect.i63.i64.i32.i32(i64, i32, i32) nounwind readnone

declare i52 @_ssdm_op_PartSelect.i52.i64.i32.i32(i64, i32, i32) nounwind readnone

define weak i3 @_ssdm_op_PartSelect.i3.i48.i32.i32(i48, i32, i32) nounwind readnone {
entry:
  %empty = call i48 @llvm.part.select.i48(i48 %0, i32 %1, i32 %2)
  %empty_6 = trunc i48 %empty to i3
  ret i3 %empty_6
}

declare i23 @_ssdm_op_PartSelect.i23.i54.i32.i32(i54, i32, i32) nounwind readnone

declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

declare i23 @_ssdm_op_PartSelect.i23.i24.i32.i32(i24, i32, i32) nounwind readnone

define weak i20 @_ssdm_op_PartSelect.i20.i48.i32.i32(i48, i32, i32) nounwind readnone {
entry:
  %empty = call i48 @llvm.part.select.i48(i48 %0, i32 %1, i32 %2)
  %empty_7 = trunc i48 %empty to i20
  ret i20 %empty_7
}

declare i14 @_ssdm_op_PartSelect.i14.i54.i32.i32(i54, i32, i32) nounwind readnone

declare i14 @_ssdm_op_PartSelect.i14.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_8 = trunc i64 %empty to i11
  ret i11 %empty_8
}

declare i10 @_ssdm_op_PartSelect.i10.i54.i32.i32(i54, i32, i32) nounwind readnone

declare i10 @_ssdm_op_PartSelect.i10.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i1 @_ssdm_op_BitSelect.i1.i9.i32(i9, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i9
  %empty_9 = shl i9 1, %empty
  %empty_10 = and i9 %0, %empty_9
  %empty_11 = icmp ne i9 %empty_10, 0
  ret i1 %empty_11
}

define weak i1 @_ssdm_op_BitSelect.i1.i64.i32(i64, i32) nounwind readnone {
entry:
  %empty = zext i32 %1 to i64
  %empty_12 = shl i64 1, %empty
  %empty_13 = and i64 %0, %empty_12
  %empty_14 = icmp ne i64 %empty_13, 0
  ret i1 %empty_14
}

define weak i1 @_ssdm_op_BitSelect.i1.i48.i32(i48, i32) nounwind readnone {
entry:
  %empty = zext i32 %1 to i48
  %empty_15 = shl i48 1, %empty
  %empty_16 = and i48 %0, %empty_15
  %empty_17 = icmp ne i48 %empty_16, 0
  ret i1 %empty_17
}

define weak i53 @_ssdm_op_BitConcatenate.i53.i1.i52(i1, i52) nounwind readnone {
entry:
  %empty = zext i1 %0 to i53
  %empty_18 = zext i52 %1 to i53
  %empty_19 = shl i53 %empty, 52
  %empty_20 = or i53 %empty_19, %empty_18
  ret i53 %empty_20
}

define weak i48 @_ssdm_op_BitConcatenate.i48.i28.i20(i28, i20) nounwind readnone {
entry:
  %empty = zext i28 %0 to i48
  %empty_21 = zext i20 %1 to i48
  %empty_22 = shl i48 %empty, 20
  %empty_23 = or i48 %empty_22, %empty_21
  ret i48 %empty_23
}

define weak i23 @_ssdm_op_BitConcatenate.i23.i9.i14(i9, i14) nounwind readnone {
entry:
  %empty = zext i9 %0 to i23
  %empty_24 = zext i14 %1 to i23
  %empty_25 = shl i23 %empty, 14
  %empty_26 = or i23 %empty_25, %empty_24
  ret i23 %empty_26
}

define weak i2 @_ssdm_op_BitConcatenate.i2.i1.i1(i1, i1) nounwind readnone {
entry:
  %empty = zext i1 %0 to i2
  %empty_27 = zext i1 %1 to i2
  %empty_28 = shl i2 %empty, 1
  %empty_29 = or i2 %empty_28, %empty_27
  ret i2 %empty_29
}

define weak i14 @_ssdm_op_BitConcatenate.i14.i10.i4(i10, i4) nounwind readnone {
entry:
  %empty = zext i10 %0 to i14
  %empty_30 = zext i4 %1 to i14
  %empty_31 = shl i14 %empty, 4
  %empty_32 = or i14 %empty_31, %empty_30
  ret i14 %empty_32
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

!opencl.kernels = !{!0, !7, !13, !15, !21, !24, !27, !30, !33, !36, !39, !39, !42, !48, !42, !42, !42, !51, !51, !53, !53, !55, !42, !57, !57, !57, !59, !39, !39, !42, !42, !62, !42, !42, !42, !42, !42, !65, !65, !68, !42, !39, !39, !42, !70, !42, !42, !42, !72, !72, !74, !74, !76, !42, !42, !42, !78, !80, !42, !42, !42, !51, !51, !82, !82, !84, !42, !42, !42, !42, !42, !42, !85, !42, !42, !42, !42, !87, !87, !90, !42, !42, !42, !59, !39, !39, !42, !92, !94, !94, !96, !42, !42, !42, !42, !42, !98, !101, !103, !103, !42, !104, !104, !42, !42, !105, !96, !42, !42, !42, !42, !42, !107, !111, !111, !112, !104, !104, !114, !115, !42, !42, !42, !42, !42, !42, !59, !39, !39, !42, !117, !119, !125, !42, !42, !42, !42, !42, !127, !129, !129, !42, !130, !130, !42, !42, !132, !42, !42, !134, !134, !134, !42, !136, !138, !138, !42, !139, !139, !42, !42, !140, !143, !143, !145, !145, !42, !42, !42, !146, !146, !145, !143, !143, !143, !42, !68, !68, !85, !148, !145, !145, !145, !149, !149, !149, !65, !65, !68, !85, !42, !151, !42, !153, !154, !156, !42, !42, !42, !59, !39, !39, !42, !158, !149, !149, !149, !42, !160, !162, !162, !42, !163, !163, !42, !42, !65, !65, !68, !85, !164, !42, !166, !166, !42, !42, !169, !171, !171, !174, !176, !176, !42, !42, !179, !176, !42, !181, !181, !184, !186, !186, !186, !59, !39, !39, !42, !188, !96, !42, !42, !146, !146, !146, !190, !192, !192, !125, !65, !65, !68, !85, !193, !193, !193, !190, !42, !42, !42, !42, !190, !42, !42, !42, !42, !42, !190, !195, !195, !42, !192, !197, !197, !42, !42, !42, !42, !42, !199, !199, !201, !201, !42, !42, !42, !59, !39, !39, !42, !203, !96, !42, !42, !42, !205, !207, !209, !209, !42, !104, !104, !42, !42, !210, !96, !42, !42, !42, !42, !42, !212, !111, !111, !112, !104, !104, !214, !214, !214, !59, !39, !39, !216, !218, !218, !220, !42, !42, !222, !42, !42, !42, !42, !42, !223, !132, !225, !225, !227, !190, !192, !192, !42, !163, !163, !42, !42, !229, !229, !42, !42, !42, !59, !39, !39, !42, !231, !96, !42, !42, !233, !96, !42, !42, !42, !235, !237, !239, !239, !42, !104, !104, !42, !42, !240, !96, !42, !42, !42, !42, !42, !227, !242, !242, !68, !85, !229, !229, !227, !244, !244, !244, !190, !246, !248, !111, !111, !112, !104, !104, !163, !249, !96, !96, !42, !42, !42, !42, !42, !251, !251, !253, !253, !212, !132, !130, !130, !225, !225, !227, !231, !96, !104, !104, !229, !229, !227, !255, !255, !163, !132, !257, !257, !257, !42, !259, !259, !260, !248, !262, !262, !264, !111, !111, !112, !104, !104, !259, !266, !268, !65, !65, !68, !85, !270, !272, !42, !42, !42, !42, !53, !53, !42, !274, !276, !278, !278, !280, !248, !42, !42, !281, !283, !285, !287, !289, !74, !74, !291, !293, !42, !295, !297, !299, !301, !303, !305, !305, !305, !59, !39, !39, !42, !307, !96, !42, !42, !42, !42, !42, !190, !192, !192, !42, !42, !42, !42, !309, !311, !313, !313, !315, !42, !317, !319, !321, !323, !323, !325, !248, !42, !42, !42, !326, !328, !330, !42, !65, !65, !68, !85, !42, !332, !334, !42, !283, !285, !42, !42, !42, !53, !53, !51, !51, !336, !338, !340, !340, !342, !248, !42, !42, !42, !343, !345, !347, !347, !347, !59, !349, !96, !42, !42, !351, !96, !347, !347, !225, !225, !227, !353, !42, !255, !355, !357, !358, !218, !218, !246, !248, !42, !42, !42, !65, !65, !360, !360, !42, !42, !360, !360, !42, !362, !364, !366, !368, !370, !372, !360, !360, !42, !360, !360, !42, !360, !360, !42, !360, !360, !42, !65, !65, !68, !85, !42, !42, !374}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!376}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"struct HwTrack &", metadata !"etaphiglobal_t &"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"in", metadata !"outEtaPhi"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"struct HwTrack &", metadata !"const struct HwMuon &", metadata !"struct HwTrackMuon &"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"inTrack", metadata !"inMuon", metadata !"outTrackMuon"}
!13 = metadata !{null, metadata !8, metadata !9, metadata !14, metadata !11, metadata !12, metadata !6}
!14 = metadata !{metadata !"kernel_arg_type", metadata !"struct HwPropTrack &", metadata !"const struct HwMuon &", metadata !"struct HwTrackMuon &"}
!15 = metadata !{null, metadata !16, metadata !17, metadata !18, metadata !19, metadata !20, metadata !6}
!16 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!17 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!18 = metadata !{metadata !"kernel_arg_type", metadata !"struct HwTrack &"}
!19 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!20 = metadata !{metadata !"kernel_arg_name", metadata !"inTrack"}
!21 = metadata !{null, metadata !1, metadata !2, metadata !22, metadata !4, metadata !23, metadata !6}
!22 = metadata !{metadata !"kernel_arg_type", metadata !"invpt_t", metadata !"pt_t &"}
!23 = metadata !{metadata !"kernel_arg_name", metadata !"hwRinv", metadata !"outPt"}
!24 = metadata !{null, metadata !1, metadata !2, metadata !25, metadata !4, metadata !26, metadata !6}
!25 = metadata !{metadata !"kernel_arg_type", metadata !"eta_t", metadata !"eta_t &"}
!26 = metadata !{metadata !"kernel_arg_name", metadata !"hwSinhEta", metadata !"outEta"}
!27 = metadata !{null, metadata !8, metadata !9, metadata !28, metadata !11, metadata !29, metadata !6}
!28 = metadata !{metadata !"kernel_arg_type", metadata !"phi_t", metadata !"sector_t", metadata !"phiglobal_t &"}
!29 = metadata !{metadata !"kernel_arg_name", metadata !"hwPhi", metadata !"hwSector", metadata !"hwPhiGlobal"}
!30 = metadata !{null, metadata !1, metadata !2, metadata !31, metadata !4, metadata !32, metadata !6}
!31 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<19, true> &"}
!32 = metadata !{metadata !"kernel_arg_name", metadata !"os", metadata !"x"}
!33 = metadata !{null, metadata !1, metadata !2, metadata !34, metadata !4, metadata !35, metadata !6}
!34 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_int_base<33, true, true>", metadata !"struct ap_fixed<19, 3, 5, 3, 0> &"}
!35 = metadata !{metadata !"kernel_arg_name", metadata !"sector", metadata !"result"}
!36 = metadata !{null, metadata !1, metadata !2, metadata !37, metadata !4, metadata !38, metadata !6}
!37 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<33, true> &", metadata !"int"}
!38 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"i_op"}
!39 = metadata !{null, metadata !16, metadata !17, metadata !40, metadata !19, metadata !41, metadata !6}
!40 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!41 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!42 = metadata !{null, metadata !43, metadata !44, metadata !45, metadata !46, metadata !47, metadata !6}
!43 = metadata !{metadata !"kernel_arg_addr_space"}
!44 = metadata !{metadata !"kernel_arg_access_qual"}
!45 = metadata !{metadata !"kernel_arg_type"}
!46 = metadata !{metadata !"kernel_arg_type_qual"}
!47 = metadata !{metadata !"kernel_arg_name"}
!48 = metadata !{null, metadata !1, metadata !2, metadata !49, metadata !4, metadata !50, metadata !6}
!49 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<33, true> &", metadata !"const ap_int_base<32, true> &"}
!50 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!51 = metadata !{null, metadata !16, metadata !17, metadata !52, metadata !19, metadata !41, metadata !6}
!52 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &"}
!53 = metadata !{null, metadata !16, metadata !17, metadata !54, metadata !19, metadata !41, metadata !6}
!54 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<33, true> &"}
!55 = metadata !{null, metadata !1, metadata !2, metadata !56, metadata !4, metadata !38, metadata !6}
!56 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<34, true> &", metadata !"double"}
!57 = metadata !{null, metadata !16, metadata !17, metadata !58, metadata !19, metadata !41, metadata !6}
!58 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<28, 18, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!59 = metadata !{null, metadata !16, metadata !17, metadata !60, metadata !19, metadata !61, metadata !6}
!60 = metadata !{metadata !"kernel_arg_type", metadata !"_Bool"}
!61 = metadata !{metadata !"kernel_arg_name", metadata !"Cnative"}
!62 = metadata !{null, metadata !16, metadata !17, metadata !63, metadata !19, metadata !64, metadata !6}
!63 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<14, 9, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!64 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!65 = metadata !{null, metadata !16, metadata !17, metadata !66, metadata !19, metadata !67, metadata !6}
!66 = metadata !{metadata !"kernel_arg_type", metadata !"double"}
!67 = metadata !{metadata !"kernel_arg_name", metadata !"v"}
!68 = metadata !{null, metadata !16, metadata !17, metadata !66, metadata !19, metadata !69, metadata !6}
!69 = metadata !{metadata !"kernel_arg_name", metadata !"d"}
!70 = metadata !{null, metadata !1, metadata !2, metadata !71, metadata !4, metadata !50, metadata !6}
!71 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<1, false> &", metadata !"const ap_int_base<54, true> &"}
!72 = metadata !{null, metadata !16, metadata !17, metadata !73, metadata !19, metadata !41, metadata !6}
!73 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<54, true> &"}
!74 = metadata !{null, metadata !16, metadata !17, metadata !75, metadata !19, metadata !41, metadata !6}
!75 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<1, false> &"}
!76 = metadata !{null, metadata !16, metadata !17, metadata !77, metadata !19, metadata !64, metadata !6}
!77 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<55, true> &"}
!78 = metadata !{null, metadata !1, metadata !2, metadata !79, metadata !4, metadata !38, metadata !6}
!79 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, false> &", metadata !"int"}
!80 = metadata !{null, metadata !1, metadata !2, metadata !81, metadata !4, metadata !50, metadata !6}
!81 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, false> &", metadata !"const ap_int_base<32, true> &"}
!82 = metadata !{null, metadata !16, metadata !17, metadata !83, metadata !19, metadata !41, metadata !6}
!83 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, false> &"}
!84 = metadata !{null, metadata !16, metadata !17, metadata !54, metadata !19, metadata !64, metadata !6}
!85 = metadata !{null, metadata !16, metadata !17, metadata !66, metadata !19, metadata !86, metadata !6}
!86 = metadata !{metadata !"kernel_arg_name", metadata !"pf"}
!87 = metadata !{null, metadata !1, metadata !2, metadata !88, metadata !4, metadata !89, metadata !6}
!88 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<24, 2, 5, 3, 0> &", metadata !"struct ap_fixed<14, 9, 5, 3, 0> &"}
!89 = metadata !{metadata !"kernel_arg_name", metadata !"data", metadata !"res"}
!90 = metadata !{null, metadata !1, metadata !2, metadata !91, metadata !4, metadata !32, metadata !6}
!91 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<14, 9, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!92 = metadata !{null, metadata !1, metadata !2, metadata !93, metadata !4, metadata !38, metadata !6}
!93 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<24, 2, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!94 = metadata !{null, metadata !16, metadata !17, metadata !40, metadata !19, metadata !95, metadata !6}
!95 = metadata !{metadata !"kernel_arg_name", metadata !"i_op"}
!96 = metadata !{null, metadata !16, metadata !17, metadata !97, metadata !19, metadata !64, metadata !6}
!97 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<32, 32, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!98 = metadata !{null, metadata !1, metadata !2, metadata !99, metadata !4, metadata !100, metadata !6}
!99 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_fixed_base<56, 34, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!100 = metadata !{metadata !"kernel_arg_name", metadata !"i_op", metadata !"op"}
!101 = metadata !{null, metadata !16, metadata !17, metadata !102, metadata !19, metadata !64, metadata !6}
!102 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<56, 34, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!103 = metadata !{null, metadata !16, metadata !17, metadata !102, metadata !19, metadata !41, metadata !6}
!104 = metadata !{null, metadata !16, metadata !17, metadata !97, metadata !19, metadata !41, metadata !6}
!105 = metadata !{null, metadata !1, metadata !2, metadata !106, metadata !4, metadata !38, metadata !6}
!106 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<57, 35, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!107 = metadata !{null, metadata !108, metadata !17, metadata !109, metadata !19, metadata !110, metadata !6}
!108 = metadata !{metadata !"kernel_arg_addr_space", i32 1}
!109 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<14, 9, 5, 3, 0>*"}
!110 = metadata !{metadata !"kernel_arg_name", metadata !"table_out"}
!111 = metadata !{null, metadata !16, metadata !17, metadata !40, metadata !19, metadata !67, metadata !6}
!112 = metadata !{null, metadata !16, metadata !17, metadata !40, metadata !19, metadata !113, metadata !6}
!113 = metadata !{metadata !"kernel_arg_name", metadata !"b"}
!114 = metadata !{null, metadata !16, metadata !17, metadata !63, metadata !19, metadata !41, metadata !6}
!115 = metadata !{null, metadata !16, metadata !17, metadata !116, metadata !19, metadata !41, metadata !6}
!116 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed<14, 9, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!117 = metadata !{null, metadata !1, metadata !2, metadata !118, metadata !4, metadata !32, metadata !6}
!118 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<9, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!119 = metadata !{null, metadata !120, metadata !121, metadata !122, metadata !123, metadata !124, metadata !6}
!120 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0, i32 0}
!121 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!122 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<14, 4, 5, 3, 0>", metadata !"struct ap_fixed<23, 3, 5, 3, 0>", metadata !"struct ap_fixed<10, 4, 5, 3, 0>", metadata !"struct ap_fixed<9, 3, 5, 3, 0>"}
!123 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!124 = metadata !{metadata !"kernel_arg_name", metadata !"eta1", metadata !"phi1", metadata !"eta2", metadata !"phi2"}
!125 = metadata !{null, metadata !16, metadata !17, metadata !126, metadata !19, metadata !64, metadata !6}
!126 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<23, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!127 = metadata !{null, metadata !16, metadata !17, metadata !128, metadata !19, metadata !64, metadata !6}
!128 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<46, 6, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!129 = metadata !{null, metadata !16, metadata !17, metadata !128, metadata !19, metadata !41, metadata !6}
!130 = metadata !{null, metadata !16, metadata !17, metadata !131, metadata !19, metadata !41, metadata !6}
!131 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<28, 8, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!132 = metadata !{null, metadata !16, metadata !17, metadata !133, metadata !19, metadata !64, metadata !6}
!133 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<14, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!134 = metadata !{null, metadata !16, metadata !17, metadata !135, metadata !19, metadata !41, metadata !6}
!135 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<49, 9, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!136 = metadata !{null, metadata !16, metadata !17, metadata !137, metadata !19, metadata !64, metadata !6}
!137 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<9, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!138 = metadata !{null, metadata !16, metadata !17, metadata !137, metadata !19, metadata !41, metadata !6}
!139 = metadata !{null, metadata !16, metadata !17, metadata !126, metadata !19, metadata !41, metadata !6}
!140 = metadata !{null, metadata !16, metadata !17, metadata !141, metadata !19, metadata !142, metadata !6}
!141 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed_base<24, 4, true, 5, 3, 0>"}
!142 = metadata !{metadata !"kernel_arg_name", metadata !"outPhi"}
!143 = metadata !{null, metadata !16, metadata !17, metadata !144, metadata !19, metadata !64, metadata !6}
!144 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<24, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!145 = metadata !{null, metadata !16, metadata !17, metadata !144, metadata !19, metadata !41, metadata !6}
!146 = metadata !{null, metadata !16, metadata !17, metadata !147, metadata !19, metadata !41, metadata !6}
!147 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<25, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!148 = metadata !{null, metadata !16, metadata !17, metadata !147, metadata !19, metadata !64, metadata !6}
!149 = metadata !{null, metadata !16, metadata !17, metadata !150, metadata !19, metadata !41, metadata !6}
!150 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<15, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!151 = metadata !{null, metadata !1, metadata !2, metadata !152, metadata !4, metadata !38, metadata !6}
!152 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<10, false> &", metadata !"double"}
!153 = metadata !{null, metadata !16, metadata !17, metadata !66, metadata !19, metadata !142, metadata !6}
!154 = metadata !{null, metadata !16, metadata !17, metadata !155, metadata !19, metadata !64, metadata !6}
!155 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<10> &"}
!156 = metadata !{null, metadata !16, metadata !17, metadata !157, metadata !19, metadata !64, metadata !6}
!157 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<9> &"}
!158 = metadata !{null, metadata !1, metadata !2, metadata !159, metadata !4, metadata !32, metadata !6}
!159 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<10, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!160 = metadata !{null, metadata !16, metadata !17, metadata !161, metadata !19, metadata !64, metadata !6}
!161 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<10, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!162 = metadata !{null, metadata !16, metadata !17, metadata !161, metadata !19, metadata !41, metadata !6}
!163 = metadata !{null, metadata !16, metadata !17, metadata !133, metadata !19, metadata !41, metadata !6}
!164 = metadata !{null, metadata !16, metadata !17, metadata !40, metadata !19, metadata !165, metadata !6}
!165 = metadata !{metadata !"kernel_arg_name", metadata !"x"}
!166 = metadata !{null, metadata !16, metadata !17, metadata !167, metadata !19, metadata !168, metadata !6}
!167 = metadata !{metadata !"kernel_arg_type", metadata !"size_t"}
!168 = metadata !{metadata !"kernel_arg_name", metadata !"__pos"}
!169 = metadata !{null, metadata !16, metadata !17, metadata !167, metadata !19, metadata !170, metadata !6}
!170 = metadata !{metadata !"kernel_arg_name", metadata !"__position"}
!171 = metadata !{null, metadata !1, metadata !2, metadata !172, metadata !4, metadata !173, metadata !6}
!172 = metadata !{metadata !"kernel_arg_type", metadata !"class std::bitset<9> &", metadata !"size_t"}
!173 = metadata !{metadata !"kernel_arg_name", metadata !"__b", metadata !"__pos"}
!174 = metadata !{null, metadata !16, metadata !17, metadata !167, metadata !19, metadata !175, metadata !6}
!175 = metadata !{metadata !"kernel_arg_name", metadata !""}
!176 = metadata !{null, metadata !16, metadata !17, metadata !177, metadata !19, metadata !178, metadata !6}
!177 = metadata !{metadata !"kernel_arg_type", metadata !"ulong"}
!178 = metadata !{metadata !"kernel_arg_name", metadata !"__val"}
!179 = metadata !{null, metadata !16, metadata !17, metadata !180, metadata !19, metadata !178, metadata !6}
!180 = metadata !{metadata !"kernel_arg_type", metadata !"_WordT &"}
!181 = metadata !{null, metadata !1, metadata !2, metadata !182, metadata !4, metadata !183, metadata !6}
!182 = metadata !{metadata !"kernel_arg_type", metadata !"const struct ap_int<14> &", metadata !"const struct ap_int<23> &"}
!183 = metadata !{metadata !"kernel_arg_name", metadata !"__a", metadata !"__b"}
!184 = metadata !{null, metadata !1, metadata !2, metadata !185, metadata !4, metadata !32, metadata !6}
!185 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<23, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!186 = metadata !{null, metadata !16, metadata !17, metadata !187, metadata !19, metadata !41, metadata !6}
!187 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<55, 35, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!188 = metadata !{null, metadata !1, metadata !2, metadata !189, metadata !4, metadata !38, metadata !6}
!189 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<23, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!190 = metadata !{null, metadata !16, metadata !17, metadata !191, metadata !19, metadata !64, metadata !6}
!191 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<19, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!192 = metadata !{null, metadata !16, metadata !17, metadata !191, metadata !19, metadata !41, metadata !6}
!193 = metadata !{null, metadata !16, metadata !17, metadata !194, metadata !19, metadata !41, metadata !6}
!194 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<57, 9, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!195 = metadata !{null, metadata !16, metadata !17, metadata !196, metadata !19, metadata !41, metadata !6}
!196 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<38, 6, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!197 = metadata !{null, metadata !16, metadata !17, metadata !198, metadata !19, metadata !64, metadata !6}
!198 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<24, 2, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!199 = metadata !{null, metadata !16, metadata !17, metadata !200, metadata !19, metadata !41, metadata !6}
!200 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<43, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!201 = metadata !{null, metadata !1, metadata !2, metadata !202, metadata !4, metadata !89, metadata !6}
!202 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<14, 4, 5, 3, 0> &", metadata !"struct ap_fixed<19, 3, 5, 3, 0> &"}
!203 = metadata !{null, metadata !1, metadata !2, metadata !204, metadata !4, metadata !38, metadata !6}
!204 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<46, 36, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!205 = metadata !{null, metadata !1, metadata !2, metadata !206, metadata !4, metadata !100, metadata !6}
!206 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_fixed_base<47, 37, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!207 = metadata !{null, metadata !16, metadata !17, metadata !208, metadata !19, metadata !64, metadata !6}
!208 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<47, 37, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!209 = metadata !{null, metadata !16, metadata !17, metadata !208, metadata !19, metadata !41, metadata !6}
!210 = metadata !{null, metadata !1, metadata !2, metadata !211, metadata !4, metadata !38, metadata !6}
!211 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<48, 38, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!212 = metadata !{null, metadata !108, metadata !17, metadata !213, metadata !19, metadata !110, metadata !6}
!213 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<19, 3, 5, 3, 0>*"}
!214 = metadata !{null, metadata !16, metadata !17, metadata !215, metadata !19, metadata !41, metadata !6}
!215 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<29, 19, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!216 = metadata !{null, metadata !1, metadata !2, metadata !217, metadata !4, metadata !38, metadata !6}
!217 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<15, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"const ap_int_base<14, true> &"}
!218 = metadata !{null, metadata !16, metadata !17, metadata !219, metadata !19, metadata !41, metadata !6}
!219 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, true> &"}
!220 = metadata !{null, metadata !16, metadata !17, metadata !221, metadata !19, metadata !41, metadata !6}
!221 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<14, 14, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!222 = metadata !{null, metadata !16, metadata !17, metadata !221, metadata !19, metadata !64, metadata !6}
!223 = metadata !{null, metadata !1, metadata !2, metadata !224, metadata !4, metadata !32, metadata !6}
!224 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<15, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!225 = metadata !{null, metadata !1, metadata !2, metadata !226, metadata !4, metadata !89, metadata !6}
!226 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<14, 4, 5, 3, 0> &", metadata !"struct ap_fixed<14, 4, 5, 3, 0> &"}
!227 = metadata !{null, metadata !108, metadata !17, metadata !228, metadata !19, metadata !110, metadata !6}
!228 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<14, 4, 5, 3, 0>*"}
!229 = metadata !{null, metadata !1, metadata !2, metadata !230, metadata !4, metadata !89, metadata !6}
!230 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<11, 5, 5, 3, 0> &", metadata !"struct ap_fixed<14, 4, 5, 3, 0> &"}
!231 = metadata !{null, metadata !1, metadata !2, metadata !232, metadata !4, metadata !38, metadata !6}
!232 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<11, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!233 = metadata !{null, metadata !1, metadata !2, metadata !234, metadata !4, metadata !38, metadata !6}
!234 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<43, 37, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!235 = metadata !{null, metadata !1, metadata !2, metadata !236, metadata !4, metadata !100, metadata !6}
!236 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_fixed_base<44, 38, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!237 = metadata !{null, metadata !16, metadata !17, metadata !238, metadata !19, metadata !64, metadata !6}
!238 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<44, 38, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!239 = metadata !{null, metadata !16, metadata !17, metadata !238, metadata !19, metadata !41, metadata !6}
!240 = metadata !{null, metadata !1, metadata !2, metadata !241, metadata !4, metadata !38, metadata !6}
!241 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<45, 39, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!242 = metadata !{null, metadata !16, metadata !17, metadata !243, metadata !19, metadata !67, metadata !6}
!243 = metadata !{metadata !"kernel_arg_type", metadata !"float"}
!244 = metadata !{null, metadata !16, metadata !17, metadata !245, metadata !19, metadata !41, metadata !6}
!245 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<21, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!246 = metadata !{null, metadata !1, metadata !2, metadata !247, metadata !4, metadata !50, metadata !6}
!247 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, true> &", metadata !"int"}
!248 = metadata !{null, metadata !16, metadata !17, metadata !52, metadata !19, metadata !64, metadata !6}
!249 = metadata !{null, metadata !1, metadata !2, metadata !250, metadata !4, metadata !38, metadata !6}
!250 = metadata !{metadata !"kernel_arg_type", metadata !"ap_fixed_base<19, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!251 = metadata !{null, metadata !16, metadata !17, metadata !252, metadata !19, metadata !41, metadata !6}
!252 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<51, 35, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!253 = metadata !{null, metadata !1, metadata !2, metadata !254, metadata !4, metadata !89, metadata !6}
!254 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<11, 5, 5, 3, 0> &", metadata !"struct ap_fixed<19, 3, 5, 3, 0> &"}
!255 = metadata !{null, metadata !16, metadata !17, metadata !256, metadata !19, metadata !41, metadata !6}
!256 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed<14, 4, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!257 = metadata !{null, metadata !16, metadata !17, metadata !258, metadata !19, metadata !41, metadata !6}
!258 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<25, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!259 = metadata !{null, metadata !16, metadata !17, metadata !198, metadata !19, metadata !41, metadata !6}
!260 = metadata !{null, metadata !1, metadata !2, metadata !261, metadata !4, metadata !50, metadata !6}
!261 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<1, false> &", metadata !"int"}
!262 = metadata !{null, metadata !1, metadata !2, metadata !263, metadata !4, metadata !89, metadata !6}
!263 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<24, 2, 5, 3, 0> &", metadata !"struct ap_fixed<24, 2, 5, 3, 0> &"}
!264 = metadata !{null, metadata !108, metadata !17, metadata !265, metadata !19, metadata !110, metadata !6}
!265 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<24, 2, 5, 3, 0>*"}
!266 = metadata !{null, metadata !1, metadata !2, metadata !267, metadata !4, metadata !32, metadata !6}
!267 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<24, 2, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!268 = metadata !{null, metadata !1, metadata !2, metadata !269, metadata !4, metadata !32, metadata !6}
!269 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<15, true> &"}
!270 = metadata !{null, metadata !16, metadata !17, metadata !271, metadata !19, metadata !41, metadata !6}
!271 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed<24, 2, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!272 = metadata !{null, metadata !1, metadata !2, metadata !273, metadata !4, metadata !38, metadata !6}
!273 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<15, true> &", metadata !"double"}
!274 = metadata !{null, metadata !1, metadata !2, metadata !275, metadata !4, metadata !38, metadata !6}
!275 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<15, true> &", metadata !"int"}
!276 = metadata !{null, metadata !1, metadata !2, metadata !277, metadata !4, metadata !50, metadata !6}
!277 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<15, true> &", metadata !"const ap_int_base<32, true> &"}
!278 = metadata !{null, metadata !16, metadata !17, metadata !279, metadata !19, metadata !41, metadata !6}
!279 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<15, true> &"}
!280 = metadata !{null, metadata !1, metadata !2, metadata !275, metadata !4, metadata !50, metadata !6}
!281 = metadata !{null, metadata !1, metadata !2, metadata !282, metadata !4, metadata !32, metadata !6}
!282 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<34, true> &"}
!283 = metadata !{null, metadata !1, metadata !2, metadata !284, metadata !4, metadata !100, metadata !6}
!284 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_int_base<33, true> &"}
!285 = metadata !{null, metadata !1, metadata !2, metadata !286, metadata !4, metadata !50, metadata !6}
!286 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &", metadata !"const ap_int_base<33, true> &"}
!287 = metadata !{null, metadata !1, metadata !2, metadata !288, metadata !4, metadata !100, metadata !6}
!288 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_int_base<1, false> &"}
!289 = metadata !{null, metadata !1, metadata !2, metadata !290, metadata !4, metadata !50, metadata !6}
!290 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &", metadata !"const ap_int_base<1, false> &"}
!291 = metadata !{null, metadata !1, metadata !2, metadata !292, metadata !4, metadata !32, metadata !6}
!292 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<1, false> &"}
!293 = metadata !{null, metadata !1, metadata !2, metadata !294, metadata !4, metadata !38, metadata !6}
!294 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<23, true> &", metadata !"double"}
!295 = metadata !{null, metadata !1, metadata !2, metadata !296, metadata !4, metadata !32, metadata !6}
!296 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<23, true> &"}
!297 = metadata !{null, metadata !1, metadata !2, metadata !298, metadata !4, metadata !32, metadata !6}
!298 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<52, 36, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!299 = metadata !{null, metadata !1, metadata !2, metadata !300, metadata !4, metadata !32, metadata !6}
!300 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<20, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!301 = metadata !{null, metadata !1, metadata !2, metadata !302, metadata !4, metadata !32, metadata !6}
!302 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<5, false> &"}
!303 = metadata !{null, metadata !1, metadata !2, metadata !304, metadata !4, metadata !32, metadata !6}
!304 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<19, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!305 = metadata !{null, metadata !16, metadata !17, metadata !306, metadata !19, metadata !41, metadata !6}
!306 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<52, 36, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!307 = metadata !{null, metadata !1, metadata !2, metadata !308, metadata !4, metadata !38, metadata !6}
!308 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<20, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!309 = metadata !{null, metadata !1, metadata !2, metadata !310, metadata !4, metadata !38, metadata !6}
!310 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<5, false> &", metadata !"int"}
!311 = metadata !{null, metadata !1, metadata !2, metadata !312, metadata !4, metadata !50, metadata !6}
!312 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<5, false> &", metadata !"const ap_int_base<32, true> &"}
!313 = metadata !{null, metadata !16, metadata !17, metadata !314, metadata !19, metadata !41, metadata !6}
!314 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<5, false> &"}
!315 = metadata !{null, metadata !1, metadata !2, metadata !316, metadata !4, metadata !38, metadata !6}
!316 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &", metadata !"double"}
!317 = metadata !{null, metadata !16, metadata !17, metadata !318, metadata !19, metadata !41, metadata !6}
!318 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed<19, 3, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!319 = metadata !{null, metadata !1, metadata !2, metadata !320, metadata !4, metadata !38, metadata !6}
!320 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &", metadata !"int"}
!321 = metadata !{null, metadata !1, metadata !2, metadata !322, metadata !4, metadata !50, metadata !6}
!322 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &", metadata !"const ap_int_base<32, true> &"}
!323 = metadata !{null, metadata !16, metadata !17, metadata !324, metadata !19, metadata !41, metadata !6}
!324 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &"}
!325 = metadata !{null, metadata !1, metadata !2, metadata !320, metadata !4, metadata !50, metadata !6}
!326 = metadata !{null, metadata !1, metadata !2, metadata !327, metadata !4, metadata !32, metadata !6}
!327 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<11, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!328 = metadata !{null, metadata !1, metadata !2, metadata !329, metadata !4, metadata !32, metadata !6}
!329 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<11, true> &"}
!330 = metadata !{null, metadata !1, metadata !2, metadata !331, metadata !4, metadata !38, metadata !6}
!331 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, true> &", metadata !"double"}
!332 = metadata !{null, metadata !16, metadata !17, metadata !333, metadata !19, metadata !41, metadata !6}
!333 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed<11, 5, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!334 = metadata !{null, metadata !1, metadata !2, metadata !335, metadata !4, metadata !38, metadata !6}
!335 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<65, true> &", metadata !"double"}
!336 = metadata !{null, metadata !1, metadata !2, metadata !337, metadata !4, metadata !38, metadata !6}
!337 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, true> &", metadata !"int"}
!338 = metadata !{null, metadata !1, metadata !2, metadata !339, metadata !4, metadata !50, metadata !6}
!339 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, true> &", metadata !"const ap_int_base<32, true> &"}
!340 = metadata !{null, metadata !16, metadata !17, metadata !341, metadata !19, metadata !41, metadata !6}
!341 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, true> &"}
!342 = metadata !{null, metadata !1, metadata !2, metadata !337, metadata !4, metadata !50, metadata !6}
!343 = metadata !{null, metadata !1, metadata !2, metadata !344, metadata !4, metadata !32, metadata !6}
!344 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<14, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!345 = metadata !{null, metadata !1, metadata !2, metadata !346, metadata !4, metadata !32, metadata !6}
!346 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<14, true> &"}
!347 = metadata !{null, metadata !16, metadata !17, metadata !348, metadata !19, metadata !41, metadata !6}
!348 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<46, 36, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!349 = metadata !{null, metadata !1, metadata !2, metadata !350, metadata !4, metadata !38, metadata !6}
!350 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<14, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!351 = metadata !{null, metadata !1, metadata !2, metadata !352, metadata !4, metadata !38, metadata !6}
!352 = metadata !{metadata !"kernel_arg_type", metadata !"ap_fixed_base<14, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!353 = metadata !{null, metadata !1, metadata !2, metadata !354, metadata !4, metadata !38, metadata !6}
!354 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, true> &", metadata !"double"}
!355 = metadata !{null, metadata !1, metadata !2, metadata !356, metadata !4, metadata !38, metadata !6}
!356 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<33, true> &", metadata !"double"}
!357 = metadata !{null, metadata !1, metadata !2, metadata !247, metadata !4, metadata !38, metadata !6}
!358 = metadata !{null, metadata !1, metadata !2, metadata !359, metadata !4, metadata !50, metadata !6}
!359 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, true> &", metadata !"const ap_int_base<32, true> &"}
!360 = metadata !{null, metadata !16, metadata !17, metadata !40, metadata !19, metadata !361, metadata !6}
!361 = metadata !{metadata !"kernel_arg_name", metadata !"val"}
!362 = metadata !{null, metadata !16, metadata !17, metadata !363, metadata !19, metadata !64, metadata !6}
!363 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<3> &"}
!364 = metadata !{null, metadata !16, metadata !17, metadata !365, metadata !19, metadata !64, metadata !6}
!365 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<1> &"}
!366 = metadata !{null, metadata !16, metadata !17, metadata !367, metadata !19, metadata !64, metadata !6}
!367 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<23> &"}
!368 = metadata !{null, metadata !16, metadata !17, metadata !369, metadata !19, metadata !64, metadata !6}
!369 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<14> &"}
!370 = metadata !{null, metadata !16, metadata !17, metadata !371, metadata !19, metadata !64, metadata !6}
!371 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<14> &"}
!372 = metadata !{null, metadata !16, metadata !17, metadata !373, metadata !19, metadata !64, metadata !6}
!373 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<15> &"}
!374 = metadata !{null, metadata !16, metadata !17, metadata !375, metadata !19, metadata !175, metadata !6}
!375 = metadata !{metadata !"kernel_arg_type", metadata !"const struct std::pair<struct ap_int<14>, struct ap_int<23> > &"}
!376 = metadata !{metadata !377, [1 x i32]* @llvm_global_ctors_0}
!377 = metadata !{metadata !378}
!378 = metadata !{i32 0, i32 31, metadata !379}
!379 = metadata !{metadata !380}
!380 = metadata !{metadata !"llvm.global_ctors.0", metadata !381, metadata !"", i32 0, i32 31}
!381 = metadata !{metadata !382}
!382 = metadata !{i32 0, i32 0, i32 1}
!383 = metadata !{metadata !384}
!384 = metadata !{i32 0, i32 14, metadata !385}
!385 = metadata !{metadata !386}
!386 = metadata !{metadata !"inTrack.hwRinv.V", metadata !381, metadata !"int15", i32 0, i32 14}
!387 = metadata !{metadata !388}
!388 = metadata !{i32 0, i32 13, metadata !389}
!389 = metadata !{metadata !390}
!390 = metadata !{metadata !"inTrack.hwPt.V", metadata !381, metadata !"uint14", i32 0, i32 13}
!391 = metadata !{metadata !392}
!392 = metadata !{i32 0, i32 13, metadata !393}
!393 = metadata !{metadata !394}
!394 = metadata !{metadata !"inTrack.hwSinhEta.V", metadata !381, metadata !"int14", i32 0, i32 13}
!395 = metadata !{metadata !396}
!396 = metadata !{i32 0, i32 13, metadata !397}
!397 = metadata !{metadata !398}
!398 = metadata !{metadata !"inTrack.hwEta.V", metadata !381, metadata !"int14", i32 0, i32 13}
!399 = metadata !{metadata !400}
!400 = metadata !{i32 0, i32 18, metadata !401}
!401 = metadata !{metadata !402}
!402 = metadata !{metadata !"inTrack.hwPhi.V", metadata !381, metadata !"int19", i32 0, i32 18}
!403 = metadata !{metadata !404}
!404 = metadata !{i32 0, i32 22, metadata !405}
!405 = metadata !{metadata !406}
!406 = metadata !{metadata !"inTrack.hwPhiGlobal.V", metadata !381, metadata !"int23", i32 0, i32 22}
!407 = metadata !{metadata !408}
!408 = metadata !{i32 0, i32 10, metadata !409}
!409 = metadata !{metadata !410}
!410 = metadata !{metadata !"inTrack.hwZ0.V", metadata !381, metadata !"int11", i32 0, i32 10}
!411 = metadata !{metadata !412}
!412 = metadata !{i32 0, i32 4, metadata !413}
!413 = metadata !{metadata !414}
!414 = metadata !{metadata !"inTrack.hwSector.V", metadata !381, metadata !"uint5", i32 0, i32 4}
!415 = metadata !{metadata !416}
!416 = metadata !{i32 0, i32 0, metadata !417}
!417 = metadata !{metadata !418}
!418 = metadata !{metadata !"inTrack.hwQ.V", metadata !381, metadata !"uint1", i32 0, i32 0}
!419 = metadata !{metadata !420}
!420 = metadata !{i32 0, i32 9, metadata !421}
!421 = metadata !{metadata !422}
!422 = metadata !{metadata !"inTrack.hwX2.V", metadata !381, metadata !"int10", i32 0, i32 9}
!423 = metadata !{metadata !424}
!424 = metadata !{i32 0, i32 0, metadata !425}
!425 = metadata !{metadata !426}
!426 = metadata !{metadata !"inTrack.hwValid.V", metadata !381, metadata !"uint1", i32 0, i32 0}
!427 = metadata !{metadata !428}
!428 = metadata !{i32 0, i32 2, metadata !429}
!429 = metadata !{metadata !430}
!430 = metadata !{metadata !"inTrack.hwBX.V", metadata !381, metadata !"int3", i32 0, i32 2}
!431 = metadata !{metadata !432}
!432 = metadata !{i32 0, i32 13, metadata !433}
!433 = metadata !{metadata !434}
!434 = metadata !{metadata !"inTrack.hwPropEta.V", metadata !381, metadata !"int14", i32 0, i32 13}
!435 = metadata !{metadata !436}
!436 = metadata !{i32 0, i32 22, metadata !437}
!437 = metadata !{metadata !438}
!438 = metadata !{metadata !"inTrack.hwPropPhi.V", metadata !381, metadata !"int23", i32 0, i32 22}
!439 = metadata !{metadata !440}
!440 = metadata !{i32 0, i32 8, metadata !441}
!441 = metadata !{metadata !442}
!442 = metadata !{metadata !"inMuon.hwPt.V", metadata !381, metadata !"uint9", i32 0, i32 8}
!443 = metadata !{metadata !444}
!444 = metadata !{i32 0, i32 8, metadata !445}
!445 = metadata !{metadata !446}
!446 = metadata !{metadata !"inMuon.hwEta.V", metadata !381, metadata !"int9", i32 0, i32 8}
!447 = metadata !{metadata !448}
!448 = metadata !{i32 0, i32 9, metadata !449}
!449 = metadata !{metadata !450}
!450 = metadata !{metadata !"inMuon.hwPhi.V", metadata !381, metadata !"uint10", i32 0, i32 9}
!451 = metadata !{metadata !452}
!452 = metadata !{i32 0, i32 0, metadata !453}
!453 = metadata !{metadata !454}
!454 = metadata !{metadata !"inMuon.hwQ.V", metadata !381, metadata !"uint1", i32 0, i32 0}
!455 = metadata !{metadata !456}
!456 = metadata !{i32 0, i32 0, metadata !457}
!457 = metadata !{metadata !458}
!458 = metadata !{metadata !"inMuon.hwValid.V", metadata !381, metadata !"uint1", i32 0, i32 0}
!459 = metadata !{metadata !460}
!460 = metadata !{i32 0, i32 2, metadata !461}
!461 = metadata !{metadata !462}
!462 = metadata !{metadata !"inMuon.hwBX.V", metadata !381, metadata !"int3", i32 0, i32 2}
!463 = metadata !{metadata !464}
!464 = metadata !{i32 0, i32 3, metadata !465}
!465 = metadata !{metadata !466}
!466 = metadata !{metadata !"inMuon.hwQuality.V", metadata !381, metadata !"uint4", i32 0, i32 3}
!467 = metadata !{metadata !468}
!468 = metadata !{i32 0, i32 13, metadata !469}
!469 = metadata !{metadata !470}
!470 = metadata !{metadata !"outTrackMuon.hwPt.V", metadata !381, metadata !"uint14", i32 0, i32 13}
!471 = metadata !{metadata !472}
!472 = metadata !{i32 0, i32 8, metadata !473}
!473 = metadata !{metadata !474}
!474 = metadata !{metadata !"outTrackMuon.hwEta.V", metadata !381, metadata !"int9", i32 0, i32 8}
!475 = metadata !{metadata !476}
!476 = metadata !{i32 0, i32 9, metadata !477}
!477 = metadata !{metadata !478}
!478 = metadata !{metadata !"outTrackMuon.hwPhi.V", metadata !381, metadata !"uint10", i32 0, i32 9}
!479 = metadata !{metadata !480}
!480 = metadata !{i32 0, i32 0, metadata !481}
!481 = metadata !{metadata !482}
!482 = metadata !{metadata !"outTrackMuon.hwQ.V", metadata !381, metadata !"uint1", i32 0, i32 0}
!483 = metadata !{metadata !484}
!484 = metadata !{i32 0, i32 0, metadata !485}
!485 = metadata !{metadata !486}
!486 = metadata !{metadata !"outTrackMuon.hwValid.V", metadata !381, metadata !"uint1", i32 0, i32 0}
!487 = metadata !{metadata !488}
!488 = metadata !{i32 0, i32 2, metadata !489}
!489 = metadata !{metadata !490}
!490 = metadata !{metadata !"outTrackMuon.hwBX.V", metadata !381, metadata !"int3", i32 0, i32 2}
!491 = metadata !{metadata !492}
!492 = metadata !{i32 0, i32 3, metadata !493}
!493 = metadata !{metadata !494}
!494 = metadata !{metadata !"outTrackMuon.hwQuality.V", metadata !381, metadata !"uint4", i32 0, i32 3}
