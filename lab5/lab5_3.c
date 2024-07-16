#include <stdio.h>
#include <stdlib.h>

void sumArray(double arr[], int count, double *sum) {
    for (int i = 0; i < count; i++) {
        *sum += arr[i];
    }
}

void averageArray(int count, double sum, double *avg) { *avg = sum / count; }

int main() {
    FILE *fp = fopen("f3.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 0;
    }
    int count = 0, size = 5;
    double n, sum = 0, avg;

    double *arr = (double *)malloc(sizeof(double) * size);

    while (fscanf(fp, "%lf", &n) == 1) {
        arr[count++] = n;
        if (count > size) {
            size *= 2;
            arr = (double *)realloc(arr, sizeof(double) * size);
        }
    }

    sumArray(arr, count, &sum);
    averageArray(count, sum, &avg);

    printf("합= %.2lf, 평균= %.2lf\n", sum, avg);

    free(arr);
    fclose(fp);
}