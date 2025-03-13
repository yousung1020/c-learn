// 연습2
#include <stdio.h>

int main() {
	int a = 0, n, data, pos_sum = 0, nega_sum = 0;

	printf("n입력: ");
	scanf_s("%d", &n);
	printf("여기에 데이터 입력\n");

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