#!/bin/bash
gcc -c -fpic injection.c
gcc -shared injection.o -o libinjection.so
cp libinjection.so /tmp/
