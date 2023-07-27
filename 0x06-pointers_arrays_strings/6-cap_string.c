#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
* cap_string - Function changes string to uppercase.
* @str: Pointer to string
* Return: str
*/
char *cap_string(char *str)
{
int cap_next = 1;
int i, j;
for (i = 0, j = 0; str[i] != '\0'; i++)
{
if (!(isspace(str[i]) || ispunct(str[i])))
{
str[j++] = str[i];
}
else if (cap_next)
{
str[j++] = ' ';
cap_next = 0;
}
if (isspace(str[i]) || ispunct(str[i]))
cap_next = 1;
}
str[j] = '\0';
for (i = 0; str[i] != '\0'; i++)
{
if (isspace(str[i]) || ispunct(str[i]))
cap_next = 1;
else
{
if (cap_next)
{
str[i] = toupper(str[i]);
cap_next = 0;
}
}
}
return (str);
printf("\n");
}

