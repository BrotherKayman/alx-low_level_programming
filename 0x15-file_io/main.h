#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stddef.h>
#define BUFFER_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void cp_file(int exit_code, const char *message, const char *file_name);
#endif
