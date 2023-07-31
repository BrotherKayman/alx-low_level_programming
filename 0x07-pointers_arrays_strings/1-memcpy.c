#include "main.h"
/**
* _memcpy - Fills memory with a constant byte.
* @dest: Pointer to character.
* @src: POinter to char.
* @n: Unsigned integer.
* Return: dest;
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*dest = src[i];
}
return (dest);
}
