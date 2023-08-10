#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_WORDS 100
/**
* splitString - Counts string
* @str: Pointer to string
* @words: Array containing of string to be split
* @max_words: Maximum number of words
* Return: String count
*/
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
/**
* strtow - Splits trings
* @str: String to split
* Return: NULL if fails, otherwise pointer to array
*/
char **strtow(char *str)
{
char **words = malloc(MAX_WORDS * sizeof(char *));
int x_words = splitString(str, words, MAX_WORDS - 1);
if (str == NULL || strcmp(str, "") == 0)
{
return (NULL);
}
if (words == NULL)
{
return (NULL);
}
if (x_words == 0)
{
free(words);
return (NULL);
}
words[x_words] = NULL;
return (words);
}
