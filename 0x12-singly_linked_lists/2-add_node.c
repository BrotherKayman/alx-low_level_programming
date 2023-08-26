#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node to list_t
 * @head: First node
 * @str: Node data
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new = malloc(sizeof(list_t));
    if (str == NULL)
        return NULL;


    if (new == NULL)
        return (NULL);

    new->str = strdup(str);
    if (new->str == (NULL))
    {
        free(new);
        return (NULL);
    }

    new->len = strlen(str);
    new->next = *head;
    *head = new;

    return (new);
}
