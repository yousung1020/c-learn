#include <stdio.h>
int plus(int x, int y);

int main_sin(void) {
	int result = 0, x = 0, y = 0 ;
	result = plus(x, y);
	printf("%d", result);
	return 0;
}

int plus(int x, int y) {
	printf("¾È³çÇÏ¼¼¿ä.");
	scanf_s(" %d %d", &x, &y);
	return x + y;
}