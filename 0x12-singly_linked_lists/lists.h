#include <stddef.h>
#ifndef LISTS_H
#define LISTS_H

typedef struct list_s
{
  char *str;
  int len;
  struct list_s *next;
} list_t;


size_t print_list(const list_t *h);

  #endif
