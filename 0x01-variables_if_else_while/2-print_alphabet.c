#include <stdio.h>
/**
 * main - Program will print a - z in lowercase
 * Return: 0 on success
 */
int main(void)
{
int alph = 97;
while (alph <= 122)
{
putchar(alph);
alph++;
}
putchar('\n');
return (0);
}
