#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes function to each element of an array
 * @array: Array of integers
 * @size: The size of the array
 * @action: Function to execute each array element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
  size_t i;
  for (i = 0; i < size; i++)
    {
    action(array[i]);
  }
}
