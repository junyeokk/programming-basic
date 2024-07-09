#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;

    for (int i = 0; i < length; i++) {
        printf("%p: %d\n", (p + i), *(p + i));
    }
}