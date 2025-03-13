#include <stdio.h>

int main() {
	int n = 3, price, total_price = 0;
	double rate;

	for (int i = 0; i < n; i++) {
		scanf_s("%d %lf", &price, &rate);
		total_price += price * (1 - rate);
	}
	printf("total price: %d", total_price);
	return 0;
}