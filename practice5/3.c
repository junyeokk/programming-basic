#include <stdio.h>

int main() {
  int n, temp;
  int sum = 0;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    scanf("%d", &temp);
    sum += temp;
  }
  printf("%d %d %d\n", (sum % 100) % 10, (sum / 10) % 10 * 10, (sum / 100) * 100);
}