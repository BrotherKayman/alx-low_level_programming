#include <stdio.h>
#include "main.h"

int main(void)
{
  int n;
  printf("Enter number,\n");
  scanf("%d",&n);
  int result = factorial(n);
  printf("Factorial of %d is %d\n", n, result);
  return 0;
}
