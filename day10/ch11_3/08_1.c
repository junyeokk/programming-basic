#include <stdio.h>

int main() {
  int a[3] = {5, 10, 15};
  int* p = a; // a == a[0]

  // 포인터 변수 p 사용, 배열 원소 값 참조
  printf("%d %d %d\n", *(p), *(p + 1), *(p + 2));

  // 위 포인터 변수 p에서 배열처럼 첨자를 사용 가능
  printf("%d %d %d\n", p[0], p[1], p[2]);
}