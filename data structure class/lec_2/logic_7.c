// ����4
// ���� for���� ������� �ʴ� ���
// ���� ����ȭ
#include <stdio.h>

int main() {
	int n, ssum = 0, data, sumTmp = 0, psumTmp = 0;
	long psum = 1;

	printf("n �Է�: ");
	
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		// ���� ssum ���� Ȱ���Ͽ� ���
		ssum += i;

		// ���� psum ���� Ȱ���Ͽ� ���
		psum *= i;

		sumTmp += ssum;
		psumTmp += psum;
	}

	printf("ssum: %d, psum: %ld", sumTmp, psumTmp);

	return 0;
}