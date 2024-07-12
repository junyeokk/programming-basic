#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("사용방법: %s <operation> <num1> <num2>", argv[0]);
        return 0;
    }

    char ch = argv[1][0];
    double num1 = atoi(argv[2]), num2 = atoi(argv[3]), res;

    switch (ch) {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            printf("0으로 나눌 수 없습니다.");
            return 0;
        }
        res = num1 / num2;
        break;
    }

    printf("Result = %.1f", res);
}