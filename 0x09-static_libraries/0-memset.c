#include "main.h"
#include <stddef.h>
/**
* my_memset - Fill memory with value*
* @s: Memory address
* @c: Memory value
* @t: Number of bytes to be copied
* Return: s
*/
void *my_memset(void *s, int c, size_t n)
{
  unsigned char *p = s;
  unsigned char value = (unsigned char)c;

  for (size_t i = 0; i < n; ++i) {
    *p = value;
    p++;
  }

  return (s);
}
