#include <stdio.h>
#include <time.h>

int arrayAnimal[4][5]; // 20장의 카드 (4 * 5)
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


int main(void) {

	srand(time(NULL));
	initAnimalArray();
	initAnimalName();
	shuffleAnimal();

	int failCount = 0; 

	while (1) {
		int select1 = 0;
		int select2 = 0;

		printAnimals(); // 동물 위치 출력
		printQuiz(); // 문제 출력

		printf("뒤집을 카드를 두 개 고르세요 : ");
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
			printf("\n\n빙고! 발견한 동물은 %s 입니다.\n\n", 
				strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;

		}
		else {
			printf("\n\n땡! (틀렸거나 이미 뒤집힌 카드입니다.)\n\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}
		// 모든 동물을 찾았는지에 대한 여부, 1 이면 참, 0 이면 거짓
		if (foundAllAnimal() == 1) {
			printf("\n\n 축하합니다! 모든 동물을 찾아내셨습니다!\n\n");
			printf("틀린 횟수: %d\n" , failCount);
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
	strAnimal[0] = "고양이";
	strAnimal[1] = "강아지";
	strAnimal[2] = "원숭이";
	strAnimal[3] = "돼지";
	strAnimal[4] = "코끼리";
	strAnimal[5] = "기린";
	strAnimal[6] = "낙타";
	strAnimal[7] = "호랑이";
	strAnimal[8] = "타조";
	strAnimal[9] = "나무늘보";
}
// 좌표에서 빈 공간 찾기


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
		int randPos = rand() % 20; //0 ~ 19 사이 반환
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
	printf("\n\n(문제)\n");
	int Sequence = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			// 카드를 뒤집어서 정답을 맞혔으면 동물이름 출력
			if (checkAnimal[i][j] != 0) {

				printf("%10s", strAnimal[arrayAnimal[i][j]]);
			}
			// 정답을 맞추지 못했으면 위치를 나타내는 숫자 출력

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