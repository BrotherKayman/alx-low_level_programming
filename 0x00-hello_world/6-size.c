#include <stdio.h>
/**
 * main -  This program prints the size of various types on the computer it is compiled and run on
 * Return: 0 on success
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %lu byte(s)\n",(unassigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n",(unassigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n",(unassigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n",(unassigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n",(unassigned long)sizeof(e)); 
return (0);
}
