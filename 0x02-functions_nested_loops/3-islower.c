#include <unistd.h>
#include "main.h"
/**
 * Checks lower case chars
 * Return: 0 Always
 */
int _islower(int c)
{
   if (c >= 'a' && c<= 'z')
    {
      return(1);
    }
   return (0);
}

