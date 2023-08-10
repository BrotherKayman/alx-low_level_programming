#!/bin/bash
for file in *.c; do
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 "$file" -o "${file%.c}.o"
done
ar rcs liball.a *.o
