#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("0 ~ %5d 사이의 난수 8개: rand()\n", RAND_MAX); // 0x7fffffff, 2147483647 (MACOS M1 Sonoma 14.5)
  for (int i = 0; i < 8; i++) {
    printf("%5d ", rand());
  }
  puts("");

  return 0;
}