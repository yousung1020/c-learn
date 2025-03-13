// 예제5
#include <stdio.h>

int main() {
	int n, data, max = 0, suu = 0;

	printf("n입력: \n");
	scanf_s("%d", &n);
	while (n > 0) {
		if (n > max) {
			max = n;
		}
		suu++;
		 
		scanf_s("%d", &n);
	}
	if (max > 0) {
		printf("입력된 데이터 수: %d, 최대값: %d", suu, max);
	}
	else {
		printf("no data");
	}

	return 0;
}