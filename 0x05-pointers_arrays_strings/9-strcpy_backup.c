#include <stdio.h>
/**
* *_strcpy - Function that copies the string pointed to by src
* @dest: Pointer
* @src: Pointer
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
char *dest_ptr = dest;
while (*src != '\0')
  {
*dest_ptr = *src;
src++;
dest_ptr++;
}
*dest_ptr = '\0';
return (dest);
}
