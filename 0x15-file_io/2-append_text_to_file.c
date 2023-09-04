#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
* append_text_to_file - Appends text to end of a file.
* @filename: Name of the file
* @content: A NULL-terminated string to append
*
* Return: 1 on success, otherwise -1 on failure.
*/
int append_text_to_file(const char *filename, char *content)
{
int descriptor;
ssize_t written;
if (filename == NULL)
{
return (-1);
}
if (content == NULL)
{
return (1);
}
descriptor = open(filename, O_WRONLY | O_APPEND);
if (descriptor == -1)
{
return (-1);
}
written = write(descriptor, content, strlen(content));
close(descriptor);
if (written == -1)
{
return (-1);
}
return (1);
}
