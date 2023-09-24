#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_dog - Frees the memory allocated to dog_t
* @d: Pointer to memory to be freed
*/
void free_dog(dog_t *d)
{
  if (d == NULL)
    {
      return;
    }
  free(d->name);
free(d->owner);
free(d);
}
