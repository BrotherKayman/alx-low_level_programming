#include "main.h"
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int _putchar(char c)
{
  return write(1, &c, 1);
}
int main(void)
{
  print_alphabet();
  return (0);
}
