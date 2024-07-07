#include <limits.h>
#include <stdio.h>

int getMinValue(int arr[], int arrSize) {
    int min = INT_MAX;

    for (int i = 0; i < arrSize; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    return min;
}

int getMaxValue(int arr[], int arrSize) {
    int max = INT_MIN;

    for (int i = 0; i < arrSize; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}

double getAvgValue(int arr[], int arrSize) {
    double sum;

    for (int i = 0; i < arrSize; i++) {
        sum += arr[i];
    }

    return sum / arrSize;
}

int main() {
    int arr[10001];
    int index = 0, arrSize = 0;

    while (1) {
        int temp;
        scanf("%d", &temp);

        if (temp == 0) {
            break;
        }
        arr[index++] = temp;
    }

    arrSize = index++;

    printf("Min = %d\n", getMinValue(arr, arrSize));
    printf("Max = %d\n", getMaxValue(arr, arrSize));
    printf("Avg = %.2lf\n", getAvgValue(arr, arrSize));
}