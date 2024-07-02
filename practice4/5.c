#include <stdio.h>

int main() {
  int n;
  long long wage = 1;
  long long currentMoney = 0;

  while(1) {
    scanf("%d", &n);
    if(n > 0) break;
    printf("wrong\n");  
  }

  for(int i = 1; i <= n; i++) {
    currentMoney += wage;
    printf("%lld\n", wage);
    wage *= 2;
  }
  printf("=%lld\n", currentMoney);
}