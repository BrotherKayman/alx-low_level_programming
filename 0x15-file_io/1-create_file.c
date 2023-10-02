#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
* create_file - Creates a file with the specified name and writes
* @filename: Name of file to create
* @content: NULL-terminated string for writing
*
* Return: 1 on success, otherwise -1 on failure.
*/
int create_file(const char *filename, char *content)
{
int descriptor;
ssize_t written;
if (filename == NULL)
{
return (-1);
}
descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (descriptor == -1)
{
return (-1);
}
if (content != NULL)
{
written = write(descriptor, content, strlen(content));
close(descriptor);
if (written == -1)
{
return (-1);
}
}
else
{
close(descriptor);
}
return (1);
}
