#include <stdio.h>
#include <time.h>

int main_array() {

	// �迭
	//int subway_array[3] ;
	//subway_array[0] = 1;
	//subway_array[1] = 2;
	//subway_array[2] = 3;

	//for (int i = 0; i < 3; i++) {
	//	printf("����ö %d ĭ��  %d���� Ÿ�� �ֽ��ϴ�.", i+1, subway_array[i]);
	//}

	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 ,9 ,10 };
	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", arr[i]);
	//}

	srand(time(NULL));
	int a = rand() % 4;
	int arra[4] = {0, 1, 2, 3};

	printf("%d", arra[a]);


	return 0;
}