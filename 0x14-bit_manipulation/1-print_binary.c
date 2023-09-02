#include "main.h"
#include <stdio.h>
/**
* print_binary - Convert a decimal number to binary and print it
* @n: Decimal number to be convert and print
*
* This function takes a decimal number
* then prints the binary representation to the standard output
*/
void print_binary(unsigned long int n)
{
int count = sizeof(n) * 8;
int x = count - 1;
int bit;
int lead = 0;
while (x >= 0)
{
bit = (n >> x) & 1;
if (bit == 1 || lead)
{
printf("%d", bit);
lead = 1;
}
x--;
}
}
