#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Sum of all its parameters
* @n: ...
* Return: 0 if n is 0, otherwise sum
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
  if (n == 0)
    return (0);
  else
  sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
