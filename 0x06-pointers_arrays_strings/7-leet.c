#include "main.h"
/**
* leet - Encodes a string to 1337
* @str: Pointer to string
* Return: Encoded array of strings
*/
char *leet(char *str)
{
char *ptr = str;
char leet_map[] = { '4', '3', '0', '7', '1' };
char vowels[] = { 'a', 'e', 'o', 't', 'l' };
while (*ptr)
{
int i;
for (i = 0; i < 5; i++)
{
if (*ptr == vowels[i] || *ptr == vowels[i] - 'a' + 'A')
{
*ptr = leet_map[i];
break;
}
}
ptr++;
}
return (str);
}
