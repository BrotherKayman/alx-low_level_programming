#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Prints the opcodes
 * @num_bytes: number of bytes
 */
void print_opcodes(int num_bytes)
{
  int i;
  unsigned char *main_ptr = (unsigned char *)print_opcodes;
  for (i = 0; i < num_bytes; i++)
    {
    printf("%02x ", *(main_ptr + i));
  }
  printf("\n");
}
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument value
 * Return: 1 or 2 on error, otherwise 0
 */
int main(int argc, char *argv[])
{
  if (argc != 2)
    {
    printf("Error\n");
    return (1);
  }

  int num_bytes = atoi(argv[1]);

  if (num_bytes < 0)
    {
    printf("Error\n");
    return (2);
  }

  print_opcodes(num_bytes);

  return (0);
}
