#include <stdio.h>

int main() {
    // 문자 선언과 출력
    char ch = 'A';
    printf("%c %d\n", ch, ch);

    // 문자열 선언 방법 1
    char java[] = {'J', 'A', 'V', 'A', '\0'};
    printf("%s\n", java);

    // 문자열 선언 방법 2
    char py[] = "python";
    printf("%s\n", py);

    // 문자열 선언 방법3
    char csharp[5] = "C#";
    printf("%s\n", csharp);

    // 문자 배열에서 문자 출력
    printf("%c %c\n", csharp[0], csharp[1]);
}