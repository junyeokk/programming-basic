#include <stdio.h>

int main() {
  int td[2][3] = {{1, 2, 3}, {4, 5, 6}};

  // 배열 크기 출력
  printf("Size of entire array: %u bytes\n", sizeof(td)); // 4 bytes * 6 = 24 bytes
  printf("Size of first row: %u bytes\n", sizeof(td[0])); // 4 bytes * 3 = 12 bytes
  printf("Size of second row: %u bytes\n", sizeof(td[1])); // 4 bytes * 3 = 12 bytes
  printf("Size of *td (first row): %u bytes\n", sizeof(*td));
  printf("Size of *(td + 1) (second row): %u bytes\n", sizeof(*(td + 1)));

  // 포인터를 사용해 배열 원소 수정
  **td = 10; // td[0][0] = 10
  *(*td + 4) = 20; // td[1][1] = 20
  *(*(td + 1) + 2) = 30; // td[1][2] = 30

  printf("Modified array elements:\n");
  printf("%d %d %d\n", td[0][0], td[1][1], td[1][2]);
}