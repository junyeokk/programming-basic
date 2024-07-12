#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int *buildArray(int *size) {
    int *arr;
    if ((arr = (int *)malloc(sizeof(int) * *size)) == NULL) {
        printf("메모리 할당에 문제가 있습니다.");
        return 0;
    }
    return arr;
}

int findMin(int *ary, int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (min > ary[i]) {
            min = ary[i];
        }
    }
    return min;
}

int main() {
    FILE *fp;
    int n, *arr = NULL;

    fp = fopen("f2.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }
    fscanf(fp, "%d", &n);

    arr = buildArray(&n);

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }

    printf("%d", findMin(arr, n));

    fclose(fp);
}