#include "main.h"

/**
 * _push - Function to push an element onto the stack 
 * @stack: ...
 * @line_number: ...
 * @data: ...
 */
void _push(stack_t **stack, unsigned int line_number, int data) 
{
    StackNode* new_node = (StackNode*)malloc(sizeof(StackNode));
    if (new_node == NULL) 
    {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    new_node->data = data;
    new_node->next = top;
    top = new_node;
}

/**
 * _pall - Function to print all values on the stack 
 * @stack: ...
 * @line_number: ...
 */
void _pall(stack_t **stack, unsigned int line_number) 
{
    StackNode* temp = top;
    while (temp != NULL) 
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void free_stack() 
{
    while (top != NULL) 
    {
        StackNode* temp = top;
        top = top->next;
        free(temp);
    }
}

