#include <stdio.h>
#include <stdlib.h>
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
int num;
num = 0;
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
* Return: 0 if successful, 1 if error
*/
int main(int argc, char *argv[])
{
if (argc != 2 || !is_number(argv[1]))
{
printf("Error\n");
return (1);
}
int i, coins, num_coins, total_coins, cents;
coins[] = {25, 10, 5, 2, 1};
num_coins = sizeof(coins) / sizeof(coins[0]);
total_coins = 0;
cents = str_to_int(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < num_coins; i++)
{
total_coins += cents / coins[i];
cents %= coins[i];
}
printf("%d\n", total_coins);
return (0);
}
