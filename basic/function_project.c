#include <stdio.h>

int getrandomnumber(int level);
void showquestion(int level, int num1, int num2);
void sucess();
void fail();

int main_wow(void) {

	//���� 5�� �ִٰ� �����ϰ� �� ������ ���� ��������� ���� ���� ����
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

			printf("���α׷��� �����մϴ�.\n");
			exit(0); // ���α׷��� �ٷ� ����
		}
		else if (answer == num1 * num2) {

			//����
			sucess();
			count++;
		}
		else {
			//����
			fail();
		}
	}
	printf("����� 5���� ��й�ȣ �� %d���� ������ϴ�.\n", count);

	return 0;
}

int getrandomnumber(int level) {
	return rand() % (level * 7) + 1;
}
void showquestion(int level, int num1, int num2) {
	printf("%d �� ° ��й�ȣ\n", level);
	printf("%d x %d = \n", num1, num2);
	printf("\n��й�ȣ�� �Է��ϼ���. (����: -1)");
}

void sucess() {
	printf("�����Դϴ�!\n");
}

void fail() {
	printf("Ʋ�Ƚ��ϴ�!\n");
}