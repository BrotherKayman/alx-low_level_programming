#include "main.h"
#include <stddef.h>
/**
* _strncpy - Function copies a string
* @dest: Pointer to Character
* @src: Pointer to Character
* @n: Size of byte
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
size_t i;
for (i = 0; i < (size_t)n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < (size_t)n; i++)
dest[i] = '\0';
return (dest);
}
