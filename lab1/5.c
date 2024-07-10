#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10000

int main() {
    srand(time(NULL));

    FILE *fpw, *fpr;
    int sum = 0, sumx2 = 0, num;

    if ((fpw = fopen("f5.txt", "w")) == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }

    if ((fpr = fopen("f5.txt", "r")) == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }

    for (int i = 0; i < MAX; i++) {
        fprintf(fpw, "%d ", rand() % 100 + 1);
    }

    while (fscanf(fpr, "%d", &num) == 1) {
        sum += num;
        sumx2 += num * num;
    }

    fprintf(fpw, "\n\n평균: %.2lf\n", (double)sum / MAX);
    fprintf(fpw, "표준편차: %.2lf", sqrt((double)(sumx2 / MAX) - ((sum / MAX) * (sum / MAX))));

    fclose(fpw);
    fclose(fpr);
}