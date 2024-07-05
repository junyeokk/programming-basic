#include <stdio.h>

int lcm(int x, int y) {
    int flag = 1;
    for (int i = 2; i <= (x < y ? x : y); i++) {
        if (x % i == 0 && y % i == 0) {
            flag = i;
        }
    }
    return x * y / flag;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d", lcm(x, y));
}