#include <stdio.h>

int main(void) {
    printf("%d * %4d = %#5o\n", 2, 2, 2 * 2);
    printf("%d * %04d = %#5o\n", 2, 3, 2 * 3);
    printf("%d * %+04d = %-#5x\n", 2, 4, 2 * 4); // +는 +표시, 0은 0채움, -는 좌측정렬
    printf("%d * %+-4d = %+#5X\n", 2, 5, 2 * 5);

    printf("%15.3f\n", 123456.789);
    printf("%e\n", 123456.789);
    printf("%g\n", 12.34e-5); // %f로 출력해도 될 정도로 정밀도가 낮아 알아서 소수점 형태로 출력
    printf("%G\n", 12.34e-6); // 정밀도가 높아 알아서 %E로 출력

    return 0;
}