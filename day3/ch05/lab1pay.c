#include <stdio.h>

int main(void) {
	int amount;
	printf("총 금액 입력 >> ");
	scanf("%d", &amount);
	printf("계산 금액: %d\n", amount);

	int cnt50000 = amount / 50000;
	int changes = amount % 50000;
	printf("오만원권 %d개 ", cnt50000);

	int cnt10000 = changes / 10000;
	changes %= 10000; // changes = changes % 10000;
	printf("만원권 %d개 ", cnt10000);

	int cnt5000 = changes / 5000;
	changes %= 5000; // changes = changes % 5000;
	printf("오천원권 %d개 ", cnt5000);
	printf("나머지 %d원\n", changes);

	return 0;	
}
