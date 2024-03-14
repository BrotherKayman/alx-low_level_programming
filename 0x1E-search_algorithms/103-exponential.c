#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array of integers
*                  using the Binary search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: The index of the value in the array, or -1 if not found.
*/
int binary_search(int *array, size_t size, int value)
{
size_t left = 0;
size_t right = size - 1;

while (left <= right)
{
size_t mid = left + (right - left) / 2;

if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}

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
size_t bound = 1;
size_t start, end;

if (array == NULL || size == 0)
return (-1);

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}

start = bound / 2;
end = (bound < size) ? bound : size - 1;

printf("Value found between indexes [%lu] and [%lu]\n", start, end);

return (binary_search(array + start, end - start + 1, value) + start);
}
