#!/bin/bash

# Compile all .c files in the current directory and create respective .o files
for c_file in *.c
do
    object_file=${c_file%.c}.o
    gcc -c $c_file -o $object_file
done

# Create static library from all .o files
ar rcs liball.a *.o
