#include <stdio.h>

int main() {
    char name[20], dept[30]; // char *name, *dept; 실행 오류 발생
    int snum;
    printf("[학번, 이름, 학과] 입력 >> \n");
    scanf("%d %s %s", &snum, dept, name);
    printf("출력: %d %s %s\n", snum, dept, name);

    char line[101]; // char *line 으로는 오류 발생
    printf("한 행에 학번 이름 학과 입력한 후 [enter]를 누르고");
    printf("새로운 행에서 (ctrl + Z)를 누르십시오.\n");
    while (gets(line)) {
        puts(line);
    }
    printf("\n");

    while (gets(line)) {
        puts(line);
    }
    printf("\n");

    return 0;
}