#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr1 = (int *)malloc(5 * sizeof(int));
  int *arr2 = (int *)calloc(5, sizeof(int));

  for (int i = 0; i < 5; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  for(int i = 0; i < 5; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  free(arr1);
  free(arr2);
}