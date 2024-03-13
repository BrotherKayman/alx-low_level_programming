#include <stdio.h>
#include <math.h>
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
int jump = (int)sqrt(size);
int prev = 0;
int i;
if (array == NULL || size == 0)
return (-1);

printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
while (array[jump] < value && jump < (int)size)
{
prev = jump;
jump += (int)sqrt(size);
if (jump < (int)size)
printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
}

printf("Value found between indexes [%d] and [%d]\n", prev, jump);
for (i = prev; i <= jump && i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
