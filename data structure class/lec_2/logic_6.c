// ����3

#include <stdio.h>

int main() {
	int n, max = 0, data;
	float avg = 0;
	printf("n �Է�: ");
	scanf_s("%d", &n);
	printf("���� �Է�: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data);

		if (0 <= data <= 100) {
			avg += data;
			if (data > max) {
				max = data;
			}
		}
		else {
			printf("0�� 100������ ���� �ƴմϴ�!");
		} 
	}
	printf("��հ�: %.2f, �ְ���: %d", avg / n, max);

	return 0;
}