// ����5
#include <stdio.h>

int main() {
	int n, data, max = 0, suu = 0;

	printf("n�Է�: \n");
	scanf_s("%d", &n);
	while (n > 0) {
		if (n > max) {
			max = n;
		}
		suu++;
		 
		scanf_s("%d", &n);
	}
	if (max > 0) {
		printf("�Էµ� ������ ��: %d, �ִ밪: %d", suu, max);
	}
	else {
		printf("no data");
	}

	return 0;
}