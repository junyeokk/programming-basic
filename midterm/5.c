#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (abs(i - (n / 2)) + 1 < abs(j - (n / 2)) + 1) {
                printf(" ");
            } else {
                printf("%d", abs(j - (n / 2)) + 1);
            }
        }
        printf("\n");
    }
}
