#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /data/dildick/GlobalCorrelator/pulsar_devkit/simple_examples/HLSIPs/hls_arcsinh/solution1/.autopilot/db/a.g.bc ${1+"$@"}
