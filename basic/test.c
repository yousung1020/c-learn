//�� ���� �Է¹޾� ū �� ���� ����
#include <stdio.h>
#include <time.h>
void big_small();
void sort();
int main_test(void) {
	srand(time(NULL));
	//int wut;
	//int a = 0, b = 0, c = 0;
	//printf("1, 2 �� �ϳ� ����: ");
	//scanf_s(" %d", &wut);
	//switch (wut) {
	//case 1:
	//	big_small();
	//	break;
	//case 2:
	//	sort();
	//	break;
	//}
	int num = rand() % 4;
	printf("%d", num);
	
	return 0;
}

void big_small() {
	int a = 0, b = 0, c = 0;
	printf("�� ������ �Է��Ͻÿ�.: ");
	scanf_s(" %d %d %d", &a, &b, &c);
	if (a > b) {
		if (a > c) {
			if (b > c) {
				printf("%d, %d, %d", a, b, c);
			}
			else {
				printf("%d, %d, %d", a, c, b);
			}
		}
		else {
			printf("%d, %d, %d", c, a, b);
		}
	}
	else if(b > a) {
		if (b > c) {
			if (a > c) {
				printf("%d, %d, %d", b, a, c);
			}
			else {
				printf("%d, %d, %d", b, c, a);
			}
		}
		else {
			printf("%d, %d, %d", c, b, a);
		}
	}
}

void sort() {
	int tmp;
	int a = 0, b = 0, c = 0;
	printf("�� ������ �Է��Ͻÿ�.: ");
	scanf_s(" %d %d %d", &a, &b, &c);
	if(b > a){
		tmp = a;
		a = b;
		b = tmp;
	}
	if (c > a) {
		tmp = a;
		a = c;
		c = tmp;
	}
	if (c > b) {
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);
}
