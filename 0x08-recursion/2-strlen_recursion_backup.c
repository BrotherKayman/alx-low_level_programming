#include "main.h"
/**
* _strlen_recursion - Counts striing length
* @s: String
* Return: String length
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
return (1 + _strlen_recursion(s + 1));
}
