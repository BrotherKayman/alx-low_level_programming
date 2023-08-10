#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - Concatenates two strings
* @s1: First string.
* @s2: Second string.
* @n: Number of bytes from to concatenate.
* Return: Pointer to concatenated string, otherwise NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len_s1 = 0;
unsigned int len_s2 = 0;
unsigned int i, length;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len_s1 = strlen(s1);
len_s2 = strlen(s2);
if (n >= len_s2)
n = len_s2;
length = len_s1 + n + 1;
concat = (char *)malloc(length *sizeof(char));
if (concat == NULL)
return (NULL);
for (i = 0; i < len_s1; i++)
concat[i] = s1[i];
for (; i < length - 1; i++)
concat[i] = s2[i - len_s1];
concat[i] = '\0';
return (concat);
}
