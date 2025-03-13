#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

// 노드를 생성하는 함수
Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = newNode; // 노드의 next 포인터를 자기 자신을 가리키도록 함(초기 상태)
	return newNode;
}

// 노드를 추가하는 함수
void appendNode(Node** head, int data) { // head 포인터의 메모리 주소를 바꾸어야 하므로 이중포인터를 매개변수로 지정
	Node* newNode = createNode(data); // 새로운 노드 생성
	
	if (*head == NULL) { // 노드가 초깃값을 가지고 있을 경우(NULL)
		*head = newNode; // head를 새로운 노드로 설정
	}
	else {
		Node* current = *head; // 노드의 시작 지점을 가리키는 포인터 설정
		while (current->next != *head) {
			current = current->next;
		}
		current->next = newNode;
		newNode->next = *head; // 마지막의 next가 시작 노드를 가리킴으로써 원형 리스트 구조 유지
	}
}

// 노드를 출력하는 함수
void printList(Node* head) {
	if (head == NULL) { // 노드가 비어있는 경우
		printf("리스트가 비어있습니다!");
		return;
	}
	Node* current = head; // 현재 노드 상태 초기화
	while (current->next != head) { // next가 가리키는 주소가 처음 head 노드면 종료
		printf("%d -> ", current->data);
		current = current->next; // 다음 노드로 이동
	}
	printf("%d -> ", current->data); // 마지막 노드의 data값 출력
	printf("head(%d)", head->data);
}

// 동적으로 할당된 메모리를 해제하는 함수
void freeList(Node** head) {
	if (*head == NULL) { // 리스트가 비어있는 경우 함수 종료
		return;
	}

	Node* current = *head;
	Node* next;
	while (current->next != *head) {
		next = current->next; // 다음 노드 메모리 주소 할당
		free(current);
		current = next;
	}
	free(current); // 마지막 노드의 메모리 주소 해제
	*head = NULL; // 시작 포인터의 주소를 NULL로 설정하여 리스트 초기화
}

int main() {
	Node* head = createNode(1);
	appendNode(&head, 2);
	appendNode(&head, 3);

	printList(head);
	
	freeList(&head);


	return 0;
}