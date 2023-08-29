#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - Insert node
* @head: First node
* @idx: Index
* @n: data
* Return: New node address or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new = malloc(sizeof(listint_t));
unsigned int i;
if (head == NULL || new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; i < idx - 1 && *head != NULL; i++)
{
head = &((*head)->next);
}
if (i < idx - 1 || *head == NULL)
{
free(new);
return (NULL);
}
new->next = (*head)->next;
(*head)->next = new;
return (new);
}
