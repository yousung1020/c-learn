// ����2
#include<stdio.h>

int main() {
	int a, tmp;

	printf("���� ���� �Է�: ");
	scanf_s("%d", &a);

	while (a > 0) {
		tmp = a % 10;
		printf("%d\n", tmp);
		a /= 10;
	}
}