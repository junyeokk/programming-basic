#include <stdio.h>

int main() {
  int *ary;
  ary = (int *)malloc(sizeof(int) * 3);
  ary[0] = 10; ary[1] = 11; ary[2] = 12;
}