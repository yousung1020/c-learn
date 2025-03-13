// 부함수를 이용하여 간단한 계산기를 만드시오
void add1();
void sub();
void div();
void mul();

int main_calc(void) {
	char c = 0 ;
	int num1 = 0, num2 = 0;
	printf("덧셈은 '+' 뺄셈은 '-' 나눗셈은 '/' 곱셈은 '*' 을 입력해주세요.: "); 
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
		printf("잘못된 입력입니다.\n");
		break;
	}
	return 0;
}

void add1() {
	int num1 = 0, num2 = 0;
	printf("더할 두 정수를 입력해주세요.: ");
	scanf_s(" %d %d", &num1, &num2);
	printf("%d + %d = %d", num1, num2, num1 + num2);
}

void sub() {
	int num1 = 0, num2 = 0;
	printf("뺄 두 정수(a - b)를 입력해주세요.: ");
	scanf_s(" %d %d", &num1, &num2);
	printf("%d - %d = %d", num1, num2, num1 - num2);
}

void div() {
	int num1 = 0, num2 = 0;
	printf("나눌 두 정수(a / b)를 입력해주세요.: ");
	scanf_s(" %d %d", &num1, &num2);
	float result = (float)num1 / num2;

	printf("%d / %d = %.3f", num1, num2, result);
}

void mul() {
	int num1 = 0, num2 = 0;
	printf("곱할 두 정수를 입력해주세요.: ");
	scanf_s(" %d %d", &num1, &num2);
	printf("%d x %d = %d", num1, num2, num1 * num2);
}