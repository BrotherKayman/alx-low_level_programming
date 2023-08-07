#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - Returns a pointer to a new string
* @s: Characters of a string
* Return: NULL or duplicated string
*/
char *_strdup(char *s)
{
char *duplicate;
size_t x;
x = strlen(s) + 1;
if (s == NULL)
{
return (NULL);
}
duplicate = (char *)malloc(x);
if (duplicate != NULL)
{
strcpy(duplicate, s);
}
return (duplicate);
}
