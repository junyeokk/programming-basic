#include <stdio.h>
#define MAX 9

int main(void) {
  for (int i = 2; i <= MAX; i++) {
    printf("%d단 출력\n", i);
    for (int j = 2; j <= MAX; j++) {
      printf("%d * %d = %2d\n", i, j, i * j);
    }
    printf("\n");
  }

  return 0;
}