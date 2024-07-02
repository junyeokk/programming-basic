#include <stdio.h>

int main() {
  int n;
  int sum = 0;
  int max = -1;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    int temp;
    scanf("%d", &temp);
    sum += temp;

    if(max < temp) {
      max = temp;
    }
  }

  printf("%d\n%d", sum, max);
}