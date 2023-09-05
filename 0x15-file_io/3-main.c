#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
* main - Entry Point
* @argc: Argument count
* @argv: Vector
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
int descript_frm, descript_to;
ssize_t size_read;
ssize_t written;
char size[BUFFER_SIZE];
if (argc != 3)
{
cp_file(97, "Usage: cp file_from file_to\n", NULL);
}
descript_frm = open(argv[1], O_RDONLY);
if (descript_frm == -1)
{
cp_file(98, "Error: Can't read from file %s\n", argv[1]);
}
descript_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (descript_to == -1)
{
cp_file(99, "Error: Can't write to file %s\n", argv[2]);
}
while ((size_read = read(descript_frm, size, BUFFER_SIZE)) > 0)
{
written = write(descript_to, size, size_read);
if (written == -1)
{
cp_file(99, "Error: Can't write to file %s\n", argv[2]);
}
}
if (size_read == -1)
{
cp_file(98, "Error: Can't read from file %s\n", argv[1]);
}
if (close(descript_frm) == -1 || close(descript_to) == -1)
{
cp_file(100, "Error: Can't close fd %d\n", NULL);
}
return (0);
}
