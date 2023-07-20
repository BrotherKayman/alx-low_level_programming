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
  printf("%d", n++)
  printf(",");
  printf(" ");
}
printf("%d\n", n);
}
else
{
while (n >= 98)
{
  printf("%d", n--);
  printf(",");
  printf(" ");
}
printf("%d\n", n);
}
