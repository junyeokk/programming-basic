#include <stdio.h>
#include <string.h>
#define MAX_PASSWORD_LENGTH 100

int isValidLength(char *pass1) {
    gets(pass1);
    int passLength = strlen(pass1);
    if (passLength >= 5 && passLength <= 10) {
        return 1;
    }
    return 0;
}

int isValidEqualSecPass(char *pass1, char *pass2) {
    gets(pass2);
    if (strcmp(pass1, pass2) == 0) {
        return 1;
    }
    return 0;
}

int main() {
    char pass1[MAX_PASSWORD_LENGTH], pass2[MAX_PASSWORD_LENGTH];

    while (1) {
        if (isValidLength(pass1) && isValidEqualSecPass(pass1, pass2)) {
            printf("Done\n");
            return 0;
        }
        printf("Retry\n");
    }
}