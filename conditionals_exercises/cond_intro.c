#include <stdio.h>

int main() {
	float num1, num2, num3;

	printf("Digite as três notas do respectivo aluno: ");
	scanf_s("%f", &num1);
	scanf_s("%f", &num2);
	scanf_s("%f", &num3);

	int faltas, media;

	printf("Digite a quantidade de faltas que o aluno tem: ");
	scanf_s("%d", &faltas);

	int media = (num1 + num2 + num2) / 3;

	if (media < 6) {
		printf("Conceito 0");
	}
	if (media >= 6 && media < 7) {
		printf("Conceito 1");
	}
	if (media >= 7 && media < 8) {
		printf("Conceito 2");
	}
	if (media >= 8 && media < 9) {
		printf("Conceito 3");
	}
	if (media >= 9) {
		printf("Conceito 4")
	}

	if (faltas > 5);
	printf("O aluno está reprovado")

}