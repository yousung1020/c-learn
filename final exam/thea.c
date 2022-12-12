#include <stdio.h>
#define SIZE 10 // SIZE 상수를 10으로 선언

int main() {
	char ans1;
	int ans2, i;
	int seats[SIZE] = {0}; // seats 배열 변수의 크기가 미리 정의된 SIZE
	while (1) {
		printf("좌석을 예약하시겠습니까?(y 또는 n)"); // y는 yes, n은 no
		scanf_s(" %c", &ans1); // 예약 여부를 입력 받음

		if (ans1 == 'n') { // 만약 사용자가 n을 입력하면
			break; // 종료
		}
		printf("-----------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("-----------------------\n");

		for (i = 0; i < SIZE; i++) {
			printf(" %d", seats[i]);
		}
		printf("\n");

		printf("몇 번째 좌석을 예약하시겠습니까?");
		scanf_s(" %d", &ans2);
		if (seats[ans2 - 1] == 0) {
			seats[ans2 - 1] = 1;
			printf("예약되었습니다.\n");
		}
		else
			printf("이미 예약된 자리입니다.\n");
	}

	return 0;
}