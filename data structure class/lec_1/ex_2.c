#include <stdio.h>

int main() {
	int n = 10, pnum = 0, data;
	float pavg = 0;

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data);

		if (data > 0) {
			pnum++;
			pavg += data;
		}
	}
	printf("��ȿ�� �� ����: %d\n", pnum);
	printf("��ȿ�� ���� ��� ��: %.2f", pavg / pnum);
	return 0;
}