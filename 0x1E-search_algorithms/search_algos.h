#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Header files */
#include <stddef.h>
#include <stdio.h>
#include <math.h>

/*structures*/
/**
 * struct listint_s - structure for a singly linked list
 *
 * @n: an integer value stored in the node
 * @index: the position of the node in the list
 * @next: a pointer to the next node in the list
 *
 * Description: This structure defines a node for a singly linked list
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Structure for a singly linked list with an express lane
 *
 * @n: Integer value stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the list
 * @express: Pointer to the next node in the express lane
 *
 * Description: This structure defines a node for a singly linked list
 *              with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;


/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
#endif /* SEARCH_ALGOS_H */
