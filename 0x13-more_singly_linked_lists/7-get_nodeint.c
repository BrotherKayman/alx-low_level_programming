#include "lists.h"
#include <stdlib.h>
/**
* get_nodeint_at_index - returns the nth node the linked list
* @head: First node
* @index: Index of the list
* Return: NULL if node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head != NULL)
{
if (i == index)
{
return (head);
}
head = head->next;
i++;
}
return (NULL);
}
