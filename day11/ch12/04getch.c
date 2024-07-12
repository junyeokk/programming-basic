// #include <conio.h> // macos 불가
#include <stdio.h>

int main() {
    char ch;

    printf("문자를 계속 입력하고 Enter를 누르면 >> \n");
    while ((ch = getchar()) != 'q') {
        putchar(ch);
    }

    // print("\n문자를 누른 것이 보이고, _putch에 의해 입력문자 출력 >> \n");
    // while ((ch = _getche()) != 'q') {
    //     _putch(ch); // conio.h
    // }

    // printf("\n문자를 누른 것이 안 보이고, _putch에 의해 입력문자 출력 >> \n");
    // while ((ch = _getch()) != 'q') {
    //     _putch(ch); // conio.h
    // }
    // printf("\n");

    return 0;
}