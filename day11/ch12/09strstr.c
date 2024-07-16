#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "JAVA 2022 Python C";
    printf("%zu\n", strlen("python"));
    // printf("%s, ", _strlwr(str)); // 모두 소문자로 변환 // macos - gcc compiler 불가능
    // printf("%s\n", _strupr(str)); // 모두 대문자로 변환 // macos - gcc compiler 불가능
    // toupper, tolower 사용
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", tolower(str[i]));
    }
    printf(", ");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", toupper(str[i]));
    }
    printf("\n");

    printf("%s, ", strstr(str, "VA")); // 문자열 VA가 시작되는 포인터 반환, VA 2022 PYTHON C
    printf("%s\n", strchr(str, 'A'));  // 문자 A가 처음 나오는 위치의 포인터 반환, A 2022 PYTHON C

    return 0;
}