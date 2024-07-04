#include <stdio.h>

int main() {
  int n, cnt = 0;
  int arr[100001] = { 0 };
  
  while(1) {
    scanf("%d", &n);
    if (n == 0) {
      break;
    }

    arr[cnt] = n;
    cnt++;
  }

  printf("%d\n", cnt);
  for (int i = cnt - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }
}