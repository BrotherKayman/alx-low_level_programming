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
  const list_t *str = h;

  while (str != NULL)
    {
      if (str == NULL)
	printf("[0] (nil)");
      else
      printf("%d", str->data);
      i++;
      if (str->next != NULL)
	{
	  printf("\n");
	}
      str = str->next;
    }
  printf("\n");

  return (i);
}
