#!/bin/bash
ls -lah
find . -name '*.cc' | xargs ./compile.sh
