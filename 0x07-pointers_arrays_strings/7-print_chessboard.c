#include "main.h"
#include <stdio.h>
/**
* print_chessboard - Prints a table of arrays
* @a: Char Array
*/
void print_chessboard(char (*a)[8])
{
int x, y;
for (x = 0; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
printf("%c", a[x][y]);
}
printf("\n");
}
}
