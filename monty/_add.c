#include "main.h"

/**
 * add - Function to add the top two elements of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in the file
 */
void _add(stack_t **stack, unsigned int line_number) 
{
    stack_t *temp;

    if (*stack == NULL || (*stack)->next == NULL) 
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = (*stack)->next;
    temp->n += (*stack)->n;

    temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}
