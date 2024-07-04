#include <stdio.h>

int factorial(int); // 함수 원형

int main(void) {
  for (int i = 1; i <= 10; i++) {
    printf("%2d! = %d\n", i, factorial(i));
  }

  return 0;
}

// n! 구하는 재귀함수
int factorial(int number) {
  while (number > 1) {
    return number * factorial(number - 1);
    number--;
  }
  return 1;
}