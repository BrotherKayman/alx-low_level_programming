#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char random_char() {
  // Generate a random character in the range '!' to '~' (printable ASCII characters)
  return (char)('!' + rand() % 94);
}

void generate_password(char *password) {
  // Set the seed for the random number generator using the current time
  srand(time(NULL));

  for (int i = 0; i < PASSWORD_LENGTH; i++) {
    password[i] = random_char();
  }

  password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password
}

int main() {
  char password[PASSWORD_LENGTH + 1];

  generate_password(password);

  printf("Random Password: %s\n", password);

  return 0;
}
