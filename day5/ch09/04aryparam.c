#include <stdio.h>

int sumary(int ary[], int SIZE);

int main(void) {
  int point[] = { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 };
  int arySize = sizeof(point);
  printf("메인에서 배열 전체 크기: %d\n", arySize);
  int aryLength = arySize / sizeof(int);

  int sum = 0;
  for(int i = 0; i < aryLength; i++) {
    sum += point[i];
  }

  printf("메인에서 구한 합은 %d\n", sum);
  printf("함수 sumary() 호출로 구한 합은 %d\n", sumary(point, aryLength));
  printf("함수 sumary() 호출로 구한 합은 %d\n", sumary(&point[0], aryLength));
}

int sumary(int ary[], int SIZE) {
  int sum = 0;
  printf("함수에서 배열 전체크기: %d\n", (int) sizeof(ary));
  for(int i = 0; i < SIZE; i++) {
    sum += ary[i];
  }

  return sum;
}