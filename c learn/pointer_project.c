#include <stdio.h>
#include <time.h>
int level;
int arrayFish[6];
int* cursor;
void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int main() {

	long startTime = 0; // 게임 시작 시간
	long totalElapsedTime = 0; // 총 경과 시간
	long prevElapsedTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)

	int num; // 몇 번 어항에 물을 줄 것인지, 사용자 입력
	initData();

	cursor = arrayFish;

	startTime = clock(); // 현재 시간을 ms 단위로 반환
	while (1) {
		printfFishes();
		printf("\n\n몇 번 어항에 물을 주시겠어요? : ");
		scanf_s(" %d", &num);

		// 입력값 체크
		if (num < 1 || num > 6) {
			printf("\n 입력 값이 잘못되었습니다. \n");
			continue;
		}

		// 총 경과 시간 표시

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		// 마지막으로 물 준 시간 이후 흐른 시간 표시

		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld초\n", prevElapsedTime);

		// 어항의 물 감소
		decreaseWater(prevElapsedTime);

		// 사용자가 입력한 어항에 물 주기
		// 조건 1: 어항의 물이 0이면 물을 줄 수 없다.

		if (cursor[num - 1] <= 0) {
			printf("%d 번 물고기는 이미 죽었습니다.. 물을 줄 수 없습니다.\n", num);
		}

		// 조건 2: 어항의 물이 0이 아니면 물을 준다. 100 이 넘어가지 않는지 체크
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d 번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1;
		}

		// 레벨업을 할 건지 확인 (20초 마다 수행)
		if (totalElapsedTime / 20 > level - 1) {

			level++;
			printf("=== 레벨업! 기존 %d 레벨에서 %d 레벨로 업그레이드! ===\n\n", level, level + 1);

			if (level == 5) {
				printf("\n\n 축하합니다. 최고 레벨을 달성하였습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인
		
		if (checkFishAlive() == 0) {
			printf("모든 물고기가 죽었습니다..\n");
			exit(0);
		}
		else {
			// 최소 한마리 이상의 물고기가 살아있음
			printf("물고기가 아직 살아있습니다.\n");
		}
		prevElapsedTime = totalElapsedTime;
	}

	return 0;
}

void initData() {
	level = 1; // 게임 레벨 (1~5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; // 어항의 물 높이 (0~100)
	}
}

void printfFishes() { 

	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6); // %d : 앞에 들여쓰기 없음, %nd : n 의 수만큼 앞에 들여쓰기 

	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arrayFish[i]); // 해당 어항의 물 높이를 표시
	}
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime);
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			return 1;
		 }
	}
	return 0;
}