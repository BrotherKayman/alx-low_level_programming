#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count = 0;
    dlistint_t *current = head;

    while (current != NULL)
    {
        if (count == index)
            {
            return (current);

        count++;
            }
        current = current->next;
    }
    return (NULL);
}
