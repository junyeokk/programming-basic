#include <stdio.h>

void print(const int* ptr, int size);

int main(void) {
  // 상수 배열 선언 및 초기화
  const int arr[] = {1, 2, 3, 4, 5};

  // 배열을 출력하는 함수 호출
  print(arr, 5);
  
  return 0;
}

void print(const int* ptr, int size) {
  // 배열 요소를 순회하면서 출력
  for(int i = 0; i < size; i++) {
    printf("%d ", ptr[i]);
  }
  printf("\n");
}