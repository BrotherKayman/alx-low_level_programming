#include <stdio.h>
#include "search_algos.h"
/**
 * advanced_binary_recursive - Performs advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the current subarray
 * @right: Right index of the current subarray
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, int left, int right, int value)
{
int mid;
int i;
if (left <= right)
{
mid = left + (right - left) / 2;
printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
{
printf(", ");
}
}
printf("\n");
if (array[mid] == value)
{
if (mid == left || array[mid - 1] != value)
return (mid);
else
return (advanced_binary_recursive(array, left, mid - 1, value));
}
if (array[mid] < value)
return (advanced_binary_recursive(array, mid + 1, right, value));
else
return (advanced_binary_recursive(array, left, mid - 1, value));
}
return (-1);
}
/**
 * advanced_binary - Perform advanced binary search in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);
return (advanced_binary_recursive(array, 0, size - 1, value));
}
