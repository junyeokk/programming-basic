#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            printf("0");
        }
        for (int j = n - i; j <= n; j++) {
            printf("%c", 'A' + i);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        printf("%c", 'A' + n - 1);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        for (int j = n - i; j <= n; j++) {
            printf("0");
        }
        for (int j = i + 1; j < n; j++) {
            printf("%c", 'A' + (n - i - 2));
        }
        printf("\n");
    }
}