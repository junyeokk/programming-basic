#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    if ((fp = fopen("f1.txt", "r")) == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }

    while (fscanf(fp, "%c", &ch) == 1) {
        printf("%c", ch);
    }

    fclose(fp);
}