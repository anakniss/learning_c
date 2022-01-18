#include <stdio.h>

int main() {
	int num, num1, num2, num3;
	
		printf("Digite um número: ");
		scanf_s("%d", &num);

		num1 = num / 10;
		num2 = num1 / 10;
		
		
		num2 = num2 % 10;

		if (num2 == 1) {
			printf("C");
		}
		if (num2 == 2) {
			printf("CC");
		}
		if (num2 == 3) {
			printf("CCC");
		}
		
		
		num1 = num1 % 10;

		if (num1 == 1) {
			printf("X");
		}
		if (num1 == 2) {
			printf("XX");
		}
		if (num1 == 3) {
			printf("XXX");
		}
		if (num1 == 4) {
			printf("XL");
		}
		if (num1 == 5) {
			printf("L");
		}
		if (num1 == 6) {
			printf("LX");
		}
		if (num1 == 7) {
			printf("LXX");
		}
		if (num1 == 8) {
			printf("LXXX");
		}
		if (num1 == 9) {
			printf("XC");
		}

		num = num % 10;

		if (num == 1) {
			printf("I");
		}
		if (num == 2) {
			printf("II");
		}
		if (num == 3) {
			printf("III");
		}
		if (num == 4) {
			printf("IV");
		}
		if (num == 5) {
			printf("V");
		}
		if (num == 6) {
			printf("VI");
		}
		if (num == 7) {
			printf("VII");
		}
		if (num == 8) {
			printf("VIII");
		}
		if (num == 9) {
			printf("IX");
		}



}



















/*#include <stdio.h>

int main() {
	int num, soma_par, soma_imp, num1, num2, num3, num4, num5;

	soma_imp = 0;
	soma_par = 0;

	printf("Digite um valor com 5 dígitos: ");
	scanf_s("%d", &num);

	num1 = num % 10;
	if (num1 % 2 == 1){
		soma_imp = soma_imp + 1;
	}
	else {
		soma_par = soma_par + num1;
	}
	num = num / 10;
	num2 = num % 10;
	if (num2 % 2 == 1) {
		soma_imp = soma_imp + 1;
	}
	else {
		soma_par = soma_par + num2;
	}
	num = num / 10;
	num3 = num % 10;
	if (num3 % 2 == 1) {
		soma_imp = soma_imp + 1;
	}
	else {
		soma_par = soma_par + num3;
	}
	num = num / 10;
	num4 = num % 10;
	if (num4 % 2 == 1) {
		soma_imp = soma_imp + 1;
	}
	else {
		soma_par = soma_par + num4;
	}
	num = num / 10;
	num5 = num % 10;
	if (num5 % 2 == 1) {
		soma_imp = soma_imp + 1;
	}
	else {
		soma_par = soma_par + num5;
	}
	
	printf("O número possui %d algarismos ímpares", soma_imp);
	printf("A soma dos números pares é: %d", soma_par);
}























#include <stdio.h>

int main() {
	int num1, num2;

	printf("Digite o primeiro número: ");
	scanf_s("%d", &num1);
	printf("Digite o segundo número: ");
	scanf_s("%d", &num2);

	if (num1 > num2) {
		printf("%d", num2);
		printf("%d", num1);
	}
	else {
		printf("%d", num1);
		printf("%d", num2);
	}
}


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

	media = (nota1 + nota2 + nota3 - menor_nota)/3;

	printf("A menor nota é: %f \n", menor_nota);

	printf("A média do aluno é: %f \n", media);
}



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
*/
