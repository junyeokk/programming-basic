#include <stdio.h>

int main() {
  double num1, num2;
  char op;

  while(1) {
    scanf("%lf%c%lf", &num1, &op, &num2);

    switch(op) {
      case '+':
        printf("%.lf+%.lf=%.lf\n", num1, num2, num1 + num2);
        break;
      case '-':
        printf("%.lf-%.lf=%.lf\n", num1, num2, num1 - num2);
        break;
      case '*':
        printf("%.lf*%.lf=%.lf\n", num1, num2, num1 * num2);
        break;
      case '/':
        if(num2 == 0) {
          printf("Error\n");
        } else {
          printf("%.lf/%.lf=%.2lf\n", num1, num2, num1 / num2);
        }
        break;
      case '!':
        return 0;
    }
  }
}