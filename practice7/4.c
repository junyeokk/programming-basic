#include <stdio.h>

int sumMultiple(int start, int end, int x) {
    int sum = 0;
    for (int i = start; i < end; i++) {
        if (i % x == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int start, end, n, m;
    scanf("%d %d %d %d", &start, &end, &n, &m);

    printf("%d\n", sumMultiple(start, end, n));
    printf("%d\n", sumMultiple(start, end, m));
    printf("%d\n", sumMultiple(start, end, n * m));
    printf("%d\n", sumMultiple(start, end, n) + sumMultiple(start, end, m) - sumMultiple(start, end, n * m));
    printf("%d\n", sumMultiple(start, end, m) - sumMultiple(start, end, m * n));
    printf("%d\n", sumMultiple(start, end, 1) - (sumMultiple(start, end, n) + sumMultiple(start, end, m) - sumMultiple(start, end, n * m)));
}