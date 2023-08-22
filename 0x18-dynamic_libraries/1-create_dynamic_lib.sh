#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
