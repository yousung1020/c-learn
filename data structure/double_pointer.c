#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int** pptr) {
    *pptr = (int*)malloc(sizeof(int));  // pptr 포인터 변수에 메모리 할당
    **pptr = 42;  // pptr의 참조 값(ptr)을 변경
    // 이렇게 하면 함수가 종료된 후 소멸되는 변수의 메모리 주소 값이 있더라도 간접적으로 값 조작 가능!
}

int main() {
    int* ptr = NULL;

    allocateMemory(&ptr);
    printf("Allocated value: %d\n", *ptr);  // 출력: 42

    free(ptr);  // 할당된 메모리 해제
    return 0;
}
