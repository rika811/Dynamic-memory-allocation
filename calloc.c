// C Program to dynamically allocate an array using calloc()
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  char *str = (char *)calloc(n, sizeof(char));

  if (str == NULL) {
    printf("Memory Error!\n");
  } else {
    // initializing array with char variables
    for (int i = 0; i < n; i++) {
      char ch;
      scanf("%c", &ch);
      *(str + i) = ch;
    }

    // printing array using pointer
    for (int i = 0; i < n; i++) {
      printf("%c", *(str + i));
    }
  }

  return 0;
}
