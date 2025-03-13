#include <stdio.h>

int main() {
	int i, n = 5, tmp = 0, what = 0;
	for (int i = 1; i <= n; i++) {
		tmp += i;
		printf("%d ", tmp);
		what += tmp;
	}
	printf("\n무엇일까요?  %d\n", what);
	return 0;
}