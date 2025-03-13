#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

// ��带 �����ϴ� �Լ�
Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = newNode; // ����� next �����͸� �ڱ� �ڽ��� ����Ű���� ��(�ʱ� ����)
	return newNode;
}

// ��带 �߰��ϴ� �Լ�
void appendNode(Node** head, int data) { // head �������� �޸� �ּҸ� �ٲپ�� �ϹǷ� ���������͸� �Ű������� ����
	Node* newNode = createNode(data); // ���ο� ��� ����
	
	if (*head == NULL) { // ��尡 �ʱ갪�� ������ ���� ���(NULL)
		*head = newNode; // head�� ���ο� ���� ����
	}
	else {
		Node* current = *head; // ����� ���� ������ ����Ű�� ������ ����
		while (current->next != *head) {
			current = current->next;
		}
		current->next = newNode;
		newNode->next = *head; // �������� next�� ���� ��带 ����Ŵ���ν� ���� ����Ʈ ���� ����
	}
}

// ��带 ����ϴ� �Լ�
void printList(Node* head) {
	if (head == NULL) { // ��尡 ����ִ� ���
		printf("����Ʈ�� ����ֽ��ϴ�!");
		return;
	}
	Node* current = head; // ���� ��� ���� �ʱ�ȭ
	while (current->next != head) { // next�� ����Ű�� �ּҰ� ó�� head ���� ����
		printf("%d -> ", current->data);
		current = current->next; // ���� ���� �̵�
	}
	printf("%d -> ", current->data); // ������ ����� data�� ���
	printf("head(%d)", head->data);
}

// �������� �Ҵ�� �޸𸮸� �����ϴ� �Լ�
void freeList(Node** head) {
	if (*head == NULL) { // ����Ʈ�� ����ִ� ��� �Լ� ����
		return;
	}

	Node* current = *head;
	Node* next;
	while (current->next != *head) {
		next = current->next; // ���� ��� �޸� �ּ� �Ҵ�
		free(current);
		current = next;
	}
	free(current); // ������ ����� �޸� �ּ� ����
	*head = NULL; // ���� �������� �ּҸ� NULL�� �����Ͽ� ����Ʈ �ʱ�ȭ
}

int main() {
	Node* head = createNode(1);
	appendNode(&head, 2);
	appendNode(&head, 3);

	printList(head);
	
	freeList(&head);


	return 0;
}