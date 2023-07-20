#include "main.h"
/**
 * times_table - Prints the multiplication table from 0 to 9.
 * Return: 0 Always
 */
void times_table(void)
{
int x, y, multiply;
for (x = 0; x <= 9; x++)
{
_putchar('0');
for (y = 1; y < 10; y++)
{
_putchar(',');
_putchar(' ');
multiply = x * y;
if (multiply <= 9)
{
_putchar(' ');
}
else
{
_putchar((multiply / 10) + '0');
_putchar((multiply % 10) + '0');
}
}
_putchar('\n');
}
}
