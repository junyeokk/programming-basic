#include <stdio.h>
#define ROWS 2
#define COLS 3

void doubleElements(int arr[ROWS][COLS]);
void printArray(int arr[ROWS][COLS]);

int main() {
  int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};

  printf("Original array:\n");
  printArray(arr);

  doubleElements(arr);

  printf("Array after doubling elements:\n");
  printArray(arr);

  return 0;
}

void doubleElements(int arr[ROWS][COLS]) {
  for(int i = 0; i < ROWS; i++) {
    for(int j = 0; j < COLS; j++) {
      arr[i][j] *= 2;
    }
  }
}

void printArray(int arr[ROWS][COLS]) {
  for(int i = 0; i < ROWS; i++) {
    for(int j = 0; j < COLS; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}