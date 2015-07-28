#!/bin/bash

for f in ./*
do
  if [[ "$f" == "*.cc" ]]; then
    ./compile $f
  fi
done
