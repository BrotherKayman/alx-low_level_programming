#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 * Return: Pointer to allocated memory or 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
  void *ptr = malloc(b);

  if (ptr == NULL)
    {
      printf("Memory allocation failed.\n");
      exit(98);
    }

  return (ptr);
}
