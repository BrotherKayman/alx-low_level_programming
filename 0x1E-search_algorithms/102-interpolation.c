#include "search_algos"
/**
* exponential_search - Searches for a value in a sorted array of integers
*                      using the Exponential search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: The index of the first occurrence of the value in the array.
*         (-1) if the value is not present in the array or if array is NULL.
*/
int exponential_search(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return -1;

if (array[0] == value)
return 0;

size_t track = 1;
while (track < size && array[track] < value)
{
printf("Value checked array[%zu] = [%d]\n", track, array[track]);
track *= 2;
}

printf("Value found between indexes [%zu] and [%zu]\n", track / 2, track >= size ? size - 1 : track);

return binary_search(array, track / 2, track >= size ? size - 1 : track, value);
}