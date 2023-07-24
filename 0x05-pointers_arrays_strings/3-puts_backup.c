#include "main.h"
/**
 * _puts - Function prints a string
 * @s: String
 */

void _puts(char *s)
{
  while (*s != '\0')
    {
      _putchar(*s);
      s++;
    }
  _putchar('\n');
}
