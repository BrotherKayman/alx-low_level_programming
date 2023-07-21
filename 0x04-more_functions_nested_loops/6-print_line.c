#include "main.h"
/**
 * print_line - Function draws a straight line in the terminal
 * @n: The number of times the character '_' is printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
