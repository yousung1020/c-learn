// ���Լ��� �̿��Ͽ� ������ ���⸦ ����ÿ�
void add1();
void sub();
void div();
void mul();

int main_calc(void) {
	char c = 0 ;
	int num1 = 0, num2 = 0;
	printf("������ '+' ������ '-' �������� '/' ������ '*' �� �Է����ּ���.: "); 
	scanf_s(" %c", &c);

	switch (c) {
	case '+':
		add1();
		break;
	case '-':
		sub();
		break;
	case '*':
		mul();
		break;
	case '/':
		div();
		break;
	default:
		printf("�߸��� �Է��Դϴ�.\n");
		break;
	}
	return 0;
}

void add1() {
	int num1 = 0, num2 = 0;
	printf("���� �� ������ �Է����ּ���.: ");
	scanf_s(" %d %d", &num1, &num2);
	printf("%d + %d = %d", num1, num2, num1 + num2);
}

void sub() {
	int num1 = 0, num2 = 0;
	printf("�� �� ����(a - b)�� �Է����ּ���.: ");
	scanf_s(" %d %d", &num1, &num2);
	printf("%d - %d = %d", num1, num2, num1 - num2);
}

void div() {
	int num1 = 0, num2 = 0;
	printf("���� �� ����(a / b)�� �Է����ּ���.: ");
	scanf_s(" %d %d", &num1, &num2);
	float result = (float)num1 / num2;

	printf("%d / %d = %.3f", num1, num2, result);
}

void mul() {
	int num1 = 0, num2 = 0;
	printf("���� �� ������ �Է����ּ���.: ");
	scanf_s(" %d %d", &num1, &num2);
	printf("%d x %d = %d", num1, num2, num1 * num2);
}