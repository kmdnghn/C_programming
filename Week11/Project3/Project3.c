#include <stdio.h>

void apply_discount(int* price, int n, int percent) {
	for (int i = 0;i < n; i++) {
		price[i] = (int)(price[i] * ((100 - percent) / 100.0));
	}
}


int main() {
	int prices[] = { 5000, 10000, 12000, 20000, 40000 };
	int discount;
	printf("할인율(%%)을 입력하시오 : ");
	scanf_s("%d", &discount);
	printf("할인 전 : ");
	for (int i = 0;i < 5; i++) {
		printf("%d ", prices[i]);
	}
	apply_discount(prices, 5, discount);
	printf("\n할인 후 : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", prices[i]);
	}
}