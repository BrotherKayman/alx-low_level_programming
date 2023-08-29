#include "lists.h"
/**
* add_nodeint_end - Adds a new node with an integer to end of linked list.
* @head: A pointer to a pointer to the head node of the linked list.
* @n: Integer value to be stored in a node
*
* Return: A pointer to the newly added node, or NULL on failure.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *end;
new = (listint_t *)malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
end = *head;
while (end->next != NULL)
{
end = end->next;
}
end->next = new;
}
return (new);
}
