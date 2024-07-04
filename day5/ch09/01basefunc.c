#include <stdio.h>

void message();
void cacao();

int main(void) {
  puts("메인 함수 시작입니다.");
  message();
  cacao();
  puts("메인 함수 종료입니다.");

  return 0;
}

// 함수 message 구현
void message() {
  puts("\t메시지입니다.");
}