#include <stdio.h>
/**
 * _isupper - checks is inputs are uppercase letters
 * @c: checks character
 * Return: 1 if is uppercase, otherwise 0
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
