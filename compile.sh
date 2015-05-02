#!/bin/bash
if [ "$#" -ne 1 ]
then
	exit 1
fi

#echo "Executing g++ with the following options: g++ $2 -o $output"
filename=$1
output=${filename:0:-3}
echo "$1 -o $output"
g++ $1 -o $output

echo "Finished"

echo "Running"
./$output
