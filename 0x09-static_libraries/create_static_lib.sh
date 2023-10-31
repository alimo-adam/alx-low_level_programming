#!/bin/bash

# Compile all .c files and create a static library
gcc -c *.c
ar rc liball.a *.o

