#include <stdio.h>
/**
* print_args - Recursive function to print arguments
* @argc: The number of arguments
* @argv: Array of pointers to the arguments
* @index: Current index of the argument to print
*/
void print_args(int argc, char *argv[], int index)
{
if (index < argc)
{
printf("%s\n", argv[index]);
print_args(argc, argv, index + 1);
}
}
/**
* main - Entry point of the program
* @argc: The number of arguments
* @argv: Array of pointers to the arguments
* Return: Always 0
*/
int main(int argc, char *argv[])
{
print_args(argc, argv, 0);
return (0);
}
