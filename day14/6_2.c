#include <stdio.h>

int main() {
    FILE *fp;
    long pos;
    char ch;

    FILE *ofp = fopen("output.txt", "w");
    if (ofp == NULL) {
        perror("Failed to open output file");
        return 0;
    }

    fprintf(ofp, "Hello, World!\nThis is a test file.\n1234567890\n");
    fclose(ofp);

    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        perror("Failed to open input file");
        return 0;
    }

    pos = ftell(fp);
    printf("Initial position: %ld\n", pos);

    ch = fgetc(fp);
    printf("Read character: %c\n", ch);

    fseek(fp, 10L, SEEK_SET);
    pos = ftell(fp);
    printf("Position after fseek to 10th byte: %ld\n", pos);

    rewind(fp);
    pos = ftell(fp);
    printf("Position after rewind: %ld\n", pos);

    fclose(fp);
}