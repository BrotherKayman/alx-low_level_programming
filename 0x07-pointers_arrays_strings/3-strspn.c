#include "main.h"
#include <string.h>
/**
* _strspn - Gets the length of a substring prefix
* @s: String
* @accept: Pointer to string char
* Return: x
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0;
int y, i;
while (*s)
{
y = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
y = 1;
break;
}
}
if (!y)
{
break;
}
x++;
s++;
}
return (x);
}
