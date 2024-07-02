#include <stdio.h>

int main() {
  double x = 5.1247, y = 20.7807, z = 17.34;

  printf("%lf %lf %lf\n", x, y, z);
  printf("%lf\n%lf\n", x + y + z, x - y - z);
  printf("%lf\n%lf\n", x / y / z, (x * y) / z);
}