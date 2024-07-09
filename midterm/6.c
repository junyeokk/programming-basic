#include <stdio.h>

int main() {
    int n, idx_x = 0, idx_y = 0, direction = 0;
    int arr[10][10] = {0};
    int nx[4] = {0, 1, 0, -1};
    int ny[4] = {1, 0, -1, 0};
    scanf("%d", &n);

    for (int i = 0; i < n * n; i++) {
        if (idx_x >= 0 && idx_y >= 0 && idx_x < n && idx_y < n) {
            arr[idx_y][idx_x] = i + 1;
            idx_x += nx[direction];
            idx_y += ny[direction];
        }
        if (idx_x + nx[direction] == n || idx_y + ny[direction] == n || idx_x + nx[direction] == -1 || idx_y + ny[direction] == -1 ||
            arr[idx_y + ny[direction]][idx_x + nx[direction]] != 0) {
            direction = (direction + 1) % 4;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
