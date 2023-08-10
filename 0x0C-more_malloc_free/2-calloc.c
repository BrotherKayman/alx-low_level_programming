#include "main.h"
#include <stdlib.h>
/**
* _calloc - Allocates memory for nmemb array
* @nmemb: Number of elements.
* @size: Size of each element in bytes.
* Return: Pointer to the allocated memory, or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = calloc(nmemb, size);
return (ptr);
}
