#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* prev; // 이전 노드를 가리키는 포인터
	struct Node* next; // 다음 노드를 가리키는 포인터
} Node;

// 새로운 노드 생성 및 초기화
Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->prev = NULL; // prev 포인터 초기화
	newNode->next = NULL;
	return newNode;
}

// 노드 추가 함수
void appendNode(Node** head, int data) {
	Node* newNode = createNode(data); // 새로운 노드 생성

	if (*head == NULL) { // 리스트가 비어있는 경우
		*head = newNode; // head를 새로운 노드로 설정
	}
	else {
		Node* current = *head; // 시작 노드 설정
		while (current->next != NULL) { // 리스트를 끝까지 순회
			current = current->next;
		}
		current->next = newNode; // 마지막 노드의 next 포인터를 새로운 노드로 설정
		newNode->prev = current; // 새로운 노드의 prev 포인터를 마지막 노드로 설정
	}
}