#include <stdio.h>
#include <math.h>
/**
 * largest_prime_factor - Program finds the largest prime factor
 * @n: Carries prime factor
 * Return: largest prime factor
 */
long largest_prime_factor(long n)
{
long largest_factor = -1;
long i;
while (n % 2 == 0)
{
largest_factor = 2;
n /= 2;
}
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest_factor = i;
n /= i;
}
}
if (n > 2)
{
largest_factor = n;
}
return (largest_factor);
}
/**
 * main - Entry Point
 * Return: 0 on Success
 */
int main(void)
{
long number = 612852475143;
long largest_prime = largest_prime_factor(number);
printf("%ld\n", largest_prime);
return (0);
}
