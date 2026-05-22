#!/bin/bash

# if user did not type the argument
if [ -z "$1" ]; then
  echo "Requires one argument"
  exit 1
fi

filename="$1"
trimout="${filename%.*}"
# see if the file exists
if [ ! -f $1 ]; then
  echo "File does not Exists"
  exit 1
fi
# building in the output file

output="./output/$trimout"
# building the file
g++ "$filename" -o "$output"
# checking the compilation
if [ $? -eq 0 ]; then
  echo "build succesfull, running file... "
  "$output"
else
  echo "compilation failed"
  exit 1
fi
