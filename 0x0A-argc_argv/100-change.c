#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: The number of command line arguments
* @argv: An array of strings containing the arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int num_coins;
int i;
int amount;
int coins[] = {25, 10, 5, 2, 1};
int count;
if (argc != 2)
{
printf("Error\n");
return (1);
}
amount = atoi(argv[1]);
if (amount < 0)
{
printf("0\n");
return (0);
}
num_coins = sizeof(coins) / sizeof(coins[0]);
count = 0;
for (i = 0; i < num_coins; i++)
{
count += amount / coins[i];
amount %= coins[i];
}
printf("%d\n", count);
return (0);
}
