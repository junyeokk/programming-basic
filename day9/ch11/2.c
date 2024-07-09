#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int sum = 0;
    int num;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }

    while (fscanf(fp, "%d", &num) == 1) { // 파일에서 정수를 성공적으로 읽었는지 확인
        sum += num;
    }

    printf("%d\n", sum);
    fclose(fp);
    return 0;
}