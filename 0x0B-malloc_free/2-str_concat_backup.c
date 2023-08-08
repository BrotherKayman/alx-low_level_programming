#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Pointer to new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
  char *concat;
  int x = 0, y = 0, i = 0, j = 0;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  while (s1[x])
    x++;
  while (s2[y])
    y++;

  concat = malloc((x + y + 1) * sizeof(char));
  if (concat == NULL)
    return (NULL);

  while (s1[i])
    {
      concat[i] = s1[i];
      i++;
    }
  while (s2[j])
    {
      concat[i + j] = s2[j];
      j++;
    }
  concat[i + j] = '\0';

  return (concat);
}
