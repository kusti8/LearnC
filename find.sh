#!/bin/bash
ls -lah
find . -name '*.cc'
find . -name '*.cc' | xargs ./compile.sh
