#include <stdio.h>

void sub(int b[]);

int main_a() {
	int a[3] = { 1, 2, 3 };

	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a);
	printf("%d %d %d\n", a[0], a[1], a[2]);

	return 0;
}

void sub(int b[]) {
	b[0] = 4;
	b[1] = 5;
	b[2] = 6;
}