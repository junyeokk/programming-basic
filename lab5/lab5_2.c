#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *files[2];
    files[0] = fopen("f21.txt", "r");
    files[1] = fopen("f22.txt", "r");
    char c;

    if (files[0] == NULL || files[1] == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 0;
    } else {
        // 파일 열기 작업 성공
        // printf("파일을 성공적으로 열었습니다.\n");
    }

    while (fscanf(files[0], "%c", &c) == 1) {
        printf("%c", c);
    }
    printf("\n\n");
    while (fscanf(files[1], "%c", &c) == 1) {
        printf("%c", c);
    }
    printf("\n");

    fclose(files[0]);
    fclose(files[1]);
}