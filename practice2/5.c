#include <stdio.h>

int main() {
  printf("37970원은\n만원짜리 %d개\n오천원짜리 %d개\n천원짜리 %d개\n백원짜리 %d개\n십원짜리 %d개로 구성됩니다.", 37970/10000, (37970%10000)/5000, ((37970%10000)%5000)/1000, (((37970%10000)%5000)%1000)/100, ((((37970%10000)%5000)%1000)%100)/10);
}