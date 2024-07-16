#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct personscore {
    int number;
    char name[40];
    int mid;
    int final;
    int quiz;
};
typedef struct personscore pscore;

void printhead();
int printscore(FILE *fp);
void appendscore(FILE *fp, int cnt);

int main() {
    FILE *fp;
    char fname[] = "score.bin";
    int cnt = 0;
    long offset = 0;
    fp = fopen(fname, "ab+");

    if (fp == NULL) {
        printf("파일이 열리지 않습니다.\n");
        return 0;
    }
    int readcnt = printscore(fp);
    if (readcnt == 1) {
        pscore score;
        offset = (long)sizeof(pscore); // 구조체 하나의 크기
        fseek(fp, -offset, SEEK_END);  // 파일의 마지막에서 마지막 학생을 읽기 위해 한 학생만큼 뒤로 이동
        fread(&score, sizeof(pscore), 1, fp);
        cnt = score.number;
        printf("\n제일 마지막 번호가 %d번 입니다. \n\n", cnt);
    }
    fseek(fp, 0L, SEEK_END);
    appendscore(fp, cnt);
    printscore(fp);
    fclose(fp);

    return 0;
}

void printhead() {
    printf("\n현재의 성적 내용은 >> \n");
    fprintf(stdout, "%s\n", "------------------------------------");
    fprintf(stdout, "%8s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
    fprintf(stdout, "%s\n", "------------------------------------");
}

int printscore(FILE *fp) {
    rewind(fp);
    pscore score;
    int readcnt = fread(&score, sizeof(pscore), 1, fp);
    if (readcnt == 0) {
        printf("현재는 성적 정보가 하나도 없습니다. >> \n");
        return 0;
    }

    printhead();        // 제목 출력
    while (!feof(fp)) { // 표준출력에 쓰기
        fprintf(stdout, "%6d%18s%8d%8d%8d\n", score.number, score.name, score.mid, score.final, score.quiz);
        fread(&score, sizeof(pscore), 1, fp);
    }
    fprintf(stdout, "%s\n", "------------------------------------");

    return 1;
}

void appendscore(FILE *fp, int cnt) {
    char line[80];
    pscore score = {0};
    printf("추가할 이름과 성적(중간, 기말, 퀴즈)을 입력하세요.\n\n");
    fgets(line, 80, stdin);
    while (!feof(stdin)) {
        sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz);
        score.number = ++cnt;
        fwrite(&score, sizeof(pscore), 1, fp);
        fgets(line, 80, stdin);
    }
}