#include <stdio.h>

int checkLastDigit(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        int temp;
        scanf("%d", &temp);
        arr[temp % 10]++;
    }
    return *arr;
}

int main() {
    int n;
    int arr[10] = {0};
    int num = 0;
    scanf("%d", &n);

    checkLastDigit(arr, n, num);

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d %d\n", i, arr[i]);
    }
}