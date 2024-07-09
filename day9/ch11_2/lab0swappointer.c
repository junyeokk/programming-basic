#include <stdio.h>

void swap(int *x, int *y) {
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    swap(&num1, &num2);

    printf("%d,%d\n", num1, num2);
}