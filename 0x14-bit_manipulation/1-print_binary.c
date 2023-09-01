#include "main.h"
#include <stdio.h>
/**
* print_binary - Convert decimal to binary
* @n: Decimal
*/
void print_binary(unsigned long int n)
{
int count = sizeof(n);
int x = count - 1;
while (x >= 0)
{
int bit = (n >> x) & 1;
printf("%d", bit);
x--;
}
}
