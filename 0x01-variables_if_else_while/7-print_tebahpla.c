#include <stdio.h>
/**
 * main - Program prints the lowercase alphabet in reverse
 * Return: 0 on success
 */
int main(void)
{
int alph;
for (alph = 122; alph >= 97; alph--)
{
putchar(alph);
}
putchar('\n');
return (0);
}
