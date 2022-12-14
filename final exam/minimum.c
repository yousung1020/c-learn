#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10 // 상수 SIZE를 10으로 선언한다.

int main() {
	int prices[SIZE] = { 0 }; // 크기가 10인 prices 배열 변수를 선언 후 0으로 초기화하였다.
	int i, minimum; // 반복문에 활용될 정수형 변수 i와 최솟값을 담을 정수형 변수 minimum 변수를 선언하였다.

	printf("--------------------");
	printf("1 2 3 4 5 6 7 8 9 10\n"); // 1부터 10까지를 출력
	printf("--------------------");
	srand((unsigned)time(NULL)); // 난수 발생 시드를 초기화한다.
	for (i = 0; i < SIZE; i++) { // 9번 반복한다. (0 ~ 9)
		prices[i] = (rand() % 100) + 1; // prices 배열 변수의 i 번째 값에 1~100 사이의 난수를 할당한다. 그러므로 0번 인덱스부터 9번 인덱스 요소에 1~100 의 값이 할당된다.
		printf("%-3d", prices[i]); // 0번 인덱스부터 9번 인덱스 까지의 요소 값을 출력한다.
	}

	printf("\n\n"); // 두 번 줄바꿈한다.

	minimum = prices[0]; // 최솟값을 담을 변수 minimum을 선언하고 prices 배열 변수의 0번 인덱스 요소 값을 기준으로 한다.

	for (i = 1; i < SIZE; i++) { // 기준 인덱스인 0번을 제외하여, 8번 반복한다. (1 ~ 9)
		if (prices[i] < minimum) // 만약 prices 배열 변수의 i번 인덱스 요소 값이 최솟값을 할당한 변수인 minimum 보다 작다면
			minimum = prices[i]; // minimum 변수에 해당 요소값 할당
	}
	printf("최소값은 %d입니다.\n", minimum); // 최솟값 minimum 변수 출력

	return 0; // 종료
}
