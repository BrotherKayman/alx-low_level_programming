#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - Counts length of list_t elements
 * @h: Points to the first node
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d]\n", h->len);
i++;
h = h->next;
}
return (i);
}
