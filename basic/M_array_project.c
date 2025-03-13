#include <stdio.h>
#include <time.h>

int arrayAnimal[4][5]; // 20���� ī�� (4 * 5)
char* strAnimal[10];
int checkAnimal[4][5];

void initAnimalArray();
void initAnimalName();
int getEmptyPosition();
void shuffleAnimal();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuiz();


int main_ma(void) {

	srand(time(NULL));
	initAnimalArray();
	initAnimalName();
	shuffleAnimal();

	int failCount = 0; 

	while (1) {
		int select1 = 0;
		int select2 = 0;

		printAnimals(); // ���� ��ġ ���
		printQuiz(); // ���� ���

		printf("������ ī�带 �� �� ������ : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2) {
			continue;
		}
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 
			&& checkAnimal[secondSelect_x][secondSelect_y] == 0)
			&& (arrayAnimal[secondSelect_x][secondSelect_y] == arrayAnimal[firstSelect_x][firstSelect_y])) {
			printf("\n\n����! �߰��� ������ %s �Դϴ�.\n\n", 
				strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;

		}
		else {
			printf("\n\n��! (Ʋ�Ȱų� �̹� ������ ī���Դϴ�.)\n\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}
		// ��� ������ ã�Ҵ����� ���� ����, 1 �̸� ��, 0 �̸� ����
		if (foundAllAnimal() == 1) {
			printf("\n\n �����մϴ�! ��� ������ ã�Ƴ��̽��ϴ�!\n\n");
			printf("Ʋ�� Ƚ��: %d\n" , failCount);
			break;
		}
	}

	return 0;
}

void initAnimalArray() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName() {
	strAnimal[0] = "�����";
	strAnimal[1] = "������";
	strAnimal[2] = "������";
	strAnimal[3] = "����";
	strAnimal[4] = "�ڳ���";
	strAnimal[5] = "�⸰";
	strAnimal[6] = "��Ÿ";
	strAnimal[7] = "ȣ����";
	strAnimal[8] = "Ÿ��";
	strAnimal[9] = "�����ú�";
}
// ��ǥ���� �� ���� ã��


void shuffleAnimal() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

int getEmptyPosition() {
	while (1) {
		int randPos = rand() % 20; //0 ~ 19 ���� ��ȯ
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1) {
			return randPos;
		}

	}
	return 0;
}

int conv_pos_x(int x) {
	return x / 5;
}

int conv_pos_y(int y) {
	return y % 5; 
}

void printAnimals() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%10s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
}
void printQuiz() {
	printf("\n\n(����)\n");
	int Sequence = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			// ī�带 ����� ������ �������� �����̸� ���
			if (checkAnimal[i][j] != 0) {

				printf("%10s", strAnimal[arrayAnimal[i][j]]);
			}
			// ������ ������ �������� ��ġ�� ��Ÿ���� ���� ���

			else {
				printf("%10d", Sequence);
			}
			Sequence++;
		}
		printf("\n");
	}
}

int foundAllAnimal() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (checkAnimal[i][j] == 0) {
				return 0;
			}
		}
	}
	return 1;
}