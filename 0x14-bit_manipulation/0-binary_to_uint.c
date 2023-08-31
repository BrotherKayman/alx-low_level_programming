#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/**
* binary_to_uint - Convert binary to unsigned int
* @b: Brinary string
* Return: Converted string, or 0 if fail
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int convert = 0;
int len = strlen(b);
int i = 0;
while (i < len)
{
if (b != NULL)
{
if (b[i] != '0' || b[i] != '1' || (b[i] != '1' && '0'))
{
convert = strtol(b, NULL, 2);
return (convert);
}
else
return (0);
}
}
return (0);
}
