#include <stdio.h>

typedef struct {
    char fname[100];
    int calories;
} Food;

int totalCalories(Food ary[], int size) {
    int tot = 0;
    for (int i = 0; i < size; i++) {
        tot += ary[i].calories;
    }
    return tot;
}

int main() {
    FILE *fp;
    fp = fopen("f4.txt", "r");
    int idx = 0;
    Food f[10];

    while (fscanf(fp, "%s %d", &f[idx].fname, &f[idx].calories) == 2) {
        idx++;
        if (idx >= 10)
            break;
    }

    fclose(fp);

    printf("%d\n", totalCalories(f, idx));
}