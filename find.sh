#!/bin/bash
ls -lah
find . -name '*.cc'
find . -name '*.cc' | xargs -n 1 ./compile.sh
