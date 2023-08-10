#include <stdio.h>
#include <stdlib.h>
/**
* array_range - Creates an array of integers
* @min: Minimum value
* @max: Maximum value
* Return: A pointer to the arranged array, or NULL if fails.
*/
int *array_range(int min, int max)
{
int *x, y, i;
if (min > max)
return (NULL);
y = max - min + 1;
x = (int *)malloc(y *sizeof(int));
if (x == NULL)
return (NULL);
for (i = 0; i < y; i++)
x[i] = min + i;
return (x);
}
