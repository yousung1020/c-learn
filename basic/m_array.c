#include <stdio.h>

int main_multi() {
	// ������ �迭 (Multidimensional Array)
	//ex)
	int arr4[3][3][3];
	int arr0[3] = { 1,2,3 };
	// ����

	int arr1[2][5] = { { 1,2,3,4,5 }, { 6,7,8,9,10 } };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("2���� �迭 (%d, %d)�� ��: %d\n", i, j, arr1[i][j]);
		}
	}
	int arr2[4][2] = { {1,2}, {1, 2}, {1, 2}, {1, 2} };
	//int arr3[3][3][3] = { { {}, {}, {} }, { {}, {}, {} }, { {}, {}, {} } };
	return 0;
}