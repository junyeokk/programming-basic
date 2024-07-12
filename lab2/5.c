#include <stdio.h>
#include <stdlib.h>

int sumAry1D(int ary[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ary[i];
    }
    return sum;
}

int main() {
    FILE *fp;
    int n, m, final_sum = 0;

    fp = fopen("f5.txt", "r");
    fscanf(fp, "%d %d", &n, &m);

    int **arr = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int) * m);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fscanf(fp, "%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int temp = sumAry1D(arr[i], m);
        printf("%d\n", temp);
        final_sum += temp;
    }
    printf("%d", final_sum);
}