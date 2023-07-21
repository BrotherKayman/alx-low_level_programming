#include "main.h"
#include <stdio.h>
/**
 * times_table - Function that prints the 9 times table.
 * Return: result
 */
void times_table(void)
{
int x, y, multiply;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
multiply = x * y;
if (y == 0)
{
printf("%d", multiply);
}
else
{
printf(", %2d", multiply);
}
}
printf("\n");
}
}
