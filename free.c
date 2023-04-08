// C Program to dynamically allocate an int ptr
#include <stdio.h>
#include <stdlib.h>

int main() {
  // dynamically allocated variable, sizeof(char) = 1 byte
  char *ptr = (char *)malloc(sizeof(char));

  if (ptr == NULL) {
    printf("Memory Error!\n");
  } else {
    *ptr = 'S';
    printf("%c", *ptr);
  }

  // deallocating memory pointed by ptr
  free(ptr);

  printf("\n%c ", *ptr);

  // assign NULL to avoid garbage values
  ptr = NULL;

  return 0;
}
