#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* delete_nodeint_at_index - Deletes the node at index.
* @head: First node.
* @index: Node index.
* Return: 1 on success, otherwise -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev = NULL;
unsigned int i;
listint_t *temp = *head;
if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
for (i = 0; i < index && *head != NULL; i++)
{
prev = *head;
*head = (*head)->next;
}
if (i < index || *head == NULL)
  {
return (-1);
}
prev->next = (*head)->next;
free(*head);
*head = prev->next;
return (1);
}
