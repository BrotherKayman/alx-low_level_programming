#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 8
char random_char()
{
return (char)('!' + rand() % 94);
}
void generate_password(char *password)
{
  int i;
  srand(time(NULL));
for (i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = random_char();
}
}
int main()
{
char password[PASSWORD_LENGTH + 1];
generate_password(password);
printf("%s\n", password);
return 0;
}
