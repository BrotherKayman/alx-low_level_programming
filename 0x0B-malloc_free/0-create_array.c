#include "main.h"
#include <stdlib.h>
/**
* create_array - Creates an array of characters.
* @size: The size of the array.
* @c: The character to initialize the array with.
*
* Return: Pointer to new array, or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
char *array = (char *)malloc(size * sizeof(char));
unsigned int i;
{
if (size == 0)
return (NULL);
}
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
