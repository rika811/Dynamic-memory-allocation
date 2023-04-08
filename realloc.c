// C Program to reallocate memory blocks during run-time
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  int *arr1 = (int *)malloc(n * sizeof(int));
  int *arr2 = (int *)calloc(n, sizeof(int));

  if (arr1 == NULL || arr2 == NULL) {
    printf("Memory Error!\n");
  } else {
    for (int i = 0; i < n; i++) {
      *(arr1 + i) = i;
    }
   
    for (int i = 0; i < n; i++) {
      *(arr2 + i) = n - i;
    }
    int *arr3 = (int *)realloc(arr1, (n / 2) * sizeof(int));

    int *arr4 = (int *)realloc(arr2, (2 * n) * sizeof(int));

    if (arr3 == NULL || arr4 == NULL) {
      printf("Reallocation failed!\n");
    } else {
    
      for (int i = 0; i < n; i++) {
        printf("%d ", *(arr3 + i));
      }

      printf("\n");

      for (int i = 0; i < 2 * n; i++) {
        printf("%d ", *(arr4 + i));
      }
    }
  }
  return 0;
}
