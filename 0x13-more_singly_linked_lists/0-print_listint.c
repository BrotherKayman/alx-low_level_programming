#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

size_t print_listint(const listint_t *h)
{
size_t i = 0;
    while (h)
    {

        i++;
        pintf('%d', h->n);
        h = h->next;
    }
{
    printf("\n");
    return (i);
}
