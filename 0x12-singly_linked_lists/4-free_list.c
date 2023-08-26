#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* free_list -  frees list_t list
* @head: First node
*/
void free_list(list_t *head)
{
    list_t *cur_node = head;
    while (cur_node != NULL)
    {
        list_t *next = cur_node->next;
        free(cur_node->str);
        free(cur_node);
        cur_node = next;
    }
}



