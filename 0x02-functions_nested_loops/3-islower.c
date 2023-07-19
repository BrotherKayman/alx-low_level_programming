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
int main(void)
{
  int r;
int _islower(int c);
  r = _islower('H');
  _putchar(r + '0');
  r = _islower('o');
  _putchar(r + '0');
   _putchar('\n');
  return (0);
}
