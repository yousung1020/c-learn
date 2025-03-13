// 예제1
#include <stdio.h>

int main() {
	int n, odd = 0, even = 0, data;

	printf("여기에 갯수 n 입력: ");
	scanf_s("%d", &n);
	printf("여기에 데이터 입력: ");
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
	printf("짝수: %d, 홀수: %d", even, odd);

	return 0;
}