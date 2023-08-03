#include "main.h"

/**
 * wildcmp - Compares two strings considering the '*' wildcard.
 * @s1: The first input string.
 * @s2: The second input string with '*' wildcard.
 *
 * Return: 1 if strings is identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
  if (*s2 == '*')
    {
      if (*s1 == '\0' && *(s2 + 1) == '\0')
	return (1);
      if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
	return (1);
    }

  if (*s1 == *s2)
    {
      if (*s1 == '\0')
	return (1);
      return (wildcmp(s1 + 1, s2 + 1));
    }

  return (0);
}
