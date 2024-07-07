#include <math.h>
#include <stdio.h>

int main() {
    int a, b, c, remainder;

    scanf("%d %d %d", &a, &b, &c);

    // 가수부 역할
    printf("%d.", a / b);

    // 지수부 역할
    int temp = a % b * 10;
    for (int i = 1; i <= c; i++) {
        printf("%d", temp / b);
        temp = temp % b * 10;
    }
}