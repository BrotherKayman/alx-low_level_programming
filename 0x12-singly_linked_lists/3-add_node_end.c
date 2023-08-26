#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - Adds a new node to end of list_t
* @head: First node
* @str: Node data
* Return: Address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
if (str == NULL)
return (NULL);
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new;
}
return (new);
}
