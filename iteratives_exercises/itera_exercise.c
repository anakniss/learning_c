/*Fazer um algoritmo que leia dez números inteiros e para cada número lido escreva o respectivo quadrado.*/

#include <stdio.h>

int main() {
	int num, i;

	for (i = 0; i < 10; i++) {
		printf("Digite um número: ");
		scanf_s("%d", &num);
		num = num * num;
		printf("Seu quadrado é: %d \n", num);
	}

} 

