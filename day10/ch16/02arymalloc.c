#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, temp, sum = 0;
  printf("입력할 점수의 개수를 입력 >> ");
  scanf("%d", &n);

  int *arr = NULL;
  if((arr = (int *)malloc(sizeof(int) * n)) == NULL) {
    printf("메모리 할당에 문제가 있습니다.");
    return 0;
  }

  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  printf("입력 점수: ");
  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n합: %d, 평균: %.lf\n", sum, (double) sum / n);
}