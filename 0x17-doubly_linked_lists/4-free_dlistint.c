#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *to_free = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		to_free = head;
		head = head->next;
		free(to_free);
	}
	free(head);
}
