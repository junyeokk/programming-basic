#include <stdio.h>
#include <stdlib.h>

void add_array(double source1[], double source2[], double target[], int num) {
    for (int i = 0; i < num; i++) {
        target[i] = source1[i] + source2[i];
    }
}

int main() {
    FILE *fp;
    int n, temp;
    double *arr1 = NULL, *arr2 = NULL, *arr_target = NULL;

    fp = fopen("f1.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }
    fscanf(fp, "%d", &n);

    if ((arr1 = (double *)malloc(sizeof(double) * n)) == NULL) {
        printf("메모리 할당에 문제가 있습니다(arr1).");
        return 0;
    }
    if ((arr2 = (double *)malloc(sizeof(double) * n)) == NULL) {
        printf("메모리 할당에 문제가 있습니다.(arr2)");
        return 0;
    }
    if ((arr_target = (double *)malloc(sizeof(double) * n)) == NULL) {
        printf("메모리 할당에 문제가 있습니다.(arr_target)");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%lf", &arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%lf", &arr2[i]);
    }

    add_array(arr1, arr2, arr_target, n);

    for (int i = 0; i < n; i++) {
        printf("%.2lf ", arr_target[i]);
    }

    fclose(fp);
}