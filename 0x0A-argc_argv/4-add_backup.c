#include <stdio.h>
/**
* is_number - Check if a string represents a number
* @str: The string to check
* Return: 1 if a number, 0 otherwise
*/
int is_number(const char *str)
{
while (*str != '\0')
{
if (*str < '0' || *str > '9')
{
  return (0);
}
str++;
}
return (1);
}
/**
* str_to_int - Convert a string to an integer
* @str: The string to convert
* Return: The converted integer
*/
int str_to_int(const char *str)
{
int num = 0;
while (*str != '\0')
{
num = num * 10 + (*str - '0');
str++;
}
return (num);
}
/**
* main - Entry point of the program
* @argc: The number of arguments
* @argv: Array of pointers to the arguments
* Return: 0 on success, 1 if error
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
if (!is_number(argv[1]) || !is_number(argv[2]))
{
printf("Error\n");
return (1);
}
num1 = str_to_int(argv[1]);
num2 = str_to_int(argv[2]);
result = num1 + num2;
printf("%d\n", result);
return (0);
}
