#include <stdio.h>

void zeroBelowAvg(int matrix[][100], int n, double avgs[100]) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        avgs[i] = (double)sum / n;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < avgs[i]) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int n, matrix[100][100], i, j;
    double avgs[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    zeroBelowAvg(matrix, n, avgs);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("%.1lf", avgs[i]);
        printf("\n");
    }
}