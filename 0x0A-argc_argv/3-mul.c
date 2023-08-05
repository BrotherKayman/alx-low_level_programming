#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry Point
* @argc: The number of arguments
* @argv: Pointer to the arguments
* Return: 1 on error, otherwise 0
*/
int main(int argc, char *argv[])
{
int i;
int num1;
int num2;
int result;
num1 = 0;
num2 = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
for (i = 0; argv[1][i] != '\0'; i++)
{
num1 = num1 * 10 + (argv[1][i] - '0');
}
for (i = 0; argv[2][i] != '\0'; i++)
{
num2 = num2 * 10 + (argv[2][i] - '0');
}
result = (num1 *num2);
printf("%d\n", result);
return (0);
}
