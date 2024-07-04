#include <stdio.h>

int main(void) {
    int amount = 4000 * 3 + 10000;

    printf(" 총금액 %d 원\n", amount);
    printf("오천원권 %d 개\n", amount / 5000); // 정수 / 정수는 정수이므로 결과는 4
    printf(" 천원권 %d 개\n", (amount % 5000) / 1000);

    return 0;
}