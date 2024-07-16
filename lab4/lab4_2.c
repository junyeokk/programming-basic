#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct {
    char id[10];
    char name[30];
    char address[50];
    int monthWage;
    double incentive;
} Employee;

void removeNewLine(char *str) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void printEmployee(Employee e[], int finalIdx) {
    for (int i = 0; i < finalIdx; i++) {
        printf("%s %s %s %d %d%% %.1lf", e[i].id, e[i].name, e[i].address, e[i].monthWage, (int)((e[i].incentive) * 100),
               e[i].monthWage * (12 + e[i].incentive));
        printf("\n");
    }
}

int main() {
    FILE *fp;
    fp = fopen("f2.txt", "r");
    Employee e[MAX];
    int finalIdx = 0;

    for (int i = 0; i < MAX; i++) {
        if (fgets(e[i].id, sizeof(e[i].id), fp) == NULL) {
            finalIdx = i;
            break;
        }
        fgets(e[i].name, sizeof(e[i].name), fp);
        fgets(e[i].address, sizeof(e[i].address), fp);
        fscanf(fp, "%d", &e[i].monthWage);
        fscanf(fp, "%lf", &e[i].incentive);
        fscanf(fp, "%*c"); // 마지막에 남아있는 문자 제거

        removeNewLine(e[i].id);
        removeNewLine(e[i].name);
        removeNewLine(e[i].address);
    }

    fclose(fp);

    printEmployee(e, finalIdx);
}