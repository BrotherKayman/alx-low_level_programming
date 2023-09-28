#include "main.h"
/**
* set_bit - Sets the value of a bit to 1 at a given index.
* @n: Pointer to the index value.
* @index: The index of the bit to set
*
* Return: 1 if it worked, or -1 on error.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= mask;
return (1);
}
