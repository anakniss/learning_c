/*O índice de massa corporal(IMC) é calculado dividindo - se o peso de uma pessoa pela sua altura ao
quadrado.A partir do valor de IMC podemos classificar a pessoa quanto ao peso conforme os intervalos
apresentados a seguir(revista Galileu nov2004) :
	IMC Classificação
	[0; 18, 5) Abaixo do peso
	[18.5; 25) Normal
	[25; 30) Pré - obeso
	[30; 35) Obeso classe I
	[35; 40) Obeso classe II
	[40; ∞ ) Obeso classe III
	Fazer um algoritmo que leia o peso e a altura de uma pessoa, escrevendo a classificação desta pessoa*/

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
