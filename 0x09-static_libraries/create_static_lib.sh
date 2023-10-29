#!/bin/bash
gcc -wall -pedantic -Werror -c *.c
ar -rc liball.a *.o
ranlib liball.a
