#include <stdio.h>

int main(void) {
    int x = 0xffff; // 65535

    printf("%6d %08x\n", x, x);           // 1111(f) 1111(f) 1111(f) 1111(f)
    printf("%6d %08x\n", x >> 1, x >> 1); // 0111(7) 1111(f) 1111(f) 1111(f)
    printf("%6d %08x\n", x >> 2, x >> 2); // 0011(3) 1111(f) 1111(f) 1111(f)
    printf("%6d %08x\n", x >> 3, x >> 3); // 0001(1) 1111(f) 1111(f) 1111(f)

    printf("%6d %08x\n", x << 1, x << 1); // 1111(f) 1111(f) 1111(f) 1110(e)
    printf("%6d %08x\n", x << 2, x << 2); // 1111(f) 1111(f) 1111(f) 1100(c)

    return 0;
}