// 자기 참조 구조체를 통한 연결리스트 구현
#include <stdio.h>
#include <stdlib.h>

// Node 구조체 정의
typedef struct Node{
	int data;
	struct Node* next;
} Node;

// 새로운 노드를 생성하는 함수
Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node)); // Node 구조체 만큼의 메모리 공간을 할당 후 Node 메모리 주소 값으로 캐스팅 후 할당
	if (newNode != NULL) { // 메모리 할당을 성공했다면
		newNode->data = data; // data에 data값 할당
		newNode->next = NULL; // next 포인터의 메모리 주소를 NULL로 초기화
	}
	return newNode;
}

// 연결 리스트를 출력하는 함수
void printList(Node* head) {
	Node* current = head;
	while (current != NULL) { // head나 next의 값이 NULL이 아닌 경우 반복
		printf("%d -> ", current->data); // 현재의 노드 값 출력
		current = current->next; // 다음 노드로 메모리 주소 이동
	}
	printf("NULL\n"); // 연결 리스트의 끝을 보여줌
}

// 메모리를 해제하는 함수 (동적으로 할당된 메모리 공간의 경우 꼭 메모리를 해제해야 한다)
void freeList(Node* head) {
	Node* current = head;
	Node* next;
	while (current != NULL) {
		next = current->next;
		free(current);
		current = next;
	}
}

int main() {
	// 첫 번째 노드 생성
	Node* head = createNode(1);

	// 두 번째 노드 생성
	head->next = createNode(2);

	// 세 번째 노드 생성
	head->next->next = createNode(3);

	// 각 노드를 출력
	printList(head);

	// 동적으로 할당된 메모리 공간 해제 (메모리 누수 방지)   
	freeList(head);
		
	return 0;
}