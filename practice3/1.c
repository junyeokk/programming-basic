#include <stdio.h>
#include "mymacro.h"

int main() {
  int x;
  scanf("%d", &x);
  x = SQ4(x);
  printf("%d", x);
}