#!/bin/bash

# Compile each .c file into position-independent code
for file in *.c; do
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c "$file" -o "${file%.c}.o"
done

# Create shared library from object files
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o
