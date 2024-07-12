#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printWords(char str[]) { printf("%s", str); }

int main() {
    FILE *fp;
    int n;
    char temp_c;

    fp = fopen("f2.txt", "r");
    fscanf(fp, "%d", &n);
    char **words = (char **)malloc(sizeof(char *) * n);

    for (int i = 0; i < n; i++) {
        char temp_str[10001];
        int idx = 0;
        while (1) {
            if (fscanf(fp, "%c", &temp_c) != 1) {
                break;
            }
            temp_str[idx++] = temp_c;
        }
        temp_str[idx] = '\0';

        words[i] = (char *)malloc(sizeof(char) * (strlen(temp_str) + 1));
        strcpy(words[i], temp_str);
        printWords(words[i]);
    }

    for (int i = 0; i < n; i++) {
        free(words[i]);
    }
    free(words);
    fclose(fp);
}
