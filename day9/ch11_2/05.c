#include <stdio.h>

int main() {
    int value = 0x44434241;

    char *pc = (char *)&value;

    for (int i = 0; i <= 3; i++) {
        char ch = *(pc + i);
        printf(" *(pc+%d) %#x %3c %p\n", i, ch, ch, (pc + i));
    }
}