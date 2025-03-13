#include <stdio.h>

int getrandomnumber(int level);
void showquestion(int level, int num1, int num2);
void sucess();
void fail();

int main_wow(void) {

	//문이 5개 있다고 가정하고 각 문마다 점점 어려워지는 수식 퀴즈 출제
	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++) {
		//x * y?
		int num1 = getrandomnumber(i);
		int num2 = getrandomnumber(i);
		showquestion(i, num1, num2);

		int answer = -1;
		scanf_s(" %d", &answer);
		if (answer == -1) {

			printf("프로그램을 종료합니다.\n");
			exit(0); // 프로그램을 바로 종료
		}
		else if (answer == num1 * num2) {

			//성공
			sucess();
			count++;
		}
		else {
			//실패
			fail();
		}
	}
	printf("당신은 5개의 비밀번호 중 %d개를 맞췄습니다.\n", count);

	return 0;
}

int getrandomnumber(int level) {
	return rand() % (level * 7) + 1;
}
void showquestion(int level, int num1, int num2) {
	printf("%d 번 째 비밀번호\n", level);
	printf("%d x %d = \n", num1, num2);
	printf("\n비밀번호를 입력하세요. (종료: -1)");
}

void sucess() {
	printf("정답입니다!\n");
}

void fail() {
	printf("틀렸습니다!\n");
}