#include <stdio.h>
/**
 * main - Print first 98 Fibonacci numbers starting with 1 and 2
 * Return: 0 on Success
 */
int main(void)
{
unsigned long prevFib = 1;
unsigned long currFib = 2;
unsigned long tempVar;
int x = 2;
printf("1, 2");
while (x < 98)
{
tempVar = currFib;
currFib += prevFib;
prevFib = tempVar;
printf(", %lu", currFib);
x++;
}
printf("\n");
return (0);
}
