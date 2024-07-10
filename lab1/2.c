#include <stdio.h>

int main() {
    FILE *fp;
    int num, cnt = 0;
    int arr[100001];

    fp = fopen("f2.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return 0;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        if (num >= 90) {
            arr[cnt++] = num;
        }
    }

    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++) {
        printf("%d\n", arr[i]);
    }

    fclose(fp);

    return 0;
}