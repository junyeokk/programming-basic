#include <stdio.h>

int main() {
  int a[3] = {5, 10, 15};
  int* p = &a[2];

  printf("%d ", *p--);
  printf("%d\n", (*p)--);
  printf("%d %d %d\n", *(p - 1), *p, *(p + 1));
  printf("%d %d %d\n", p[-1], p[0], p[1]);
}