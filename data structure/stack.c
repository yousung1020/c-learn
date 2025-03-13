#include <stdio.h>
#define MAX 100

// typedef�� struct Stack�� Stack���ν� ����ϰԲ� ��
typedef struct{
	int arr[MAX]; // ������ ���� �迭
	int top; // ������ ���� �� ��Ҹ� ����Ŵ
} Stack;

// ���� �ʱ�ȭ
int initStack(Stack* s) {
	return s->top = -1; // -> ����: Stack ����ü�� �޸� �ּҸ� ����Ű�� s �����Ͱ� �ش� ����ü�� top ��� ������ �����Ѵٴ� �ǹ�
}

// ������ ����ִ°�?
int isEmpty(Stack* s) {
	return s->top == -1; // -1�� �ʱ�ȭ�� �Ǿ������Ƿ�, -1�� �� ������ ����ִٰ� ����
}
 
// ������ ����á�°�?
int isFull(Stack* s) {
	return s->top == MAX - 1; // MAX�� �迭�� ���� �ִ� �����ε�, �ε����� 0���� 99�� ���� ������ ������ -1�� ����
}

// push!
void push(Stack* s, int value) { // �Ű������� �ش� ��ҿ� ���� ���� �Է�
	if (isFull(s)) {
		printf("��á��!!!\n");
		return;
	}
	s->arr[++s->top] = value; // top�� �ʱⰪ�� -1�̹Ƿ� +1�� ���� �ϰ� value �� �Ҵ�
}

// pop!
int pop(Stack* s) {
	if (isEmpty(s)) {
		printf("����ִ� ����!\n");
		return -1;
	}
	return s->arr[s->top--]; // top ��° ��Ҹ� ��ȯ �� -1�� ��
}

// ������ ���� ���� �ִ� �� ���
int peek(Stack* s) {
	if (isEmpty(s)) {
		printf("����ִ� ����!!\n");
		return -1;
	}
	return s->arr[s->top];
}


int main() {
	Stack s; // Stack ����ü�� �ν��Ͻ� s ����
	initStack(&s); // &s�� �ش� Stack ����ü�� �޸� �ּ� �� ����

	push(&s, 100);
	push(&s, 200);
	push(&s, 300);

	printf("ù��° ���� ��!: %d\n", peek(&s));
	printf("�ι�° ���� ��!: %d\n", peek(&s));
	printf("pop�� ����?!: %d\n", pop(&s));
	printf("�ι�° pop�� ����?!: %d\n", pop(&s));
	printf("����° pop�� ����?!: %d\n", pop(&s));
	printf("���⼭ pop�� �� �� �� �ϸ�?!: ");
	pop(&s);

	return 0;
}