#include <stdio.h>
void swap(int a, int b);
void swap_addr(int *a, int* b);
void changeArray(int* ptr);
int main_pointer() {

	// Pointer

	int chul = 1; // ��ȣ
	int min = 2;
	int young = 3;

	/*printf("�ּ�: %d, ��ȣ: %d\n", &chul, chul);*/

	// mission man

	//int *mission_man; // ������ ���� ����
	//mission_man = &chul;
	//printf("�̼Ǹ��� �湮 �� �ּ�: %d, ��ȣ: %d\n", mission_man, *mission_man);
	//*mission_man = *mission_man * 3;
	//printf("�ּ�: %d, ��ȣ�� ���ϱ� 3�� �� ��ȣ: %d\n", mission_man, *mission_man);
	//printf("�ּ�: %d, ��ȣ: %d\n", &chul, chul); // ������ ������ ���� �� �� ������ ���� ���� �ּ� ���� �ش��ϴ� �ּ��� ���� ���� �ٲٸ� ���� �ּҿ� ���� ���� ���� �ٲ����Ƿ� ���� ���� ���� �ٲ�Ե�
	//// spy

	//int* spy = mission_man;
	//*spy = *spy - 1;
	//printf("�ּ�: %d, ��ȣ %d\n", spy, *spy);

	//printf("�ּ�: %d, ��ȣ: %d\n", &chul, chul);

	////�̼Ǹǰ� �������� �ּ�(������ ������ �ּ� ����)
	//printf("�̼Ǹ� �ּ�: %d\n", &mission_man);
	//printf("������ �ּ�: %d\n", &spy);

	// �迭

	int arr[3] = { 5, 10, 15 };
	int* ptr = arr; // ptr �� arr �� �迭 �ϳ��ϳ� �ּ� ���� ��� ���� �׷��Ƿ� �Ȱ��� ������

	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d] ��: %d\n\n", i, arr[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("�迭 ptr[%d] ��: %d\n\n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	for (int i = 0; i < 3; i++) {
		/*printf("�迭 arr[%d} ��: %d\n\n", i, arr[i]);*/
		printf("�迭 arr[%d] ��: %d\n\n", i, *(arr + i));
	}
	//// *(arr + i) == arr[i] ���� ǥ��

	//for (int i = 0; i < 3; i++) {
	//	printf("�迭 ptr[%d} ��: %d\n\n", i, ptr[i]);
	/*}*/
	// ������ ������ ����Ű�� ���� ������ �� * ���
	// &�� �ּ�, *�� �� �ּ��� ���� ��Ÿ���� ������,
	// *& �� �ƹ��͵� ���� �Ͱ� ����.

	/*printf("arr ��ü�� �� : %d\n", *arr);
	printf("arr[0] �� �ּ� : %d\n", &arr[0]);
	printf("arr �� �ּ� :%d\n", &arr);
	printf("arr[1] �� �ּ� : %d\n", &arr[1]);
	printf("arr ��ü�� ���� ������ �ּ��� ���� �� : %d\n", *arr);
	printf("arr[0] �ּ��� ���� �� : %d", *&arr[0]);*/ // *&arr[0] == arr[0]

	int a = 10;
	int b = 20;
	// a�� b�� ���� �ٲ۴�. (swap)
	
	//printf("swap �Լ� �� => a : %d, b : %d\n", a, b);
	//
	//swap(a, b);

	//printf("swap �Լ� �� => a : %d, b : %d\n", a, b);
	// a, b �� �ּ� ���� �Լ� ���� a, b �ּ� ���� ���� ����(�Լ��� �� ������ ���� ���� ����)
	
	//printf("(�ּҰ� ����)swap �Լ� �� => a : %d, b : %d\n", a, b);

	//swap_addr(&a, &b);

	//printf("(�ּҰ� ����)swap �Լ� �� => a : %d, b : %d\n", a, b);

	// �迭�� ��, arr2 ��ü�� �ּҸ� ����Ŵ, arr2[0] ���� ���� ���� ����Ŵ
	int arr2[3] = { 10, 20, 30 };
	arr[2] = 50;
	/*changeArray(arr2);*/
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

	return 0;
}

void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
	printf("swap �Լ� �� => a : %d, b : %d\n", a, b);
}

void swap_addr(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	printf("(�ּҰ� ����)swap �Լ� �� => a : %d, b : %d\n", *a, *b);
}

void changeArray(int* ptr) {

	ptr[2] = 50;
}