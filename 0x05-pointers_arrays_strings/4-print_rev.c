#include "main.h"
/**
* print_rev - Prints a string in reverse
* @s: Pointer to a string
*/
void print_rev(char *s)
{
int x = 0;
int i;
while (s[x] != '\0')
{
x++;
}
for (i = x - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
