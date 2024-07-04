#include <stdio.h>
#include <limits.h>

int main() {
  int temp;
  int max = INT_MIN, min = INT_MAX;

  while(1) {
    scanf("%d", &temp);
    if (temp == 0) {
      break;
    }
    if (max < temp) max = temp;
    if (min > temp) min = temp;
  }

  printf("%d %d", max, min);
}