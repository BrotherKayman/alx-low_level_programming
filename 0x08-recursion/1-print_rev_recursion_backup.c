#include "main.h"
#include <string.h>
/**
* _print_rev_recursion - Prints a string in reverse
* @s: Carries a string
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
_print_rev_recursion(s + strlen(s) - 1);
}
}
