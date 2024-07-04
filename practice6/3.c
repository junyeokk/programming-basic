#include <stdio.h>

int main() {
  int arr1[5], arr2[5];
  int flag = 1;
  
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr1[i]);
  }

  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr2[i]);
  }

  for (int i = 0; i < 5; i++) {
    if (arr1[i] != arr2[i]) {
      flag = 0;
    }
  }
  
  if (flag) {
    printf("same");
  } else {
    printf("not same");
  }
}