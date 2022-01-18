#include <stdio.h>

int main() {
	int num, rep, i;
	printf("Digite um número: ");
	scanf_s("%d", &num);
	printf("Digite a quantidade de repetições que deseja: ");
	scanf_s("%d", &rep);

	for (i = 0; i < rep; i++) {
		num = num + 1;
		printf("%d \n", num);
	}

}