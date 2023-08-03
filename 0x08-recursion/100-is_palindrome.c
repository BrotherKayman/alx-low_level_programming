#include <stdio.h>
#include <string.h>
/**
* is_palindrome - Checks if a string is a palindrome.
* @s: String to be checked.
*
* Return: 1 if string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int result;
int x = strlen(s);
if (x <= 1)
{
return (1);
}
if (*s != s[x - 1])
{
return (0);
}
result  = is_palindrome(s + 1);
return (result);
}
