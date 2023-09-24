#include "function_pointers.h"
#include <ctype.h>
void print_name(char *name, void (*f)(char *));

void print_uppercase(char *name);
void print_lowercase(char *name);

void print_name(char *name, void (*f)(char *))
{
  f(name);
}

void print_uppercase(char *name)
{
  int i = 0;
  while (name[i] != '\0')
    {
     _putchar(toupper(name[i]));
      i++;
    }
  _putchar('\n');
}

void print_lowercase(char *name)
{
  int i = 0;
  while (name[i] != '\0')
    {
      _putchar(tolower(name[i]));
      i++;
    }
  _putchar('\n');
}
