#include "lists.h"
#include <stdlib.h>
/**
* sum_listint - Calculates sum of n
* @head: First node
* Return: 0 if empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
