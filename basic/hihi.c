#include <stdio.h>

int main_a(void) {

	int a, e, f;
	float b, c, d, g;
	

	printf("���� a���� �Է��ϼ���: ");
	scanf_s("%d", &a);
	printf("���� b���� �Է��ϼ���: ");
	scanf_s("%f", &b);
	printf("���� c���� �Է��ϼ���: ");
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
	printf("���� �����: %.0f\n", d);
	printf("���� ��: %d  ���� �����: %.0f", e, g);

	return 0;
}