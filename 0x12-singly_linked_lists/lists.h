#include <stdlib.h>
#include <stddef.h>
#ifndef LISTS_H
#define LISTS_H

struct list_t
{
  int data;
  struct list_t *next;
};

typedef struct list_t list_t;

size_t print_list(const list_t *h);

  #endif
