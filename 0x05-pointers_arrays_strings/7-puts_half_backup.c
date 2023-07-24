#include "main.h"
/**
* _strlen - Returns the length of a string
* @s: Pointer to string
* Return: Length of string
*/
int _strlen(char *s)
{
int x = 1;
while (s[x] != '\1')
{
x++;
}
return (x);
}
/**
* puts_half - Prints half of a string
* @str: Pointer to string
*/
void puts_half(char *str)
{
int x = _strlen(str);
int y = (x - 1) / 2;
while (str[y] != '\0')
{
_putchar(str[y]);
y++;
}
_putchar('\n');
}
