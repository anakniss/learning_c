/*Um professor resolveu considerar, para cálculo da média aritmética final do semestre, somente as três
maiores notas das quatro provas realizadas pelos alunos.Para auxiliá - lo, deve - se fazer um algoritmo que leia as
quatro notas de um aluno e escreva a média aritmética considerando apenas as suas três maiores notas.*/

#include <stdio.h>

int main() {
	float nota1, nota2, nota3, nota4, menor_nota, media;

	printf("Digite a primeira nota do aluno: ");
	scanf_s("%f", &nota1);
	printf("Digite a segunda nota do aluno: ");
	scanf_s("%f", &nota2);
	printf("Digite a terceira nota do aluno: ");
	scanf_s("%f", &nota3);
	printf("Digite a quarta nota do aluno: ");
	scanf_s("%f", &nota4);

	menor_nota = 10;


	if(nota1 < menor_nota) {
		menor_nota = nota1;
	}
	if(nota2 < menor_nota) {
		menor_nota = nota2;
	}
	if(nota3 < menor_nota) {
		menor_nota = nota3;
	}
	if (nota4 < menor_nota) {
		menor_nota = nota4;
	}

	media = (nota1 + nota2 + nota3 + nota4 - menor_nota)/3;

	printf("A menor nota é: %f \n", menor_nota);

	printf("A média do aluno é: %f \n", media);
}
