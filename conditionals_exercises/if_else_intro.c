#include <stdio.h>

int soma(int a, int b) {
	return a + b;
}

int main() {
	int num;
	scanf_s("%d", &num);
	int soma2 = soma(num, num);
	printf("%d", soma2);
	if (soma2 % 2 == 0){
		printf("O resultado da soma é par");
	}
	else {
		printf("O resultado da soma é ímpar");
	}
}

/*
int main() {
	int soma1 = soma(1, 2);
	int soma2 = soma(4, 6);
	int soma3 = soma(soma1, soma2);

	printf("Hello World! soma3 = %d %d Outra coisa", soma1, soma3);
}*/

