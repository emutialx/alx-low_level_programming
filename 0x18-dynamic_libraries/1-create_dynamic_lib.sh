#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
gcc -shared *.o -o liball.so
