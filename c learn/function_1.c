#include <stdio.h>
//선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3); //세개의 정수를 받는 함수
int main(void) {

/*	//계산기
	int num = 2;

	//printf("num은 %d입니다\n", num);
	p(num); */

	//함수 종류
	//반환값이 없는 함수
	//function_without_return(); //함수 실행

	//반환값이 있는 함수

/*	int ret = function_with_return(); //반환값이 있기 때문에 값을 받아줄 변수 생성
	p(ret); */

	//전달값(파라미터)이 없는 함수
//	function_without_params();

	//전달값(파라미터)이 있는 함수
	function_with_params(1, 2, 3);

	return 0; 
}

//정의

void p(int num) {
	printf("num은 %d입니다.\n", num);

}

//함수 정의 방법: 반환형 함수이름(전달값)
/*정수 형태일 때
int 함수이름(num) {
	return num + 4;
} */

void function_without_return() {
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return() {
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_params() {
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3) {
	printf("전달값이 있는 함수이며, 전달 받은 값은 %d, %d, %d입니다\n", num1, num2, num3);
}