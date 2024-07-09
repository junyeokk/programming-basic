#include <stdio.h>

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    if ((arr[1] / arr[0]) == (arr[2] / arr[1])) {
        printf("등비수열 %d", arr[4] * (arr[1] / arr[0]));
    } else {
        printf("등차수열 %d", arr[4] + (arr[1] - arr[0]));
    }
}
