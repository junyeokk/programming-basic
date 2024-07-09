#include <stdio.h>
#include <stdlib.h>

int main() {
    char fname[] = "grade.txt";
    char names[80];
    int cnt = 0;
    FILE *f;

    if ((f = fopen(fname, "w")) == NULL) {
        printf("파일이 열리지 않습니다.\n");
        return 0;
    }

    printf("이름과 성적(중간, 기말)을 입력하세요\n");
    // fgets(fname, 80, stdin);

    // while (!feof(stdin)) {
    //     fprintf(f, "%d ", ++cnt);
    //     fputs(names, f);
    //     fgets(names, 80, stdin);
    // }
    while (fgets(names, sizeof(names), stdin) != NULL && names[0] != '\n') {
        fprintf(f, "%d ", ++cnt);
        fputs(names, f);
    }

    fclose(f);

    return 0;
}