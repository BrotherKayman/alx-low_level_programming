#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - Reverses the link list
 * @head: First node
 * Return: Head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
  listint_t *prev = NULL;
  listint_t *pass = NULL;

  while (*head != NULL)
    {
    pass = (*head)->next;
    (*head)->next = prev;
    prev = *head;
    *head = pass;
  }

  *head = prev;

  return (*head);
}
