#include <stdio.h>
#include <stdlib.h>

int *squareArray(int arr[], int size) {
    int *temparr = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        temparr[i] = arr[i] * arr[i];
    }
    return temparr;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    FILE *fp;
    fp = fopen("f4.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 0;
    }
    int n;
    fscanf(fp, "%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    int *arr2 = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }

    printf("ary1: ");
    printArray(arr, n);
    printf("\n");

    printf("ary2: ");
    arr2 = squareArray(arr, n);
    printArray(arr2, n);
    printf("\n");

    free(arr);
    free(arr2);
    fclose(fp);
}