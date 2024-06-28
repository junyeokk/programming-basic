/* 소스: 10const.c */

#include <stdio.h>

int main(void) {
  // 키워드 const로 상수 만들기
  double const e = 2.718281; // 오일러 상수

  // e = 2.71828l // 상수에 새로운 값 할당 불가능
  printf("오일러 상수 %f\n", e);

  return 0;
}