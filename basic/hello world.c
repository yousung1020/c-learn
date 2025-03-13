#include <stdio.h>

int main_helloworld(){
	
	//scanf

/*	int input;
    printf("값을 입력하세요: ");
	scanf_s("%d", &input); //(정수형으로 입력값을 받음, input에 입력 받음)
	printf("입력값 : %d", input); */
    
	//scanf (여러개)

/*	int one, two, three;
	printf("3개의 정수를 입력하세요: ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째: %d", one);
	printf("두번째: %d", two);
	printf("세번째: %d", three); */

	//문자(한 글자), 문자열(여러 글자)

/*	char a = 'A';

	printf("%c", a); */

/*	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s", str); */

	//프로젝트(조서작성)

	char name[256];

	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이예요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg이예요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm예요? ");
	scanf_s("%lf", &height); //double은 %lf 로 받음

	char what[256];
	printf("무슨 잘못을 했어요? ");
	scanf_s("%s", what, sizeof(what));

	//조사서 결과

	printf("\n\n이름이 뭐예요? %s\n", name);
	printf("몇살이예요? %d\n", age);
	printf("몸무게는 몇 kg이예요? %.2f\n", weight);
	printf("키는 몇 cm예요? %.2lf\n", height);
	printf("무슨 잘못을 했어요? %s", what);


	return 0;
}