#!/bin/bash

git add ~/LearnC
if [ $# -eq 1 ]
then
  git commit -m "$1" 
fi
if
if [ $# -eq 0 ]
then
  git commit
fi
git push
echo "Finished!"

