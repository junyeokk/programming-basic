#include <stdio.h>
#include <string.h>

int main() {
    int src[5] = {1, 2, 3, 4, 5};
    int dst[5];

    // 배열 복사
    memcpy(dst, src, 5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        printf("%d ", dst[i]);
    }
    printf("\n");
}