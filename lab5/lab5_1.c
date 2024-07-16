#include <stdio.h>
#include <stdlib.h>

// 파일에서 데이터를 입력받아 2차원의 배열에 저장하고 각 열의 평균을 계산해 출력하는 코드
int main() {
    FILE *fp = fopen("f1.txt", "r");
    int row, col;

    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }
    fscanf(fp, "%d %d", &row, &col);

    // 2차원 동적 배열
    int **arr = (int **)malloc(sizeof(int *) * row);
    for (int i = 0; i < col; i++) {
        arr[i] = (int *)malloc(sizeof(int) * col);
    }
    double *avg = (double *)malloc(sizeof(double) * col);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            fscanf(fp, "%d", &arr[i][j]);
            avg[j] += (double)arr[i][j];
        }
    }

    for (int i = 0; i < col; i++) {
        avg[i] /= row;
        printf("%d: %.2lf\n", i, avg[i]);
    }

    free(arr);
    fclose(fp);
}