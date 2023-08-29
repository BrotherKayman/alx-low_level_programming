#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_listint2 - Frees a listint_t list and sets the head to NULL.
* @head: A pointer to a pointer to the head node.
*/
void free_listint2(listint_t **head)
{
listint_t *next;
if (head == NULL)
{
return;
}
while (*head)
{
next = (*head)->next;
free(*head);
*head = next;
}
*head = NULL;
}
