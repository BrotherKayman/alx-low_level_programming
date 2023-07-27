#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: Pointer to the first number.
 * @n2: Pointer to the second number.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int len1, len2, carry = 0;
  int i, j, k;

  len1 = strlen(n1);
  len2 = strlen(n2);

 
  if (len1 >= size_r - 1 || len2 >= size_r - 1)
    return (0);

  i = len1 - 1;
  j = len2 - 1;
  k = size_r - 1;

  r[k] = '\0';
  while (i >= 0 || j >= 0)
    {
      int sum = carry;

      if (i >= 0)
	sum += n1[i--] - '0';

      if (j >= 0)
	sum += n2[j--] - '0';

      carry = sum / 10;
      r[--k] = sum % 10 + '0';
    }

 
  if (carry)
    {
       if (k == 0)
	return (0);
      r[--k] = carry + '0';
    }

 
  memmove(r, &r[k], size_r - k);

  return r;
}
