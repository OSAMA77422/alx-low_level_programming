#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ranlib liball.a *.o
ranlib liball.a