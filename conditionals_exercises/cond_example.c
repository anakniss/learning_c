#include <stdio.h>

int main() {
	float num1, num2, num3, media;

	printf("Digite a primeira nota do aluno: ");
	scanf_s("%f", &num1);
	printf("Digite a segunda nota do aluno: ");
	scanf_s("%f", &num2);
	printf("Digite a terceira nota do aluno: ");
	scanf_s("%f", &num3);

	int faltas;

	printf("Digite a quantidade de faltas que o aluno tem: ");
	scanf_s("%d", &faltas);

	media = (num1 + num2 + num2) / 3;
	printf("A média do aluno eh: %f \n", media);

	if (media < 6 || faltas > 5) {
		printf("Conceito 0\n");
	}
	if (media >= 6 && media < 7 && faltas <= 5) {
		printf("Conceito 1\n");
	}
	if (media >= 7 && media < 8 && faltas <= 5) {
		printf("Conceito 2\n");
	}
	if (media >= 8 && media < 9 && faltas <= 5) {
		printf("Conceito 3\n");
	}
	if (media >= 9 && faltas <= 5) {
		printf("Conceito 4 \n");
	}

}