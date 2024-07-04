#include <stdio.h>

int main(void) {
    int key = 12345678;

    int origin;
    printf("ID로 사용할 8자리의 정수를 입력하세요 >> ");
    scanf("%d", &origin);

    int encode = origin ^ key; // ID를 암호화시켜 저장
    printf("입력한 ID: %d\n", origin);
    printf("암호화하여 저장된 ID: %d\n", encode);

    int input;
    printf("로그인할 ID를 입력하세요 >> ");
    scanf("%d", &input);

    int result = encode ^ key; // 키로 암호화된 것을 복호화
    printf("로그인 성공 여부: %d\n", input == result);
}