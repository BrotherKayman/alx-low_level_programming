#include "main.h"
#include <stdio.h>
/**
* string_toupper - Function changes string to uppercase.
* @str: Pointer to string
* Return: str
*/
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
*ptr = *ptr - 'a' + 'A';
ptr++;
}
return (str);
}
