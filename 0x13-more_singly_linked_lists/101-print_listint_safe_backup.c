#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint_safe - Prints a listint_t linked list.
* @head: First node.
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
const listint_t *node = head;
const listint_t *loop = NULL;
while (node != NULL)
{
if (node->next == loop)
  {
printf("-> [%p] %d\n", (void *)node->next, node->next->n);
exit(98);
}
i++;
node = node->next;
}
return (i);
}
