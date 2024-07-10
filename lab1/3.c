#include <stdio.h>

int main() {
    FILE *fp, *fpo;
    char ch;
    int sum = 0;

    if ((fp = fopen("f3.txt", "r")) == NULL) {
        printf("파일을 열 수 없습니다(f3.txt).");
        return 0;
    }

    if ((fpo = fopen("f3out.txt", "w")) == NULL) {
        printf("파일을 열 수 없습니다(f3out.txt).");
        return 0;
    }

    while (fscanf(fp, "%c", &ch) == 1) {
        if (ch >= '0' && ch <= '9') {
            // printf("%c", ch);
            fprintf(fpo, "%c", ch);
            sum += ch - '0';
        }
    }

    printf("%d", sum);
}