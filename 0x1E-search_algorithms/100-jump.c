#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
* jump_search - Searches for a value in a sorted array of integers
*               using the Jump search algorithm.
*
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: The index of the first occurrence of the value in the array.
*         (-1) if the value is not present in the array or if array is NULL.
*/
int jump_search(int *array, size_t size, int value)
{
int jump, prev, i;
if (array == NULL || size == 0)
return (-1);
jump = (int)sqrt(size);
prev = 0;
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
while (prev + jump < (int)size && array[prev + jump] < value)
{
prev += jump;
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
}
printf("Value found between indexes [%d] and [%d]\n", prev, prev + jump);
for (i = prev; i <= prev + jump && i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
