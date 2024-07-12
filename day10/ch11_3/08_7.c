#include <stdio.h>

int main() {
  const char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  for(int i = 0; i < 7; i++) {
    printf("%s\n", days[i]);
  }
}