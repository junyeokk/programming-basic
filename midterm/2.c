#include <stdio.h>

int main() {
    int a, b, count = 0;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        int countn = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                countn++;
            }
        }
        if (countn++ % 2 == 1) {
            count++;
        }
    }

    printf("%d", count);
}
