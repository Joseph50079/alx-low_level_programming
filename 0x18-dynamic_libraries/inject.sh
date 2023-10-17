#!/bin/bash
gcc -c -fpic inject.c
gcc -shared inject.o -o libinjection.so
