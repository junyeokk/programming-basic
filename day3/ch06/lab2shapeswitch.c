#include <stdio.h>

int main(void) {
    enum shape { TRIANGLE = 1, RECTANGLE };
    int input;
    double width, height;

    printf("삼각형[1], 사각형[2] 중의 번호 하나를 선택 >> ");
    scanf("%d", &input);
    printf("넓이와 높이를 입력 >> ");
    scanf("%lf %lf", &width, &height);
    printf("가로: %.2f, 세로: %.2f\n", width, height);

    switch (input) {
    case TRIANGLE:
        printf("삼각형의 넓이: %.2f\n", width * height / 2);
        break;
    case RECTANGLE:
        printf("사각형의 넓이: %.2f\n", width * height);
        break;
    default:
        printf("잘못된 입력\n");
    }

    return 0;
}