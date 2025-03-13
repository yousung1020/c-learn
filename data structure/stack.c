#include <stdio.h>
#define MAX 100

// typedef로 struct Stack을 Stack으로써 사용하게끔 함
typedef struct{
	int arr[MAX]; // 스택을 담을 배열
	int top; // 스택의 가장 윗 요소를 가리킴
} Stack;

// 스택 초기화
int initStack(Stack* s) {
	return s->top = -1; // -> 문법: Stack 구조체의 메모리 주소를 가리키는 s 포인터가 해당 구조체의 top 멤버 변수를 참조한다는 의미
}

// 스택이 비어있는가?
int isEmpty(Stack* s) {
	return s->top == -1; // -1로 초기화가 되어있으므로, -1일 때 스택이 비어있다고 정의
}
 
// 스택이 가득찼는가?
int isFull(Stack* s) {
	return s->top == MAX - 1; // MAX가 배열의 길이 최댓 갯수인데, 인덱스는 0부터 99의 값을 가지기 때문에 -1을 빼줌
}

// push!
void push(Stack* s, int value) { // 매개변수에 해당 요소에 넣을 값도 입력
	if (isFull(s)) {
		printf("꽉찼다!!!\n");
		return;
	}
	s->arr[++s->top] = value; // top의 초기값이 -1이므로 +1을 먼저 하고 value 값 할당
}

// pop!
int pop(Stack* s) {
	if (isEmpty(s)) {
		printf("비어있는 스택!\n");
		return -1;
	}
	return s->arr[s->top--]; // top 번째 요소를 반환 후 -1을 함
}

// 스택의 가장 위에 있는 값 출력
int peek(Stack* s) {
	if (isEmpty(s)) {
		printf("비어있는 스택!!\n");
		return -1;
	}
	return s->arr[s->top];
}


int main() {
	Stack s; // Stack 구조체의 인스턴스 s 선언
	initStack(&s); // &s로 해당 Stack 구조체의 메모리 주소 값 전달

	push(&s, 100);
	push(&s, 200);
	push(&s, 300);

	printf("첫번째 스택 값!: %d\n", peek(&s));
	printf("두번째 스택 값!: %d\n", peek(&s));
	printf("pop된 값은?!: %d\n", pop(&s));
	printf("두번째 pop된 값은?!: %d\n", pop(&s));
	printf("세번째 pop된 값은?!: %d\n", pop(&s));
	printf("여기서 pop을 한 번 더 하면?!: ");
	pop(&s);

	return 0;
}