#include <stdio.h>
//����
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3); //������ ������ �޴� �Լ�
int apple(int total, int ate); //��ü total ������ ate ���� �԰� ���� ���� ��ȯ
int add(int num, int num2);

int main_function(void) {

/*	//����
	int num = 2;

	//printf("num�� %d�Դϴ�\n", num);
	p(num); */

	//�Լ� ����
	//��ȯ���� ���� �Լ�
	//function_without_return(); //�Լ� ����

	//��ȯ���� �ִ� �Լ�

/*	int ret = function_with_return(); //��ȯ���� �ֱ� ������ ���� �޾��� ���� ����
	p(ret); */

	//���ް�(�Ķ����)�� ���� �Լ�
//	function_without_params();

	//���ް�(�Ķ����)�� �ִ� �Լ�
	//function_with_params(1, 2, 3);

	//���ް�(�Ķ����)�� �ް�, ��ȯ���� �ִ� �Լ�
	//int ret = apple(5, 2); // 5�� ��� �� 2���� ����
	//printf("��� 5�� �߿� 2���� ������? %d��\n", ret);
	//printf("��� %d�� �߿� %d���� ������? %d��\n", 10, 4, apple(10, 4));

	//���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);

	return 0; 
}

//����
 
void p(int num) {
	printf("num�� %d�Դϴ�.\n", num);

}

//�Լ� ���� ���: ��ȯ�� �Լ��̸�(���ް�)
/*���� ������ ��
int �Լ��̸�(num) {
	return num + 4;
} */

void function_without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return() {
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_params() {
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int num1, int num2, int num3) {
	printf("���ް��� �ִ� �Լ��̸�, ���� ���� ���� %d, %d, %d�Դϴ�\n", num1, num2, num3);
}

int apple(int total, int ate) {
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
} 

int add(int num, int num2) {
	return num + num2;
}     