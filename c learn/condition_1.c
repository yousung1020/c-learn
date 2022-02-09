#include <time.h>
#include <stdlib.h>
#include <stdio.h>




int main_condition(void) {

	/*	int age = 15;
		if (age >= 20)
			printf("일반인 입니다.");
		else
			printf("청소년 입니다"); */

			/*	int age = 8;

				if (age >= 8 && age <= 13) { //&&은 or을 의미
					printf("초등학생입니다\n");
				}
				else if (age >= 14 && age <= 16) {
					printf("청소년입니다\n");
				} */



				//break continue
				//1번부터 30번까지 있는 반에서 1번에서 5번까지 과제 발표
			/*	for (int i = 1; i <= 30; i++) {
					if (i >= 6) {
						printf("나머지는 가도 좋습니다.\n");
						break;
					}
				printf("%d번 발표준비 하세요.\n", i);
				} */

				// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
				//7번을 제외하고 6번부터 10번까지 발표

			/*	for (int i = 1; i <= 30; i++) {
					if (i >= 6 && i <= 10) {
						if (i == 7) {
							printf("%d번 학생은 결석입니다\n", i);
							continue; // 밑 명령어를 무시하고 다음 반복문 실행
						}
						printf("%d번은 발표 준비를 하세요\n", i);
					}
				} */

				// &&, ||

				// 가위0 바위1 보2

			/*	srand(time(NULL)); //값 초기화
				int i = rand() % 3; // 0 ~ 2 반환

				if (i == 0) {
					printf("가위\n");
				}
				else if (i == 1) {
					printf("바위\n");
				}
				else {
					printf("보\n");
				} */

				/*	srand(time(NULL));
					int i = rand() % 3;

					switch (i) { //각 상황(case)마다 결과값을 출력
					case 0:printf("가위\n"); break; //값이 0일 때 "가위" 출력
					case 1:printf("바위\n"); break;
					case 2:printf("보\n"); break;
					default:printf("몰라요\n"); break; //위 상황 외에 경우

					} */

					//UP and DOWN 프로젝트
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100

	printf("숫자: %d\n", num);

	int answer = 0; //정답
	int chance = 5; //기회

	while (chance > 0) {
		printf("남은 기회: %d번\n", chance--);
		printf("숫자를 맞춰보세요(1~100):");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN\n\n");
		}
		else if (answer < num) {
			printf("UP\n\n");
		}
		else if (answer == num) {
			printf("맞추셨습니다!\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생했습니다.\n\n");

		}

		if (chance == 0) {
			printf("아쉽게도 실패하셨어요..\n\n");
		}
	}

	return 0;
}