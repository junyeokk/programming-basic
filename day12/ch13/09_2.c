#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[100];
    float score;
} Student;

int main() {
    Student *students;
    int n, i;

    printf("학생 수를 입력하세요: ");
    scanf("%d", &n);

    students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("학생 %d의 ID: ", i + 1);
        scanf("%d", &students[i].id);
        printf("학생 %d의 이름: ", i + 1);
        scanf("%s", &students[i].name);
        printf("학생 %d의 점수: ", i + 1);
        scanf("%f", &students[i].score);
    }
    printf("\n--- 학생 목록 ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, 이름: %s, 점수: %.2f\n", students[i].id, students[i].name, students[i].score);
    }

    free(students);
    return 0;
}