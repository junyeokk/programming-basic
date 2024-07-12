#include <stdio.h>
#include <string.h>

int main() {
    struct student {
        int snum;      // 학번
        char *dept;    // 학과 이름
        char name[12]; // 학생 이름
    };
    struct student hong = {20220001, "컴퓨터정보공학과", "홍길동"};
    struct student na = {20220002};
    struct student you = {20220003};

    // 학생이름 입력
    scanf("%s", na.name);
    // na.name = "나한국"; // 컴파일 오류, '식이 수정할 수 있는 lvalue여야 합니다.'
    // scanf("%s", na.dept);
    na.dept = "컴퓨터정보공학과";
    you.dept = "기계공학과";
    memcpy(you.name, "홍길동", 7);
    strcpy(you.name, "홍길동");

    printf("[%d, %s, %s]\n", hong.snum, hong.dept, hong.name);
    printf("[%d, %s, %s]\n", na.snum, na.dept, na.name);
    printf("[%d, %s, %s]\n\n", you.snum, you.dept, you.name);

    struct student one;
    one = you;
    if (one.snum == you.snum) {
        printf("학번이 %d로 동일합니다.\n", one.snum);
    }
    if (one.snum == you.snum && !strcmp(one.name, you.name) && !strcmp(one.dept, you.dept)) {
        printf("내용이 같은 구조체입니다.\n");
    }

    return 0;
}