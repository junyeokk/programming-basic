#include <stdio.h>

int main(void) {
    int a = 0, b = 0;

    printf("두 정수 입력 >> ");
    scanf("%d %d", &a, &b);

    printf("최댓값: %d ", (a > b) ? a : b);
    printf("최솟값: %d\n ", (a < b) ? a : b);
    printf("절댓값: %d ", (a > 0) ? a : -a);
    printf("절댓값: %d\n", (b > 0) ? b : -b);

    (a % 2 == 0) ? printf("짝수 ") : printf("홀수 ");
    printf("%s\n", ((b % 2) == 0) ? "짝수" : "홀수");
}