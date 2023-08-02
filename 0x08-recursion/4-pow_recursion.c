#include "main.h"
/**
* _pow_recursion - Calculates the power of x
* @x: Number to be powered
* @y: Exponent
* Return: -1 on error or 0 on success
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
return (x * _pow_recursion(x, y - 1));
}
