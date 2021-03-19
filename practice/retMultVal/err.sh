#!/bin/bash
variable="Hello"
echo $variable

g++ -std=c++17 retMval.cpp
./a.out
# $? - этой командой можно отливить код ошибки
echo $?
#if [ $? -eq 0 ]
#then
#  echo "The script ran ok"
#  exit 0
#else
#  echo "The script failed" >&2
#  exit 1
#fi
