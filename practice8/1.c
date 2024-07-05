#include <stdio.h>

int isSymmetricMatrix(int matrix[][100], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    int n;
    int matrix[100][100];
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%s", isSymmetricMatrix(matrix, n) ? "true" : "false");
}