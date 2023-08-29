#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
* free_listint - prints all the elements of a listint_t
* @head: Head of list
*/
void free_listint(listint_t *head)
{
while (head != NULL)
{
listint_t *temp = head;
head = head->next;
free(temp);
}
}
