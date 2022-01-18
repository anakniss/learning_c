#include <stdio.h>

int main() {
	float peso, altura, imc;

	printf("Digite seu peso: ");
	scanf_s("%f", &peso);
	printf("Digite sua altura: ");
	scanf_s("%f", &altura);

	imc = peso / (altura * altura);

	printf("Seu IMC é: %f \n", imc);
}
