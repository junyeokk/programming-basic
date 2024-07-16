#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: rename old_name new_name\n");
        return 1;
    }
    char *old_name = argv[1];
    char *new_name = argv[2];

    int result = rename(old_name, new_name);
    if (result == 0) {
        printf("File renamed successfully.\n");
    } else {
        perror("Error renaming file");
        return 1;
    }
    return 0;
}