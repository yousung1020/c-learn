// ����1
#include <stdio.h>

int main() {
	int a, b, c,tmp;
	printf("�� �� �Է�: ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	if (a > b) {
		tmp = a;
	}
	else {
		tmp = b;
	}

	if (c > tmp) {
		tmp = c;
	}

	printf("%d", tmp);

	return 0;
}