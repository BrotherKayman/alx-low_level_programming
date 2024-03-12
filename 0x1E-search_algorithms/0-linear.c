#include "search_algos.h"

/**
   * linear_search - Function to search for a value in an array of integers.
  * @array: Pointer to the first element of the array to search in.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  * Return: The index of the first occurrence of the value in the array.
  *         (-1) if the value is not present in the array or if the array is NULL.
  * Description: Prints each value in the array as it gets compared.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}