#include <stdio.h>

char *_strcpy(char *dest, char *src) {
  // Check if src and dest are not NULL
  if (src == NULL || dest == NULL) {
    return NULL;
  }

  // Copy characters from src to dest until the null terminator is found
  char *dest_ptr = dest;
  while (*src != '\0') {
    *dest_ptr = *src;
    src++;
    dest_ptr++;
  }

  // Add the null terminator to the end of the copied string
  *dest_ptr = '\0';

  return dest;
}
