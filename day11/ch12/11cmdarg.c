#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;
    printf("실행 명령행 인자(command line arguments) >> \n");
    printf("args = %d\n", argc);
    for (i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}