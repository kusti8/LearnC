#!/bin/bash

for f in ./*
do
  if [[ "$f" == "*.cc" ]]; then
    echo $f
    ./compile $f
  fi
done
