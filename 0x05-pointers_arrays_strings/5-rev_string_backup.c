#include "main.h"
/**
* rev_string - Prints a string in reverse
* @s: Pointer to a string
*/
void rev_string(char *s)
{
int x = 0;
int i;
while (s[x] != '\0')
{
x++;
}
for (i = 0; i < x / 2; i++)
{
s[i] = s[x - 1 - i];
s[x - 1 - i] = s[i];
}
}
