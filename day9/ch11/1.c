#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fp;
    int num;

    srand(time(NULL));

    fp = fopen("numbers.txt", "w");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }

    for (int i = 0; i < 10; i++) {
        num = rand() % 100;
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);
    printf("파일 쓰기 완료.\n");

    return 0;
}
