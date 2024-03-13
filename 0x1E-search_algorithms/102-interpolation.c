#include <stdio.h>

/**
* interpolation_search - Searches for a value in a sorted array of integers
*                        using the Interpolation search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: The index of the first occurrence of the value in the array.
*         (-1) if the value is not present in the array or if array is NULL.
*/
int interpolation_search(int *array, size_t size, int value)
{
int min = 0;
int max = size - 1;
int i;
if (array == NULL || size == 0)
return (-1);

while (min <= max && value >= array[min] && value <= array[max])
{
i = min + (((double)(max - min) / (array[max] - array[min]))
* (value - array[min]));

printf("Value checked array[%d] = [%d]\n", i, array[i]);

if (array[i] == value)
return (i);

if (array[i] < value)
min = i + 1;
else
max = i - 1;
}

printf("Value checked array[%d] is out of range\n", max);
return (-1);
}
