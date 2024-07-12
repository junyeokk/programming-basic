#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "JAVA 2022 Python C";
    printf("%zu\n", strlen("python"));
    printf("%s, ", _strlwr(str)); // 모두 소문자로 변환
    printf("%s\n", _strupr(str)); // 모두 대문자로 변환

    printf("%s, ", strstr(str, "VA"));
    printf("%s\n", strchr(str, 'A'));

    return 0;
}