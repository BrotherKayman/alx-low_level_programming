#include "main.h"
#include <stddef.h>
/**
* _strchr - locates a character in a string
* @s: String
* @c: Pointer to character
* Return: Position of first c, or NULL
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return ((char *)s);
s++;
}
return (NULL);
}
