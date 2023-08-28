#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9; /*This line sets the value of the new node's data field to 9.*/
    new->next = head; /*Create  link from the new node current head of the linked list*/
    head = new; /*This line updates the head pointer to point to the new node*/
    n = print_listint(head); /*Print list*/
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
