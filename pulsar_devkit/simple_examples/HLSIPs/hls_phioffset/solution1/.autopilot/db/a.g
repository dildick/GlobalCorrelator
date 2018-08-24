#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /data/dildick/GlobalCorrelator/pulsar_devkit/simple_examples/HLSIPs/hls_phioffset/solution1/.autopilot/db/a.g.bc ${1+"$@"}
