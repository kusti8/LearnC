#!/bin/bash
if [ "$#" -ne 1 ]
then
	if [ "$#" -ne 2 ]
	then
		exit 1
	fi
fi


#echo "Executing g++ with the following options: g++ $2 -o $output"
#Test
filename=$1
output="${filename:0:-4}.o"
echo "$1 -o $output.out"
g++-4.8 -std=c++11 $1 -o $output
goutput=$?
if [ $goutput -ne 0 ]; then
	echo "Yes, should exit"
	exit $goutput
fi
echo "Finished"
if [ "$2" == "-r" ]
then
	echo "Running"
	./$output
fi
