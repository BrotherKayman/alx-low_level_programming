#include "main.h"
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
_putchar(*s);
_print_rev_recursion(s - 1);
}
