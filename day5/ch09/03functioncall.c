#include <stdio.h>

int add(int a, int b); // int add(int, int)도 가능
int findMax(int, int); // int findMax(int a, int b)도 가능
void printMin(int, int); // int printMin(int a, int b)도 가능

int main(void) {
  int a = 10, b = 15;
  int max = findMax(a, b);

  printf("최대: %d\n", max);
  printf("합: %d\n", add(a, b));

  // 반환값이 없는 함수 호출은 일반 문장처럼 사용
  printMin(a, b);

  return 0;
}

void printMin(int a, int b) {
  int min = a < b ? a : b;
  printf("최소: %d\n", min);
}