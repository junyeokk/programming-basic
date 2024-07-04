#include <stdio.h>

int main(void) {
    int m = 5, n = 10;
    printf("%d\n", m += n /= 3); // 우측에서 좌측으로 결합, (m += (n /= 3))
    printf("%d %d\n", m, n);     // 8 3

    // 우측에서 좌측으로 결합
    printf("%d ", 3 > 4 ? 3 - 4 : 3 > 4 ? 3 + 4 : 3 * 4);    // 12
    printf("%d\n", 3 > 4 ? 3 - 4 : (3 > 4 ? 3 + 4 : 3 * 4)); // 12

    printf("%d ", 10 * 3 / 2);    // 좌측에서 우측으로 결합, 15
    printf("%d\n", 10 * (3 / 2)); // 우측에서 좌측으로 결합, 10

    return 0;
}