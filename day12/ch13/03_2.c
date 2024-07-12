#include <stdio.h>

typedef enum { INT, FLOAT, CHAR } DataType;

typedef union {
    int i;
    float f;
    char c;
} Data;

typedef struct {
    DataType type;
    Data data;
} TypedData;

void printData(TypedData d) {
    switch (d.type) {
    case INT:
        printf("Integer: %d\n", d.data.i);
        break;
    case FLOAT:
        printf("Float: %f\n", d.data.f);
        break;
    case CHAR:
        printf("Character: %c\n", d.data.c);
        break;
    }
}

int main() {
    TypedData data;

    data.type = INT;
    data.data.i = 5;
    printData(data);

    data.type = FLOAT;
    data.data.f = 3.14;
    printData(data);

    return 0;
}