#include <stdio.h>

int max(int a, int b, int c) { return a > b ? (a > c ? a : c) : (b > c ? b : c); }

int min(int a, int b, int c) { return a < b ? (a < c ? a : c) : (b < c ? b : c); }

int middle(int a, int b, int c) {
    int maxnum = max(a, b, c);
    int minnum = min(a, b, c);
    if (a != maxnum && a != minnum)
        return a;
    if (b != maxnum && b != minnum)
        return b;
    if (c != maxnum && c != minnum)
        return c;
    return 0;
}

int main() {
    int a, b, c;
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        printf("%d ", max(a, b, c));
        printf("%d ", min(a, b, c));
        printf("%d\n", middle(a, b, c));
    }

    return 0;
}
