#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

typedef Point PointArray[10];

void printPoints(PointArray points, int count) {
    for (int i = 0; i < count; i++) {
        printf("Point %d: (%d, %d)\n", i, points[i].x, points[i].y);
    }
}

int main() {
    PointArray points = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}, {11, 12}, {13, 14}, {15, 16}, {17, 18}, {19, 20}};

    printPoints(points, 10);

    return 0;
}