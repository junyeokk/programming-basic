/* 소스: 04integer.c */

#include <stdio.h>

int main(void) {
  short sVar = 32000;
  int iVar = -2140000000;

  printf("저장 값: %d %d\n", sVar, iVar);

  // C99 이후 추가된 자료형: 64비트 정수형 지원
  long long dist1 = 272000000000; // 지구와 천왕성 간의 거리(km) 27억 2천만
  __int64_t dist2 = 450000000000; // 태양과 해왕성 간의 거리(km) 45억

  printf("지구와 천왕성 간의 거리(km): %lld\n", dist1);
  printf("태양과 해왕성 간의 거리(km): %lld\n", dist2);

  return 0;
}