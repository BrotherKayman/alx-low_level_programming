#include "main.h"
/** 
 * _strcat - This function appends the src string to the dest string
 * @dest: String
 * @src: String
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

 while (*ptr)
 ptr++;

 while (*src)
 {
 *ptr = *src;
 ptr++;
 src++;
 }
 return (dest);
}
