#include <stdio.h>

int main() {
  int a[] = {10, 20};
  int *p = &a[0];

  printf("%d\n", *p++); // *(p++)과 동일
  printf("%d\n", *p);

  p = &a[0];
  printf("%d\n", *++p); // *(++p) 동일
  printf("%d\n\n", *p);

  p = &a[0];
  printf("%d\n", (*p)++);
  printf("%d\n", *p);
  
  a[0] = 10;
  p = &a[0];
  printf("%d\n", ++*p);
  printf("%d\n\n", *p);
}
