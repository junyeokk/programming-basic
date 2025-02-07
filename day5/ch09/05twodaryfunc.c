#include <stdio.h>

double sum(double data[][2], int, int); // 2차원 배열 값을 모두 더하는 함수 원형
void printarray(double data[][2], int, int); // 2차원 배열 값을 모두 출력하는 함수 원형

int main(void) {
  // 3 x 2 행렬을 위한 2차원 배열 선언 및 초기화
  double x[][2] = { { 11, 12 }, { 21, 22 }, { 31, 32 }};
  int rowsize = sizeof(x) / sizeof(x[0]);
  int colsize = sizeof(x[0]) / sizeof(x[0][0]);
  printf("2차원 배열의 자료값은 다음과 같습니다.\n");
  printarray(x, rowsize, colsize);
  printf("2차원 배열 원소합은 %3.lf입니다.\n", sum(x, rowsize, colsize));

  return 0;
}

// 배열 값을 모두 더하는 함수
double sum(double data[][2], int rowsize, int colsize) {
  double total = 0;
  for (int i = 0; i < rowsize; i++) {
    for (int j = 0; j < colsize; j++) {
      total += data[i][j];
    }
  }
  return total;
}

void printarray(double data[][2], int rowsize, int colsize) {
  for (int i = 0; i < rowsize; i++) {
    for (int j = 0; j < colsize; j++) {
      printf("x[%d][%d] = %5.2lf  ", i, j, data[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}