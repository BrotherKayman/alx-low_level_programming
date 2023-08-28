#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
* listint_len - Returns number of elements in a linked list
* @h: First node
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
