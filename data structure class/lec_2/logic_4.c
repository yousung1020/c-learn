// ����2
#include <stdio.h>

int main() {
	int a = 0, n, data, pos_sum = 0, nega_sum = 0;

	printf("n�Է�: ");
	scanf_s("%d", &n);
	printf("���⿡ ������ �Է�\n");

	while (a < n) {
		
		scanf_s("%d", &data);

		if (data > 0) {
			pos_sum += data;
		}
		else {
			nega_sum += data;
		}
		a++;
	}
	printf("pos: %d, nega: %d", pos_sum, nega_sum);

	return 0;
}