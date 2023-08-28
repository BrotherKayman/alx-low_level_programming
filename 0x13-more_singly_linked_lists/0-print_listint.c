#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* print_listint - prints all the elements of a listint_t
* @h: Head of list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
i++;
printf("%d\n", h->n);
h = h->next;
}
{
return (i);
}
}
