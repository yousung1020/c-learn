#include <stdio.h>
#include <time.h>
int main(void) {

	srand(time(NULL));

	printf("\n\n == �ƺ��� ��Ӹ� ���� == \n\n");
	int answer; //����� �Է°�
	int treatment = rand() % 4; // (0~3) ����
	int cntShowBottle = 0; // �̹� ���ӿ� ������ �� ����
	int prevCntShowBottle = 0; // �� ���ӿ� ������ �� ����

	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0, 0, 0, 0 }; // 4���� ��
		do {
			cntShowBottle = rand() % 2 + 2; // ������ �� ���� (2~3)
		} while (cntShowBottle == prevCntShowBottle);

		int isinclude = 0; // ������ ���� �߸����� ���Եƴ��� ����
		printf("\n > %d �� ° �õ� : ", i);

		// ������ �� ������ ����
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4;

			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isinclude = 1;
				}
			}
			// �̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
			else {
				j--;
			}
		}
		//����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d ", k + 1);
			}
		}
		printf(" ������ �Ӹ��� �ٸ��ϴ�\n\n");

		if (isinclude == 1)
			printf(" >> ���� ! �Ӹ��� ����� !!\n");

		else
			printf(" >> ���� ! �Ӹ��� ���� �ʾҾ�� . . \n");

		printf("\n . . . ��� �Ϸ��� �ƹ�Ű�� ��������");
		getchar();

	}

	printf("\n\n�߸����� �� �� �ϱ��? ");
	scanf_s(" %d", &answer);

	if (answer == treatment + 1) {
		printf("\n >> �����Դϴ�! \n");
	}
	else {
		printf("\n >> �� ! Ʋ�Ⱦ��. ������ %d �Դϴ�\n", treatment + 1);
	}

	return 0;
}