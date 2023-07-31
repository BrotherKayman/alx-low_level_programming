#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints sum of two diagonals of square matrix
* @a: Pointer to array
* @size: Size of square matrix
*/
void print_diagsums(int *a, int size)
{
int sumX = 0;
int sumY = 0;
int i;
for (i = 0; i < size; i++)
{
sumX += a[i * size + i];
sumY += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sumX, sumY);
}
