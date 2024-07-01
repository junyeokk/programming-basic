#include <stdio.h>

int main() {
  int money;
  scanf("%d", &money);
  printf("10000:%d\n5000:%d\n1000:%d\n500:%d\n100:%d\n50:%d\n10:%d\n5:%d\n1:%d\n", 
  money / 10000, (money % 10000) / 5000, money % 5000 / 1000,
  money % 1000 / 500, money % 1000 % 500 / 100, money % 100 / 50, 
  money % 50 / 10, money % 10 / 5, money % 5 / 1);
}