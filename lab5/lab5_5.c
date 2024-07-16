#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char fname[100];
    int calories;
} Food;

void printArray(Food arr[], int idx) {
    for (int i = 0; i < idx; i++) {
        printf("%s %d\n", arr[i].fname, arr[i].calories);
    }
}

/**
 * fname 정렬
 */
int compare(const void *a, const void *b) {
    const Food *foodA = (const Food *)a;
    const Food *foodB = (const Food *)b;
    return strcmp(foodA->fname, foodB->fname);
}
/**
 * calories 정렬
 */
void sortByCalories(Food arr[], int idx) {
    Food temp;
    for (int i = 0; i < idx; i++) {
        for (int j = i + 1; j < idx; j++) {
            if (arr[i].calories > arr[j].calories) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    FILE *fp = fopen("f5.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 0;
    }
    int arrSize = 2;
    Food *arr = (Food *)malloc(sizeof(Food) * arrSize);
    int idx = 0;

    while (fscanf(fp, "%s %d", arr[idx].fname, &arr[idx].calories) == 2) {
        idx++;
        // 배열 초기 크기는 2이고, 필요시 2배로 확장
        if (idx >= arrSize) {
            arrSize *= 2;
            arr = (Food *)realloc(arr, sizeof(Food) * arrSize);
        }
    }

    // fname 정렬
    qsort(arr, idx, sizeof(Food), compare);
    printf("Sorting by fname: \n");
    printArray(arr, idx);

    // calories 정렬
    printf("\nSorting by calories: \n");
    sortByCalories(arr, idx);
    printArray(arr, idx);

    free(arr);
    fclose(fp);
}