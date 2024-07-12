#include <stdio.h>

#define MAX_PASSWORD_LENGTH 100

int main() {
    char password[MAX_PASSWORD_LENGTH];
    int index = 0;
    char ch;

    printf("Enter your password: ");

    while (1) {
        ch = getchar();

        if (ch == '\r' || ch == '\n') {
            break;
        }

        if (index < MAX_PASSWORD_LENGTH - 1) {
            password[index++] = ch;
            printf("*");
        }
    }

    password[index] = '\0';
    printf("\nYour password is: %s\n", password);

    return 0;
}