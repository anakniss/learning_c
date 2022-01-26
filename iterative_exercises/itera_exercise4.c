/*Fazer um algoritmo que leia uma nota para cada um dos trinta alunos de uma turma e escreva a maior nota.

*/#include <stdio.h>

int main() {
	float nota, nota1, i;

	nota1 = 0;

	for (i = 0; i < 21; i++) {
		printf("Digite a nota: ");
		scanf_s("%f", &nota);

		if (nota > nota1){
			nota1 = nota;

		}
	}

	printf("A maior nota é: %f", nota1);
}