#include <stdio.h>

int main_a(void) {

	int a, e, f;
	float b, c, d, g;
	

	printf("변수 a값을 입력하세요: ");
	scanf_s("%d", &a);
	printf("변수 b값을 입력하세요: ");
	scanf_s("%f", &b);
	printf("변수 c값을 입력하세요: ");
	scanf_s("%f", &c);
	e = 0;
	f = 0;
	g = 0;
	d = a * b * c;

	if (a > b + c || b + c < 100) {
		b = b * 1.2;
		c = c * 1.2;
		g = a * b * c;
		e += 1;
		
	}
	printf("이전 결과값: %.0f\n", d);
	printf("조건 값: %d  최종 결과값: %.0f", e, g);

	return 0;
}