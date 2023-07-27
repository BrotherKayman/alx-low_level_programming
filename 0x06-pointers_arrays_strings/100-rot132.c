#include "main.h"
/**
* rot13 - Encodes a string using ROT13 cipher
* @str: Pointer to the string
* Return: Encoded string.
*/
char *rot13(char *str)
{
char *ptr = str;
int i;
char rot_tab[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
while (*ptr)
{
for (i = 0; i < 52; i++)
{
if (*ptr == alphabet[i])
{
*ptr = rot_tab[i];
break;
}
}
ptr++;
}
return (str);
}
