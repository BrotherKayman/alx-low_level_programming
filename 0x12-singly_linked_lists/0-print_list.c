#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all elements of list_t
 * @h: Points to linked list head
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
  size_t i = 0;
  const list_t *current = h;

  if (current == NULL)
    {
      printf("[0] (nil)\n");
      return (i);
    }

  while (current != NULL)
    {
       printf("%d", current->len);
      i++;
      if (current->next != NULL)
	{
	  printf("\n");
	}
      current = current->next;
    }
  printf("\n");
  return (i);
}
