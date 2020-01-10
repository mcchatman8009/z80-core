#!/usr/bin/env bash
rm -fr build
mkdir -p build
cd ./build
cmake  ..
make all test