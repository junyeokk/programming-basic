#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    double diff = *(double *)a - *(double *)b;
    if (diff > 0)
        return 1;
    if (diff < 0)
        return -1;
    return 0;
}

int main() {
    FILE *fp;
    int n;
    double *arr = NULL;

    fp = fopen("f3.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }

    fscanf(fp, "%d", &n);
    arr = (double *)malloc(sizeof(double) * n);

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%lf", &arr[i]);
    }

    qsort(arr, n, sizeof(double), compare);

    for (int i = 0; i < n; i++) {
        printf("%.1lf ", arr[i]);
    }

    fclose(fp);
}