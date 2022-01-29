/*Fazer um algoritmo que leia três notas para cada um dos vinte alunos de uma turma e escreva a média
aritmética de cada aluno.*/

#include <stdio.h>

int main() {
	int i;
	float nota1, nota2, nota3, media;

	for (i = 0; i = 20; i++) {
		printf("Digite a primeira nota: ");
		scanf_s("%f", &nota1);
		printf("Digite a segunda nota: ");
		scanf_s("%f", &nota2);
		printf("Digite a terceira nota: ");
		scanf_s("%f", &nota3);

		media = (nota1 + nota2 + nota3) / 3;

		printf("A média aritmética deste aluno é: %f \n", media);


	}

