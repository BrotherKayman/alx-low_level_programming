#include "main.h"
/**
* _strlen - counts length of a string
* @s: string
* Return: string length
*/
int _strlen(char *s)
{
int x = 0;
while (*s != '\0')
{
x++;
s++;
}
return (x);
}
