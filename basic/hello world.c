#include <stdio.h>

int main_helloworld(){
	
	//scanf

/*	int input;
    printf("���� �Է��ϼ���: ");
	scanf_s("%d", &input); //(���������� �Է°��� ����, input�� �Է� ����)
	printf("�Է°� : %d", input); */
    
	//scanf (������)

/*	int one, two, three;
	printf("3���� ������ �Է��ϼ���: ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��°: %d", one);
	printf("�ι�°: %d", two);
	printf("����°: %d", three); */

	//����(�� ����), ���ڿ�(���� ����)

/*	char a = 'A';

	printf("%c", a); */

/*	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s", str); */

	//������Ʈ(�����ۼ�)

	char name[256];

	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg�̿���? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm����? ");
	scanf_s("%lf", &height); //double�� %lf �� ����

	char what[256];
	printf("���� �߸��� �߾��? ");
	scanf_s("%s", what, sizeof(what));

	//���缭 ���

	printf("\n\n�̸��� ������? %s\n", name);
	printf("����̿���? %d\n", age);
	printf("�����Դ� �� kg�̿���? %.2f\n", weight);
	printf("Ű�� �� cm����? %.2lf\n", height);
	printf("���� �߸��� �߾��? %s", what);


	return 0;
}