// 예제4
// 이중 for문을 사용하지 않는 경우
// 더욱 간략화
#include <stdio.h>

int main() {
	int n, ssum = 0, data, sumTmp = 0, psumTmp = 0;
	long psum = 1;

	printf("n 입력: ");
	
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		// 이전 ssum 값을 활용하여 계산
		ssum += i;

		// 이전 psum 값을 활용하여 계산
		psum *= i;

		sumTmp += ssum;
		psumTmp += psum;
	}

	printf("ssum: %d, psum: %ld", sumTmp, psumTmp);

	return 0;
}