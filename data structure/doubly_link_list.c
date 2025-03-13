#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* prev; // ���� ��带 ����Ű�� ������
	struct Node* next; // ���� ��带 ����Ű�� ������
} Node;

// ���ο� ��� ���� �� �ʱ�ȭ
Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->prev = NULL; // prev ������ �ʱ�ȭ
	newNode->next = NULL;
	return newNode;
}

// ��� �߰� �Լ�
void appendNode(Node** head, int data) {
	Node* newNode = createNode(data); // ���ο� ��� ����

	if (*head == NULL) { // ����Ʈ�� ����ִ� ���
		*head = newNode; // head�� ���ο� ���� ����
	}
	else {
		Node* current = *head; // ���� ��� ����
		while (current->next != NULL) { // ����Ʈ�� ������ ��ȸ
			current = current->next;
		}
		current->next = newNode; // ������ ����� next �����͸� ���ο� ���� ����
		newNode->prev = current; // ���ο� ����� prev �����͸� ������ ���� ����
	}
}