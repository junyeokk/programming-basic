#include <stdio.h>

int main() {
  int i = 100;
  int *pi = &i; // 포인터 선언
  int **dpi = &pi; // 이중 포인터 선언

  printf("%p %p %p\n", &i, pi, *dpi);

  *pi = i + 30;
  printf("%d %d %d\n", i, *pi, **dpi);

  **dpi = *pi + 30;
  printf("%d %d %d\n", i, *pi, **dpi);
}