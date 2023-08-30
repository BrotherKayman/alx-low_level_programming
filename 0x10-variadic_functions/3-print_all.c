#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - Prints various types of arguments.
* @format: Format string containing types of arguments.
* @...: Variadic arguments.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
const char *ptr = format;
va_start(args, format);
while (format && *ptr)
{
switch (*ptr)
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
}
default:
i++;
ptr++;
continue;
}
separator = ", ";
i++;
ptr++;
}
printf("\n");
va_end(args);
}
