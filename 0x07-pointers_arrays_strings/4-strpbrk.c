#include "main.h"
#include <stddef.h>
/**
* _strpbrk - Searches a string for any of a set of bytes
* @s: String to search
* @accept: String to search for
* Return: Pointer in x that match to s, or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
