#include "main.h"
/**
* flip_bits - Returns the number of bits needed to flip one number to another.
* @n: First number
* @m: Second number
*
* Return: The number of bits to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int i = 0;
while (xor_result > 0)
{
i += xor_result & 1;
xor_result >>= 1;
}
return (i);
}
