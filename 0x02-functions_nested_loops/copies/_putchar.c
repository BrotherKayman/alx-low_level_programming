#include "main.h"
#include <unistd.h>
/**
 * Putchar prints a character
 * Return: 0 Always
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
