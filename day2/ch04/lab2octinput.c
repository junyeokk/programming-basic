#include <stdio.h>

int main(void) {
    int oct;
    printf("8진수 정수 입력 >> ");
    scanf("%o", &oct);

    // 입력 받은 정수를 각각 8, 10, 16진수로 출력
    printf("%o %d %x\n", oct, oct, oct);
    printf("%#o %#i %#X\n", oct, oct, oct);

    return 0;
}