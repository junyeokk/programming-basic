#include <stdio.h>

int main() {
    char str1[] = "Python";
    char str2[] = "Kotlin";
    char str3[] = "Tensorflow";

    char *pstr[] = {str1, str2, str3};
    printf("%s ", pstr[0]);
    printf("%s ", pstr[1]);
    printf("%s\n", pstr[2]);

    printf("%c %c %c\n", str1[0], str2[1], str3[2]);
    printf("%c %c %c\n", pstr[0][1], pstr[1][1], pstr[2][1]);
}