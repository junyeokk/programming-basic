#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;
  char format[1001] = { 0 };
  
  scanf("%d %d %d", &a, &b, &c);
  sprintf(format, "%%.%df", c);

  double result = (double) a / b;
  double scale = pow(10, c);
  result = floor(result * scale) / scale;

  printf(format, result);
}