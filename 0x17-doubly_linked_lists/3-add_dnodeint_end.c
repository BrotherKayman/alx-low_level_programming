#include "lists.h"
/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: A pointer to a pointer to the head of the doubly linked list.
* @n: The data to be stored in the new node.
*
* Return: Element address or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *to_free;
if (head == NULL)
{
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
to_free = *head;
}
while (to_free->next != NULL)
{
to_free = to_free->next;
to_free->next = new_node;
new_node->prev = to_free;
}
return (new_node);
}