#include <stdio.h>

int main(void) {
    int age = 20;
    double gpa = 3.88;
    char gender = 'M';
    float weight = 62.489F;

    printf("성별: %c\n", gender);
    printf("이름: %s\n", "안 병훈");
    printf("나이: %d\n", age);
    printf("몸무게: %.2f\n", weight);
    printf("평균 평점 (GPA): %.3f\n", gpa);

    return 0;
}