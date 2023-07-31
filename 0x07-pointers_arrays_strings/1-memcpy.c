#include "main.h"
/**
* _memcpy - Copies memory area.
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
