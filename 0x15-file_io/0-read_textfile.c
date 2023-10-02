#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
* read_textfile - function reads a text file and prints it to POSIX
* @filename: name of file to be read
* @letters: Number of letters to be read and printed
* Return: letters and numbers read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t read;
ssize_t written;
char *chars;
FILE *file;
if (filename == NULL)
{
return (0);
}
file = fopen(filename, "r");
if (file == NULL)
return (0);
chars = (char *)malloc(sizeof(char) * (letters + 1));
if (chars == NULL)
{
fclose(file);
return (0);
}
read = fread(chars, sizeof(char), letters, file);
if (read == -1)
{
free(chars);
fclose(file);
return (0);
}
chars[read] = '\0';
written = write(STDOUT_FILENO, chars, read);
if (written == -1 || written != read)
{
free(chars);
fclose(file);
return (0);
}
free(chars);
fclose(file);
return (read);
}
