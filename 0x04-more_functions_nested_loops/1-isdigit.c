#include <stdio.h>
#include "main.h"
/**
 * _isdigit -  function that checks for a digit
 * @c: holds integer
 * Return: 1 if digit, otherwise 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
