#include <stdio.h>

int findMin(int matrix[][100], int n) {
    int min;
    min = 99999999;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (min > matrix[i][j]) {
                min = matrix[i][j];
            }
        }
    }
    return min;
}

int findMax(int matrix[][100], int n) {
    int max;
    max = -99999999;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

int main() {
    int n, matrix[100][100], i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%d %d", findMax(matrix, n), findMin(matrix, n));
}