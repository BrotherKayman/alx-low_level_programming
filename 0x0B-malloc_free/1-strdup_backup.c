#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - Returns a pointer to a new string
* @str: Characters of a string
* Return: NULL or duplicated string
*/
char *_strdup(char *str)
{
char *duplicate;
size_t x;
x = strlen(str) + 1;
if (str == NULL)
{
return (NULL);
}
duplicate = (char *)malloc(x);
if (duplicate != NULL)
{
strcpy(duplicate, str);
}
return (duplicate);
}
