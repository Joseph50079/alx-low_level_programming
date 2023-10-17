#!/bin/bash
wget /tmp/libinjection.so https://github.com/Joseph50079/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD=/tmp/libinjection.so
