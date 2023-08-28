#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - Adds a new node at beginning of list.
* @head: Head of the linked list.
* @n: Value added to node.
*
* Return: Address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
