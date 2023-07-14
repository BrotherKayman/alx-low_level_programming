#include <stdio.h>
/**
 * main - Program prints all the numbers of base 16 in lowercase
 * Return: 0 on success
 */
int main(void)
{
int alph, num;
for (alph = 48; alph <= 57; alph++)
{
putchar(alph);
}
for (num = 97; num <= 102; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
