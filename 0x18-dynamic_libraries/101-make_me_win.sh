#!/bin/bash
gcc -c -fpic injection.c
gcc -shared injection.o -o libinjection.so
export LD_PRELOAD=/tmp/libinjection.so
