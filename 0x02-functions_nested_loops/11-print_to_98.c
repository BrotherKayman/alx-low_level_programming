#include "main.h"
/**
 * print_to_98 - Prints numbers to 98
 * @n: Integer as an input
 * Return: output
 */

void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
_putchar(n / 100 + '0');
_putchar((n / 10) % 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
n++;
}
}
else
{
while (n > 98)
{
_putchar(n / 100 + '0');
_putchar((n / 10) % 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
n--;
}
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
