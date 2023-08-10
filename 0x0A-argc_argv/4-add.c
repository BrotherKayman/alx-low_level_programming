#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point
* @argc: The number of command line arguments
* @argv: An array of strings containing the arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int sum = 0;
int x, y;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (x = 1; x < argc; x++)
{
for (y = 0; argv[x][y] != '\0'; y++)
{
if (!isdigit(argv[x][y]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[x]);
}
printf("%d\n", sum);
return (0);
}
