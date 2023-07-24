#include <stdio.h>

void print_array(int *a, int n) {
  if (a == NULL || n <= 0) {
    return; // If the array is NULL or n is not positive, just return
  }

  for (int i = 0; i < n; i++) {
    printf("%d", a[i]);

    // Print comma and space after all elements except the last one
    if (i < n - 1) {
      printf(", ");
    }
  }

  printf("\n");
}
