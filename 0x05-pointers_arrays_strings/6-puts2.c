#include "main.h"
/**
* puts2 - Prints every other character of a string
* @str: Pointer to a string
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0' && str[i + 1] != '\0')
{
_putchar(str[i]);
i += 2;
}
if (str[i] != '\0')
{
_putchar(str[i]);
}
_putchar('\n');
}
