#!/bin/bash
gcc -c -fPIC -Wall *.c
gcc -shared *.o -o liball.so
