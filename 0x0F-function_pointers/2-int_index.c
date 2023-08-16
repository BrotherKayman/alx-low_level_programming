#include "function_pointers.h"
#include <stddef.h>
/**
* int_index - Searches for an integer
* @array: Array of integers.
* @size: The number of elements in the array.
* @cmp: Compares values.
* Return: 0 or -1 if no matches or size is <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
