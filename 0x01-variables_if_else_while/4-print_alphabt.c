#include <stdio.h>
/**
 * main - Program will print a - z lowercase except e &
 * Return: 0 on success
 */
int main(void)
{
int lower = 97;
while (lower <= 122)
{
if (lower == 101 || lower == 113)
{
lower++;
continue;
}
putchar(lower);
lower++;
}
putchar('\n');
return (0);
}
