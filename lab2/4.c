#include <stdio.h>
#include <stdlib.h>
#define ROWS 4
#define COLS 5

void print1DArray(int d[], int n) {
    for (int i = 0; i < COLS; i++) {
        printf("%d ", d[i]);
    }
}

int main() {
    FILE *fp;
    int **arr = (int **)malloc(sizeof(int *) * ROWS);
    int *p[4];
    fp = fopen("f4.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }
    for (int i = 0; i < ROWS; i++) {
        arr[i] = (int *)malloc(sizeof(int) * COLS);
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            fscanf(fp, "%d ", &arr[i][j]);
        }
    }

    p[0] = arr[1];
    p[1] = arr[3];
    p[2] = arr[0];
    p[3] = arr[2];

    for (int i = 0; i < ROWS; i++) {
        print1DArray(p[i], 4);
        printf("\n");
    }

    fclose(fp);
}