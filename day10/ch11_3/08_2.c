#include <stdio.h>

int main() {
  int a[3] = {5, 10, 15};

  int* p = a;

  // a[0]을 출력 후, p 다음 주소로 증가
  printf("%d ", *p++);
  // a[1]을 출력
  printf("%d\n\n", *p);
}