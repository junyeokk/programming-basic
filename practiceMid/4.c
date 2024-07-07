#include <stdio.h>

int sumOneBit(int x) {
    int count = 0;
    unsigned int ux = (unsigned int)x;

    while (ux > 0) {
        count += ux & 1;
        ux >>= 1; // 오른쪽으로 비트 이동
    }

    return count;
}

int main() {
    int n, res = 0;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        res += sumOneBit(n);
    }

    printf("%d\n", res);
    return 0;
}
