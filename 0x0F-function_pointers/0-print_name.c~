#include "funtion_pointers.h"
#include <stdio.h>
#include <ctype.h>
/**
* print_name - Prints name
* @name: Name
*/
void print_uppercase(char *name);
void print_lowercase(char *name);
void print_name(char *name, void (*f)(char *))
{
f(name);
}
/**
* print_uppercase - prints name in uppercase
* @name: Name to be printed
*/
void print_uppercase(char *name)
{
int i = 0;
while (name[i] != '\0')
{
putchar(toupper(name[i]));
i++;
}
putchar('\n');
}
/**
* print_lowercase - Prints name in lowercase
* @name: Name to be printed
*/
void print_lowercase(char *name)
{
int i = 0;
while (name[i] != '\0')
{
putchar(tolower(name[i]));
i++;
}
putchar('\n');
}
