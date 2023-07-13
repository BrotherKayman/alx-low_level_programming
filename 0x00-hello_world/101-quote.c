#include <stdio.h>
#include <unistd.h>
/**
 * main - Program prints an error
 * Return: 1 on success
 */
int main(void)
{
FILE *errorFile = stderr;
 fprintf(errorFile,"and that piece of art is useful\" - Dora Korpar, 2015-10-19");
return (1);
}
