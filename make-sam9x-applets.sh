#!/usr/bin/env bash
set -e

# This script generates the SAM9X applets for the SAM9X series of chips.

cd samba_applets/extram

make clean TARGET=sam9x7-generic
# VARIANT=sram TRACE_LEVEL=5 V=1
make TARGET=sam9x7-generic TRACE_LEVEL=5 V=1 -j 8

cd -
