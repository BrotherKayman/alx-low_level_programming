#include "main.h"
#include <stddef.h>
/**
* _strstr - Locates a substring
* @haystack: String to search
* @needle: Substring to find
* Return: Pointer to first substring, or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*n && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
