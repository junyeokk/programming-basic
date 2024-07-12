#include <stdio.h>
#include <stdlib.h>

int main() {
  int rows = 3;
  int cols = 4;

  int **arr = (int **)malloc(rows * sizeof(int *));
  if(arr == NULL) {
    fprintf(stderr, "메모리 할당이 실패했습니다.\n");
    return 0;
  }

  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      arr[i][j] = i * cols + j;
    }
  }

  printf("2D Array Elements:\n");
  for(int i = 0; i < rows; i++) {
    for(int j  = 0; j < cols; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  // 메모리 해제
  for(int i = 0; i < rows; i++) {
    free(arr[i]); // 각 행 해제
  }
  free(arr);

  return 0;
}