#include <stdio.h>

int main() {
	int num1, num2;

	printf("Digite o primeiro número: ");
	scanf_s("%d", &num1);
	printf("Digite o segundo número: ");
	scanf_s("%d", &num2);

	if (num1 > num2) {
		printf("%d", num2);
		printf("%d", num1);
	}
	else {
		printf("%d", num1);
		printf("%d", num2);
	}
}