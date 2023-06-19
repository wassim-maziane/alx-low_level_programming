#!/bin/bash
gcc -c -fPIC *.c -o mylib.o
gcc -shared -Wl,soname,liball.so -o liball.so mylib.o

