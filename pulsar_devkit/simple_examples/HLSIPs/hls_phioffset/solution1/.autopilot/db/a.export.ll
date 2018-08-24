; ModuleID = '/data/dildick/GlobalCorrelator/pulsar_devkit/simple_examples/HLSIPs/hls_phioffset/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@phiOffSet_str = internal unnamed_addr constant [10 x i8] c"phiOffSet\00"
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@p_str59 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1

define weak void @"phiOffSet<ap_int_base<33, true, true>, ap_fixed<19, 3, (ap_q_mode)5, (ap_o_mode)3, 0> >"(i33 %sector_V, i19* %result_V) {
  call void (...)* @_ssdm_op_SpecBitsMap(i33 %sector_V), !map !388
  call void (...)* @_ssdm_op_SpecBitsMap(i19* %result_V), !map !394
  call void (...)* @_ssdm_op_SpecTopModule([10 x i8]* @phiOffSet_str) nounwind
  %sector_V_read = call i33 @_ssdm_op_Read.ap_auto.i33(i33 %sector_V)
  %phiOffSetValues_V = alloca [27 x i19], align 4
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str59) nounwind
  %lhs_V = sext i33 %sector_V_read to i34
  %r_V = add nsw i34 -1, %lhs_V
  %tmp_6 = sext i34 %r_V to i64
  %tmp_2 = sitofp i64 %tmp_6 to double
  %tmp_3 = fmul double %tmp_2, 0x3FCDC975B932F0A7
  %v_assign = fadd double %tmp_3, -3.878510e-02
  %ireg_V = bitcast double %v_assign to i64
  %tmp_14 = trunc i64 %ireg_V to i63
  %tmp_17 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %ireg_V, i32 63)
  %p_Result_1 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %ireg_V, i32 52, i32 62)
  %tmp_7 = zext i11 %p_Result_1 to i12
  %tmp_18 = trunc i64 %ireg_V to i52
  %tmp = call i53 @_ssdm_op_BitConcatenate.i53.i1.i52(i1 true, i52 %tmp_18)
  %p_Result_4 = zext i53 %tmp to i54
  %man_V_1 = sub i54 0, %p_Result_4
  %man_V_2 = select i1 %tmp_17, i54 %man_V_1, i54 %p_Result_4
  %tmp_1 = icmp eq i63 %tmp_14, 0
  br i1 %tmp_1, label %ap_fixed_base.exit.1.critedge, label %_ifconv

_ifconv:                                          ; preds = %0
  %F2 = sub i12 1075, %tmp_7
  %tmp_8 = icmp sgt i12 %F2, 16
  %tmp_9 = add i12 -16, %F2
  %tmp_5 = sub i12 16, %F2
  %sh_amt = select i1 %tmp_8, i12 %tmp_9, i12 %tmp_5
  %sh_amt_cast = sext i12 %sh_amt to i32
  %tmp_s = icmp eq i12 %F2, 16
  %tmp_19 = trunc i54 %man_V_2 to i19
  %tmp_10 = icmp ult i12 %sh_amt, 54
  %tmp_11 = icmp ult i12 %sh_amt, 19
  %tmp_12 = zext i32 %sh_amt_cast to i54
  %tmp_13 = ashr i54 %man_V_2, %tmp_12
  %tmp_20 = trunc i54 %tmp_13 to i19
  %p_s = select i1 %tmp_17, i19 -1, i19 0
  %tmp_15 = sext i19 %tmp_19 to i32
  %tmp_16 = shl i32 %tmp_15, %sh_amt_cast
  %tmp_21 = trunc i32 %tmp_16 to i19
  %sel_tmp1 = xor i1 %tmp_s, true
  %sel_tmp2 = and i1 %tmp_8, %sel_tmp1
  %sel_tmp3 = and i1 %sel_tmp2, %tmp_10
  %tmp_22 = call i8 @_ssdm_op_PartSelect.i8.i12.i32.i32(i12 %F2, i32 4, i32 11)
  %icmp = icmp slt i8 %tmp_22, 1
  %sel_tmp8 = and i1 %icmp, %tmp_11
  %sel_tmp = xor i1 %tmp_10, true
  %sel_tmp4 = and i1 %sel_tmp2, %sel_tmp
  %newSel = select i1 %sel_tmp4, i19 %p_s, i19 %tmp_21
  %or_cond = or i1 %sel_tmp4, %sel_tmp8
  %newSel1 = select i1 %sel_tmp3, i19 %tmp_20, i19 %tmp_19
  %or_cond1 = or i1 %sel_tmp3, %tmp_s
  %newSel2 = select i1 %or_cond, i19 %newSel, i19 %newSel1
  %or_cond2 = or i1 %or_cond, %or_cond1
  %newSel3 = select i1 %or_cond2, i19 %newSel2, i19 0
  %phiOffSetValues_V_ad = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 0
  store i19 %newSel3, i19* %phiOffSetValues_V_ad, align 4
  br i1 %tmp_s, label %ap_fixed_base.exit.1, label %2

ap_fixed_base.exit.1.critedge:                    ; preds = %0
  %phiOffSetValues_V_ad_1 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 0
  store i19 0, i19* %phiOffSetValues_V_ad_1, align 4
  br label %ap_fixed_base.exit.1

ap_fixed_base.exit.1:                             ; preds = %3, %1, %ap_fixed_base.exit.1.critedge, %_ifconv
  %storemerge_1 = phi i19 [ 0, %ap_fixed_base.exit.1.critedge ], [ %tmp_19, %_ifconv ], [ %tmp_20_1, %3 ], [ %tmp_17_s, %1 ]
  %phiOffSetValues_V_ad_2 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 1
  store i19 %storemerge_1, i19* %phiOffSetValues_V_ad_2, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.3.critedge, label %_ifconv15

; <label>:1                                       ; preds = %2
  %tmp_17_s = select i1 %tmp_10, i19 %tmp_20, i19 %p_s
  br label %ap_fixed_base.exit.1

; <label>:2                                       ; preds = %_ifconv
  br i1 %tmp_8, label %1, label %3

; <label>:3                                       ; preds = %2
  %tmp_20_1 = select i1 %tmp_11, i19 %tmp_21, i19 0
  br label %ap_fixed_base.exit.1

_ifconv15:                                        ; preds = %ap_fixed_base.exit.1
  %F2_2 = sub i12 1075, %tmp_7
  %tmp_8_2 = icmp sgt i12 %F2_2, 16
  %tmp_9_2 = add i12 -16, %F2_2
  %tmp_10_2 = sub i12 16, %F2_2
  %sh_amt_2 = select i1 %tmp_8_2, i12 %tmp_9_2, i12 %tmp_10_2
  %sh_amt_2_cast = sext i12 %sh_amt_2 to i32
  %tmp_11_2 = icmp eq i12 %F2_2, 16
  %tmp_23 = trunc i54 %man_V_2 to i19
  %tmp_13_2 = icmp ult i12 %sh_amt_2, 54
  %tmp_15_2 = icmp ult i12 %sh_amt_2, 19
  %tmp_16_2 = zext i32 %sh_amt_2_cast to i54
  %tmp_17_2 = ashr i54 %man_V_2, %tmp_16_2
  %tmp_24 = trunc i54 %tmp_17_2 to i19
  %p_2 = select i1 %tmp_17, i19 -1, i19 0
  %tmp_19_2 = sext i19 %tmp_23 to i32
  %tmp_20_2 = shl i32 %tmp_19_2, %sh_amt_2_cast
  %tmp_25 = trunc i32 %tmp_20_2 to i19
  %sel_tmp5 = xor i1 %tmp_11_2, true
  %sel_tmp6 = and i1 %tmp_8_2, %sel_tmp5
  %sel_tmp9 = and i1 %sel_tmp6, %tmp_13_2
  %tmp_26 = call i8 @_ssdm_op_PartSelect.i8.i12.i32.i32(i12 %F2_2, i32 4, i32 11)
  %icmp5 = icmp slt i8 %tmp_26, 1
  %sel_tmp7 = and i1 %icmp5, %tmp_15_2
  %sel_tmp10 = xor i1 %tmp_13_2, true
  %sel_tmp11 = and i1 %sel_tmp6, %sel_tmp10
  %newSel4 = select i1 %sel_tmp11, i19 %p_2, i19 %tmp_25
  %or_cond3 = or i1 %sel_tmp11, %sel_tmp7
  %newSel5 = select i1 %sel_tmp9, i19 %tmp_24, i19 %tmp_23
  %or_cond4 = or i1 %sel_tmp9, %tmp_11_2
  %newSel6 = select i1 %or_cond3, i19 %newSel4, i19 %newSel5
  %or_cond5 = or i1 %or_cond3, %or_cond4
  %newSel7 = select i1 %or_cond5, i19 %newSel6, i19 0
  %phiOffSetValues_V_ad_3 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 2
  store i19 %newSel7, i19* %phiOffSetValues_V_ad_3, align 4
  br i1 %tmp_11_2, label %ap_fixed_base.exit.3, label %5

ap_fixed_base.exit.3.critedge:                    ; preds = %ap_fixed_base.exit.1
  %phiOffSetValues_V_ad_4 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 2
  store i19 0, i19* %phiOffSetValues_V_ad_4, align 4
  br label %ap_fixed_base.exit.3

ap_fixed_base.exit.3:                             ; preds = %6, %4, %ap_fixed_base.exit.3.critedge, %_ifconv15
  %storemerge_3 = phi i19 [ 0, %ap_fixed_base.exit.3.critedge ], [ %tmp_23, %_ifconv15 ], [ %tmp_21_2_s, %6 ], [ %tmp_18_2_2, %4 ]
  %phiOffSetValues_V_ad_5 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 3
  store i19 %storemerge_3, i19* %phiOffSetValues_V_ad_5, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.5.critedge, label %_ifconv31

; <label>:4                                       ; preds = %5
  %tmp_18_2_2 = select i1 %tmp_13_2, i19 %tmp_24, i19 %p_2
  br label %ap_fixed_base.exit.3

; <label>:5                                       ; preds = %_ifconv15
  br i1 %tmp_8_2, label %4, label %6

; <label>:6                                       ; preds = %5
  %tmp_21_2_s = select i1 %tmp_15_2, i19 %tmp_25, i19 0
  br label %ap_fixed_base.exit.3

_ifconv31:                                        ; preds = %ap_fixed_base.exit.3
  %F2_4 = sub i12 1075, %tmp_7
  %tmp_8_4 = icmp sgt i12 %F2_4, 16
  %tmp_9_4 = add i12 -16, %F2_4
  %tmp_10_4 = sub i12 16, %F2_4
  %sh_amt_4 = select i1 %tmp_8_4, i12 %tmp_9_4, i12 %tmp_10_4
  %sh_amt_4_cast = sext i12 %sh_amt_4 to i32
  %tmp_11_4 = icmp eq i12 %F2_4, 16
  %tmp_27 = trunc i54 %man_V_2 to i19
  %tmp_13_4 = icmp ult i12 %sh_amt_4, 54
  %tmp_15_4 = icmp ult i12 %sh_amt_4, 19
  %tmp_16_4 = zext i32 %sh_amt_4_cast to i54
  %tmp_17_4 = ashr i54 %man_V_2, %tmp_16_4
  %tmp_28 = trunc i54 %tmp_17_4 to i19
  %p_4 = select i1 %tmp_17, i19 -1, i19 0
  %tmp_19_4 = sext i19 %tmp_27 to i32
  %tmp_20_4 = shl i32 %tmp_19_4, %sh_amt_4_cast
  %tmp_29 = trunc i32 %tmp_20_4 to i19
  %sel_tmp12 = xor i1 %tmp_11_4, true
  %sel_tmp13 = and i1 %tmp_8_4, %sel_tmp12
  %sel_tmp14 = and i1 %sel_tmp13, %tmp_13_4
  %tmp_30 = call i8 @_ssdm_op_PartSelect.i8.i12.i32.i32(i12 %F2_4, i32 4, i32 11)
  %icmp8 = icmp slt i8 %tmp_30, 1
  %sel_tmp15 = and i1 %icmp8, %tmp_15_4
  %sel_tmp16 = xor i1 %tmp_13_4, true
  %sel_tmp17 = and i1 %sel_tmp13, %sel_tmp16
  %newSel8 = select i1 %sel_tmp17, i19 %p_4, i19 %tmp_29
  %or_cond6 = or i1 %sel_tmp17, %sel_tmp15
  %newSel9 = select i1 %sel_tmp14, i19 %tmp_28, i19 %tmp_27
  %or_cond7 = or i1 %sel_tmp14, %tmp_11_4
  %newSel10 = select i1 %or_cond6, i19 %newSel8, i19 %newSel9
  %or_cond8 = or i1 %or_cond6, %or_cond7
  %newSel11 = select i1 %or_cond8, i19 %newSel10, i19 0
  %phiOffSetValues_V_ad_6 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 4
  store i19 %newSel11, i19* %phiOffSetValues_V_ad_6, align 4
  br i1 %tmp_11_4, label %ap_fixed_base.exit.5, label %8

ap_fixed_base.exit.5.critedge:                    ; preds = %ap_fixed_base.exit.3
  %phiOffSetValues_V_ad_7 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 4
  store i19 0, i19* %phiOffSetValues_V_ad_7, align 4
  br label %ap_fixed_base.exit.5

ap_fixed_base.exit.5:                             ; preds = %9, %7, %ap_fixed_base.exit.5.critedge, %_ifconv31
  %storemerge_5 = phi i19 [ 0, %ap_fixed_base.exit.5.critedge ], [ %tmp_27, %_ifconv31 ], [ %tmp_21_4_s, %9 ], [ %tmp_18_4_4, %7 ]
  %phiOffSetValues_V_ad_8 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 5
  store i19 %storemerge_5, i19* %phiOffSetValues_V_ad_8, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.7.critedge, label %_ifconv47

; <label>:7                                       ; preds = %8
  %tmp_18_4_4 = select i1 %tmp_13_4, i19 %tmp_28, i19 %p_4
  br label %ap_fixed_base.exit.5

; <label>:8                                       ; preds = %_ifconv31
  br i1 %tmp_8_4, label %7, label %9

; <label>:9                                       ; preds = %8
  %tmp_21_4_s = select i1 %tmp_15_4, i19 %tmp_29, i19 0
  br label %ap_fixed_base.exit.5

_ifconv47:                                        ; preds = %ap_fixed_base.exit.5
  %F2_6 = sub i12 1075, %tmp_7
  %tmp_8_6 = icmp sgt i12 %F2_6, 16
  %tmp_9_6 = add i12 -16, %F2_6
  %tmp_10_6 = sub i12 16, %F2_6
  %sh_amt_6 = select i1 %tmp_8_6, i12 %tmp_9_6, i12 %tmp_10_6
  %sh_amt_6_cast = sext i12 %sh_amt_6 to i32
  %tmp_11_6 = icmp eq i12 %F2_6, 16
  %tmp_31 = trunc i54 %man_V_2 to i19
  %tmp_13_6 = icmp ult i12 %sh_amt_6, 54
  %tmp_15_6 = icmp ult i12 %sh_amt_6, 19
  %tmp_16_6 = zext i32 %sh_amt_6_cast to i54
  %tmp_17_6 = ashr i54 %man_V_2, %tmp_16_6
  %tmp_32 = trunc i54 %tmp_17_6 to i19
  %p_6 = select i1 %tmp_17, i19 -1, i19 0
  %tmp_19_6 = sext i19 %tmp_31 to i32
  %tmp_20_6 = shl i32 %tmp_19_6, %sh_amt_6_cast
  %tmp_33 = trunc i32 %tmp_20_6 to i19
  %sel_tmp18 = xor i1 %tmp_11_6, true
  %sel_tmp19 = and i1 %tmp_8_6, %sel_tmp18
  %sel_tmp20 = and i1 %sel_tmp19, %tmp_13_6
  %tmp_34 = call i8 @_ssdm_op_PartSelect.i8.i12.i32.i32(i12 %F2_6, i32 4, i32 11)
  %icmp1 = icmp slt i8 %tmp_34, 1
  %sel_tmp21 = and i1 %icmp1, %tmp_15_6
  %sel_tmp22 = xor i1 %tmp_13_6, true
  %sel_tmp23 = and i1 %sel_tmp19, %sel_tmp22
  %newSel12 = select i1 %sel_tmp23, i19 %p_6, i19 %tmp_33
  %or_cond9 = or i1 %sel_tmp23, %sel_tmp21
  %newSel13 = select i1 %sel_tmp20, i19 %tmp_32, i19 %tmp_31
  %or_cond10 = or i1 %sel_tmp20, %tmp_11_6
  %newSel14 = select i1 %or_cond9, i19 %newSel12, i19 %newSel13
  %or_cond11 = or i1 %or_cond9, %or_cond10
  %newSel15 = select i1 %or_cond11, i19 %newSel14, i19 0
  %phiOffSetValues_V_ad_9 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 6
  store i19 %newSel15, i19* %phiOffSetValues_V_ad_9, align 4
  br i1 %tmp_11_6, label %ap_fixed_base.exit.7, label %11

ap_fixed_base.exit.7.critedge:                    ; preds = %ap_fixed_base.exit.5
  %phiOffSetValues_V_ad_10 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 6
  store i19 0, i19* %phiOffSetValues_V_ad_10, align 4
  br label %ap_fixed_base.exit.7

ap_fixed_base.exit.7:                             ; preds = %12, %10, %ap_fixed_base.exit.7.critedge, %_ifconv47
  %storemerge_7 = phi i19 [ 0, %ap_fixed_base.exit.7.critedge ], [ %tmp_31, %_ifconv47 ], [ %tmp_21_6_s, %12 ], [ %tmp_18_6_6, %10 ]
  %phiOffSetValues_V_ad_11 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 7
  store i19 %storemerge_7, i19* %phiOffSetValues_V_ad_11, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.9.critedge, label %14

; <label>:10                                      ; preds = %11
  %tmp_18_6_6 = select i1 %tmp_13_6, i19 %tmp_32, i19 %p_6
  br label %ap_fixed_base.exit.7

; <label>:11                                      ; preds = %_ifconv47
  br i1 %tmp_8_6, label %10, label %12

; <label>:12                                      ; preds = %11
  %tmp_21_6_s = select i1 %tmp_15_6, i19 %tmp_33, i19 0
  br label %ap_fixed_base.exit.7

ap_fixed_base.exit.8:                             ; preds = %20, %19, %18, %15, %13
  %storemerge_8 = phi i19 [ %tmp_35, %13 ], [ %tmp_37, %15 ], [ %tmp_20_8, %19 ], [ 0, %18 ], [ %p_8, %20 ]
  %phiOffSetValues_V_ad_12 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 8
  store i19 %storemerge_8, i19* %phiOffSetValues_V_ad_12, align 4
  br i1 %tmp_11_8, label %21, label %24

; <label>:13                                      ; preds = %14
  %tmp_35 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.8

; <label>:14                                      ; preds = %ap_fixed_base.exit.7
  %F2_8 = sub i12 1075, %tmp_7
  %tmp_8_8 = icmp sgt i12 %F2_8, 16
  %tmp_9_8 = add i12 %F2_8, -16
  %tmp_10_8 = sub i12 16, %F2_8
  %sh_amt_8 = select i1 %tmp_8_8, i12 %tmp_9_8, i12 %tmp_10_8
  %sh_amt_8_cast1 = sext i12 %sh_amt_8 to i19
  %sh_amt_8_cast = sext i12 %sh_amt_8 to i32
  %tmp_11_8 = icmp eq i12 %F2_8, 16
  br i1 %tmp_11_8, label %13, label %17

; <label>:15                                      ; preds = %16
  %tmp_16_8 = zext i32 %sh_amt_8_cast to i54
  %tmp_17_8 = ashr i54 %man_V_2, %tmp_16_8
  %tmp_37 = trunc i54 %tmp_17_8 to i19
  br label %ap_fixed_base.exit.8

; <label>:16                                      ; preds = %17
  %tmp_13_8 = icmp ult i12 %sh_amt_8, 54
  br i1 %tmp_13_8, label %15, label %20

; <label>:17                                      ; preds = %14
  br i1 %tmp_8_8, label %16, label %18

; <label>:18                                      ; preds = %17
  %tmp_36 = trunc i54 %man_V_2 to i19
  %tmp_15_8 = icmp ult i12 %sh_amt_8, 19
  br i1 %tmp_15_8, label %19, label %ap_fixed_base.exit.8

; <label>:19                                      ; preds = %18
  %tmp_20_8 = shl i19 %tmp_36, %sh_amt_8_cast1
  br label %ap_fixed_base.exit.8

; <label>:20                                      ; preds = %16
  %p_8 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.8

ap_fixed_base.exit.9.critedge:                    ; preds = %ap_fixed_base.exit.7
  %phiOffSetValues_V_ad_13 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 8
  store i19 0, i19* %phiOffSetValues_V_ad_13, align 4
  br label %ap_fixed_base.exit.9

ap_fixed_base.exit.9:                             ; preds = %27, %26, %25, %22, %21, %ap_fixed_base.exit.9.critedge
  %storemerge_9 = phi i19 [ %tmp_38, %21 ], [ %tmp_40, %22 ], [ %tmp_20_9, %26 ], [ 0, %25 ], [ %p_9, %27 ], [ 0, %ap_fixed_base.exit.9.critedge ]
  %phiOffSetValues_V_ad_14 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 9
  store i19 %storemerge_9, i19* %phiOffSetValues_V_ad_14, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.11.critedge, label %29

; <label>:21                                      ; preds = %ap_fixed_base.exit.8
  %tmp_38 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.9

; <label>:22                                      ; preds = %23
  %tmp_16_9 = zext i32 %sh_amt_8_cast to i54
  %tmp_17_9 = ashr i54 %man_V_2, %tmp_16_9
  %tmp_40 = trunc i54 %tmp_17_9 to i19
  br label %ap_fixed_base.exit.9

; <label>:23                                      ; preds = %24
  %tmp_13_9 = icmp ult i12 %sh_amt_8, 54
  br i1 %tmp_13_9, label %22, label %27

; <label>:24                                      ; preds = %ap_fixed_base.exit.8
  br i1 %tmp_8_8, label %23, label %25

; <label>:25                                      ; preds = %24
  %tmp_39 = trunc i54 %man_V_2 to i19
  %tmp_15_9 = icmp ult i12 %sh_amt_8, 19
  br i1 %tmp_15_9, label %26, label %ap_fixed_base.exit.9

; <label>:26                                      ; preds = %25
  %tmp_20_9 = shl i19 %tmp_39, %sh_amt_8_cast1
  br label %ap_fixed_base.exit.9

; <label>:27                                      ; preds = %23
  %p_9 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.9

ap_fixed_base.exit.10:                            ; preds = %35, %34, %33, %30, %28
  %storemerge_s = phi i19 [ %tmp_41, %28 ], [ %tmp_43, %30 ], [ %tmp_20_s, %34 ], [ 0, %33 ], [ %p_s_9, %35 ]
  %phiOffSetValues_V_ad_15 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 10
  store i19 %storemerge_s, i19* %phiOffSetValues_V_ad_15, align 4
  br i1 %tmp_11_s, label %36, label %39

; <label>:28                                      ; preds = %29
  %tmp_41 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.10

; <label>:29                                      ; preds = %ap_fixed_base.exit.9
  %F2_s = sub i12 1075, %tmp_7
  %tmp_8_s = icmp sgt i12 %F2_s, 16
  %tmp_9_s = add i12 %F2_s, -16
  %tmp_10_s = sub i12 16, %F2_s
  %sh_amt_s = select i1 %tmp_8_s, i12 %tmp_9_s, i12 %tmp_10_s
  %sh_amt_cast1 = sext i12 %sh_amt_s to i19
  %sh_amt_cast_7 = sext i12 %sh_amt_s to i32
  %tmp_11_s = icmp eq i12 %F2_s, 16
  br i1 %tmp_11_s, label %28, label %32

; <label>:30                                      ; preds = %31
  %tmp_16_s = zext i32 %sh_amt_cast_7 to i54
  %tmp_17_s_8 = ashr i54 %man_V_2, %tmp_16_s
  %tmp_43 = trunc i54 %tmp_17_s_8 to i19
  br label %ap_fixed_base.exit.10

; <label>:31                                      ; preds = %32
  %tmp_13_s = icmp ult i12 %sh_amt_s, 54
  br i1 %tmp_13_s, label %30, label %35

; <label>:32                                      ; preds = %29
  br i1 %tmp_8_s, label %31, label %33

; <label>:33                                      ; preds = %32
  %tmp_42 = trunc i54 %man_V_2 to i19
  %tmp_15_s = icmp ult i12 %sh_amt_s, 19
  br i1 %tmp_15_s, label %34, label %ap_fixed_base.exit.10

; <label>:34                                      ; preds = %33
  %tmp_20_s = shl i19 %tmp_42, %sh_amt_cast1
  br label %ap_fixed_base.exit.10

; <label>:35                                      ; preds = %31
  %p_s_9 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.10

ap_fixed_base.exit.11.critedge:                   ; preds = %ap_fixed_base.exit.9
  %phiOffSetValues_V_ad_16 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 10
  store i19 0, i19* %phiOffSetValues_V_ad_16, align 4
  br label %ap_fixed_base.exit.11

ap_fixed_base.exit.11:                            ; preds = %42, %41, %40, %37, %36, %ap_fixed_base.exit.11.critedge
  %storemerge_2 = phi i19 [ %tmp_44, %36 ], [ %tmp_46, %37 ], [ %tmp_20_3, %41 ], [ 0, %40 ], [ %p_1, %42 ], [ 0, %ap_fixed_base.exit.11.critedge ]
  %phiOffSetValues_V_ad_17 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 11
  store i19 %storemerge_2, i19* %phiOffSetValues_V_ad_17, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.13.critedge, label %44

; <label>:36                                      ; preds = %ap_fixed_base.exit.10
  %tmp_44 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.11

; <label>:37                                      ; preds = %38
  %tmp_16_1 = zext i32 %sh_amt_cast_7 to i54
  %tmp_17_1 = ashr i54 %man_V_2, %tmp_16_1
  %tmp_46 = trunc i54 %tmp_17_1 to i19
  br label %ap_fixed_base.exit.11

; <label>:38                                      ; preds = %39
  %tmp_13_1 = icmp ult i12 %sh_amt_s, 54
  br i1 %tmp_13_1, label %37, label %42

; <label>:39                                      ; preds = %ap_fixed_base.exit.10
  br i1 %tmp_8_s, label %38, label %40

; <label>:40                                      ; preds = %39
  %tmp_45 = trunc i54 %man_V_2 to i19
  %tmp_15_1 = icmp ult i12 %sh_amt_s, 19
  br i1 %tmp_15_1, label %41, label %ap_fixed_base.exit.11

; <label>:41                                      ; preds = %40
  %tmp_20_3 = shl i19 %tmp_45, %sh_amt_cast1
  br label %ap_fixed_base.exit.11

; <label>:42                                      ; preds = %38
  %p_1 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.11

ap_fixed_base.exit.12:                            ; preds = %50, %49, %48, %45, %43
  %storemerge_4 = phi i19 [ %tmp_47, %43 ], [ %tmp_49, %45 ], [ %tmp_20_5, %49 ], [ 0, %48 ], [ %p_3, %50 ]
  %phiOffSetValues_V_ad_18 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 12
  store i19 %storemerge_4, i19* %phiOffSetValues_V_ad_18, align 4
  br i1 %tmp_11_3, label %51, label %54

; <label>:43                                      ; preds = %44
  %tmp_47 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.12

; <label>:44                                      ; preds = %ap_fixed_base.exit.11
  %F2_3 = sub i12 1075, %tmp_7
  %tmp_8_3 = icmp sgt i12 %F2_3, 16
  %tmp_9_3 = add i12 %F2_3, -16
  %tmp_10_3 = sub i12 16, %F2_3
  %sh_amt_3 = select i1 %tmp_8_3, i12 %tmp_9_3, i12 %tmp_10_3
  %sh_amt_3_cast1 = sext i12 %sh_amt_3 to i19
  %sh_amt_3_cast = sext i12 %sh_amt_3 to i32
  %tmp_11_3 = icmp eq i12 %F2_3, 16
  br i1 %tmp_11_3, label %43, label %47

; <label>:45                                      ; preds = %46
  %tmp_16_3 = zext i32 %sh_amt_3_cast to i54
  %tmp_17_3 = ashr i54 %man_V_2, %tmp_16_3
  %tmp_49 = trunc i54 %tmp_17_3 to i19
  br label %ap_fixed_base.exit.12

; <label>:46                                      ; preds = %47
  %tmp_13_3 = icmp ult i12 %sh_amt_3, 54
  br i1 %tmp_13_3, label %45, label %50

; <label>:47                                      ; preds = %44
  br i1 %tmp_8_3, label %46, label %48

; <label>:48                                      ; preds = %47
  %tmp_48 = trunc i54 %man_V_2 to i19
  %tmp_15_3 = icmp ult i12 %sh_amt_3, 19
  br i1 %tmp_15_3, label %49, label %ap_fixed_base.exit.12

; <label>:49                                      ; preds = %48
  %tmp_20_5 = shl i19 %tmp_48, %sh_amt_3_cast1
  br label %ap_fixed_base.exit.12

; <label>:50                                      ; preds = %46
  %p_3 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.12

ap_fixed_base.exit.13.critedge:                   ; preds = %ap_fixed_base.exit.11
  %phiOffSetValues_V_ad_19 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 12
  store i19 0, i19* %phiOffSetValues_V_ad_19, align 4
  br label %ap_fixed_base.exit.13

ap_fixed_base.exit.13:                            ; preds = %57, %56, %55, %52, %51, %ap_fixed_base.exit.13.critedge
  %storemerge_6 = phi i19 [ %tmp_50, %51 ], [ %tmp_52, %52 ], [ %tmp_20_7, %56 ], [ 0, %55 ], [ %p_5, %57 ], [ 0, %ap_fixed_base.exit.13.critedge ]
  %phiOffSetValues_V_ad_20 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 13
  store i19 %storemerge_6, i19* %phiOffSetValues_V_ad_20, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.15.critedge, label %59

; <label>:51                                      ; preds = %ap_fixed_base.exit.12
  %tmp_50 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.13

; <label>:52                                      ; preds = %53
  %tmp_16_5 = zext i32 %sh_amt_3_cast to i54
  %tmp_17_5 = ashr i54 %man_V_2, %tmp_16_5
  %tmp_52 = trunc i54 %tmp_17_5 to i19
  br label %ap_fixed_base.exit.13

; <label>:53                                      ; preds = %54
  %tmp_13_5 = icmp ult i12 %sh_amt_3, 54
  br i1 %tmp_13_5, label %52, label %57

; <label>:54                                      ; preds = %ap_fixed_base.exit.12
  br i1 %tmp_8_3, label %53, label %55

; <label>:55                                      ; preds = %54
  %tmp_51 = trunc i54 %man_V_2 to i19
  %tmp_15_5 = icmp ult i12 %sh_amt_3, 19
  br i1 %tmp_15_5, label %56, label %ap_fixed_base.exit.13

; <label>:56                                      ; preds = %55
  %tmp_20_7 = shl i19 %tmp_51, %sh_amt_3_cast1
  br label %ap_fixed_base.exit.13

; <label>:57                                      ; preds = %53
  %p_5 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.13

ap_fixed_base.exit.14:                            ; preds = %65, %64, %63, %60, %58
  %storemerge_10 = phi i19 [ %tmp_53, %58 ], [ %tmp_55, %60 ], [ %tmp_20_10, %64 ], [ 0, %63 ], [ %p_7, %65 ]
  %phiOffSetValues_V_ad_21 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 14
  store i19 %storemerge_10, i19* %phiOffSetValues_V_ad_21, align 4
  br i1 %tmp_11_7, label %66, label %69

; <label>:58                                      ; preds = %59
  %tmp_53 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.14

; <label>:59                                      ; preds = %ap_fixed_base.exit.13
  %F2_7 = sub i12 1075, %tmp_7
  %tmp_8_7 = icmp sgt i12 %F2_7, 16
  %tmp_9_7 = add i12 %F2_7, -16
  %tmp_10_7 = sub i12 16, %F2_7
  %sh_amt_7 = select i1 %tmp_8_7, i12 %tmp_9_7, i12 %tmp_10_7
  %sh_amt_10_cast1 = sext i12 %sh_amt_7 to i19
  %sh_amt_10_cast = sext i12 %sh_amt_7 to i32
  %tmp_11_7 = icmp eq i12 %F2_7, 16
  br i1 %tmp_11_7, label %58, label %62

; <label>:60                                      ; preds = %61
  %tmp_16_7 = zext i32 %sh_amt_10_cast to i54
  %tmp_17_7 = ashr i54 %man_V_2, %tmp_16_7
  %tmp_55 = trunc i54 %tmp_17_7 to i19
  br label %ap_fixed_base.exit.14

; <label>:61                                      ; preds = %62
  %tmp_13_7 = icmp ult i12 %sh_amt_7, 54
  br i1 %tmp_13_7, label %60, label %65

; <label>:62                                      ; preds = %59
  br i1 %tmp_8_7, label %61, label %63

; <label>:63                                      ; preds = %62
  %tmp_54 = trunc i54 %man_V_2 to i19
  %tmp_15_7 = icmp ult i12 %sh_amt_7, 19
  br i1 %tmp_15_7, label %64, label %ap_fixed_base.exit.14

; <label>:64                                      ; preds = %63
  %tmp_20_10 = shl i19 %tmp_54, %sh_amt_10_cast1
  br label %ap_fixed_base.exit.14

; <label>:65                                      ; preds = %61
  %p_7 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.14

ap_fixed_base.exit.15.critedge:                   ; preds = %ap_fixed_base.exit.13
  %phiOffSetValues_V_ad_22 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 14
  store i19 0, i19* %phiOffSetValues_V_ad_22, align 4
  br label %ap_fixed_base.exit.15

ap_fixed_base.exit.15:                            ; preds = %72, %71, %70, %67, %66, %ap_fixed_base.exit.15.critedge
  %storemerge_11 = phi i19 [ %tmp_56, %66 ], [ %tmp_58, %67 ], [ %tmp_20_11, %71 ], [ 0, %70 ], [ %p_10, %72 ], [ 0, %ap_fixed_base.exit.15.critedge ]
  %phiOffSetValues_V_ad_23 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 15
  store i19 %storemerge_11, i19* %phiOffSetValues_V_ad_23, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.17.critedge, label %74

; <label>:66                                      ; preds = %ap_fixed_base.exit.14
  %tmp_56 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.15

; <label>:67                                      ; preds = %68
  %tmp_16_10 = zext i32 %sh_amt_10_cast to i54
  %tmp_17_10 = ashr i54 %man_V_2, %tmp_16_10
  %tmp_58 = trunc i54 %tmp_17_10 to i19
  br label %ap_fixed_base.exit.15

; <label>:68                                      ; preds = %69
  %tmp_13_10 = icmp ult i12 %sh_amt_7, 54
  br i1 %tmp_13_10, label %67, label %72

; <label>:69                                      ; preds = %ap_fixed_base.exit.14
  br i1 %tmp_8_7, label %68, label %70

; <label>:70                                      ; preds = %69
  %tmp_57 = trunc i54 %man_V_2 to i19
  %tmp_15_10 = icmp ult i12 %sh_amt_7, 19
  br i1 %tmp_15_10, label %71, label %ap_fixed_base.exit.15

; <label>:71                                      ; preds = %70
  %tmp_20_11 = shl i19 %tmp_57, %sh_amt_10_cast1
  br label %ap_fixed_base.exit.15

; <label>:72                                      ; preds = %68
  %p_10 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.15

ap_fixed_base.exit.16:                            ; preds = %80, %79, %78, %75, %73
  %storemerge_12 = phi i19 [ %tmp_59, %73 ], [ %tmp_61, %75 ], [ %tmp_20_12, %79 ], [ 0, %78 ], [ %p_11, %80 ]
  %phiOffSetValues_V_ad_24 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 16
  store i19 %storemerge_12, i19* %phiOffSetValues_V_ad_24, align 4
  br i1 %tmp_11_9, label %81, label %84

; <label>:73                                      ; preds = %74
  %tmp_59 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.16

; <label>:74                                      ; preds = %ap_fixed_base.exit.15
  %F2_9 = sub i12 1075, %tmp_7
  %tmp_8_9 = icmp sgt i12 %F2_9, 16
  %tmp_9_9 = add i12 %F2_9, -16
  %tmp_10_9 = sub i12 16, %F2_9
  %sh_amt_9 = select i1 %tmp_8_9, i12 %tmp_9_9, i12 %tmp_10_9
  %sh_amt_12_cast1 = sext i12 %sh_amt_9 to i19
  %sh_amt_12_cast = sext i12 %sh_amt_9 to i32
  %tmp_11_9 = icmp eq i12 %F2_9, 16
  br i1 %tmp_11_9, label %73, label %77

; <label>:75                                      ; preds = %76
  %tmp_16_11 = zext i32 %sh_amt_12_cast to i54
  %tmp_17_11 = ashr i54 %man_V_2, %tmp_16_11
  %tmp_61 = trunc i54 %tmp_17_11 to i19
  br label %ap_fixed_base.exit.16

; <label>:76                                      ; preds = %77
  %tmp_13_11 = icmp ult i12 %sh_amt_9, 54
  br i1 %tmp_13_11, label %75, label %80

; <label>:77                                      ; preds = %74
  br i1 %tmp_8_9, label %76, label %78

; <label>:78                                      ; preds = %77
  %tmp_60 = trunc i54 %man_V_2 to i19
  %tmp_15_11 = icmp ult i12 %sh_amt_9, 19
  br i1 %tmp_15_11, label %79, label %ap_fixed_base.exit.16

; <label>:79                                      ; preds = %78
  %tmp_20_12 = shl i19 %tmp_60, %sh_amt_12_cast1
  br label %ap_fixed_base.exit.16

; <label>:80                                      ; preds = %76
  %p_11 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.16

ap_fixed_base.exit.17.critedge:                   ; preds = %ap_fixed_base.exit.15
  %phiOffSetValues_V_ad_25 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 16
  store i19 0, i19* %phiOffSetValues_V_ad_25, align 4
  br label %ap_fixed_base.exit.17

ap_fixed_base.exit.17:                            ; preds = %87, %86, %85, %82, %81, %ap_fixed_base.exit.17.critedge
  %storemerge_13 = phi i19 [ %tmp_62, %81 ], [ %tmp_64, %82 ], [ %tmp_20_13, %86 ], [ 0, %85 ], [ %p_12, %87 ], [ 0, %ap_fixed_base.exit.17.critedge ]
  %phiOffSetValues_V_ad_26 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 17
  store i19 %storemerge_13, i19* %phiOffSetValues_V_ad_26, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.19.critedge, label %89

; <label>:81                                      ; preds = %ap_fixed_base.exit.16
  %tmp_62 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.17

; <label>:82                                      ; preds = %83
  %tmp_16_12 = zext i32 %sh_amt_12_cast to i54
  %tmp_17_12 = ashr i54 %man_V_2, %tmp_16_12
  %tmp_64 = trunc i54 %tmp_17_12 to i19
  br label %ap_fixed_base.exit.17

; <label>:83                                      ; preds = %84
  %tmp_13_12 = icmp ult i12 %sh_amt_9, 54
  br i1 %tmp_13_12, label %82, label %87

; <label>:84                                      ; preds = %ap_fixed_base.exit.16
  br i1 %tmp_8_9, label %83, label %85

; <label>:85                                      ; preds = %84
  %tmp_63 = trunc i54 %man_V_2 to i19
  %tmp_15_12 = icmp ult i12 %sh_amt_9, 19
  br i1 %tmp_15_12, label %86, label %ap_fixed_base.exit.17

; <label>:86                                      ; preds = %85
  %tmp_20_13 = shl i19 %tmp_63, %sh_amt_12_cast1
  br label %ap_fixed_base.exit.17

; <label>:87                                      ; preds = %83
  %p_12 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.17

ap_fixed_base.exit.18:                            ; preds = %95, %94, %93, %90, %88
  %storemerge_14 = phi i19 [ %tmp_65, %88 ], [ %tmp_67, %90 ], [ %tmp_20_14, %94 ], [ 0, %93 ], [ %p_13, %95 ]
  %phiOffSetValues_V_ad_27 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 18
  store i19 %storemerge_14, i19* %phiOffSetValues_V_ad_27, align 4
  br i1 %tmp_11_1, label %96, label %99

; <label>:88                                      ; preds = %89
  %tmp_65 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.18

; <label>:89                                      ; preds = %ap_fixed_base.exit.17
  %F2_1 = sub i12 1075, %tmp_7
  %tmp_8_1 = icmp sgt i12 %F2_1, 16
  %tmp_9_1 = add i12 %F2_1, -16
  %tmp_10_1 = sub i12 16, %F2_1
  %sh_amt_1 = select i1 %tmp_8_1, i12 %tmp_9_1, i12 %tmp_10_1
  %sh_amt_14_cast1 = sext i12 %sh_amt_1 to i19
  %sh_amt_14_cast = sext i12 %sh_amt_1 to i32
  %tmp_11_1 = icmp eq i12 %F2_1, 16
  br i1 %tmp_11_1, label %88, label %92

; <label>:90                                      ; preds = %91
  %tmp_16_13 = zext i32 %sh_amt_14_cast to i54
  %tmp_17_13 = ashr i54 %man_V_2, %tmp_16_13
  %tmp_67 = trunc i54 %tmp_17_13 to i19
  br label %ap_fixed_base.exit.18

; <label>:91                                      ; preds = %92
  %tmp_13_13 = icmp ult i12 %sh_amt_1, 54
  br i1 %tmp_13_13, label %90, label %95

; <label>:92                                      ; preds = %89
  br i1 %tmp_8_1, label %91, label %93

; <label>:93                                      ; preds = %92
  %tmp_66 = trunc i54 %man_V_2 to i19
  %tmp_15_13 = icmp ult i12 %sh_amt_1, 19
  br i1 %tmp_15_13, label %94, label %ap_fixed_base.exit.18

; <label>:94                                      ; preds = %93
  %tmp_20_14 = shl i19 %tmp_66, %sh_amt_14_cast1
  br label %ap_fixed_base.exit.18

; <label>:95                                      ; preds = %91
  %p_13 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.18

ap_fixed_base.exit.19.critedge:                   ; preds = %ap_fixed_base.exit.17
  %phiOffSetValues_V_ad_28 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 18
  store i19 0, i19* %phiOffSetValues_V_ad_28, align 4
  br label %ap_fixed_base.exit.19

ap_fixed_base.exit.19:                            ; preds = %102, %101, %100, %97, %96, %ap_fixed_base.exit.19.critedge
  %storemerge_15 = phi i19 [ %tmp_68, %96 ], [ %tmp_70, %97 ], [ %tmp_20_15, %101 ], [ 0, %100 ], [ %p_14, %102 ], [ 0, %ap_fixed_base.exit.19.critedge ]
  %phiOffSetValues_V_ad_29 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 19
  store i19 %storemerge_15, i19* %phiOffSetValues_V_ad_29, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.21.critedge, label %104

; <label>:96                                      ; preds = %ap_fixed_base.exit.18
  %tmp_68 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.19

; <label>:97                                      ; preds = %98
  %tmp_16_14 = zext i32 %sh_amt_14_cast to i54
  %tmp_17_14 = ashr i54 %man_V_2, %tmp_16_14
  %tmp_70 = trunc i54 %tmp_17_14 to i19
  br label %ap_fixed_base.exit.19

; <label>:98                                      ; preds = %99
  %tmp_13_14 = icmp ult i12 %sh_amt_1, 54
  br i1 %tmp_13_14, label %97, label %102

; <label>:99                                      ; preds = %ap_fixed_base.exit.18
  br i1 %tmp_8_1, label %98, label %100

; <label>:100                                     ; preds = %99
  %tmp_69 = trunc i54 %man_V_2 to i19
  %tmp_15_14 = icmp ult i12 %sh_amt_1, 19
  br i1 %tmp_15_14, label %101, label %ap_fixed_base.exit.19

; <label>:101                                     ; preds = %100
  %tmp_20_15 = shl i19 %tmp_69, %sh_amt_14_cast1
  br label %ap_fixed_base.exit.19

; <label>:102                                     ; preds = %98
  %p_14 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.19

ap_fixed_base.exit.20:                            ; preds = %110, %109, %108, %105, %103
  %storemerge_16 = phi i19 [ %tmp_71, %103 ], [ %tmp_73, %105 ], [ %tmp_20_16, %109 ], [ 0, %108 ], [ %p_15, %110 ]
  %phiOffSetValues_V_ad_30 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 20
  store i19 %storemerge_16, i19* %phiOffSetValues_V_ad_30, align 4
  br i1 %tmp_11_5, label %111, label %114

; <label>:103                                     ; preds = %104
  %tmp_71 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.20

; <label>:104                                     ; preds = %ap_fixed_base.exit.19
  %F2_5 = sub i12 1075, %tmp_7
  %tmp_8_5 = icmp sgt i12 %F2_5, 16
  %tmp_9_5 = add i12 %F2_5, -16
  %tmp_10_5 = sub i12 16, %F2_5
  %sh_amt_5 = select i1 %tmp_8_5, i12 %tmp_9_5, i12 %tmp_10_5
  %sh_amt_16_cast1 = sext i12 %sh_amt_5 to i19
  %sh_amt_16_cast = sext i12 %sh_amt_5 to i32
  %tmp_11_5 = icmp eq i12 %F2_5, 16
  br i1 %tmp_11_5, label %103, label %107

; <label>:105                                     ; preds = %106
  %tmp_16_15 = zext i32 %sh_amt_16_cast to i54
  %tmp_17_15 = ashr i54 %man_V_2, %tmp_16_15
  %tmp_73 = trunc i54 %tmp_17_15 to i19
  br label %ap_fixed_base.exit.20

; <label>:106                                     ; preds = %107
  %tmp_13_15 = icmp ult i12 %sh_amt_5, 54
  br i1 %tmp_13_15, label %105, label %110

; <label>:107                                     ; preds = %104
  br i1 %tmp_8_5, label %106, label %108

; <label>:108                                     ; preds = %107
  %tmp_72 = trunc i54 %man_V_2 to i19
  %tmp_15_15 = icmp ult i12 %sh_amt_5, 19
  br i1 %tmp_15_15, label %109, label %ap_fixed_base.exit.20

; <label>:109                                     ; preds = %108
  %tmp_20_16 = shl i19 %tmp_72, %sh_amt_16_cast1
  br label %ap_fixed_base.exit.20

; <label>:110                                     ; preds = %106
  %p_15 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.20

ap_fixed_base.exit.21.critedge:                   ; preds = %ap_fixed_base.exit.19
  %phiOffSetValues_V_ad_31 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 20
  store i19 0, i19* %phiOffSetValues_V_ad_31, align 4
  br label %ap_fixed_base.exit.21

ap_fixed_base.exit.21:                            ; preds = %117, %116, %115, %112, %111, %ap_fixed_base.exit.21.critedge
  %storemerge_17 = phi i19 [ %tmp_74, %111 ], [ %tmp_76, %112 ], [ %tmp_20_17, %116 ], [ 0, %115 ], [ %p_16, %117 ], [ 0, %ap_fixed_base.exit.21.critedge ]
  %phiOffSetValues_V_ad_32 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 21
  store i19 %storemerge_17, i19* %phiOffSetValues_V_ad_32, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.23.critedge, label %119

; <label>:111                                     ; preds = %ap_fixed_base.exit.20
  %tmp_74 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.21

; <label>:112                                     ; preds = %113
  %tmp_16_16 = zext i32 %sh_amt_16_cast to i54
  %tmp_17_16 = ashr i54 %man_V_2, %tmp_16_16
  %tmp_76 = trunc i54 %tmp_17_16 to i19
  br label %ap_fixed_base.exit.21

; <label>:113                                     ; preds = %114
  %tmp_13_16 = icmp ult i12 %sh_amt_5, 54
  br i1 %tmp_13_16, label %112, label %117

; <label>:114                                     ; preds = %ap_fixed_base.exit.20
  br i1 %tmp_8_5, label %113, label %115

; <label>:115                                     ; preds = %114
  %tmp_75 = trunc i54 %man_V_2 to i19
  %tmp_15_16 = icmp ult i12 %sh_amt_5, 19
  br i1 %tmp_15_16, label %116, label %ap_fixed_base.exit.21

; <label>:116                                     ; preds = %115
  %tmp_20_17 = shl i19 %tmp_75, %sh_amt_16_cast1
  br label %ap_fixed_base.exit.21

; <label>:117                                     ; preds = %113
  %p_16 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.21

ap_fixed_base.exit.22:                            ; preds = %125, %124, %123, %120, %118
  %storemerge_18 = phi i19 [ %tmp_77, %118 ], [ %tmp_79, %120 ], [ %tmp_20_18, %124 ], [ 0, %123 ], [ %p_17, %125 ]
  %phiOffSetValues_V_ad_33 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 22
  store i19 %storemerge_18, i19* %phiOffSetValues_V_ad_33, align 4
  br i1 %tmp_11_10, label %126, label %129

; <label>:118                                     ; preds = %119
  %tmp_77 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.22

; <label>:119                                     ; preds = %ap_fixed_base.exit.21
  %F2_10 = sub i12 1075, %tmp_7
  %tmp_8_10 = icmp sgt i12 %F2_10, 16
  %tmp_9_10 = add i12 %F2_10, -16
  %tmp_10_10 = sub i12 16, %F2_10
  %sh_amt_10 = select i1 %tmp_8_10, i12 %tmp_9_10, i12 %tmp_10_10
  %sh_amt_18_cast1 = sext i12 %sh_amt_10 to i19
  %sh_amt_18_cast = sext i12 %sh_amt_10 to i32
  %tmp_11_10 = icmp eq i12 %F2_10, 16
  br i1 %tmp_11_10, label %118, label %122

; <label>:120                                     ; preds = %121
  %tmp_16_17 = zext i32 %sh_amt_18_cast to i54
  %tmp_17_17 = ashr i54 %man_V_2, %tmp_16_17
  %tmp_79 = trunc i54 %tmp_17_17 to i19
  br label %ap_fixed_base.exit.22

; <label>:121                                     ; preds = %122
  %tmp_13_17 = icmp ult i12 %sh_amt_10, 54
  br i1 %tmp_13_17, label %120, label %125

; <label>:122                                     ; preds = %119
  br i1 %tmp_8_10, label %121, label %123

; <label>:123                                     ; preds = %122
  %tmp_78 = trunc i54 %man_V_2 to i19
  %tmp_15_17 = icmp ult i12 %sh_amt_10, 19
  br i1 %tmp_15_17, label %124, label %ap_fixed_base.exit.22

; <label>:124                                     ; preds = %123
  %tmp_20_18 = shl i19 %tmp_78, %sh_amt_18_cast1
  br label %ap_fixed_base.exit.22

; <label>:125                                     ; preds = %121
  %p_17 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.22

ap_fixed_base.exit.23.critedge:                   ; preds = %ap_fixed_base.exit.21
  %phiOffSetValues_V_ad_34 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 22
  store i19 0, i19* %phiOffSetValues_V_ad_34, align 4
  br label %ap_fixed_base.exit.23

ap_fixed_base.exit.23:                            ; preds = %132, %131, %130, %127, %126, %ap_fixed_base.exit.23.critedge
  %storemerge_19 = phi i19 [ %tmp_80, %126 ], [ %tmp_82, %127 ], [ %tmp_20_19, %131 ], [ 0, %130 ], [ %p_18, %132 ], [ 0, %ap_fixed_base.exit.23.critedge ]
  %phiOffSetValues_V_ad_35 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 23
  store i19 %storemerge_19, i19* %phiOffSetValues_V_ad_35, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.25.critedge, label %134

; <label>:126                                     ; preds = %ap_fixed_base.exit.22
  %tmp_80 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.23

; <label>:127                                     ; preds = %128
  %tmp_16_18 = zext i32 %sh_amt_18_cast to i54
  %tmp_17_18 = ashr i54 %man_V_2, %tmp_16_18
  %tmp_82 = trunc i54 %tmp_17_18 to i19
  br label %ap_fixed_base.exit.23

; <label>:128                                     ; preds = %129
  %tmp_13_18 = icmp ult i12 %sh_amt_10, 54
  br i1 %tmp_13_18, label %127, label %132

; <label>:129                                     ; preds = %ap_fixed_base.exit.22
  br i1 %tmp_8_10, label %128, label %130

; <label>:130                                     ; preds = %129
  %tmp_81 = trunc i54 %man_V_2 to i19
  %tmp_15_18 = icmp ult i12 %sh_amt_10, 19
  br i1 %tmp_15_18, label %131, label %ap_fixed_base.exit.23

; <label>:131                                     ; preds = %130
  %tmp_20_19 = shl i19 %tmp_81, %sh_amt_18_cast1
  br label %ap_fixed_base.exit.23

; <label>:132                                     ; preds = %128
  %p_18 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.23

ap_fixed_base.exit.24:                            ; preds = %140, %139, %138, %135, %133
  %storemerge_20 = phi i19 [ %tmp_83, %133 ], [ %tmp_85, %135 ], [ %tmp_20_20, %139 ], [ 0, %138 ], [ %p_19, %140 ]
  %phiOffSetValues_V_ad_36 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 24
  store i19 %storemerge_20, i19* %phiOffSetValues_V_ad_36, align 4
  br i1 %tmp_11_11, label %141, label %144

; <label>:133                                     ; preds = %134
  %tmp_83 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.24

; <label>:134                                     ; preds = %ap_fixed_base.exit.23
  %F2_11 = sub i12 1075, %tmp_7
  %tmp_8_11 = icmp sgt i12 %F2_11, 16
  %tmp_9_11 = add i12 %F2_11, -16
  %tmp_10_11 = sub i12 16, %F2_11
  %sh_amt_11 = select i1 %tmp_8_11, i12 %tmp_9_11, i12 %tmp_10_11
  %sh_amt_20_cast1 = sext i12 %sh_amt_11 to i19
  %sh_amt_20_cast = sext i12 %sh_amt_11 to i32
  %tmp_11_11 = icmp eq i12 %F2_11, 16
  br i1 %tmp_11_11, label %133, label %137

; <label>:135                                     ; preds = %136
  %tmp_16_19 = zext i32 %sh_amt_20_cast to i54
  %tmp_17_19 = ashr i54 %man_V_2, %tmp_16_19
  %tmp_85 = trunc i54 %tmp_17_19 to i19
  br label %ap_fixed_base.exit.24

; <label>:136                                     ; preds = %137
  %tmp_13_19 = icmp ult i12 %sh_amt_11, 54
  br i1 %tmp_13_19, label %135, label %140

; <label>:137                                     ; preds = %134
  br i1 %tmp_8_11, label %136, label %138

; <label>:138                                     ; preds = %137
  %tmp_84 = trunc i54 %man_V_2 to i19
  %tmp_15_19 = icmp ult i12 %sh_amt_11, 19
  br i1 %tmp_15_19, label %139, label %ap_fixed_base.exit.24

; <label>:139                                     ; preds = %138
  %tmp_20_20 = shl i19 %tmp_84, %sh_amt_20_cast1
  br label %ap_fixed_base.exit.24

; <label>:140                                     ; preds = %136
  %p_19 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.24

ap_fixed_base.exit.25.critedge:                   ; preds = %ap_fixed_base.exit.23
  %phiOffSetValues_V_ad_37 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 24
  store i19 0, i19* %phiOffSetValues_V_ad_37, align 4
  br label %ap_fixed_base.exit.25

ap_fixed_base.exit.25:                            ; preds = %147, %146, %145, %142, %141, %ap_fixed_base.exit.25.critedge
  %storemerge_21 = phi i19 [ %tmp_86, %141 ], [ %tmp_88, %142 ], [ %tmp_20_21, %146 ], [ 0, %145 ], [ %p_20, %147 ], [ 0, %ap_fixed_base.exit.25.critedge ]
  %phiOffSetValues_V_ad_38 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 25
  store i19 %storemerge_21, i19* %phiOffSetValues_V_ad_38, align 4
  br i1 %tmp_1, label %ap_fixed_base.exit.26, label %149

; <label>:141                                     ; preds = %ap_fixed_base.exit.24
  %tmp_86 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.25

; <label>:142                                     ; preds = %143
  %tmp_16_20 = zext i32 %sh_amt_20_cast to i54
  %tmp_17_20 = ashr i54 %man_V_2, %tmp_16_20
  %tmp_88 = trunc i54 %tmp_17_20 to i19
  br label %ap_fixed_base.exit.25

; <label>:143                                     ; preds = %144
  %tmp_13_20 = icmp ult i12 %sh_amt_11, 54
  br i1 %tmp_13_20, label %142, label %147

; <label>:144                                     ; preds = %ap_fixed_base.exit.24
  br i1 %tmp_8_11, label %143, label %145

; <label>:145                                     ; preds = %144
  %tmp_87 = trunc i54 %man_V_2 to i19
  %tmp_15_20 = icmp ult i12 %sh_amt_11, 19
  br i1 %tmp_15_20, label %146, label %ap_fixed_base.exit.25

; <label>:146                                     ; preds = %145
  %tmp_20_21 = shl i19 %tmp_87, %sh_amt_20_cast1
  br label %ap_fixed_base.exit.25

; <label>:147                                     ; preds = %143
  %p_20 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.25

ap_fixed_base.exit.26:                            ; preds = %155, %154, %153, %150, %148, %ap_fixed_base.exit.25
  %storemerge_22 = phi i19 [ 0, %ap_fixed_base.exit.25 ], [ %tmp_89, %148 ], [ %tmp_91, %150 ], [ %tmp_20_22, %154 ], [ 0, %153 ], [ %p_21, %155 ]
  %phiOffSetValues_V_ad_39 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 26
  store i19 %storemerge_22, i19* %phiOffSetValues_V_ad_39, align 4
  %tmp_4 = sext i33 %sector_V_read to i64
  %phiOffSetValues_V_ad_40 = getelementptr [27 x i19]* %phiOffSetValues_V, i64 0, i64 %tmp_4
  %phiOffSetValues_V_lo = load i19* %phiOffSetValues_V_ad_40, align 4
  call void @_ssdm_op_Write.ap_auto.i19P(i19* %result_V, i19 %phiOffSetValues_V_lo)
  ret void

; <label>:148                                     ; preds = %149
  %tmp_89 = trunc i54 %man_V_2 to i19
  br label %ap_fixed_base.exit.26

; <label>:149                                     ; preds = %ap_fixed_base.exit.25
  %F2_12 = sub i12 1075, %tmp_7
  %tmp_8_12 = icmp sgt i12 %F2_12, 16
  %tmp_9_12 = add i12 %F2_12, -16
  %tmp_10_12 = sub i12 16, %F2_12
  %sh_amt_12 = select i1 %tmp_8_12, i12 %tmp_9_12, i12 %tmp_10_12
  %sh_amt_22_cast1 = sext i12 %sh_amt_12 to i19
  %sh_amt_22_cast = sext i12 %sh_amt_12 to i32
  %tmp_11_12 = icmp eq i12 %F2_12, 16
  br i1 %tmp_11_12, label %148, label %152

; <label>:150                                     ; preds = %151
  %tmp_16_21 = zext i32 %sh_amt_22_cast to i54
  %tmp_17_21 = ashr i54 %man_V_2, %tmp_16_21
  %tmp_91 = trunc i54 %tmp_17_21 to i19
  br label %ap_fixed_base.exit.26

; <label>:151                                     ; preds = %152
  %tmp_13_21 = icmp ult i12 %sh_amt_12, 54
  br i1 %tmp_13_21, label %150, label %155

; <label>:152                                     ; preds = %149
  br i1 %tmp_8_12, label %151, label %153

; <label>:153                                     ; preds = %152
  %tmp_90 = trunc i54 %man_V_2 to i19
  %tmp_15_21 = icmp ult i12 %sh_amt_12, 19
  br i1 %tmp_15_21, label %154, label %ap_fixed_base.exit.26

; <label>:154                                     ; preds = %153
  %tmp_20_22 = shl i19 %tmp_90, %sh_amt_22_cast1
  br label %ap_fixed_base.exit.26

; <label>:155                                     ; preds = %151
  %p_21 = select i1 %tmp_17, i19 -1, i19 0
  br label %ap_fixed_base.exit.26
}

declare i64 @llvm.part.select.i64(i64, i32, i32) nounwind readnone

declare i12 @llvm.part.select.i12(i12, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define weak void @_ssdm_op_Write.ap_auto.i19P(i19*, i19) {
entry:
  store i19 %1, i19* %0
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

define weak i33 @_ssdm_op_Read.ap_auto.i33(i33) {
entry:
  ret i33 %0
}

define weak i8 @_ssdm_op_PartSelect.i8.i12.i32.i32(i12, i32, i32) nounwind readnone {
entry:
  %empty = call i12 @llvm.part.select.i12(i12 %0, i32 %1, i32 %2)
  %empty_10 = trunc i12 %empty to i8
  ret i8 %empty_10
}

declare i63 @_ssdm_op_PartSelect.i63.i64.i32.i32(i64, i32, i32) nounwind readnone

declare i52 @_ssdm_op_PartSelect.i52.i64.i32.i32(i64, i32, i32) nounwind readnone

declare i19 @_ssdm_op_PartSelect.i19.i54.i32.i32(i54, i32, i32) nounwind readnone

declare i19 @_ssdm_op_PartSelect.i19.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_11 = trunc i64 %empty to i11
  ret i11 %empty_11
}

define weak i1 @_ssdm_op_BitSelect.i1.i64.i32(i64, i32) nounwind readnone {
entry:
  %empty = zext i32 %1 to i64
  %empty_12 = shl i64 1, %empty
  %empty_13 = and i64 %0, %empty_12
  %empty_14 = icmp ne i64 %empty_13, 0
  ret i1 %empty_14
}

define weak i53 @_ssdm_op_BitConcatenate.i53.i1.i52(i1, i52) nounwind readnone {
entry:
  %empty = zext i1 %0 to i53
  %empty_15 = zext i52 %1 to i53
  %empty_16 = shl i53 %empty, 52
  %empty_17 = or i53 %empty_16, %empty_15
  ret i53 %empty_17
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

!opencl.kernels = !{!0, !7, !13, !15, !21, !24, !27, !30, !33, !36, !39, !39, !42, !48, !42, !42, !42, !51, !51, !53, !53, !55, !42, !57, !57, !57, !59, !39, !39, !42, !42, !62, !42, !42, !42, !42, !42, !65, !65, !68, !42, !39, !39, !42, !70, !42, !42, !42, !72, !72, !74, !74, !76, !42, !42, !42, !78, !80, !42, !42, !42, !51, !51, !82, !82, !84, !42, !42, !42, !42, !42, !42, !85, !42, !42, !42, !42, !87, !87, !90, !42, !42, !42, !59, !39, !39, !42, !92, !94, !94, !96, !42, !42, !42, !42, !42, !98, !101, !103, !103, !42, !104, !104, !42, !42, !105, !96, !42, !42, !42, !42, !42, !107, !111, !111, !112, !104, !104, !114, !115, !42, !42, !42, !68, !42, !42, !117, !120, !122, !42, !42, !42, !85, !42, !42, !42, !68, !123, !125, !131, !42, !42, !42, !42, !42, !133, !135, !135, !42, !136, !136, !42, !42, !138, !42, !42, !140, !140, !140, !42, !142, !144, !144, !42, !145, !145, !42, !42, !146, !149, !149, !151, !151, !42, !42, !42, !152, !152, !151, !149, !149, !149, !42, !68, !68, !85, !154, !151, !151, !151, !155, !155, !155, !65, !65, !68, !85, !42, !157, !42, !159, !160, !162, !68, !42, !117, !85, !68, !164, !155, !155, !155, !42, !166, !168, !168, !42, !169, !169, !42, !42, !65, !65, !68, !170, !42, !172, !172, !42, !42, !175, !177, !177, !180, !182, !182, !42, !42, !185, !182, !42, !187, !187, !190, !192, !192, !192, !59, !39, !39, !42, !194, !96, !42, !42, !152, !152, !152, !196, !198, !198, !131, !65, !65, !68, !199, !199, !199, !196, !42, !42, !42, !42, !196, !42, !42, !42, !42, !42, !196, !201, !201, !42, !198, !203, !203, !42, !42, !42, !42, !42, !205, !205, !207, !207, !42, !42, !42, !59, !39, !39, !42, !209, !96, !42, !42, !42, !211, !213, !215, !215, !42, !104, !104, !42, !42, !216, !96, !42, !42, !42, !42, !42, !218, !111, !111, !112, !104, !104, !220, !220, !220, !59, !39, !39, !222, !224, !224, !226, !42, !42, !228, !42, !42, !42, !42, !42, !229, !138, !231, !231, !233, !196, !198, !198, !42, !169, !169, !42, !42, !235, !235, !42, !42, !42, !59, !39, !39, !42, !237, !96, !42, !42, !239, !96, !42, !42, !42, !241, !243, !245, !245, !42, !104, !104, !42, !42, !246, !96, !42, !42, !42, !42, !42, !233, !248, !248, !68, !85, !235, !235, !233, !250, !250, !250, !196, !252, !122, !111, !111, !112, !104, !104, !169, !254, !96, !96, !42, !42, !42, !42, !42, !256, !256, !258, !258, !218, !138, !136, !136, !231, !231, !233, !237, !96, !104, !104, !235, !235, !233, !260, !260, !169, !138, !262, !262, !262, !42, !264, !264, !265, !122, !267, !267, !269, !111, !111, !112, !104, !104, !264, !271, !273, !65, !65, !68, !85, !275, !277, !42, !42, !42, !42, !53, !53, !42, !279, !281, !283, !283, !285, !122, !42, !42, !286, !288, !290, !292, !294, !74, !74, !296, !298, !42, !300, !302, !304, !306, !308, !310, !310, !310, !59, !39, !39, !42, !312, !96, !42, !42, !42, !42, !42, !196, !198, !198, !42, !42, !42, !42, !314, !316, !318, !318, !320, !42, !322, !324, !326, !328, !328, !330, !122, !42, !42, !42, !331, !333, !335, !42, !65, !65, !68, !85, !337, !339, !42, !288, !290, !42, !42, !42, !53, !53, !51, !51, !341, !343, !345, !345, !347, !122, !42, !42, !42, !348, !350, !352, !352, !352, !59, !354, !96, !42, !42, !356, !96, !352, !352, !231, !231, !233, !358, !42, !260, !360, !362, !363, !224, !224, !252, !122, !42, !42, !42, !65, !65, !365, !365, !42, !42, !365, !365, !42, !367, !369, !371, !373, !375, !377, !365, !365, !42, !42, !365, !365, !42, !365, !365, !42, !365, !365, !42, !65, !65, !68, !85, !42, !42, !379}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!381}

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
!117 = metadata !{null, metadata !16, metadata !17, metadata !118, metadata !19, metadata !119, metadata !6}
!118 = metadata !{metadata !"kernel_arg_type", metadata !"ulong long"}
!119 = metadata !{metadata !"kernel_arg_name", metadata !"pi"}
!120 = metadata !{null, metadata !1, metadata !2, metadata !121, metadata !4, metadata !50, metadata !6}
!121 = metadata !{metadata !"kernel_arg_type", metadata !"ap_int_base<11, true> &", metadata !"int"}
!122 = metadata !{null, metadata !16, metadata !17, metadata !52, metadata !19, metadata !64, metadata !6}
!123 = metadata !{null, metadata !1, metadata !2, metadata !124, metadata !4, metadata !32, metadata !6}
!124 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<9, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!125 = metadata !{null, metadata !126, metadata !127, metadata !128, metadata !129, metadata !130, metadata !6}
!126 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0, i32 0}
!127 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!128 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<14, 4, 5, 3, 0>", metadata !"struct ap_fixed<23, 3, 5, 3, 0>", metadata !"struct ap_fixed<10, 4, 5, 3, 0>", metadata !"struct ap_fixed<9, 3, 5, 3, 0>"}
!129 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!130 = metadata !{metadata !"kernel_arg_name", metadata !"eta1", metadata !"phi1", metadata !"eta2", metadata !"phi2"}
!131 = metadata !{null, metadata !16, metadata !17, metadata !132, metadata !19, metadata !64, metadata !6}
!132 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<23, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!133 = metadata !{null, metadata !16, metadata !17, metadata !134, metadata !19, metadata !64, metadata !6}
!134 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<46, 6, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!135 = metadata !{null, metadata !16, metadata !17, metadata !134, metadata !19, metadata !41, metadata !6}
!136 = metadata !{null, metadata !16, metadata !17, metadata !137, metadata !19, metadata !41, metadata !6}
!137 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<28, 8, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!138 = metadata !{null, metadata !16, metadata !17, metadata !139, metadata !19, metadata !64, metadata !6}
!139 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<14, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!140 = metadata !{null, metadata !16, metadata !17, metadata !141, metadata !19, metadata !41, metadata !6}
!141 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<49, 9, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!142 = metadata !{null, metadata !16, metadata !17, metadata !143, metadata !19, metadata !64, metadata !6}
!143 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<9, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!144 = metadata !{null, metadata !16, metadata !17, metadata !143, metadata !19, metadata !41, metadata !6}
!145 = metadata !{null, metadata !16, metadata !17, metadata !132, metadata !19, metadata !41, metadata !6}
!146 = metadata !{null, metadata !16, metadata !17, metadata !147, metadata !19, metadata !148, metadata !6}
!147 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed_base<24, 4, true, 5, 3, 0>"}
!148 = metadata !{metadata !"kernel_arg_name", metadata !"outPhi"}
!149 = metadata !{null, metadata !16, metadata !17, metadata !150, metadata !19, metadata !64, metadata !6}
!150 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<24, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!151 = metadata !{null, metadata !16, metadata !17, metadata !150, metadata !19, metadata !41, metadata !6}
!152 = metadata !{null, metadata !16, metadata !17, metadata !153, metadata !19, metadata !41, metadata !6}
!153 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<25, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!154 = metadata !{null, metadata !16, metadata !17, metadata !153, metadata !19, metadata !64, metadata !6}
!155 = metadata !{null, metadata !16, metadata !17, metadata !156, metadata !19, metadata !41, metadata !6}
!156 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<15, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!157 = metadata !{null, metadata !1, metadata !2, metadata !158, metadata !4, metadata !38, metadata !6}
!158 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<10, false> &", metadata !"double"}
!159 = metadata !{null, metadata !16, metadata !17, metadata !66, metadata !19, metadata !148, metadata !6}
!160 = metadata !{null, metadata !16, metadata !17, metadata !161, metadata !19, metadata !64, metadata !6}
!161 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<10> &"}
!162 = metadata !{null, metadata !16, metadata !17, metadata !163, metadata !19, metadata !64, metadata !6}
!163 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<9> &"}
!164 = metadata !{null, metadata !1, metadata !2, metadata !165, metadata !4, metadata !32, metadata !6}
!165 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<10, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!166 = metadata !{null, metadata !16, metadata !17, metadata !167, metadata !19, metadata !64, metadata !6}
!167 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<10, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!168 = metadata !{null, metadata !16, metadata !17, metadata !167, metadata !19, metadata !41, metadata !6}
!169 = metadata !{null, metadata !16, metadata !17, metadata !139, metadata !19, metadata !41, metadata !6}
!170 = metadata !{null, metadata !16, metadata !17, metadata !40, metadata !19, metadata !171, metadata !6}
!171 = metadata !{metadata !"kernel_arg_name", metadata !"x"}
!172 = metadata !{null, metadata !16, metadata !17, metadata !173, metadata !19, metadata !174, metadata !6}
!173 = metadata !{metadata !"kernel_arg_type", metadata !"size_t"}
!174 = metadata !{metadata !"kernel_arg_name", metadata !"__pos"}
!175 = metadata !{null, metadata !16, metadata !17, metadata !173, metadata !19, metadata !176, metadata !6}
!176 = metadata !{metadata !"kernel_arg_name", metadata !"__position"}
!177 = metadata !{null, metadata !1, metadata !2, metadata !178, metadata !4, metadata !179, metadata !6}
!178 = metadata !{metadata !"kernel_arg_type", metadata !"class std::bitset<9> &", metadata !"size_t"}
!179 = metadata !{metadata !"kernel_arg_name", metadata !"__b", metadata !"__pos"}
!180 = metadata !{null, metadata !16, metadata !17, metadata !173, metadata !19, metadata !181, metadata !6}
!181 = metadata !{metadata !"kernel_arg_name", metadata !""}
!182 = metadata !{null, metadata !16, metadata !17, metadata !183, metadata !19, metadata !184, metadata !6}
!183 = metadata !{metadata !"kernel_arg_type", metadata !"ulong"}
!184 = metadata !{metadata !"kernel_arg_name", metadata !"__val"}
!185 = metadata !{null, metadata !16, metadata !17, metadata !186, metadata !19, metadata !184, metadata !6}
!186 = metadata !{metadata !"kernel_arg_type", metadata !"_WordT &"}
!187 = metadata !{null, metadata !1, metadata !2, metadata !188, metadata !4, metadata !189, metadata !6}
!188 = metadata !{metadata !"kernel_arg_type", metadata !"const struct ap_int<14> &", metadata !"const struct ap_int<23> &"}
!189 = metadata !{metadata !"kernel_arg_name", metadata !"__a", metadata !"__b"}
!190 = metadata !{null, metadata !1, metadata !2, metadata !191, metadata !4, metadata !32, metadata !6}
!191 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<23, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!192 = metadata !{null, metadata !16, metadata !17, metadata !193, metadata !19, metadata !41, metadata !6}
!193 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<55, 35, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!194 = metadata !{null, metadata !1, metadata !2, metadata !195, metadata !4, metadata !38, metadata !6}
!195 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<23, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!196 = metadata !{null, metadata !16, metadata !17, metadata !197, metadata !19, metadata !64, metadata !6}
!197 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<19, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!198 = metadata !{null, metadata !16, metadata !17, metadata !197, metadata !19, metadata !41, metadata !6}
!199 = metadata !{null, metadata !16, metadata !17, metadata !200, metadata !19, metadata !41, metadata !6}
!200 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<57, 9, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!201 = metadata !{null, metadata !16, metadata !17, metadata !202, metadata !19, metadata !41, metadata !6}
!202 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<38, 6, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!203 = metadata !{null, metadata !16, metadata !17, metadata !204, metadata !19, metadata !64, metadata !6}
!204 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<24, 2, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!205 = metadata !{null, metadata !16, metadata !17, metadata !206, metadata !19, metadata !41, metadata !6}
!206 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<43, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!207 = metadata !{null, metadata !1, metadata !2, metadata !208, metadata !4, metadata !89, metadata !6}
!208 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<14, 4, 5, 3, 0> &", metadata !"struct ap_fixed<19, 3, 5, 3, 0> &"}
!209 = metadata !{null, metadata !1, metadata !2, metadata !210, metadata !4, metadata !38, metadata !6}
!210 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<46, 36, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!211 = metadata !{null, metadata !1, metadata !2, metadata !212, metadata !4, metadata !100, metadata !6}
!212 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_fixed_base<47, 37, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!213 = metadata !{null, metadata !16, metadata !17, metadata !214, metadata !19, metadata !64, metadata !6}
!214 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<47, 37, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!215 = metadata !{null, metadata !16, metadata !17, metadata !214, metadata !19, metadata !41, metadata !6}
!216 = metadata !{null, metadata !1, metadata !2, metadata !217, metadata !4, metadata !38, metadata !6}
!217 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<48, 38, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!218 = metadata !{null, metadata !108, metadata !17, metadata !219, metadata !19, metadata !110, metadata !6}
!219 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<19, 3, 5, 3, 0>*"}
!220 = metadata !{null, metadata !16, metadata !17, metadata !221, metadata !19, metadata !41, metadata !6}
!221 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<29, 19, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!222 = metadata !{null, metadata !1, metadata !2, metadata !223, metadata !4, metadata !38, metadata !6}
!223 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<15, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"const ap_int_base<14, true> &"}
!224 = metadata !{null, metadata !16, metadata !17, metadata !225, metadata !19, metadata !41, metadata !6}
!225 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, true> &"}
!226 = metadata !{null, metadata !16, metadata !17, metadata !227, metadata !19, metadata !41, metadata !6}
!227 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<14, 14, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!228 = metadata !{null, metadata !16, metadata !17, metadata !227, metadata !19, metadata !64, metadata !6}
!229 = metadata !{null, metadata !1, metadata !2, metadata !230, metadata !4, metadata !32, metadata !6}
!230 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<15, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!231 = metadata !{null, metadata !1, metadata !2, metadata !232, metadata !4, metadata !89, metadata !6}
!232 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<14, 4, 5, 3, 0> &", metadata !"struct ap_fixed<14, 4, 5, 3, 0> &"}
!233 = metadata !{null, metadata !108, metadata !17, metadata !234, metadata !19, metadata !110, metadata !6}
!234 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<14, 4, 5, 3, 0>*"}
!235 = metadata !{null, metadata !1, metadata !2, metadata !236, metadata !4, metadata !89, metadata !6}
!236 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<11, 5, 5, 3, 0> &", metadata !"struct ap_fixed<14, 4, 5, 3, 0> &"}
!237 = metadata !{null, metadata !1, metadata !2, metadata !238, metadata !4, metadata !38, metadata !6}
!238 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<11, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!239 = metadata !{null, metadata !1, metadata !2, metadata !240, metadata !4, metadata !38, metadata !6}
!240 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<43, 37, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!241 = metadata !{null, metadata !1, metadata !2, metadata !242, metadata !4, metadata !100, metadata !6}
!242 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_fixed_base<44, 38, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!243 = metadata !{null, metadata !16, metadata !17, metadata !244, metadata !19, metadata !64, metadata !6}
!244 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<44, 38, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!245 = metadata !{null, metadata !16, metadata !17, metadata !244, metadata !19, metadata !41, metadata !6}
!246 = metadata !{null, metadata !1, metadata !2, metadata !247, metadata !4, metadata !38, metadata !6}
!247 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<45, 39, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!248 = metadata !{null, metadata !16, metadata !17, metadata !249, metadata !19, metadata !67, metadata !6}
!249 = metadata !{metadata !"kernel_arg_type", metadata !"float"}
!250 = metadata !{null, metadata !16, metadata !17, metadata !251, metadata !19, metadata !41, metadata !6}
!251 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<21, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!252 = metadata !{null, metadata !1, metadata !2, metadata !253, metadata !4, metadata !50, metadata !6}
!253 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, true> &", metadata !"int"}
!254 = metadata !{null, metadata !1, metadata !2, metadata !255, metadata !4, metadata !38, metadata !6}
!255 = metadata !{metadata !"kernel_arg_type", metadata !"ap_fixed_base<19, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!256 = metadata !{null, metadata !16, metadata !17, metadata !257, metadata !19, metadata !41, metadata !6}
!257 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<51, 35, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!258 = metadata !{null, metadata !1, metadata !2, metadata !259, metadata !4, metadata !89, metadata !6}
!259 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<11, 5, 5, 3, 0> &", metadata !"struct ap_fixed<19, 3, 5, 3, 0> &"}
!260 = metadata !{null, metadata !16, metadata !17, metadata !261, metadata !19, metadata !41, metadata !6}
!261 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed<14, 4, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!262 = metadata !{null, metadata !16, metadata !17, metadata !263, metadata !19, metadata !41, metadata !6}
!263 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<25, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!264 = metadata !{null, metadata !16, metadata !17, metadata !204, metadata !19, metadata !41, metadata !6}
!265 = metadata !{null, metadata !1, metadata !2, metadata !266, metadata !4, metadata !50, metadata !6}
!266 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<1, false> &", metadata !"int"}
!267 = metadata !{null, metadata !1, metadata !2, metadata !268, metadata !4, metadata !89, metadata !6}
!268 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<24, 2, 5, 3, 0> &", metadata !"struct ap_fixed<24, 2, 5, 3, 0> &"}
!269 = metadata !{null, metadata !108, metadata !17, metadata !270, metadata !19, metadata !110, metadata !6}
!270 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_fixed<24, 2, 5, 3, 0>*"}
!271 = metadata !{null, metadata !1, metadata !2, metadata !272, metadata !4, metadata !32, metadata !6}
!272 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<24, 2, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!273 = metadata !{null, metadata !1, metadata !2, metadata !274, metadata !4, metadata !32, metadata !6}
!274 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<15, true> &"}
!275 = metadata !{null, metadata !16, metadata !17, metadata !276, metadata !19, metadata !41, metadata !6}
!276 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed<24, 2, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!277 = metadata !{null, metadata !1, metadata !2, metadata !278, metadata !4, metadata !38, metadata !6}
!278 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<15, true> &", metadata !"double"}
!279 = metadata !{null, metadata !1, metadata !2, metadata !280, metadata !4, metadata !38, metadata !6}
!280 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<15, true> &", metadata !"int"}
!281 = metadata !{null, metadata !1, metadata !2, metadata !282, metadata !4, metadata !50, metadata !6}
!282 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<15, true> &", metadata !"const ap_int_base<32, true> &"}
!283 = metadata !{null, metadata !16, metadata !17, metadata !284, metadata !19, metadata !41, metadata !6}
!284 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<15, true> &"}
!285 = metadata !{null, metadata !1, metadata !2, metadata !280, metadata !4, metadata !50, metadata !6}
!286 = metadata !{null, metadata !1, metadata !2, metadata !287, metadata !4, metadata !32, metadata !6}
!287 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<34, true> &"}
!288 = metadata !{null, metadata !1, metadata !2, metadata !289, metadata !4, metadata !100, metadata !6}
!289 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_int_base<33, true> &"}
!290 = metadata !{null, metadata !1, metadata !2, metadata !291, metadata !4, metadata !50, metadata !6}
!291 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &", metadata !"const ap_int_base<33, true> &"}
!292 = metadata !{null, metadata !1, metadata !2, metadata !293, metadata !4, metadata !100, metadata !6}
!293 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_int_base<1, false> &"}
!294 = metadata !{null, metadata !1, metadata !2, metadata !295, metadata !4, metadata !50, metadata !6}
!295 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &", metadata !"const ap_int_base<1, false> &"}
!296 = metadata !{null, metadata !1, metadata !2, metadata !297, metadata !4, metadata !32, metadata !6}
!297 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<1, false> &"}
!298 = metadata !{null, metadata !1, metadata !2, metadata !299, metadata !4, metadata !38, metadata !6}
!299 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<23, true> &", metadata !"double"}
!300 = metadata !{null, metadata !1, metadata !2, metadata !301, metadata !4, metadata !32, metadata !6}
!301 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<23, true> &"}
!302 = metadata !{null, metadata !1, metadata !2, metadata !303, metadata !4, metadata !32, metadata !6}
!303 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<52, 36, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!304 = metadata !{null, metadata !1, metadata !2, metadata !305, metadata !4, metadata !32, metadata !6}
!305 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<20, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!306 = metadata !{null, metadata !1, metadata !2, metadata !307, metadata !4, metadata !32, metadata !6}
!307 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<5, false> &"}
!308 = metadata !{null, metadata !1, metadata !2, metadata !309, metadata !4, metadata !32, metadata !6}
!309 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<19, 3, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!310 = metadata !{null, metadata !16, metadata !17, metadata !311, metadata !19, metadata !41, metadata !6}
!311 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<52, 36, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!312 = metadata !{null, metadata !1, metadata !2, metadata !313, metadata !4, metadata !38, metadata !6}
!313 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<20, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!314 = metadata !{null, metadata !1, metadata !2, metadata !315, metadata !4, metadata !38, metadata !6}
!315 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<5, false> &", metadata !"int"}
!316 = metadata !{null, metadata !1, metadata !2, metadata !317, metadata !4, metadata !50, metadata !6}
!317 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<5, false> &", metadata !"const ap_int_base<32, true> &"}
!318 = metadata !{null, metadata !16, metadata !17, metadata !319, metadata !19, metadata !41, metadata !6}
!319 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<5, false> &"}
!320 = metadata !{null, metadata !1, metadata !2, metadata !321, metadata !4, metadata !38, metadata !6}
!321 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &", metadata !"double"}
!322 = metadata !{null, metadata !16, metadata !17, metadata !323, metadata !19, metadata !41, metadata !6}
!323 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed<19, 3, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!324 = metadata !{null, metadata !1, metadata !2, metadata !325, metadata !4, metadata !38, metadata !6}
!325 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &", metadata !"int"}
!326 = metadata !{null, metadata !1, metadata !2, metadata !327, metadata !4, metadata !50, metadata !6}
!327 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &", metadata !"const ap_int_base<32, true> &"}
!328 = metadata !{null, metadata !16, metadata !17, metadata !329, metadata !19, metadata !41, metadata !6}
!329 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &"}
!330 = metadata !{null, metadata !1, metadata !2, metadata !325, metadata !4, metadata !50, metadata !6}
!331 = metadata !{null, metadata !1, metadata !2, metadata !332, metadata !4, metadata !32, metadata !6}
!332 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<11, 5, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!333 = metadata !{null, metadata !1, metadata !2, metadata !334, metadata !4, metadata !32, metadata !6}
!334 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<11, true> &"}
!335 = metadata !{null, metadata !1, metadata !2, metadata !336, metadata !4, metadata !38, metadata !6}
!336 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, true> &", metadata !"double"}
!337 = metadata !{null, metadata !16, metadata !17, metadata !338, metadata !19, metadata !41, metadata !6}
!338 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed<11, 5, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!339 = metadata !{null, metadata !1, metadata !2, metadata !340, metadata !4, metadata !38, metadata !6}
!340 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<65, true> &", metadata !"double"}
!341 = metadata !{null, metadata !1, metadata !2, metadata !342, metadata !4, metadata !38, metadata !6}
!342 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, true> &", metadata !"int"}
!343 = metadata !{null, metadata !1, metadata !2, metadata !344, metadata !4, metadata !50, metadata !6}
!344 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, true> &", metadata !"const ap_int_base<32, true> &"}
!345 = metadata !{null, metadata !16, metadata !17, metadata !346, metadata !19, metadata !41, metadata !6}
!346 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, true> &"}
!347 = metadata !{null, metadata !1, metadata !2, metadata !342, metadata !4, metadata !50, metadata !6}
!348 = metadata !{null, metadata !1, metadata !2, metadata !349, metadata !4, metadata !32, metadata !6}
!349 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_fixed_base<14, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!350 = metadata !{null, metadata !1, metadata !2, metadata !351, metadata !4, metadata !32, metadata !6}
!351 = metadata !{metadata !"kernel_arg_type", metadata !"std::ostream &", metadata !"const ap_int_base<14, true> &"}
!352 = metadata !{null, metadata !16, metadata !17, metadata !353, metadata !19, metadata !41, metadata !6}
!353 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<46, 36, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &"}
!354 = metadata !{null, metadata !1, metadata !2, metadata !355, metadata !4, metadata !38, metadata !6}
!355 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_fixed_base<14, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!356 = metadata !{null, metadata !1, metadata !2, metadata !357, metadata !4, metadata !38, metadata !6}
!357 = metadata !{metadata !"kernel_arg_type", metadata !"ap_fixed_base<14, 4, true, (enum ap_q_mode)5, (enum ap_o_mode)3, 0> &", metadata !"int"}
!358 = metadata !{null, metadata !1, metadata !2, metadata !359, metadata !4, metadata !38, metadata !6}
!359 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, true> &", metadata !"double"}
!360 = metadata !{null, metadata !1, metadata !2, metadata !361, metadata !4, metadata !38, metadata !6}
!361 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<33, true> &", metadata !"double"}
!362 = metadata !{null, metadata !1, metadata !2, metadata !253, metadata !4, metadata !38, metadata !6}
!363 = metadata !{null, metadata !1, metadata !2, metadata !364, metadata !4, metadata !50, metadata !6}
!364 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, true> &", metadata !"const ap_int_base<32, true> &"}
!365 = metadata !{null, metadata !16, metadata !17, metadata !40, metadata !19, metadata !366, metadata !6}
!366 = metadata !{metadata !"kernel_arg_name", metadata !"val"}
!367 = metadata !{null, metadata !16, metadata !17, metadata !368, metadata !19, metadata !64, metadata !6}
!368 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<3> &"}
!369 = metadata !{null, metadata !16, metadata !17, metadata !370, metadata !19, metadata !64, metadata !6}
!370 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<1> &"}
!371 = metadata !{null, metadata !16, metadata !17, metadata !372, metadata !19, metadata !64, metadata !6}
!372 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<23> &"}
!373 = metadata !{null, metadata !16, metadata !17, metadata !374, metadata !19, metadata !64, metadata !6}
!374 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<14> &"}
!375 = metadata !{null, metadata !16, metadata !17, metadata !376, metadata !19, metadata !64, metadata !6}
!376 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<14> &"}
!377 = metadata !{null, metadata !16, metadata !17, metadata !378, metadata !19, metadata !64, metadata !6}
!378 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<15> &"}
!379 = metadata !{null, metadata !16, metadata !17, metadata !380, metadata !19, metadata !181, metadata !6}
!380 = metadata !{metadata !"kernel_arg_type", metadata !"const struct std::pair<struct ap_int<14>, struct ap_int<23> > &"}
!381 = metadata !{metadata !382, [1 x i32]* @llvm_global_ctors_0}
!382 = metadata !{metadata !383}
!383 = metadata !{i32 0, i32 31, metadata !384}
!384 = metadata !{metadata !385}
!385 = metadata !{metadata !"llvm.global_ctors.0", metadata !386, metadata !"", i32 0, i32 31}
!386 = metadata !{metadata !387}
!387 = metadata !{i32 0, i32 0, i32 1}
!388 = metadata !{metadata !389}
!389 = metadata !{i32 0, i32 32, metadata !390}
!390 = metadata !{metadata !391}
!391 = metadata !{metadata !"sector.V", metadata !392, metadata !"int33", i32 0, i32 32}
!392 = metadata !{metadata !393}
!393 = metadata !{i32 0, i32 0, i32 0}
!394 = metadata !{metadata !395}
!395 = metadata !{i32 0, i32 18, metadata !396}
!396 = metadata !{metadata !397}
!397 = metadata !{metadata !"result.V", metadata !386, metadata !"int19", i32 0, i32 18}
