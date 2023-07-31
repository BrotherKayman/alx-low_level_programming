#include "main.h"
/**
* _memset - Fills memory with a constant byte.
* @s: Pointer to character.
* @b: Constant byte.
* @n: Unasigned integer.
* Return: s;
*/
char *_memset(char *s, char b, unsigned int n)
{
unasigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
