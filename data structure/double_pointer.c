#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int** pptr) {
    *pptr = (int*)malloc(sizeof(int));  // pptr ������ ������ �޸� �Ҵ�
    **pptr = 42;  // pptr�� ���� ��(ptr)�� ����
    // �̷��� �ϸ� �Լ��� ����� �� �Ҹ�Ǵ� ������ �޸� �ּ� ���� �ִ��� ���������� �� ���� ����!
}

int main() {
    int* ptr = NULL;

    allocateMemory(&ptr);
    printf("Allocated value: %d\n", *ptr);  // ���: 42

    free(ptr);  // �Ҵ�� �޸� ����
    return 0;
}
