#include "main.h"
#include <stdio.h>
/**
* _strcmp - Function compares two strings
* @s1: String
* @s2: Srting
* Return: Negative or Positive, otherwise 0 if both strings are equal
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
 }
return (*s1 - *s2);
}
