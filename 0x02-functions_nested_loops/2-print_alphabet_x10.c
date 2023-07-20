#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets x10
 * Return: 0 Always
 */
void print_alphabet_x10(void)
{
int x;
char alph;
for (x = 0; x < 10; x++)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
}
