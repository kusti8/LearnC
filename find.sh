#!/bin/bash
ls -lah
find . -name '*.cpp'
find . -name '*.cpp' | xargs -n 1 ./compile.sh
