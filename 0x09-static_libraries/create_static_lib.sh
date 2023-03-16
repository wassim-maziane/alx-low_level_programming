#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar liball.a *.o
