/*Fazer um algoritmo que leia tr�s notas para cada um dos vinte alunos de uma turma e escreva a m�dia
aritm�tica de cada aluno.*/

#include <stdio.h>

int main() {
	float nota, nota1, i;

	nota1 = 0;

	for (i = 0; i < 20; i++) {
		printf("Digite a nota: ");
		scanf_s("%f", &nota);

		if (nota > nota1){
			nota1 = nota;

		}
	}

	printf("A maior nota �: %f", nota1);
}