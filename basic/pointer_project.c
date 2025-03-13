#include <stdio.h>
#include <time.h>
int level;
int arrayFish[6];
int* cursor;
void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int main_pp() {

	long startTime = 0; // ���� ���� �ð�
	long totalElapsedTime = 0; // �� ��� �ð�
	long prevElapsedTime = 0; // ���� ��� �ð� (�ֱٿ� ���� �� �ð� ����)

	int num; // �� �� ���׿� ���� �� ������, ����� �Է�
	initData();

	cursor = arrayFish;

	startTime = clock(); // ���� �ð��� ms ������ ��ȯ
	while (1) {
		printfFishes();
		printf("\n\n�� �� ���׿� ���� �ֽðھ��? : ");
		scanf_s(" %d", &num);

		// �Է°� üũ
		if (num < 1 || num > 6) {
			printf("\n �Է� ���� �߸��Ǿ����ϴ�. \n");
			continue;
		}

		// �� ��� �ð� ǥ��

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);

		// ���������� �� �� �ð� ���� �帥 �ð� ǥ��

		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld��\n", prevElapsedTime);

		// ������ �� ����
		decreaseWater(prevElapsedTime);

		// ����ڰ� �Է��� ���׿� �� �ֱ�
		// ���� 1: ������ ���� 0�̸� ���� �� �� ����.

		if (cursor[num - 1] <= 0) {
			printf("%d �� ������ �̹� �׾����ϴ�.. ���� �� �� �����ϴ�.\n", num);
		}

		// ���� 2: ������ ���� 0�� �ƴϸ� ���� �ش�. 100 �� �Ѿ�� �ʴ��� üũ
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d �� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1;
		}

		// �������� �� ���� Ȯ�� (20�� ���� ����)
		if (totalElapsedTime / 20 > level - 1) {

			level++;
			printf("=== ������! ���� %d �������� %d ������ ���׷��̵�! ===\n\n", level, level + 1);

			if (level == 5) {
				printf("\n\n �����մϴ�. �ְ� ������ �޼��Ͽ����ϴ�. ������ �����մϴ�.\n\n");
				exit(0);
			}
		}

		// ��� ����Ⱑ �׾����� Ȯ��
		
		if (checkFishAlive() == 0) {
			printf("��� ����Ⱑ �׾����ϴ�..\n");
			exit(0);
		}
		else {
			// �ּ� �Ѹ��� �̻��� ����Ⱑ �������
			printf("����Ⱑ ���� ����ֽ��ϴ�.\n");
		}
		prevElapsedTime = totalElapsedTime;
	}

	return 0;
}

void initData() {
	level = 1; // ���� ���� (1~5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; // ������ �� ���� (0~100)
	}
}

void printfFishes() { 

	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6); // %d : �տ� �鿩���� ����, %nd : n �� ����ŭ �տ� �鿩���� 

	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arrayFish[i]); // �ش� ������ �� ���̸� ǥ��
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