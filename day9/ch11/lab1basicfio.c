#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f; // 파일 포인터

    if ((f = fopen("myinfo.txt", "w")) == NULL) {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    char tel[15] = "010-3018-3824";
    char add[30] = "서초구 대정로 557";
    int age = 22;

    // 파일 "basic.txt"에 쓰기
    fprintf(f, "전화번호: %s, 주소: %s, 나이: %d\n", tel, add, age);
    puts("프로젝트 폴더에서 파일 myinfo.txt를 메모장으로 열어보세요.");

    return 0;
}