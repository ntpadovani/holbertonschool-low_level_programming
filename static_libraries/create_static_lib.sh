#!/bin/bash
ar -rc liball.a *.o; gcc -c -Wall -Werror -Wextra *.c

