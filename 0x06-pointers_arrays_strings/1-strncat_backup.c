#include "main.h"
/**
* _strncat - This function adds at most n bytes from src to the end of dest.
* @dest: String
* @src: String
* @n: Value of bytes
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr)
ptr++;
while (*src && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
return (dest);
}
