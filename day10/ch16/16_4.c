#include <stdio.h>
#include <stdlib.h>

int main() {
  int num_elements;
  int* arr;

  printf("원소 개수 입력: ");
  scanf("%d", &num_elements);

  arr = (int *)malloc(num_elements * sizeof(int));
  if(arr == NULL) {
    printf("메모리 할당 오류");
    return 0;
  }

  for(int i = 0; i < num_elements; i++) {
    arr[i] = i;
  }
}