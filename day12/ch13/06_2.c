#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

void inputStudent(Student *s) {
    printf("Enter student's name: ");
    gets(s->name);

    printf("Enter student's age: ");
    scanf("%d", &s->age);

    printf("Enter student's grade: ");
    scanf("%d", &s->grade);
}

void printStudent(const Student *s) { printf("Name: %s, Age: %d, Grade: %.2f\n", s->name, s->age, s->grade); }

int main() {
    Student student;

    printf("Enter student information>\n");
    inputStudent(&student);

    printf("\n\Student Information\n");
    printStudent(&student);

    return 0;
}