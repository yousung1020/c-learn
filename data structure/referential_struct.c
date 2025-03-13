// �ڱ� ���� ����ü�� ���� ���Ḯ��Ʈ ����
#include <stdio.h>
#include <stdlib.h>

// Node ����ü ����
typedef struct Node{
	int data;
	struct Node* next;
} Node;

// ���ο� ��带 �����ϴ� �Լ�
Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node)); // Node ����ü ��ŭ�� �޸� ������ �Ҵ� �� Node �޸� �ּ� ������ ĳ���� �� �Ҵ�
	if (newNode != NULL) { // �޸� �Ҵ��� �����ߴٸ�
		newNode->data = data; // data�� data�� �Ҵ�
		newNode->next = NULL; // next �������� �޸� �ּҸ� NULL�� �ʱ�ȭ
	}
	return newNode;
}

// ���� ����Ʈ�� ����ϴ� �Լ�
void printList(Node* head) {
	Node* current = head;
	while (current != NULL) { // head�� next�� ���� NULL�� �ƴ� ��� �ݺ�
		printf("%d -> ", current->data); // ������ ��� �� ���
		current = current->next; // ���� ���� �޸� �ּ� �̵�
	}
	printf("NULL\n"); // ���� ����Ʈ�� ���� ������
}

// �޸𸮸� �����ϴ� �Լ� (�������� �Ҵ�� �޸� ������ ��� �� �޸𸮸� �����ؾ� �Ѵ�)
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
	// ù ��° ��� ����
	Node* head = createNode(1);

	// �� ��° ��� ����
	head->next = createNode(2);

	// �� ��° ��� ����
	head->next->next = createNode(3);

	// �� ��带 ���
	printList(head);

	// �������� �Ҵ�� �޸� ���� ���� (�޸� ���� ����)   
	freeList(head);
		
	return 0;
}