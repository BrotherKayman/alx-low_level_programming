#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - Prints various types of arguments.
* @format: Format types from arguments.
*/
void print_all(const char * const format, ...)
{
va_list args;
const char *ptr = format;
char charc;
int integ;
float flt;
char *str;
va_start(args, format);
while (format && *ptr)
{
if (*ptr == 'c')
{
charc = va_arg(args, int);
printf("%c", charc);
}
else if (*ptr == 'i')
{
integ = va_arg(args, int);
printf("%d", integ);
}
else if (*ptr == 'f')
{
flt = va_arg(args, double);
printf("%f", flt);
}
else if (*ptr == 's')
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
ptr++;
if (*ptr)
{
while (*ptr != 'c' && *ptr != 'i' && *ptr != 'f' && *ptr != 's' && *ptr)
ptr++;
if (*ptr)
printf(", ");
}
}
printf("\n");
va_end(args);
}
