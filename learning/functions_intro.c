#include <stdio.h>

int func2(int base,int altura) {
	int area;
	area = base * altura;
	return area;
}



void func() {
	int base, altura, area;
	printf("Digite a base do retângulo: ");
	scanf_s("%d", &base);
	printf("Digite a altura do retângulo: ");
	scanf_s("%d", &altura);
	area = func2(base, altura);
		printf("A área do retângulo é: %d \n", area);
}

void func1(int quant) {
	int i;
	for (i = 0; i < quant; i++) {
		func();
	}
}


int main() {

	int quant1, i;

	printf("Digite quantas vezes você precisa da função: ");
	scanf_s("%d", &quant1);

	func1(quant1);

	printf("%d", func2(10, 10) + func2(2, 5));
}

