
set TopModule "phiOffSet"
set ClockPeriod "4.115000"
set ClockList {ap_clk}
set multiClockList {}
set PortClockMap {}
set CombLogicFlag 0
set PipelineFlag 1
set DataflowTaskPipelineFlag  1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 1
set FftOrFirFlag 0
set NbRWValue 0
set intNbAccess 0
set NewDSPMapping 1
set HasDSPModule 0
set ResetLevelFlag 1
set ResetStyle "control"
set ResetSyncFlag 1
set ResetRegisterFlag 0
set ResetVariableFlag 0
set fsmEncStyle "onehot"
set maxFanout "0"
set RtlPrefix ""
set ExtraCCFlags ""
set ExtraCLdFlags ""
set SynCheckOptions ""
set PresynOptions ""
set PreprocOptions ""
set SchedOptions ""
set BindOptions ""
set RtlGenOptions ""
set RtlWriterOptions ""
set CbcGenFlag ""
set CasGenFlag ""
set CasMonitorFlag ""
set AutoSimOptions {}
set ExportMCPathFlag "0"
set SCTraceFileName "mytrace"
set SCTraceFileFormat "vcd"
set SCTraceOption "all"
set TargetInfo "xc7vx690t:ffg1927:-2"
set SourceFiles {sc {} c ../../src/tk-mu_simple.cpp}
set SourceFlags {sc {} c {{}}}
set DirectiveFile {/data/dildick/GlobalCorrelator/pulsar_devkit/simple_examples/HLSIPs/hls_phioffset/solution1/solution1.directive}
set TBFiles {verilog {../../src/dataformatsExtended.h ../../tk-mu_simple_ref.h ../../tk-mu_simple_test.cpp} bc {../../src/dataformatsExtended.h ../../tk-mu_simple_ref.h ../../tk-mu_simple_test.cpp} vhdl {../../src/dataformatsExtended.h ../../tk-mu_simple_ref.h ../../tk-mu_simple_test.cpp} sc {../../src/dataformatsExtended.h ../../tk-mu_simple_ref.h ../../tk-mu_simple_test.cpp} cas {../../src/dataformatsExtended.h ../../tk-mu_simple_ref.h ../../tk-mu_simple_test.cpp} c {}}
set SpecLanguage "C"
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set TBInstNames {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set XDCFiles {}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set PlatformFiles {{DefaultPlatform {xilinx/virtex7/virtex7 xilinx/virtex7/virtex7_fpv6}}}
set DefaultPlatform "DefaultPlatform"
set TBTVFileNotFound ""
set AppFile "../vivado_hls.app"
set ApsFile "solution1.aps"
set AvePath "../.."
set HPFPO "0"