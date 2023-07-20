 #include "main.h"
/**
 * print_last_digit - Prints last digit
 * @x: reads digits
 * @n: checks last digit
 * Return: the value of the last digit
 */
int print_last_digit(int x)
{
int n = x % 10;
if (x >= 0)
{
n = x % 10;
}
else
{
n = ((x % 10) * -1);
}
_putchar(n + '0');
return (n);
}
