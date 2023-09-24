#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * multiplyDigits - Multiplies two positive numbers represented as strings.
 * @num1: First number as a string.
 * @num2: Second number as a string.
 * @result: Array to store the result of multiplication.
 *
 * Return: Length of the result.
 */
int multiplyDigits(char *num1, char *num2, char *result)
{
  int len1 = strlen(num1);
  int len2 = strlen(num2);
  int length = len1 + len2;
  int x = 0;

  for (int i = 0; i < length; i++)
    result[i] = '0';

  for (int i = len1 - 1; i >= 0; i--) {
    int P = num1[i] - '0';
    x = 0;

    for (int j = len2 - 1; j >= 0; j--) {
      int Q = num2[j] - '0';
      int sum = P * Q + (result[i + j + 1] - '0') + x;

      x = sum / 10;
      result[i + j + 1] = (sum % 10) + '0';
    }

    result[i] += x;
  }

  return (length);
}
