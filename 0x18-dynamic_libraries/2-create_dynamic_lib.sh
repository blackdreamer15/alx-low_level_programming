#!/bin/bash
gcc 100-operations.c -c -fPIC
gcc *.o -shared -o 100-operations.so