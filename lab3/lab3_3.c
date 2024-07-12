#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

void printWords(char str[]) { printf("%s ", str); }

int compare(const void *a, const void *b) { return strcmp((char *)a, (char *)b); }

int main() {
    FILE *fp;
    int n;
    char words[MAX][MAX];
    char temp_c;

    fp = fopen("f3.txt", "r");

    while (n < MAX && fscanf(fp, "%20s", words[n]) == 1) {
        n++;
    }

    qsort(words, n, sizeof(words[0]), compare);
    for (int i = 0; i < n; i++) {
        printWords(words[i]);
    }

    fclose(fp);
}
