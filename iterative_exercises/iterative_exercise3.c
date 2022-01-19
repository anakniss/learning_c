/*Fazer um algoritmo que leia três notas para cada um dos vinte alunos de uma turma e escreva a média
aritmética de cada aluno.*/

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

	printf("A maior nota é: %f", nota1);
}