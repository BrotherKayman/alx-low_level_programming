#ifndef LISTS_H
#define LISTS_H

/* Header files */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/* Structure */
typedef struct dlistint_s
{
		int n;
			struct dlistint_s *prev;
				struct dlistint_s *next;
} dlistint_t;

/* Function Prototypes */
size_t print_dlistint(const dlistint_t *h);
#endif
