#include <stdio.h>

int main() {
  double arr[10001] = { 0 };
  double temp, sum = 0, avg = 0;
  int idx = 0;

  while(1) {
    scanf("%lf", &temp);
    if(temp == 0) {
      break;
    }

    arr[idx] = temp;
    sum += temp;
    idx++;
  }

  avg = sum / idx;

  printf("%.1lf\n", avg);
  for(int i = 0; i < idx; i++) {
    if(arr[i] < avg) {
      printf("%.1lf ", arr[i]);
    }
  }
}