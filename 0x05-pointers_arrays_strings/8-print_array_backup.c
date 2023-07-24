#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @n: array
 * @a: Points to an array
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x < n - 1)
printf(", ");
}
printf("\n");
}
