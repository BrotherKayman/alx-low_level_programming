#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_binary - Convert a decimal number to binary and print it
* @n: Decimal number to be convert and print
*
* This function takes a decimal number
* then prints the binary representation to the standard output
*/
void print_binary(unsigned long int n)
{
int count = sizeof(n) * 8; /* Number of bits in an unsigned long int */
int x = count - 1;
int bit;
int lead = 0; /* To skip leading zeros */
while (x >= 0)
{
if (n == 0)
putchar(n);
bit = (n >> x) & 1; /* Extract the bit at the current index */
if (bit == 1 || lead)
{
printf("%d", bit); /* Print the extracted bit */
lead = 1; /* Add a 1 when encountered */
}
x--;
}
}
