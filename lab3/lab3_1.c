#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    for (int i = 0, j = (int)strlen(str) - 1; i < j; i++, j--) {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}

int main() {
    char line[81];
    while (1) {
        printf("문자열 입력(종료 q): ");
        gets(line);
        if (strcmp(line, "q") == 0) {
            break;
        }
        reverse(line);
        puts(line);
    }
}