#include "main.h"
/**
* _memset - Fill memory with value*
* @s: Memory address
* @b: Memory value
* @n: Number of bytes to be copied
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
*s = b[i];
return ([s]);
}
