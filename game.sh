#!/bin/bash

for f in "$@"; do
	echo "compiling $f"
	if [[ $f == *.cpp ]]
	then
		g++ -ggdb 'pkg-config --cflags opencv' -o 'game $1 .cpp' $1 'pkg-config --libs opencv';
	fi
	echo "output fie -> ${1%.*}"