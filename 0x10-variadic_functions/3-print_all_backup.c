#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - Prints strings, followed by a new line.
* @format: string format
*/
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
const char *fmt = format;
while (*fmt)
{
switch (*fmt)
{
case 'c':
printf("%c", va_arg(args, int));
if (*(fmt + 1) != '\0')
printf(", ");
break;
case 'i':
printf("%d", va_arg(args, int));
printf(", ");
break;
case 'f':
printf("%f", va_arg(args, double));
printf(", ");
break;
case 's':
{
char *s = va_arg(args, char *);
if (s != NULL)
{
printf("%s", s);
}
else
{
printf("(null)\n");
}
printf("\n");
}
break;
default:
break;
}
fmt++;
}
va_end(args);
}
