#include <stdio.h>

int main() {
	int num, factorial = 1;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(int i = num; i > 0; i--) {
		factorial *= i;
	}
	printf("The factorial of %d is %d.\n", num, factorial);
	return 0;
}