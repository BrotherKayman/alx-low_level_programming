#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
printf("%d", x);
if (i < n - 1)
{
if (separator != NULL)
{
printf("%s", separator);
}
}
}
va_end(args);
printf("\n");
}
