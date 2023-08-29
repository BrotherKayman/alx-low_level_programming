#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - Deletes head node of listint_t and returns n
* @head: First node
* Return: 0 if the linked list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int i;
if (head == NULL || *head == NULL)
{
return (0);
}
i = (*head)->n;
*head = (*head)->next;
free(temp);
return (i);
}
