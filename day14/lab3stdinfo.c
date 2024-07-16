#include <stdio.h>

typedef struct student {
    char dept[40];
    char name[20];
    int snum;
} student;

int main() {
    student mylab[] = {
        {"컴퓨터정보공학과", "이미정", 20224576},
        {"컴퓨터정보공학과", "김별이", 20226734},
        {"컴퓨터정보공학과", "김한수", 20238732},
    };

    FILE *fp;
    char fname[] = "student.bin";
    fp = fopen(fname, "wb");
    int size = sizeof(mylab) / sizeof(student);
    fwrite(mylab, sizeof(student), size, fp);
    fclose(fp);

    fp = fopen(fname, "rb"); // 다시 읽기 위해 오픈, 파일에서 구조체 배열 모두를 한 번에 읽어 다시 저장된 배열 출력
    student lab[10];         // 다시 파일의 내용을 저장할 배열 선언
    fread(lab, sizeof(student), size, fp); // 파일 fp에서 sizeof(student) 크기로 size 수만큼 읽어 lab에 저장
    for (int i = 0; i < size; i++) {
        fprintf(stdout, "%24s%10s%12d\n", lab[i].dept, lab[i].name, lab[i].snum);
    }
    fclose(fp);

    return 0;
}