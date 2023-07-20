#include <stdio.h>
/**
 * main - Entry Point
 * Generate Fibonacci numbers and calculate sum of even numbers
 * Return: 0 on success
 */
int main()
{
unsigned long prevFib = 1;
unsigned long currFib = 2;
unsigned long tempVar;
unsigned long sum = 2;
while (1)
{
tempVar = currFib;
currFib += prevFib;
prevFib = tempVar;
if (currFib % 2 == 0 && currFib <= 4000000)
{
sum += currFib;
}
else if (currFib > 4000000) {
break;
}
}
printf("Sum: %lu\n", sum);
return (0);
}
