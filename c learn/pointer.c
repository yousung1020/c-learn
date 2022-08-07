#include <stdio.h>
void swap(int a, int b);
void swap_addr(int *a, int* b);
void changeArray(int* ptr);
int main() {

	// Pointer

	int chul = 1; // 암호
	int min = 2;
	int young = 3;

	/*printf("주소: %d, 암호: %d\n", &chul, chul);*/

	// mission man

	//int *mission_man; // 포인터 변수 선언
	//mission_man = &chul;
	//printf("미션맨이 방문 한 주소: %d, 암호: %d\n", mission_man, *mission_man);
	//*mission_man = *mission_man * 3;
	//printf("주소: %d, 암호를 곱하기 3을 한 암호: %d\n", mission_man, *mission_man);
	//printf("주소: %d, 암호: %d\n", &chul, chul); // 포인터 변수를 선언 후 그 변수에 기존 변수 주소 값을 해당하는 주소의 변수 값을 바꾸면 변수 주소에 가서 직접 값을 바꿨으므로 기존 변수 값도 바뀌게됨
	//// spy

	//int* spy = mission_man;
	//*spy = *spy - 1;
	//printf("주소: %d, 암호 %d\n", spy, *spy);

	//printf("주소: %d, 암호: %d\n", &chul, chul);

	////미션맨과 스파이의 주소(포인터 변수의 주소 존재)
	//printf("미션맨 주소: %d\n", &mission_man);
	//printf("스파이 주소: %d\n", &spy);

	// 배열

	int arr[3] = { 5, 10, 15 };
	int* ptr = arr; // ptr 은 arr 의 배열 하나하나 주소 값을 모두 가짐 그러므로 똑같이 접속함

	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d] 값: %d\n\n", i, arr[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("배열 ptr[%d] 값: %d\n\n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	for (int i = 0; i < 3; i++) {
		/*printf("배열 arr[%d} 값: %d\n\n", i, arr[i]);*/
		printf("배열 arr[%d] 값: %d\n\n", i, *(arr + i));
	}
	//// *(arr + i) == arr[i] 같은 표현

	//for (int i = 0; i < 3; i++) {
	//	printf("배열 ptr[%d} 값: %d\n\n", i, ptr[i]);
	/*}*/
	// 포인터 변수가 가리키는 값을 추출할 때 * 사용
	// &은 주소, *은 그 주소의 값을 나타내기 때문에,
	// *& 은 아무것도 없는 것과 같다.

	/*printf("arr 자체의 값 : %d\n", *arr);
	printf("arr[0] 의 주소 : %d\n", &arr[0]);
	printf("arr 의 주소 :%d\n", &arr);
	printf("arr[1] 의 주소 : %d\n", &arr[1]);
	printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr);
	printf("arr[0] 주소의 실제 값 : %d", *&arr[0]);*/ // *&arr[0] == arr[0]

	int a = 10;
	int b = 20;
	// a와 b의 값을 바꾼다. (swap)
	
	//printf("swap 함수 전 => a : %d, b : %d\n", a, b);
	//
	//swap(a, b);

	//printf("swap 함수 후 => a : %d, b : %d\n", a, b);
	// a, b 의 주소 값은 함수 내의 a, b 주소 값과 같지 않음(함수는 그 변수에 대한 값만 받음)
	
	//printf("(주소값 전달)swap 함수 전 => a : %d, b : %d\n", a, b);

	//swap_addr(&a, &b);

	//printf("(주소값 전달)swap 함수 후 => a : %d, b : %d\n", a, b);

	// 배열일 때, arr2 자체가 주소를 가르킴, arr2[0] 같은 경우는 값을 가르킴
	int arr2[3] = { 10, 20, 30 };
	arr[2] = 50;
	/*changeArray(arr2);*/
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

	return 0;
}

void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
	printf("swap 함수 내 => a : %d, b : %d\n", a, b);
}

void swap_addr(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	printf("(주소값 전달)swap 함수 내 => a : %d, b : %d\n", *a, *b);
}

void changeArray(int* ptr) {

	ptr[2] = 50;
}