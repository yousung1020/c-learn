#include <time.h>
#include <stdlib.h>
#include <stdio.h>




int main_condition(void) {

	/*	int age = 15;
		if (age >= 20)
			printf("�Ϲ��� �Դϴ�.");
		else
			printf("û�ҳ� �Դϴ�"); */

			/*	int age = 8;

				if (age >= 8 && age <= 13) { //&&�� or�� �ǹ�
					printf("�ʵ��л��Դϴ�\n");
				}
				else if (age >= 14 && age <= 16) {
					printf("û�ҳ��Դϴ�\n");
				} */



				//break continue
				//1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ
			/*	for (int i = 1; i <= 30; i++) {
					if (i >= 6) {
						printf("�������� ���� �����ϴ�.\n");
						break;
					}
				printf("%d�� ��ǥ�غ� �ϼ���.\n", i);
				} */

				// 1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
				//7���� �����ϰ� 6������ 10������ ��ǥ

			/*	for (int i = 1; i <= 30; i++) {
					if (i >= 6 && i <= 10) {
						if (i == 7) {
							printf("%d�� �л��� �Ἦ�Դϴ�\n", i);
							continue; // �� ��ɾ �����ϰ� ���� �ݺ��� ����
						}
						printf("%d���� ��ǥ �غ� �ϼ���\n", i);
					}
				} */

				// &&, ||

				// ����0 ����1 ��2

			/*	srand(time(NULL)); //�� �ʱ�ȭ
				int i = rand() % 3; // 0 ~ 2 ��ȯ

				if (i == 0) {
					printf("����\n");
				}
				else if (i == 1) {
					printf("����\n");
				}
				else {
					printf("��\n");
				} */

				/*	srand(time(NULL));
					int i = rand() % 3;

					switch (i) { //�� ��Ȳ(case)���� ������� ���
					case 0:printf("����\n"); break; //���� 0�� �� "����" ���
					case 1:printf("����\n"); break;
					case 2:printf("��\n"); break;
					default:printf("�����\n"); break; //�� ��Ȳ �ܿ� ���

					} */

					//UP and DOWN ������Ʈ
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100

	printf("����: %d\n", num);

	int answer = 0; //����
	int chance = 5; //��ȸ

	while (chance > 0) {
		printf("���� ��ȸ: %d��\n", chance--);
		printf("���ڸ� ���纸����(1~100):");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN\n\n");
		}
		else if (answer < num) {
			printf("UP\n\n");
		}
		else if (answer == num) {
			printf("���߼̽��ϴ�!\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��߽��ϴ�.\n\n");

		}

		if (chance == 0) {
			printf("�ƽ��Ե� �����ϼ̾��..\n\n");
		}
	}

	return 0;
}