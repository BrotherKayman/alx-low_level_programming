#include <stdio.h>
/**
 * main - Program prints all possible combinations of single-digit numbers.
 * Return: 0 on success
 */
int main(void)
{
int num;
int num2;
for (num = 48; num <= 57; num++)
{
for (num2 = 49; num2 <= 57; num2++)
{
putchar(num);
putchar(num2);
if (num == 57)
if (num2 ==57)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
