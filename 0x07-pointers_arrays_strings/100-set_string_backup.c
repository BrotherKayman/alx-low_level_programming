#include "main.h"
/**
* set_string - Sets the value of a pointer to a char
* @s: pointer to string
* @to: Points to s
*/
void set_string(char **s, char *to)
{
char *temp = *s;
*s = to;
*to = *temp;
}
