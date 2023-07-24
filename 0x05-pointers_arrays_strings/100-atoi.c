#include <stdio.h>
#include <limits.h>
/**
* _atoi - Function converts a string to an integer
* @s: Pointer to string
* Return: 0 if null, otherwise result
*/
int _atoi(char *s)
{
int sign = 1, result = 0;
while (*s == ' ')
s++;
{
if (*s == '-' || *s == '+')
sign = (*s++ == '-') ? -1 : 1;
while (*s >= '0' && *s <= '9')
{
if (result > (INT_MAX - (*s - '0')) / 10)
return ((sign == 1) ? INT_MAX : INT_MIN);
result = result * 10 + (*s++ - '0');
}
return (result *sign);
}
}
