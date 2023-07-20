#include <stdio.h>
/**
 * print_fibanocci - Prints first 50 Fibanacci numbers starting with 1 and 2
 * @n: integer to be printed
 * Return: 0 on success
 */

void print_fibonacci(int n) {
int fib[50];
int i;
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (i = 0; i < n; i++) {
printf("%d", fib[i]);
if (i < n - 1) {
printf(", ");
}
}
printf("\n");
}
int main()
{
print_fibonacci(50);
return 0;
}
