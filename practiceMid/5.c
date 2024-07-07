#include <stdio.h>

int main() {
    int arr1[10];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 5; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            if (arr1[i] > arr1[j]) {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (arr1[i] != arr1[i - 1]) {
            printf("%d ", arr1[i]);
        }
    }
}
