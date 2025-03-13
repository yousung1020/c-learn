// 예제3

#include <stdio.h>

int main() {
	int n, max = 0, data;
	float avg = 0;
	printf("n 입력: ");
	scanf_s("%d", &n);
	printf("성적 입력: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data);

		if (0 <= data <= 100) {
			avg += data;
			if (data > max) {
				max = data;
			}
		}
		else {
			printf("0과 100사이의 수가 아닙니다!");
		} 
	}
	printf("평균값: %.2f, 최고점: %d", avg / n, max);

	return 0;
}