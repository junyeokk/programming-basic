#include <stdio.h>

int main() {
    double sum = 0;
    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        int n;
        scanf("%d", &n);
        if (n > 0) {
            sum += n;
            cnt++;
        }
    }

    printf("%.2lf", sum / cnt);
}