#include <stdio.h>

int gcd(int n, int m) { return m == 0 ? n : gcd(m, n % m); }

int main() {
    int n, m;

    scanf("%d %d", &n, &m);
    printf("%d", gcd(n, m));
}