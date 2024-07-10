#include <limits.h>
#include <stdio.h>

void minMax(int data[], int n, int *min, int *max) {
    for (int i = 0; i < n; i++) {
        if (*min > data[i]) {
            *min = data[i];
        }

        if (*max < data[i]) {
            *max = data[i];
        }
    }
}

int main() {
    FILE *fp;
    int temp, n, min = INT_MAX, max = INT_MIN, idx = 0;
    int arr[101];

    // if ((fp = fopen("f4.txt", "r")) == NULL) {
    if ((fp = fopen("f4_2.txt", "r")) == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }

    if (fscanf(fp, "%d", &temp) == 1) {
        n = temp;
    }

    while (fscanf(fp, "%d", &temp) == 1) {
        arr[idx++] = temp;
    }

    minMax(arr, n, &min, &max);

    printf("%d %d", max, min);

    fclose(fp);
}