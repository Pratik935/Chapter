#include <stdio.h>

int main() {
	int a = 0, b = 1, c = 0, num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num == 1 ) { printf("0\n"); }
	else if (num == 2 ) { printf(" 0 1\n"); }
	else {
		printf("%d %d ", a, b);
		for (int i = 3; i <= num; i++ ) {
			c = a + b;
			printf("%d ", c);
			a = b, b = c;
		}
	}
	return 0;
}