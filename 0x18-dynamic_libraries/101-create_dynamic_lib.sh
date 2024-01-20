#!/bin/bash
gcc 101-make_me_win.c -c -fPIC
gcc *.o -shared -o 101-make_me_win.so