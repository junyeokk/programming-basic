#include <stdio.h>
#include <stdlib.h>

int main() {
    char *fname = "basic.txt";
    FILE *f;

    char name[30] = "손혜진"; // 파일에 쓰려는 자료
    int point = 99;

    // 파열 일기 함수 fopen()과 fopen_s()
    if ((f = fopen(fname, "w")) == NULL) {
        printf("파일이 열리지 않아 종료합니다.\n"); // if(fopen_s(&f, fname, "w") != 0)
        exit(1);
    }

    // 파일 "basic.txt"에 쓰기
    fprintf(f, "이름 %s 학생의 성적은 %d 입니다.\n", name, point);
    fclose(f);

    // 표준 출력 콘솔에 쓰기
    printf("이름 %s 학생의 성적은 %d입니다.\n", name, point);
    puts("프로젝트 폴더에서 파일 basic.txt를 메모장으로 열어보세요.");

    return 0;
}