#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[10];
    double score1;
    double score2;
    double quiz;
} Student;

void printStudent(Student s) { printf("%d %s %.1lf %.1lf %.1lf %.1lf\n", s.id, s.name, s.score1, s.score2, s.quiz, (s.score1 + s.score2 + s.quiz)); }

int find(Student *s, char name[], int idx) {
    for (int i = 0; i < idx; i++) {
        if (strcmp(s[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *fp;
    fp = fopen("f5.txt", "r");
    int idx;
    char targetName[10];

    fscanf(fp, "%d", &idx);
    Student *s = (Student *)malloc(sizeof(Student) * idx);

    for (int i = 0; i < idx; i++) {
        s[i].id = i + 1;
        fscanf(fp, "%s %lf %lf %lf", s[i].name, &s[i].score1, &s[i].score2, &s[i].quiz);
    }

    for (int i = 0; i < idx; i++) {
        printStudent(s[i]);
    }

    printf("\n\n");

    scanf("%s", targetName);
    int findIdx = find(s, targetName, idx);
    findIdx != -1 ? printStudent(s[findIdx]) : printf("Not Found!!!\n");
}