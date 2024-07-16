#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int nums[] = {1, 2, 3, 4, 5};

    fp = fopen("example.bin", "wb");
    if (fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        return EXIT_FAILURE;
    }

    fwrite(nums, sizeof(int), sizeof(nums) / sizeof(int), fp);

    fclose(fp);

    return 0;
}