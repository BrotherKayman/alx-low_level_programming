 #include "main.h"
/**
 * print_last_digit - Prints last digit
 * @x: reads digits
 * Return: The last digit of the number
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
