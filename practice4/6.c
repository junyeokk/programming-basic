#include <stdio.h>

int main() {
  for(int i = 1; i <= 9; i++) {
    for(int j = 1; j <= 3; j++) {
      printf("%d*%d=%d\t\t", j, i, i * j);
    }
    printf("\n");
  }
  printf("\n");
  for(int i = 1; i <= 9; i++) {
    for(int j = 4; j <= 6; j++) {
      printf("%d*%d=%d\t\t", j, i, i * j);
    }
    printf("\n");
  }
  printf("\n");
  for(int i = 1; i <= 9; i++) {
    for(int j = 7; j <= 9; j++) {
      printf("%d*%d=%d\t\t", j, i, i * j);
    }
    printf("\n");
  }
}