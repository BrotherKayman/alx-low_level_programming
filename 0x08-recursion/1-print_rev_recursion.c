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
return;
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
