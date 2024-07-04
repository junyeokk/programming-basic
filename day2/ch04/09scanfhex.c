#include <stdio.h>

int main(void) {
    int hex;
    printf("10진수 정수(1A 등)를 입력하세요 >> ");
    scanf("%x", &hex);
    printf("%o %d %x\n\n", hex, hex, hex);

    printf("10진수 정수(0리딩 표시 방식을 0x1a 등)를 입력하세요 >> ");
    scanf("%i", &hex); // 형식 지정자 %i인 경우, 입력 값이 03과 같이 0이 리딩하는 수는 8진수로 인식하며, 0x1f과 같이 0x로 리딩하는 수는 16진수로 인식
    printf("%#o %d %#x\n\n", hex, hex, hex);

    return 0;
}