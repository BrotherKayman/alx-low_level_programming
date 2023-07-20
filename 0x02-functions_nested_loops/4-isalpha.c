#include <unistd.h>
#include "main.h"
/**
 *
 *
 * Return: 1 if alphabet, otherwise 0 always
 *
 */
int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
      return (1);
  else
    return (0);
}
