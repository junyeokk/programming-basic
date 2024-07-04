#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;
    printf("변환할 섭씨 온도를 입력 >> ");
    scanf("%lf", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32.0;
    printf("섭씨 %.2f: 화씨 %.2f\n", celsius, fahrenheit);

    return 0;
}