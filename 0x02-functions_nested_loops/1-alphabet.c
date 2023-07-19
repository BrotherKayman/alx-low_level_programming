#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - check the code
 *
 * Return: Always 0
 */
int main(void)
{
  print_alphabet();
  return (0);
}

#include "main.h"

void print_alphabet(void) {
  char c;
  for (c = 'a'; c <= 'z'; c++) {
        _putchar(c);
    }
    _putchar('\n');
}
