#include <stdio.h>

int main(void) {
    double width = 3.424, height = 2.718;
    int shape = 3;

    printf("가로: %f, 세로: %lf\n", width, height);
    printf("%d각형 %s: %8.2f\n", shape, "면적", (width * height) / 2);
    printf("%d각형 %s: %10.4f\n", shape + 1, "면적", width * height);
}