#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);

    int x = n;

    printf("%d %.2lf", (int)n, n - x);
}
