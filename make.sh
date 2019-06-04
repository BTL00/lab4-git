#!/bin/bash
clear
echo 'compilation initiated . . .'
if [ ! -d bin ];
	then mkdir bin
	fi
if [ ! -d tmp ];
	then mkdir tmp
fi
g++ -c main.cpp
cat class.cpp circle.cpp square.cpp rectangle.cpp > class-all.cpp
g++ -c class-all.cpp
echo 'consolidation process initiated . . .'
g++ -o bin/exec main.o class-all.o
echo 'removing tmp files . . .'
mv main.o  tmp/main.o_old
mv class-all.o tmp/class.o_old
echo 'compilation finished . . .'
