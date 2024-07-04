#include <stdio.h>

int main() {
  int temp, idx = 0;
  int arr[10001];

  while(1) {
    scanf("%d", &temp);
    if(temp == 0) {
      break;
    }
    arr[idx] = temp;
    idx++;
  }

  for(int i = 0; i < idx; i++) {
    for(int j = i; j < idx; j++) {
      if(arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for(int i = 0; i < idx; i++) {
    printf("%d ", arr[i]);
  }
}