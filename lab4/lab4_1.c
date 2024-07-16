#include <stdio.h>

typedef struct {
    char title[50];
    char director[50];
    int year;
    int runningTime;
} MovieData;

void inputMovie(MovieData *m) {
    fgets(m->title, 50, stdin);
    fgets(m->director, 50, stdin);
    scanf("%d", &m->year);
    scanf("%d", &m->runningTime);
}

void printMovie(MovieData *m) { printf("Title: %sDirector: %sYear: %d \nRunningTime: %d\n", m->title, m->director, m->year, m->runningTime); }

int main() {
    MovieData movie;

    inputMovie(&movie);
    printMovie(&movie);
}
