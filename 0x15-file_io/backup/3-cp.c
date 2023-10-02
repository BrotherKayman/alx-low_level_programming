#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
* cp_file - program that copies the content of a file to another file
* @exit_code: Success or Fail code upon completion
* @message: File copy status
* @file_name: Names of files to be copied
*/
void cp_file(int exit_code, const char *message, const char *file_name)
{
dprintf(STDERR_FILENO, message, file_name);
exit(exit_code);
}
