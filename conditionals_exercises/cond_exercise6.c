/*Fazer um algoritmo que leia um número inteiro (para facilitar considere-o no intervalo de 1 a 399) e o
escreva em algarismos romanos: I V X L C D M . Exemplo lê: 146 escreve: CXLVI*/

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
