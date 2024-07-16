#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personscore { // 구조체 정의
    int number;
    char name[40];
    int mid;
    int final;
    int quiz;
} pscore;

void printhead() {
    printf("%s\n", " -----------------------------------");
    printf("%8s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
    printf("%s\n", " -----------------------------------");
}

int main() {
    char fname[] = "score.bin";
    FILE *fp;
    fp = fopen(fname, "wb");

    if (fp == NULL) {
        printf("파일이 열리지 않습니다.\n");
        return 0;
    }

    char line[80]; // 표준 입력으로 행을 저장하기 위한 변수
    int cnt = 0;   // 입력 학생 번호 (자동 생성) 변수
    pscore score;  // 구조체 변수 선언
    printf("이름과 성적(중간, 기말, 퀴즈)을 입력하세요.\n");
    fgets(line, 80, stdin);
    while (!feof(stdin)) {
        sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz); // 표준입력의 한 줄을 구조체의 멤버 별로 자료를 입력
        score.number = ++cnt;
        fwrite(&score, sizeof(pscore), 1, fp);
        fgets(line, 80, stdin);
    }
    fclose(fp);

    fp = fopen(fname, "rb");

    if (fp == NULL) {
        printf("파일이 열리지 않습니다.\n");
        return 0;
    }
    printhead();

    fread(&score, sizeof(pscore), 1, fp); // 이진 모드로 파일 fp에서 구조체 pscore 자료 읽기
    while (!feof(fp)) {                   // 파일에서 읽어 표준 출력에 쓰기
        fprintf(stdout, "%6d%18s%8d%8d%8d\n", score.number, score.name, score.mid, score.final, score.quiz);
        fread(&score, sizeof(pscore), 1, fp);
    }
    printf("%s\n", " -----------------------------------");
    fclose(fp);

    return 0;
}