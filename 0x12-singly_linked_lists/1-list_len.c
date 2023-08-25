#include "lists.h"
#include <stddef.h>
/**
 * list_len - Counts number of list_t elements
 * @h: Points to the list head
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
  size_t i = 0;
  const list_t *str = h;

  while (str != NULL)
    {
      i++;
      str = str->next;
    }

  return (i);
}
