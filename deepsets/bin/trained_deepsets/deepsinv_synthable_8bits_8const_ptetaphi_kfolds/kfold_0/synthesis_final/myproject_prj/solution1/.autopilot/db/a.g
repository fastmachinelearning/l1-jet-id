#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /data/hlssynt-users/deodagiu/ds/bin/trained_deepsets/deepsinv_synthable_8bits_8const_ptetaphi_kfolds/kfold_0/synthesis_final/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
