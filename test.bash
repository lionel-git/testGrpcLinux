#!/bin/bash
make clean
make
export LD_LIBRARY_PATH=`pwd`
./testGrpc
./testGrpc2
