#include <stdio.h>

int main() {
    int data = 100;
    int *ptrint;
    ptrint = &data;
    printf("변수명 주소값           저장값\n");
    printf("-------------------------\n");
    printf("  data  %p  %d\n", &data, data);
    printf("%zu\n", sizeof(ptrint));

    return 0;
}