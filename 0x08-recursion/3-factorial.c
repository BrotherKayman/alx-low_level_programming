#include "main.h"
/**
* factorial - Calculate factorial
* @n: Given number
* Return: -1 on error, otherwise factorial
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
