// ����1
#include <stdio.h>

int main() {
	int n, odd = 0, even = 0, data;

	printf("���⿡ ���� n �Է�: ");
	scanf_s("%d", &n);
	printf("���⿡ ������ �Է�: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data);
		if (data > 0) {
			if (data % 2 == 0) {
				even += data;
			}
			else {
				odd += data;
			}
		}
	}
	printf("¦��: %d, Ȧ��: %d", even, odd);

	return 0;
}