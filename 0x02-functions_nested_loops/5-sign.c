#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: check number.
 * Return: None.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
return (0);
}

