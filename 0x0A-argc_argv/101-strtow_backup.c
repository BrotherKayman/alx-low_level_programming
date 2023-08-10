#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const int MAX_WORDS = 100;

int splitString(char *str, char *words[], int max_words)
{
  int count = 0;
  char *token = strtok(str, " ");

  while (token != NULL && count < max_words)
    {
      words[count++] = token;
      token = strtok(NULL, " ");
    }

  return (count);
}

char **strtow(char *str)
{
  if (str == NULL || strcmp(str, "") == 0)
    return (NULL);

  char **words = malloc(MAX_WORDS * sizeof(char *));
  if (words == NULL)
    return (NULL);

  int num_words = splitString(str, words, MAX_WORDS - 1);
  if (num_words == 0)
    {
      free(words);
      return (NULL);
    }

  words[num_words] = NULL;
  return (words);
}

