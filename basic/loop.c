#include <stdio.h>
int main_loop(void) {

	//�ݺ���
	//for(����, ����, ����)
/*	for (int i = 1; i <= 10; i++) {
		printf("hi %d\n", i);
	} */

	//while (����)
/*	int i = 1;
	while (i <= 10) {
		printf("hi %d\n", i++); 
	} */

	//do {} while (����);
/*	do {
		printf("hi %d\n", i++);
	} while (i <= 10); */

	//���� �ݺ���
/*	for (int i = 1; i <= 3; i++) {
		printf("ù��° �ݺ��� %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("    �ι�° �ݺ��� %d\n", j);
		} 
	} */

	//������
/*	for (int i = 2; i <= 9; i++) {
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	} */
	
/*	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 4; j++ ) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
*/
	//�Ƕ�̵� �ױ�
	int floor;
	printf("�� ������ �װڴ���: ");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
	
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n"); 
	}
	return 0;
}