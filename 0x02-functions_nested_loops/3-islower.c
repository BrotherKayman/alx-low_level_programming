#include <unistd.h>
#include "main.h"
/**
 * _islower - Checks if character is lowercase
 *
 * @c: The character to check
 *
 * Return: 1 if character is lowercase, otherwise 0 Always
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
