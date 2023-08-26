#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
/**
* print_list - prints all elements of list_t
* @h: Points to linked list head
* Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
i++;
h = h->next;
}
return (i);
}
