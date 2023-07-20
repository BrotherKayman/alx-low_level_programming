#include "main.h"
/**
 * print_times_table - Function prints the n times table, starting with 0
 * @n: Integer
 * Return: 0 on success
 */
void print_times_table(int n)
{
int x;
int y;
int multiply;
if (n < 0 || n > 15)
{
return;
}
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
multiply = x * y;
if (y == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
if (multiply < 10)
{
_putchar(' ');
_putchar(' ');
}
else if (multiply < 100)
{
_putchar(' ');
}
_putchar((multiply / 100) + '0');
_putchar(((multiply / 10) % 10) + '0');
_putchar((multiply % 10) + '0');
}
_putchar('\n');
}
}
}
